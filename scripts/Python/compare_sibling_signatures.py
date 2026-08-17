#!/usr/bin/env python3
"""Compare signatures of identically-named functions across the two builds.

A name transfer moves a *fact about the source* -- what the function is called
-- and nothing else. The signature has to travel on its own, and when it does
not, the failure is silent: nocturne keeps Ghidra's default
`undefined FUN_00401234(void)` while nocedit knows the function is
`CColor3f *rgbToHsv(CColor3f *, CColor3f *)`. Both decompile. Only one is
right.

This report finds those by matching on the *core name* -- the exported name
with its TU prefix and `_FUN_<addr>` suffix removed:

    core_actor.cpp_CDemonActor_setup_FUN_0040a210  ->  CDemonActor_setup
    engine_3d.c_CDemonActor_setup_FUN_004411c0     ->  CDemonActor_setup

Matching on the name rather than on the address mapping is deliberate. The two
axes fail independently: the mapping can pair functions that were never named,
and a name can be shared by two functions the mapping never paired. Anything
the mapping *does* say is used only as a cross-check (see MAPPING_CONFLICT),
never as the matching key.

nocedit is the authority. It is the shipping decomp -- it compiles, it runs,
and its signatures have been exercised by a working build -- so a difference is
read as "nocturne needs fixing" unless the row says otherwise. The one class
that reverses the direction is AUTHORITY_UNSET, where nocturne carries a
signature nocedit lacks; those are backport candidates for nocedit, not defects
in nocturne.

Verdicts, most to least severe. Each pair gets one primary verdict plus every
tag that applies:

  NO_SIGNATURE     nocturne is at the Ghidra default -- undefined return, no
                   parameters, no convention -- while nocedit has a real
                   signature. The transfer never happened. This is the bulk.
  PARAMS_LOST      nocturne has fewer parameters. Every argument past the cut
                   decompiles as stack garbage.
  VARIADIC_LOST    nocedit's `...` is gone. The printf-family wrappers land
                   here: the format string is the last parameter nocturne
                   admits to, so every argument after it is invisible.
  CONV_DIFF        different calling convention: who pops the stack, and where
                   the arguments live. Wrong here corrupts every call site.
  RET_LOST         nocedit returns a concrete type, nocturne returns
                   undefined*. Callers lose the value.
  STORAGE_LOST     nocedit uses CUSTOM_STORAGE and nocturne does not -- the
                   Watcom FPU conventions that return in ST0/ST1. See the
                   NEEDS_CUSTOM_STORAGE note below.
  PARAM_TYPES_W    same parameter count, but a type differs *in storage size*.
                   An ABI change, not a rename.
  PARAMS_EXTRA     nocturne has more parameters than nocedit.
  RET_DIFF         both concrete, different types.
  PARAM_TYPES      same count and same widths, different type names. Affects
                   how the body reads, not how it is called.
  NORETURN_DIFF    the noreturn flag disagrees.
  VARIADIC_EXTRA   nocturne has `...` and nocedit does not.
  STORAGE_EXTRA    nocturne has custom storage and nocedit does not.
  AUTHORITY_UNSET  nocedit is the one without a signature.

Advisories do not describe drift; they say what the row actually needs:

  NEEDS_CUSTOM_STORAGE  the nocedit side uses CUSTOM_STORAGE (the Watcom FPU
                        conventions returning in ST0/ST1). Copying the printed
                        signature is not enough -- the storage has to come with
                        it, or the function ends up unreadable. Fix by hand.
  MAPPING_CONFLICT      the verified address mapping pairs one of these two
                        addresses with a *different* function. Same name, and
                        at least one of the two claims is wrong. Do not apply
                        anything from this row until it is resolved.
  THUNK_RECEIVER_LEAK   the target's leading parameter is the receiver of a
                        thunk that forwards to it. A Ghidra thunk borrows its
                        target's signature, so typing the method
                        `CDemonRenderer::matrixPush(CDemonRenderer *)` also
                        types the free `matrixPush()` it forwards to -- which
                        reads no arguments at all. The build where the thunk
                        has been broken into a real function is the correct
                        one; the other shows the leaked receiver.
  TARGET_READS_NO_STACK the target's disassembly contains no `[ESP`/`[EBP`
                        reference anywhere, so it cannot be reading arguments
                        and its declared parameters are fictitious.
  AUTHORITY_READS_NO_STACK  the same proof against the authority: this row
                        wants fixing in nocedit, not in nocturne.

The last two matter because "the target has more parameters" is not the same
as "the target knows more". Extra parameters arrive from leaked thunk
receivers and from globals pushed as immediates being read as arguments
(`setColorTable16` pushes `g_SourcePaletteData` and `g_ColorTable16` and was
typed as taking them), and both look identical to a count comparison. Either
proof moves the row out of `review` and back into `apply`.

Usage:
    compare_sibling_signatures.py
    compare_sibling_signatures.py --verdict NO_SIGNATURE --show 0
    compare_sibling_signatures.py --tu core_actor.cpp
    compare_sibling_signatures.py --json /tmp/sig_drift.json
"""

import argparse
import glob
import json
import os
import re
import sys
from collections import Counter, defaultdict

THIS_DIR = os.path.dirname(os.path.abspath(__file__))
REPO = os.path.dirname(os.path.dirname(THIS_DIR))

ADDR_SUFFIX_RE = re.compile(r"_FUN_[0-9a-fA-F]{6,}$")
TU_RE = re.compile(r"^([A-Za-z0-9_]+\.(?:cpp|c|h|asm))_")
UNDEFINED_RE = re.compile(r"^undefined\d*$")

# Most severe first. The primary verdict of a pair is the earliest tag here
# that it carries, so this order is the report's whole notion of priority.
SEVERITY = [
    "NO_SIGNATURE",
    "PARAMS_LOST",
    "VARIADIC_LOST",
    "CONV_DIFF",
    "RET_LOST",
    "STORAGE_LOST",
    "PARAM_TYPES_W",
    "PARAMS_EXTRA",
    "RET_DIFF",
    "PARAM_TYPES",
    "NORETURN_DIFF",
    "VARIADIC_EXTRA",
    "STORAGE_EXTRA",
    "AUTHORITY_UNSET",
]
SEVERITY_RANK = {v: i for i, v in enumerate(SEVERITY)}

# Carried alongside a verdict; never a verdict on their own.
ADVISORY = ("NEEDS_CUSTOM_STORAGE", "MAPPING_CONFLICT", "THUNK_RECEIVER_LEAK",
            "TARGET_READS_NO_STACK", "AUTHORITY_READS_NO_STACK",
            "NORETURN_NEEDS_HAND", "STORAGE_FLAG_ONLY")

# Verdicts where the target *might* hold information the authority lacks.
# "nocedit is the authority" decides ties; it is not a licence to overwrite a
# richer signature with a poorer one. But extra parameters are not automatically
# extra information -- see the two advisories below, either of which proves the
# extra ones are fictitious and sends the row back to `apply`.
REVIEW_VERDICTS = {"PARAMS_EXTRA", "VARIADIC_EXTRA", "STORAGE_EXTRA",
                   "AUTHORITY_UNSET"}

# Conventions that pass arguments on the stack. The no-stack-access proof below
# is only valid for these -- a register convention reads its arguments out of
# registers and touches no frame at all, so silence there proves nothing.
STACK_CONVS = {"__cdecl", "__stdcall", "__watcallStack", "__fastcall"}

ASM_ADDR_RE = re.compile(r"_FUN_([0-9a-fA-F]{6,})\.asm$")
# `[ESP...` / `[EBP...` -- an operand reaching into the frame. Bare `SUB ESP,n`
# does not match, which is right: reserving locals is not reading an argument.
STACK_REF_RE = re.compile(r"\[(?:ESP|EBP)\b")


# --------------------------------------------------------------------------
# Loading
# --------------------------------------------------------------------------

def annotations_dir(program):
    return os.path.join(REPO, "annotations", program)


def load_functions(program):
    """Every exported function record for a program."""
    out = []
    pattern = os.path.join(annotations_dir(program), "functions",
                           "functions_bucket_*.json")
    for path in sorted(glob.glob(pattern)):
        if path.endswith("functions_buckets.json"):
            continue
        with open(path) as fh:
            data = json.load(fh)
        if isinstance(data, dict):
            data = data.get("functions", [])
        for rec in data:
            if isinstance(rec, dict) and rec.get("name"):
                out.append(rec)
    if not out:
        sys.exit(f"ERROR: no function annotations under {annotations_dir(program)}")
    return out


def index_thunks(funcs):
    """target address -> the thunks pointing at it.

    A Ghidra thunk does not own a signature; it borrows its target's. That
    makes a thunk and its target a single editable unit, and it is the reason
    `CDemonRenderer::matrixPush(CDemonRenderer *)` and the plain `matrixPush()`
    it forwards to cannot both be typed the way the source had them -- giving
    the method its receiver hands the same receiver to the free function, which
    reads no arguments at all. Breaking the thunk into a real function is the
    fix, and a build where that has not been done yet shows the leaked receiver
    on the target.
    """
    out = defaultdict(list)
    for f in funcs:
        t = f.get("thtarget")
        if t:
            out[t.lower()].append(f)
    return out


def index_asm(program):
    """address -> path of the exported disassembly for that function."""
    out = {}
    root = os.path.join(annotations_dir(program), "pseudocode", "src")
    for dirpath, _, filenames in os.walk(root):
        for fn in filenames:
            m = ASM_ADDR_RE.search(fn)
            if m:
                out[m.group(1).lower()] = os.path.join(dirpath, fn)
    return out


def reads_stack_frame(path):
    """Does the body touch its stack frame at all? None if it cannot be read.

    Deliberately one-directional. It cannot tell two arguments from three, but
    a body containing no frame reference whatsoever cannot be reading *any*
    argument, which settles every case where one build says `(void)` and the
    other invented parameters -- `setColorTable16` pushes two globals as
    immediates and was typed as taking them.
    """
    if not path or not os.path.exists(path):
        return None
    started = False
    with open(path, errors="replace") as fh:
        for line in fh:
            if not started:
                started = line.startswith("section .text")
                continue
            if STACK_REF_RE.search(line):
                return True
    return False if started else None


def load_mapping(path):
    """addr_a -> addr_b from the verified sibling mapping, if it exists."""
    if not path or not os.path.exists(path):
        return {}, {}
    with open(path) as fh:
        data = json.load(fh)
    a_to_b, b_to_a = {}, {}
    for pair in data.get("pairs", []):
        a, b = pair.get("a"), pair.get("b")
        if a and b:
            a_to_b[a.lower()] = b.lower()
            b_to_a[b.lower()] = a.lower()
    return a_to_b, b_to_a


# --------------------------------------------------------------------------
# Names
# --------------------------------------------------------------------------

def split_name(name):
    """`<tu>_<core>_FUN_<addr>` -> (tu, core). Either may be None.

    `core` is None for a function that was never named -- a bare `FUN_<addr>`
    carries no claim to compare against.
    """
    m = TU_RE.match(name)
    tu = m.group(1) if m else None
    rest = name[len(tu) + 1:] if tu else name
    if rest.startswith("thunk_"):
        rest = rest[len("thunk_"):]
    rest = ADDR_SUFFIX_RE.sub("", rest)
    if not rest or rest.startswith("FUN_"):
        return tu, None
    return tu, rest


# --------------------------------------------------------------------------
# Signature model
# --------------------------------------------------------------------------

def params_of(func):
    vars_ = func.get("vars") or {}
    return [p for p in (vars_.get("params") or []) if isinstance(p, dict)]


def param_types(func):
    return [p.get("type") for p in params_of(func)]


def storage_slot(st):
    """One parameter's or return's storage location, as a comparable string."""
    if not st:
        return None
    if st.get("invalid"):
        return "INVALID"
    if st.get("reg"):
        return str(st["reg"])
    if st.get("stack"):
        return "Stack[0x%x]" % (st.get("offset") or 0)
    vs = st.get("varnodes") or []
    return "+".join(str(v.get("addr")) for v in vs) or None


def storage_vector(func):
    """(param storages, return storage) -- where Ghidra actually put things.

    The `custom_storage` flag on its own says nothing about whether the two
    builds disagree. Ticking "Use Custom Storage" in Ghidra pins the storage
    even when the pinned locations are exactly what the calling convention
    would have derived anyway, which is the case for most of the stack-passed
    __cdecl methods. Comparing the flag alone reports those as drift and sends
    the user off to re-enter values that are already correct; comparing the
    resolved locations is the question that actually matters.
    """
    vars_ = func.get("vars") or {}
    return (tuple(storage_slot(p.get("storage")) for p in params_of(func)),
            storage_slot(vars_.get("ret_storage")))


def param_widths(func):
    """Storage size of each parameter, as the exporter recorded it.

    Taken from the varnode rather than from a type-size table on purpose: it is
    what Ghidra actually laid out, so it stays correct for types this script
    has never heard of.
    """
    out = []
    for p in params_of(func):
        st = p.get("storage") or {}
        out.append(st.get("size"))
    return out


def ret_of(func):
    return func.get("ret") or ""


def is_undefined(type_name):
    return bool(UNDEFINED_RE.match((type_name or "").strip()))


def is_unsignatured(func):
    """The Ghidra default: `undefined FUN_00401234(void)`, nothing applied.

    Both halves are required. A real `void f(void)` has a concrete return, and
    a real `undefined1 f(int)` has parameters; neither is an empty slot.
    """
    return is_undefined(ret_of(func)) and not params_of(func)


def render_signature(func):
    """A pasteable C declaration, as close to Ghidra's own rendering as the
    export allows."""
    parts = []
    conv = func.get("conv")
    if conv:
        parts.append(conv)
    parts.append(ret_of(func) or "undefined")
    ps = params_of(func)
    args = ", ".join(f"{p.get('type', '?')} {p.get('name', '?')}" for p in ps)
    if func.get("variadic"):
        args = f"{args}, ..." if args else "..."
    if not args:
        args = "void"
    sig = f"{' '.join(parts)} {func.get('name')}({args})"
    if func.get("noreturn"):
        sig += "  /* noreturn */"
    if func.get("custom_storage"):
        sig += "  /* CUSTOM_STORAGE */"
    return sig


# --------------------------------------------------------------------------
# Pairing
# --------------------------------------------------------------------------

def index_by_core(funcs):
    """core name -> [records]. Unnamed functions are dropped."""
    out = defaultdict(list)
    for f in funcs:
        tu, core = split_name(f["name"])
        if not core:
            continue
        f["_tu"] = tu
        f["_core"] = core
        out[core].append(f)
    return out


def pair_up(index_a, index_b):
    """Match by core name; fall back to the TU when a name is not unique.

    A core name held by more than one function on either side cannot be paired
    on the name alone. The TU breaks most of those ties -- it is a second
    independent fact about the same function -- and whatever it does not break
    is reported as ambiguous rather than guessed at.
    """
    pairs, ambiguous = [], []
    for core in sorted(set(index_a) & set(index_b)):
        a_list, b_list = index_a[core], index_b[core]
        if len(a_list) == 1 and len(b_list) == 1:
            pairs.append((a_list[0], b_list[0], "name"))
            continue
        by_tu_a = defaultdict(list)
        by_tu_b = defaultdict(list)
        for f in a_list:
            by_tu_a[f["_tu"]].append(f)
        for f in b_list:
            by_tu_b[f["_tu"]].append(f)
        matched_a, matched_b = set(), set()
        for tu in sorted(set(by_tu_a) & set(by_tu_b)):
            if len(by_tu_a[tu]) == 1 and len(by_tu_b[tu]) == 1:
                a, b = by_tu_a[tu][0], by_tu_b[tu][0]
                pairs.append((a, b, "name+tu"))
                matched_a.add(a["addr"])
                matched_b.add(b["addr"])
        left_a = [f for f in a_list if f["addr"] not in matched_a]
        left_b = [f for f in b_list if f["addr"] not in matched_b]
        if left_a and left_b:
            ambiguous.append((core, left_a, left_b))
    return pairs, ambiguous


# --------------------------------------------------------------------------
# Comparison
# --------------------------------------------------------------------------

def compare(a, b):
    """Every tag that applies to this pair, unordered."""
    tags = []
    a_unsig, b_unsig = is_unsignatured(a), is_unsignatured(b)

    if b_unsig and not a_unsig:
        tags.append("NO_SIGNATURE")
    elif a_unsig and not b_unsig:
        tags.append("AUTHORITY_UNSET")

    pa, pb = params_of(a), params_of(b)
    if len(pb) < len(pa):
        tags.append("PARAMS_LOST")
    elif len(pb) > len(pa):
        tags.append("PARAMS_EXTRA")
    elif param_types(a) != param_types(b):
        # Same arity: a differing storage size is an ABI change, a differing
        # name for the same width is only a readability problem.
        tags.append("PARAM_TYPES_W" if param_widths(a) != param_widths(b)
                    else "PARAM_TYPES")

    ra, rb = ret_of(a), ret_of(b)
    if ra != rb:
        if is_undefined(rb) and not is_undefined(ra):
            tags.append("RET_LOST")
        else:
            tags.append("RET_DIFF")

    ca, cb = a.get("conv"), b.get("conv")
    if ca != cb:
        tags.append("CONV_DIFF")

    # Split rather than one FLAGS_DIFF: losing `...` rewrites the call site,
    # losing CUSTOM_STORAGE only mis-reads the return, and the two want
    # different fixes -- the first is mechanical, the second is hand work.
    for name, lost, extra in (("variadic", "VARIADIC_LOST", "VARIADIC_EXTRA"),
                              ("noreturn", "NORETURN_DIFF", "NORETURN_DIFF"),
                              ("custom_storage", "STORAGE_LOST", "STORAGE_EXTRA")):
        fa, fb = bool(a.get(name)), bool(b.get(name))
        if name == "custom_storage" and fa != fb \
                and storage_vector(a) == storage_vector(b):
            # The flag differs but every parameter and the return sit in exactly
            # the same place on both sides, so the convention already derives
            # what the flag pins. Nothing to carry across -- flagging it would
            # send the user to re-enter values that are already right.
            tags.append("STORAGE_FLAG_ONLY")
            continue
        if fa and not fb:
            tags.append(lost)
        elif fb and not fa:
            tags.append(extra)

    # NO_SIGNATURE already says all of this; the component tags are noise on
    # top of it and would triple every count in the summary.
    if "NO_SIGNATURE" in tags:
        tags = ["NO_SIGNATURE"]
    elif "AUTHORITY_UNSET" in tags:
        tags = ["AUTHORITY_UNSET"]

    return tags


def primary(tags):
    real = [t for t in tags if t in SEVERITY_RANK]
    if not real:
        return "OK"
    return min(real, key=lambda t: SEVERITY_RANK[t])


# --------------------------------------------------------------------------
# Report
# --------------------------------------------------------------------------

def thunk_receiver_leak(func, thunks):
    """Is `func`'s leading parameter borrowed from a thunk that forwards to it?"""
    ps = params_of(func)
    if not ps:
        return False
    lead = ps[0].get("type")
    for th in thunks.get(func["addr"].lower(), []):
        tps = params_of(th)
        if tps and tps[0].get("type") == lead:
            return True
    return False


def build_rows(pairs, a_to_b, b_to_a, thunks_a, thunks_b, asm_a, asm_b,
               check_asm=True):
    rows = []
    for a, b, basis in pairs:
        tags = compare(a, b)
        verdict = primary(tags)
        advisories = []
        if a.get("custom_storage") and verdict != "OK":
            advisories.append("NEEDS_CUSTOM_STORAGE")

        # Two independent ways an "extra" parameter turns out to be fictitious.
        # Either one flips the row from "the target knows more" to "the target
        # is wrong", so they are checked before the direction is decided.
        if verdict == "PARAMS_EXTRA":
            if thunk_receiver_leak(b, thunks_b) and not thunk_receiver_leak(a, thunks_a):
                advisories.append("THUNK_RECEIVER_LEAK")
            if check_asm and (b.get("conv") in STACK_CONVS) and \
                    reads_stack_frame(asm_b.get(b["addr"].lower())) is False:
                advisories.append("TARGET_READS_NO_STACK")
        elif verdict == "PARAMS_LOST":
            if check_asm and (a.get("conv") in STACK_CONVS) and \
                    reads_stack_frame(asm_a.get(a["addr"].lower())) is False:
                advisories.append("AUTHORITY_READS_NO_STACK")
        mapped_b = a_to_b.get(a["addr"].lower())
        mapped_a = b_to_a.get(b["addr"].lower())
        if (mapped_b and mapped_b != b["addr"].lower()) or \
           (mapped_a and mapped_a != a["addr"].lower()):
            advisories.append("MAPPING_CONFLICT")
            corroboration = "conflict"
        elif mapped_b == b["addr"].lower():
            corroboration = "confirmed"
        else:
            corroboration = "unmapped"
        # apply_sibling_signatures.py has no noreturn field, so an entry can
        # never carry this one. Flag it wherever it appears -- as a lone
        # verdict it is entirely hand work, and riding along with another
        # verdict it is the half the ledger will silently leave undone.
        if "NORETURN_DIFF" in tags:
            advisories.append("NORETURN_NEEDS_HAND")

        proven_fictitious = ("THUNK_RECEIVER_LEAK" in advisories or
                             "TARGET_READS_NO_STACK" in advisories)
        if verdict == "OK":
            direction = "none"
        elif verdict == "NORETURN_DIFF":
            direction = "hand"
        elif "MAPPING_CONFLICT" in advisories:
            direction = "review"
        elif "AUTHORITY_READS_NO_STACK" in advisories:
            direction = "review"
        elif verdict in REVIEW_VERDICTS and not proven_fictitious:
            direction = "review"
        elif "NEEDS_CUSTOM_STORAGE" in advisories:
            direction = "hand"
        else:
            direction = "apply"
        rows.append({
            "core": a["_core"],
            "verdict": verdict,
            "direction": direction,
            "corroboration": corroboration,
            "tags": sorted(tags),
            "advisories": advisories,
            "basis": basis,
            "tu_a": a["_tu"], "tu_b": b["_tu"],
            "addr_a": a["addr"], "addr_b": b["addr"],
            "name_a": a["name"], "name_b": b["name"],
            "sig_a": render_signature(a),
            "sig_b": render_signature(b),
            "ret_a": ret_of(a), "ret_b": ret_of(b),
            "conv_a": a.get("conv"), "conv_b": b.get("conv"),
            "params_a": param_types(a), "params_b": param_types(b),
            "mapped_b": mapped_b, "mapped_a": mapped_a,
            "_target_func": b,
        })
    return rows


def format_report(rows, ambiguous, args, totals):
    out = []
    w = out.append
    w("=" * 78)
    w(f"SIGNATURE DRIFT: {args.authority} -> {args.target}")
    w("=" * 78)
    w("")
    w("Functions matched by core name (TU prefix and _FUN_<addr> suffix")
    w(f"removed). {args.authority} is the authority; a difference means")
    w(f"{args.target} needs fixing unless the verdict is AUTHORITY_UNSET.")
    w("")
    w(f"  {args.authority:<24} {totals['n_a']:>6} named functions")
    w(f"  {args.target:<24} {totals['n_b']:>6} named functions")
    w(f"  {'paired by name':<24} {totals['n_pairs']:>6}")
    w(f"  {'  of which agree':<24} {totals['n_ok']:>6}")
    w(f"  {'  of which drift':<24} {totals['n_drift']:>6}")
    w(f"  {'ambiguous (name reused)':<24} {len(ambiguous):>6}")
    w("")
    w("-" * 78)
    w("BY VERDICT")
    w("-" * 78)
    for v in SEVERITY:
        n = totals["by_verdict"].get(v, 0)
        if n:
            w(f"  {n:>5}  {v}")
    for adv in ADVISORY:
        n = totals["by_advisory"].get(adv, 0)
        if n:
            w(f"  {n:>5}  ({adv})")
    w("")
    w("-" * 78)
    w("BY WHAT THE FIX TAKES")
    w("-" * 78)
    d = totals["by_direction"]
    w(f"  {d.get('apply', 0):>5}  apply    copy the authority's signature across")
    w(f"  {d.get('hand', 0):>5}  hand     nothing a ledger can carry -- "
      "CUSTOM_STORAGE (the applier is")
    w(f"  {'':>5}           gated off these on purpose) or noreturn (it has no "
      "such field)")
    w(f"  {d.get('review', 0):>5}  review   direction not settled -- the pair "
      "may not be the same function,")
    w(f"  {'':>5}           or the target may be the side that is right")
    w("")
    if totals["by_corroboration"]:
        c = totals["by_corroboration"]
        w("-" * 78)
        w("AGAINST THE ADDRESS MAPPING  (independent axis, drifting pairs)")
        w("-" * 78)
        w(f"  {c.get('confirmed', 0):>5}  confirmed  the mapping pairs these "
          "same two addresses")
        w(f"  {c.get('unmapped', 0):>5}  unmapped   the mapping has no opinion; "
          "the name is the only evidence")
        w(f"  {c.get('conflict', 0):>5}  conflict   the mapping pairs one of "
          "them with somebody else")
        w("")

    if totals["by_tu"]:
        w("-" * 78)
        w("BY TRANSLATION UNIT  (target-side TU, drifting pairs only)")
        w("-" * 78)
        for tu, n in sorted(totals["by_tu"].items(), key=lambda kv: (-kv[1], kv[0]))[:30]:
            w(f"  {n:>5}  {tu or '<none>'}")
        w("")

    shown = rows if args.show == 0 else rows[:args.show]
    if shown:
        w("-" * 78)
        w(f"DETAIL  ({len(shown)} of {len(rows)} drifting pairs)")
        w("-" * 78)
        w("")
    for r in shown:
        head = r["verdict"]
        extra = [t for t in r["tags"] if t != r["verdict"]]
        if extra:
            head += "  +" + ",".join(extra)
        for adv in r["advisories"]:
            head += f"  [{adv}]"
        w(f"{r['core']}")
        w(f"    {head}")
        w(f"    CURRENT ({args.target}, {r['addr_b']})")
        w(f"        {r['sig_b']}")
        if r["direction"] != "review":
            label = "CHANGE TO"
        elif "MAPPING_CONFLICT" in r["advisories"]:
            label = "REVIEW -- may not be the same function"
        elif "AUTHORITY_READS_NO_STACK" in r["advisories"]:
            label = "REVIEW -- authority looks like the wrong one"
        else:
            label = "REVIEW -- authority may be the poorer side"
        w(f"    {label} ({args.authority}, {r['addr_a']})")
        w(f"        {r['sig_a']}")
        if r["direction"] == "review" and "MAPPING_CONFLICT" not in r["advisories"] \
                and "AUTHORITY_READS_NO_STACK" not in r["advisories"]:
            w("    applying this would DROP information the target already "
              "has; decide which side is right first")
        if "THUNK_RECEIVER_LEAK" in r["advisories"]:
            w("    the leading parameter is borrowed from a thunk that forwards "
              "here -- a thunk shares its")
            w("    target's signature, so the receiver leaked onto a function "
              "that takes no arguments. Break")
            w("    the thunk into a real function to type the two "
              "independently.")
        if "TARGET_READS_NO_STACK" in r["advisories"]:
            w("    proof: the target's body contains no [ESP/[EBP reference at "
              "all, so it reads no arguments;")
            w("    its declared parameters are fictitious")
        if "AUTHORITY_READS_NO_STACK" in r["advisories"]:
            w("    the AUTHORITY's body contains no [ESP/[EBP reference, so its "
              "extra parameters are the")
            w("    fictitious ones -- this row wants fixing in "
              f"{args.authority}, not {args.target}")
        if r["basis"] != "name":
            w(f"    matched by: {r['basis']}")
        if r["tu_a"] != r["tu_b"]:
            w(f"    TU: {r['tu_a']} -> {r['tu_b']}")
        if "MAPPING_CONFLICT" in r["advisories"]:
            w(f"    mapping says {r['addr_a']} -> {r['mapped_b']} "
              f"and {r['addr_b']} <- {r['mapped_a']}")
        if "NEEDS_CUSTOM_STORAGE" in r["advisories"]:
            w("    custom storage (ST0/ST1) must be copied by hand; the "
              "declaration alone is not enough")
        if "NORETURN_NEEDS_HAND" in r["advisories"]:
            w("    the applier has no noreturn field -- tick it in Ghidra by "
              "hand, no ledger can carry it")
        w("")

    if ambiguous and args.show != -1:
        w("-" * 78)
        w("AMBIGUOUS  (core name held by several functions; not compared)")
        w("-" * 78)
        for core, la, lb in ambiguous:
            w(f"  {core}")
            w(f"      {args.authority}: " +
              ", ".join(f"{f['addr']} ({f['_tu']})" for f in la))
            w(f"      {args.target}: " +
              ", ".join(f"{f['addr']} ({f['_tu']})" for f in lb))
        w("")
    return "\n".join(out)


# --------------------------------------------------------------------------
# Ledger emission
# --------------------------------------------------------------------------

def body_range(func):
    """[min address, max address] over every fragment, as Ghidra reports it.

    The applier compares this against `func.getBody()` min/max and refuses the
    entry if they differ, so a boundary-fix pass that reshaped the function
    invalidates the entry instead of retyping a body that is no longer the same
    body. Fragments matter: a function that borrowed a code cave has more than
    one, and only the outer bounds are what getBody() reports.
    """
    frags = [f for f in (func.get("body") or []) if f.get("start") and f.get("end")]
    if not frags:
        return None
    return [min(f["start"] for f in frags).lower(),
            max(f["end"] for f in frags).lower()]


def ledger_note(row):
    """Why this entry believes itself. The applier rejects a noteless entry."""
    reason = {
        "NO_SIGNATURE": ("target sits at the Ghidra default (undefined return, "
                         "no parameters, no convention)"),
        "VARIADIC_LOST": "target lost the varargs marker",
        "PARAMS_LOST": "target lost parameters",
        "PARAMS_EXTRA": "target carries parameters the authority does not",
        "RET_LOST": "target return decayed to undefined",
        "RET_DIFF": "return types disagree",
        "PARAM_TYPES": "parameter types disagree at equal width",
        "PARAM_TYPES_W": "parameter types disagree in storage width",
        "NORETURN_DIFF": "noreturn flag disagrees",
    }.get(row["verdict"], row["verdict"])
    bits = [f"signature drift vs {row['name_a']}: {reason}"]
    bits.append("name cores match")
    if row["corroboration"] == "confirmed":
        bits.append("sibling_verified_mapping.json pairs these same two addresses")
    if "THUNK_RECEIVER_LEAK" in row["advisories"]:
        bits.append("the target's leading parameter is a receiver leaked from a "
                    "thunk forwarding here")
    if "TARGET_READS_NO_STACK" in row["advisories"]:
        bits.append("the target's disassembly has no [ESP/[EBP reference, so it "
                    "reads no arguments and its parameters are fictitious")
    return "; ".join(bits) + "."


def build_ledger(rows, authority, target, index_a):
    """The `apply` rows as apply_sibling_signatures.py ledger entries.

    Only `apply`. A `review` row has an unsettled direction and a `hand` row
    needs storage this format cannot carry -- writing either one here would be
    laundering an open question into machine input.
    """
    from apply_sibling_signatures import needs_custom_storage

    entries, refused = [], Counter()
    for row in rows:
        if row["direction"] != "apply":
            refused[row["direction"]] += 1
            continue
        a = next((f for f in index_a[row["core"]] if f["addr"] == row["addr_a"]), None)
        if a is None:
            refused["source_missing"] += 1
            continue
        # The same gate the applier applies, imported rather than restated so
        # the two cannot drift apart: an FPU convention or a float10 return
        # cannot be written without CUSTOM_STORAGE, and attempting it leaves
        # the function with a storage flag and no storage.
        if needs_custom_storage(a):
            refused["needs_custom_storage"] += 1
            continue
        rng = body_range(row["_target_func"])
        entries.append({
            "program": target,
            "address": row["addr_b"].lower(),
            # The target's own name, unchanged -- these pairs were matched BY
            # name, so there is no rename here, only a signature.
            "name": row["name_b"],
            "ret": row["ret_a"],
            "conv": row["conv_a"],
            "params": [{"name": p.get("name"), "type": p.get("type")}
                       for p in params_of(a)],
            "varargs": bool(a.get("variadic")),
            "basis": "sibling",
            "source": {
                "program": authority,
                "address": row["addr_a"].lower(),
                "name": row["name_a"],
                "confidence": "high" if row["corroboration"] == "confirmed" else "medium",
                "note": ledger_note(row),
            },
            "expect": {"name": row["name_b"], "range": rng},
        })
    return entries, refused


# --------------------------------------------------------------------------

def main():
    ap = argparse.ArgumentParser(
        description="Compare signatures of identically-named sibling functions")
    ap.add_argument("--authority", default="nocedit.exe",
                    help="program whose signatures are correct (default nocedit.exe)")
    ap.add_argument("--target", default="nocturne.exe",
                    help="program to be fixed (default nocturne.exe)")
    ap.add_argument("--mapping", default=None,
                    help="verified sibling mapping for the cross-check "
                         "(default: the target's reports/sibling_verified_mapping.json)")
    ap.add_argument("--no-mapping", action="store_true",
                    help="skip the address cross-check entirely")
    ap.add_argument("--no-asm", action="store_true",
                    help="skip the exported-disassembly proof for parameter "
                         "counts (faster, leaves more rows in `review`)")
    ap.add_argument("--verdict", action="append", default=None,
                    help="only this verdict (repeatable)")
    ap.add_argument("--tu", default=None,
                    help="only pairs whose TU on either side matches this")
    ap.add_argument("--show", type=int, default=40,
                    help="detail rows to print (0 = all, -1 = summary only)")
    ap.add_argument("--out", default=None,
                    help="report path (default: target reports/sibling_signature_drift.txt)")
    ap.add_argument("--json", default=None, help="also write the rows as JSON")
    ap.add_argument("--ledger-out", default=None,
                    help="write the `apply` rows as an apply_sibling_signatures.py "
                         "ledger (schema 1). Honours --verdict/--tu, so a subset "
                         "can be emitted and applied on its own.")
    ap.add_argument("--quiet", action="store_true", help="write files, print nothing")
    args = ap.parse_args()

    funcs_a = load_functions(args.authority)
    funcs_b = load_functions(args.target)
    index_a = index_by_core(funcs_a)
    index_b = index_by_core(funcs_b)

    mapping_path = args.mapping
    if mapping_path is None and not args.no_mapping:
        mapping_path = os.path.join(annotations_dir(args.target), "reports",
                                    "sibling_verified_mapping.json")
    a_to_b, b_to_a = ({}, {}) if args.no_mapping else load_mapping(mapping_path)

    thunks_a = index_thunks(funcs_a)
    thunks_b = index_thunks(funcs_b)
    asm_a = {} if args.no_asm else index_asm(args.authority)
    asm_b = {} if args.no_asm else index_asm(args.target)

    pairs, ambiguous = pair_up(index_a, index_b)
    rows = build_rows(pairs, a_to_b, b_to_a, thunks_a, thunks_b, asm_a, asm_b,
                      check_asm=not args.no_asm)

    n_ok = sum(1 for r in rows if r["verdict"] == "OK")
    drift = [r for r in rows if r["verdict"] != "OK"]

    totals = {
        "n_a": sum(len(v) for v in index_a.values()),
        "n_b": sum(len(v) for v in index_b.values()),
        "n_pairs": len(rows),
        "n_ok": n_ok,
        "n_drift": len(drift),
        "by_verdict": Counter(r["verdict"] for r in drift),
        "by_advisory": Counter(a for r in drift for a in r["advisories"]),
        "by_tu": Counter(r["tu_b"] for r in drift),
        "by_direction": Counter(r["direction"] for r in drift),
        "by_corroboration": Counter(r["corroboration"] for r in drift),
    }

    selected = drift
    if args.verdict:
        want = set(args.verdict)
        selected = [r for r in selected if r["verdict"] in want]
    if args.tu:
        selected = [r for r in selected
                    if args.tu in (r["tu_a"], r["tu_b"])]
    selected.sort(key=lambda r: (SEVERITY_RANK.get(r["verdict"], 99),
                                 r["tu_b"] or "", r["core"]))

    text = format_report(selected, ambiguous, args, totals)

    out_path = args.out or os.path.join(annotations_dir(args.target), "reports",
                                        "sibling_signature_drift.txt")
    os.makedirs(os.path.dirname(out_path), exist_ok=True)
    with open(out_path, "w") as fh:
        fh.write(text + "\n")

    if args.ledger_out:
        entries, refused = build_ledger(selected, args.authority, args.target,
                                        index_a)
        with open(args.ledger_out, "w") as fh:
            json.dump({"schema": 1, "entries": entries}, fh, indent=1)
        if not args.quiet:
            print(f"[ledger] {args.ledger_out}: {len(entries)} entr(ies)"
                  + (f", refused {dict(refused)}" if refused else ""))
            print("         verify with:  apply_sibling_signatures.py "
                  f"--source ledger --ledger {args.ledger_out} --lint")

    if args.json:
        with open(args.json, "w") as fh:
            json.dump({"authority": args.authority, "target": args.target,
                       "totals": {k: (dict(v) if isinstance(v, Counter) else v)
                                  for k, v in totals.items()},
                       "rows": [{k: v for k, v in r.items()
                                 if not k.startswith("_")} for r in selected],
                       "ambiguous": [
                           {"core": c,
                            "a": [{"addr": f["addr"], "tu": f["_tu"]} for f in la],
                            "b": [{"addr": f["addr"], "tu": f["_tu"]} for f in lb]}
                           for c, la, lb in ambiguous]},
                      fh, indent=1)

    if not args.quiet:
        print(text)
        print(f"[report] {out_path}")
        if args.json:
            print(f"[json]   {args.json}")


if __name__ == "__main__":
    main()

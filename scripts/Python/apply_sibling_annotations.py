#!/usr/bin/env python3
# Apply a nocedit.exe -> nocturne.exe function mapping into the nocturne Ghidra
# program: names first, signatures only where independently verified.
#
# Consumes map_sibling_functions.py output (ideally after
# verify_sibling_signatures.py has annotated it with sig_verdict), and
# optionally wall_off_crt.py output so the CRT interior is left anonymous
# instead of being papered with runtime names nobody reads.
#
# Gating, because a wrong name is worse than no name -- it produces
# confident-looking decompiler output that is quietly false:
#
#   NAME_SIG    passes the name gate and the signature gate -> name & prototype
#   NAME        passes the name gate, but the signature is unverified/conflicting
#   SIG_ONLY    fails the name gate on confidence alone, yet the prototype is
#               independently supported -> prototype applied, name left as-is
#   ALREADY     nocturne already carries this name
#   SKIP_CONF   below --min-confidence, or flagged ambiguous by the matcher
#
# The name gate and the signature gate are deliberately separate, because
# --min-confidence answers "is this the same function?" and a prototype answers
# "what does it take?", and the evidence for the two is not the same evidence.
# See signature_supported().
#   SKIP_SHAPE  bodies disagree too much in size to trust the pairing
#   SKIP_CRT    CRT interior: reachable only from other CRT, deliberately walled off
#   SKIP_NAMED  nocturne already has a class/method core that differs; never
#               clobbered, reported for review instead. --upgrade-class-only
#               exempts the one case that is not a disagreement: nocturne holds
#               a bare CLASS with no method (`CDemonSet`) and nocedit offers
#               that same class plus a method (`CDemonSet_renderScene`). That
#               strictly adds information and cannot rename anything, so it
#               falls through to the ordinary gates. A different class, or a
#               method already present, still skips.
#   SKIP_TU     nocturne's hand-assigned unit disagrees with nocedit's, so the
#               pairing is suspect. Independent of everything the matcher used,
#               which is what makes it worth blocking on (--ignore-tu to allow)
#
# Only the class-and-method core transfers. nocturne's translation unit was
# assigned by hand and is authoritative, so it is preserved, and the name is
# re-suffixed with nocturne's own entry address.
#
# Usage:
#   python apply_sibling_annotations.py ./projects NocturneEdit --mapping verified.json
#   python apply_sibling_annotations.py ./projects NocturneEdit --mapping verified.json \
#          --crt-wall crt_wall.json --signatures --apply
#
#@author NearlyTRex
#@category Annotations

import argparse
import json
import os
import re
import sys
from collections import Counter

THIS_DIR = os.path.dirname(os.path.abspath(__file__))
if THIS_DIR not in sys.path:
    sys.path.insert(0, THIS_DIR)

import sibling_match as sm

# Shape verdicts that are too weak to hang a name on by themselves.
WEAK_SHAPES = frozenset(("size_mismatch",))

# Conventions whose storage Ghidra cannot allocate from the convention alone:
# the Watcom FPU family returns in ST0 and passes in ST0/ST1, and there is no
# rule for that. Asking for DYNAMIC_STORAGE_FORMAL_PARAMS throws, and the throw
# leaves the function *unreadable* rather than merely un-annotated -- every
# later getReturnType() raises IndexOutOfBounds, which aborts the annotation
# export outright.
#
# These are not un-transferable, they just belong to a different tool:
# transfer_custom_storage.py copies the source's ST0/ST1 varnodes across
# verbatim, which is both the faithful answer and the only one that works. So
# take the name here and leave the prototype to it.
FPU_CONV_PREFIX = "__fpu"


def needs_custom_storage(conv, spec):
    """Would this prototype have to be placed by hand rather than by rule?"""
    if conv and conv.startswith(FPU_CONV_PREFIX):
        return True
    for p in (spec or {}).get("params") or []:
        # A source parameter pinned to a register was pinned deliberately,
        # because allocating it from the convention was wrong.
        if (p.get("storage") or {}).get("reg"):
            return True
    return False


# Shape verdicts strong enough to stand in for a signature measurement: the
# bodies are byte-identical, or identical once relocated operands are
# normalised away. Same code, therefore same parameters.
PROVEN_SHAPES = frozenset(("identical", "same_mnemonics"))

ORDER = ["NAME_SIG", "NAME", "SIG_ONLY", "ALREADY", "SKIP_LEDGER", "SKIP_NO_RECEIVER",
         "SKIP_CONF", "SKIP_SHAPE",
         "SKIP_CRT", "SKIP_NAMED", "SKIP_TU"]


def signature_supported(shape, sig_verdict, confidence, min_confidence):
    """Is there enough evidence to hang nocedit's prototype on this pair?

    Two admissible proofs, either one sufficient:

      sig_verdict == agree   nocturne's *own* bytes were measured against
                             nocedit's prototype and the argument size matched.

      a proven body shape    byte-identical bodies take identical parameters.
                             This is strictly stronger evidence than the
                             argument-size check, not weaker: that check
                             returns `unverifiable` merely because there was no
                             `RET imm16` and no caller-side `ADD ESP, n` to
                             measure, which is a limit of the measurement, not
                             a finding about the function. It should not veto a
                             body that is provably the same code.

    A `conflict` vetoes both. It is the one positive finding that the two
    builds really do differ here, so an identical-looking shape must not talk
    us out of it -- hence the explicit `unverifiable` test rather than merely
    "not agree".

    The shape proof still asks for a confident pairing: an identical body
    proves the parameters match whatever it was paired *with*, so it says
    nothing if the pairing itself is a guess. The argument-size proof needs no
    such backing because it was measured against the target's own bytes.

    Independent of the name gate on purpose. --min-confidence protects the
    name, which is the expensive thing to get wrong; a wrong name is read by
    every future person who opens the function, while a prototype that fits
    the measured stack is self-limiting.
    """
    if shape in WEAK_SHAPES:
        return False
    if sig_verdict == "agree":
        return True
    return (sig_verdict == "unverifiable"
            and shape in PROVEN_SHAPES
            and confidence >= min_confidence)


def target_name(nocedit_name, nocturne_name, nocturne_addr):
    """Inject nocedit's class-and-method core into nocturne's own name.

    Only the core transfers. nocturne's translation unit was assigned by hand
    against nocturne's own layout and is authoritative, so it is preserved
    even where it disagrees with nocedit's; the address suffix is nocturne's
    by definition. nocedit's unit is used only as a fallback when nocturne has
    none, which happens for functions outside the hand-assigned set.

    Returns None when there is nothing to inject.
    """
    _, core = sm.split_qualified_name(nocedit_name)
    if not core:
        return None
    tu = sm.tu_of(nocturne_name) or sm.tu_of(nocedit_name)
    prefix = "%s_" % tu if tu else ""
    return "%s%s_FUN_%s" % (prefix, core, nocturne_addr.lower())


def plan(mapping, crt_wall, min_confidence, want_signatures, current_names,
         require_tu_match=True, refresh_signatures=False, ledger=None,
         current_params=None, upgrade_class_only=False, current_receiver=None):
    """Decide an action per pair without touching Ghidra.

    `ledger` is an optional reviewed approval list keyed by nocturne address
    (see annotations/<to>/name_transfer_ledger.json). It is a per-row override
    of the confidence gate in BOTH directions: an approved row is named even
    below --min-confidence, and a rejected row is never named however high the
    mapper rated it. That distinction matters because the score is not
    monotonic below 0.99 -- a reviewed 0.78 pair can be better evidenced than
    an unreviewed 0.95 one, and a confidently-wrong pair is exactly the case a
    threshold cannot catch.
    """
    interior = set()
    if crt_wall:
        interior = {a.lower() for a in crt_wall.get("crt_interior", [])}

    rows = []
    for p in mapping["pairs"]:
        b = p["b"].lower()
        cur = current_names.get(b)
        want = target_name(p["name"], cur, b)
        cur_tu, cur_core = sm.split_qualified_name(cur)
        edit_tu = sm.tu_of(p["name"])
        # Does the desired name assert a class receiver, and can the target
        # honour it? `current_params` is the live parameter count keyed by
        # nocturne address; 0 means the function declares none at all.
        claimed_cls = None
        if want:
            mcls = re.match(r'^[a-z0-9_]+\.(?:cpp|c)_(C[A-Z]\w*|S[A-Z]\w*)_\w+_FUN_', want)
            claimed_cls = mcls.group(1) if mcls else None
        needs_receiver = claimed_cls is not None
        has_receiver = (current_params or {}).get(b, 0) > 0
        # Counting parameters is not enough. The name asserts parameter 0 is
        # `<Class> *this_ptr`, and a target that already declares some OTHER
        # class there satisfies the count while still contradicting the name --
        # which is precisely what check_this_ptr aborts the export on. A base
        # class is not close enough: CTeleportDest::getCollisionType named onto
        # a receiver typed CDemonActor* killed a whole nocturne export.
        recv_type = ((current_receiver or {}).get(b) or "").replace(" ", "")
        receiver_conflict = bool(needs_receiver and has_receiver and recv_type
                                 and recv_type != claimed_cls + "*")

        # nocturne carrying a bare class with no method is not a competing
        # name, it is an unnamed method on a known class -- every one of these
        # came from an earlier transfer that could only recover the class. Only
        # an exact `<class>_` extension qualifies: a different class, or a
        # method already present, is a real disagreement and keeps its veto.
        _, want_core = sm.split_qualified_name(want) if want else (None, None)
        class_only_upgrade = bool(
            upgrade_class_only and cur_core and want_core
            and "_" not in cur_core
            and want_core.startswith(cur_core + "_"))

        led = ledger.get(b) if ledger else None
        # An approved row bypasses the confidence gate but still faces every
        # other check (TU conflict, weak shape, already-named); a rejected row
        # is refused outright. Folding approval INTO the gate rather than
        # adding a branch matters: a branch that merely `pass`es ends the
        # elif chain and leaves the row with no action at all.
        ledger_ok = bool(led) and led.get("status") == "approve" and not p.get("ambiguous")
        ledger_reject = bool(led) and led.get("status") == "reject"
        row = {"a": p["a"], "b": b, "want": want, "current": cur,
               "confidence": p["confidence"],
               "shape": p.get("shape_agreement", "unshaped"),
               "sig_verdict": p.get("sig_verdict", "unverifiable"),
               "sig_detail": p.get("sig_detail", ""),
               "evidence": p.get("evidence", []),
               "tu": cur_tu, "tu_from": edit_tu,
               "detail": ""}

        # nocturne's CRT was never subdivided -- every runtime function carries
        # the one catch-all unit, so comparing it against nocedit's specific
        # crt_*.c would reject the whole runtime for a disagreement that is
        # only a difference in labelling granularity.
        tu_conflict = (require_tu_match and cur_tu and edit_tu
                       and cur_tu != edit_tu and cur_tu != "crt_unknown.c")

        # Evaluated up front because it is independent of everything the name
        # gate below decides -- including the confidence test that the name
        # gate rejects on.
        sig_ok = (want_signatures
                  and not p.get("ambiguous")
                  and signature_supported(row["shape"], row["sig_verdict"],
                                          p["confidence"], min_confidence))

        if b in interior:
            row["action"] = "SKIP_CRT"
        elif want is None:
            row["action"] = "SKIP_NAMED"
            row["detail"] = "source name carries no class/method core"
        elif cur == want:
            # The name matching says nothing about whether the prototype was
            # ever applied -- a type the target lacked at the time would have
            # left the name in place and the signature behind. Re-offering
            # these is idempotent, so refresh sweeps up what has since become
            # applicable.
            #
            # Gated on the signature gate, which this branch sits above and so
            # must apply itself -- otherwise refresh would quietly signature
            # every already-named function on no evidence at all. The name
            # matching is not the evidence: it is the same transfer coming
            # round again, so it corroborates nothing on its own.
            row["action"] = ("NAME_SIG"
                             if (refresh_signatures and sig_ok)
                             else "ALREADY")
        elif cur_core is not None and not class_only_upgrade:
            # A core already present is either hand-written or from an earlier
            # transfer; either way it is not this run's to overwrite.
            row["action"] = "SKIP_NAMED"
            row["detail"] = "already named %s" % cur
        elif tu_conflict:
            row["action"] = "SKIP_TU"
            row["detail"] = "unit disagrees: nocturne %s vs nocedit %s" % (
                cur_tu, edit_tu)
        elif ledger_reject:
            row["action"] = "SKIP_LEDGER"
            row["detail"] = "rejected on review: %s" % ledger[b].get("note", "")
        elif (not ledger_ok) and (p["confidence"] < min_confidence
                                  or p.get("ambiguous")):
            # Too weak to name, but the prototype stands on its own evidence,
            # so take the half we can prove and leave the name alone.
            if sig_ok:
                row["action"] = "SIG_ONLY"
                row["detail"] = ("confidence %.2f: prototype only, name withheld"
                                 % p["confidence"])
            else:
                row["action"] = "SKIP_CONF"
                row["detail"] = ("ambiguous" if p.get("ambiguous")
                                 else "confidence %.2f" % p["confidence"])
        elif needs_receiver and receiver_conflict and not sig_ok:
            # Applying the signature would fix parameter 0 on the way in; with
            # no signature to apply, naming it would plant the defect instead.
            row["action"] = "SKIP_NO_RECEIVER"
            row["detail"] = ("name claims class %s but the target's parameter 0 "
                             "is %s, and no signature is being applied to "
                             "correct it" % (claimed_cls, recv_type))
        elif needs_receiver and not has_receiver:
            # `<tu>_<Class>_<method>_FUN_<addr>` ASSERTS that parameter 0 is
            # `<Class> *this_ptr`. Applying such a name to a function with no
            # parameters makes an assertion the program cannot satisfy, and the
            # exporter enforces it downstream: check_this_ptr aborts the whole
            # nocturne export with "N function(s) ... do not take this_ptr".
            # A name-only transfer onto an UNSIGNATURED target hits this every
            # time -- 24 of them blocked an export before this gate existed.
            # The prototype is the missing half, and it is not ours to invent:
            # these pairs measure `unverifiable`, so the signature gate refuses
            # them too. Leave the function anonymous until it has a receiver.
            row["action"] = "SKIP_NO_RECEIVER"
            row["detail"] = ("name claims class %s but the target declares no "
                             "parameters; needs a signature first" % claimed_cls)
        elif row["shape"] in WEAK_SHAPES and not ledger_ok:
            # A reviewed row overrides this one but NOT SKIP_TU above, and the
            # asymmetry is the point. `size_mismatch` is a heuristic *about the
            # shape*, and a review that read both bodies has already accounted
            # for why they differ -- one build doing more work is the normal
            # case, not a warning. A unit conflict is independent of everything
            # the review looked at, and it is the only check that catches an
            # identical-body shape collision between two unrelated functions
            # (an editor-only CMultiCram accessor mapped into game
            # core_stranger.cpp), so it keeps its veto.
            row["action"] = "SKIP_SHAPE"
            row["detail"] = row["shape"]
        elif sig_ok:
            row["action"] = "NAME_SIG"
        else:
            row["action"] = "NAME"
            if want_signatures:
                row["detail"] = "signature %s" % row["sig_verdict"]
        rows.append(row)

    rows.sort(key=lambda r: r["b"])
    return rows


_ARRAY_RE = re.compile(r"^(.*?)\s*\[(\d+)\]$")


def resolve_type(dtm, text, cache):
    """A type string from the source build -> a data type in the target's DTM.

    Types are transferred by name, so a name the target has never heard of
    resolves to nothing and the whole signature is abandoned rather than
    guessed at: a parameter silently typed `undefined4` looks like a real
    answer and is not one.

    Pointer and array suffixes are peeled off and rebuilt around the base type,
    which is what lets `CDemonActor*` transfer even when the pointer type
    itself was never created in the target.
    """
    if text is None:
        return None
    text = text.strip()
    if not text:
        return None
    if text in cache:
        return cache[text]

    from ghidra.program.model.data import ArrayDataType, PointerDataType

    rest, stars = text, 0
    while rest.endswith("*"):
        stars += 1
        rest = rest[:-1].strip()

    count = None
    m = _ARRAY_RE.match(rest)
    if m:
        rest, count = m.group(1).strip(), int(m.group(2))

    found = dtm.getDataType("/" + rest)
    if found is None:
        from java.util import ArrayList
        matches = ArrayList()
        dtm.findDataTypes(rest, matches)
        found = matches.get(0) if not matches.isEmpty() else None
    if found is None:
        cache[text] = None
        return None

    dt = found
    if count is not None:
        dt = ArrayDataType(dt, count, dt.getLength())
    for _ in range(stars):
        dt = PointerDataType(dt)
    cache[text] = dt
    return dt


def build_signature(dtm, func, spec, cache):
    """(return type, [ParameterImpl]) for `spec`, or None if anything is unknown.

    All-or-nothing on purpose. A partially applied prototype -- correct return
    type, two of four parameters -- is harder to spot and harder to trust than
    one that was never applied.
    """
    from ghidra.program.model.listing import (ParameterImpl,
                                              ReturnParameterImpl)
    from java.util import ArrayList

    ret = resolve_type(dtm, spec.get("ret"), cache)
    if ret is None:
        return None

    # Java collections, not Python ones: updateFunction resolves against
    # java.util.List and will not accept a list literal.
    params = ArrayList()
    for i, p in enumerate(spec.get("params") or []):
        dt = resolve_type(dtm, p.get("type"), cache)
        if dt is None:
            return None
        name = p.get("name") or ("param_%d" % (i + 1))
        params.add(ParameterImpl(name, dt, func.getProgram()))
    return ReturnParameterImpl(ret, func.getProgram()), params


def signature_readable(func):
    """Can the function's own prototype still be enumerated?

    Half-assigned storage does not fail at write time -- it fails for every
    reader afterwards. Checking here keeps that blast radius to the one
    function instead of the next export.
    """
    try:
        rt = func.getReturnType()
        if rt is not None:
            rt.getName()
        for p in func.getParameters():
            p.getName()
            p.getDataType().getName()
            p.getVariableStorage()
        func.getSignature()
        return True
    except Exception:
        return False


def make_readable(func):
    """Best-effort return to a state later passes can enumerate."""
    from ghidra.program.model.symbol import SourceType
    from ghidra.program.model.listing import Function, ReturnParameterImpl
    from ghidra.program.model.data import Undefined4DataType
    from java.util import ArrayList

    try:
        func.setCustomVariableStorage(False)
    except Exception:
        pass
    if signature_readable(func):
        return True
    try:
        # Strip the prototype outright. An un-annotated function is a known
        # quantity; a throwing one poisons every tool that walks the program.
        func.updateFunction(
            None, ReturnParameterImpl(Undefined4DataType(), func.getProgram()),
            ArrayList(), Function.FunctionUpdateType.DYNAMIC_STORAGE_FORMAL_PARAMS,
            True, SourceType.ANALYSIS)
    except Exception:
        pass
    return signature_readable(func)


def apply_row(program, func, row, want_signatures, dtm=None, cache=None):
    """Set the name, and the full prototype where the signature is supported.

    Returns what was actually applied, so the report distinguishes a signature
    that transferred from one that was skipped for an unresolvable type.
    """
    from ghidra.program.model.symbol import SourceType

    # A SIG_ONLY row is here *because* the pairing was not confident enough to
    # name. Renaming is the one thing it must not do.
    sig_only = row["action"] == "SIG_ONLY"
    if not sig_only:
        func.setName(row["want"], SourceType.USER_DEFINED)
    if not (want_signatures and row["action"] in ("NAME_SIG", "SIG_ONLY")):
        return "name"

    spec = row.get("sig")
    if needs_custom_storage(row.get("conv"), spec):
        # Left to transfer_custom_storage.py; see FPU_CONV_PREFIX.
        return "skipped (custom storage)" if sig_only else "name (custom storage)"

    built = (build_signature(dtm, func, spec, cache if cache is not None else {})
             if (spec and dtm is not None) else None)
    if built is None:
        # SIG_ONLY exists only to carry a prototype. With no prototype to carry
        # there is nothing left worth doing -- pinning a calling convention
        # onto a function this run declined to even name adds no readability
        # and can only misinform.
        if sig_only:
            return "skipped (no prototype)"
        if row.get("conv"):
            func.setCallingConvention(row["conv"])
        return "name+conv"

    ret_var, params = built
    from ghidra.program.model.listing import Function
    try:
        # Return and parameters go in together; storage is recomputed from the
        # calling convention rather than copied, because the two builds lay
        # their stacks out independently.
        func.updateFunction(row.get("conv"), ret_var, params,
                            Function.FunctionUpdateType.DYNAMIC_STORAGE_FORMAL_PARAMS,
                            True, SourceType.USER_DEFINED)
        # updateFunction returning is not proof the result can be read back:
        # storage can land half-assigned and only fail for later readers.
        if not signature_readable(func):
            ok = make_readable(func)
            return ("unreadable, reset" if ok else "UNREADABLE")
        return "signature" if sig_only else "name+signature"
    except Exception:
        # A failed updateFunction can leave storage half-assigned, and anything
        # that later enumerates parameters then throws as well -- the function
        # becomes unreadable rather than merely un-annotated, which aborts the
        # annotation export outright. Do NOT then set the convention: that
        # pins a convention onto storage which does not match it, and is what
        # locked seven `crt_math.c` functions into a broken state.
        ok = make_readable(func)
        if not ok:
            return "UNREADABLE"
        return "prototype rejected" if sig_only else "name (prototype rejected)"


def main():
    ap = argparse.ArgumentParser(
        description="Apply sibling-mapped names/signatures into nocturne.")
    ap.add_argument("project_path")
    ap.add_argument("project_name")
    ap.add_argument("program_name", nargs="?", default="nocturne.exe")
    ap.add_argument("--mapping", required=True,
                    help="map_sibling_functions.py output (optionally verified)")
    ap.add_argument("--crt-wall", help="wall_off_crt.py output; skips CRT interior")
    ap.add_argument("--min-confidence", type=float, default=0.90)
    ap.add_argument("--upgrade-class-only", action="store_true",
                    help="let a pair name a target whose existing core is a bare "
                         "class with no method, when the proposed core is that "
                         "same class plus a method (CDemonSet -> "
                         "CDemonSet_renderScene). Adds information; never renames. "
                         "A different class or an existing method still skips.")
    ap.add_argument("--signatures", action="store_true",
                    help="also transfer prototypes where the signature gate is "
                         "satisfied (see signature_supported)")
    ap.add_argument("--refresh-signatures", action="store_true",
                    help="also (re)apply signatures to already-named functions, "
                         "for prototypes blocked earlier by a missing type")
    ap.add_argument("--ignore-tu", action="store_true",
                    help="do not block on nocturne/nocedit translation-unit disagreement")
    ap.add_argument("--ledger",
                    help="reviewed approval list (name_transfer_ledger.json): "
                         "per-row approve/reject that overrides --min-confidence "
                         "in both directions")
    ap.add_argument("--limit", type=int, default=0,
                    help="apply at most N rows; use for a first small batch")
    ap.add_argument("--apply", action="store_true")
    ap.add_argument("--out", default=None)
    args = ap.parse_args()

    with open(args.mapping) as fh:
        mapping = json.load(fh)
    crt_wall = None
    if args.crt_wall:
        with open(args.crt_wall) as fh:
            crt_wall = json.load(fh)

    ledger = None
    if args.ledger:
        with open(args.ledger) as fh:
            blob = json.load(fh)
        ledger = {e["b"].lower(): e for e in blob["entries"]}
        n_ok = sum(1 for e in ledger.values() if e.get("status") == "approve")
        print("Ledger: %d reviewed row(s) -- %d approved, %d rejected"
              % (len(ledger), n_ok, len(ledger) - n_ok))

    print("Loaded %d pairs from %s" % (len(mapping["pairs"]), args.mapping))
    if crt_wall:
        print("CRT wall: %d interior functions will be left anonymous"
              % len(crt_wall.get("crt_interior", [])))

    out_path = args.out or ("%s_sibling_annotations.txt" % args.program_name)
    project_path = os.path.abspath(args.project_path)

    # nocedit's convention per pair, for the signature step.
    conv_by_a = {p["a"]: p.get("conv") for p in mapping["pairs"]}

    # Parameters live in the source annotations, not in the mapping, so load
    # them here: the mapping records only what identifies a pair, and a
    # prototype is not part of that.
    sig_by_a = {}
    if args.signatures:
        src = sm.Image(mapping.get("from", "nocedit.exe"))
        for p in mapping["pairs"]:
            rec = src.by_addr.get(p["a"])
            if not rec:
                continue
            sig_by_a[p["a"]] = {"ret": rec.get("ret"),
                                "params": (rec.get("vars") or {}).get("params") or []}
        print("Loaded prototypes for %d source functions" % len(sig_by_a))

    import pyghidra
    print("Starting PyGhidra...")
    pyghidra.start()
    print("Opening %s/%s :: %s" % (project_path, args.project_name, args.program_name))
    code = 0
    try:
        project = pyghidra.open_project(project_path, args.project_name)
        with pyghidra.program_context(project, "/" + args.program_name) as program:
            fm = program.getFunctionManager()
            funcs = {}
            for f in fm.getFunctions(True):
                funcs["%08x" % f.getEntryPoint().getOffset()] = f
            current = {a: f.getName() for a, f in funcs.items()}
            # Live parameter counts, so the receiver gate can tell an
            # unsignatured target from one that can actually hold `this`.
            current_params = {a: f.getParameterCount() for a, f in funcs.items()}
            # Parameter 0's declared type, so the receiver gate can see a
            # wrong-class receiver and not just a missing one.
            current_receiver = {}
            for a, f in funcs.items():
                ps = f.getParameters()
                if len(ps):
                    current_receiver[a] = str(ps[0].getDataType().getName())
            print("Program has %d functions" % len(funcs))

            rows = plan(mapping, crt_wall, args.min_confidence,
                        args.signatures, current,
                        require_tu_match=not args.ignore_tu,
                        refresh_signatures=args.refresh_signatures,
                        ledger=ledger, current_params=current_params,
                        upgrade_class_only=args.upgrade_class_only,
                        current_receiver=current_receiver)
            for r in rows:
                r["conv"] = conv_by_a.get(r["a"])
                r["sig"] = sig_by_a.get(r["a"])
            missing = [r for r in rows if r["b"] not in funcs]
            for r in missing:
                r["action"] = "SKIP_NAMED"
                r["detail"] = "no function at this address in the program"

            counts = Counter(r["action"] for r in rows)

            lines = ["Sibling annotation report: %s <- %s"
                     % (args.program_name, mapping.get("from", "?")),
                     "mapping: %s   min-confidence: %.2f   signatures: %s"
                     % (args.mapping, args.min_confidence, bool(args.signatures)),
                     "mode: %s   %s"
                     % ("APPLY" if args.apply else "report",
                        "  ".join("%s=%d" % (k, counts[k]) for k in ORDER if counts[k])),
                     ""]
            for action in ORDER:
                sub = [r for r in rows if r["action"] == action]
                if not sub:
                    continue
                lines.append("== %s (%d) ==" % (action, len(sub)))
                for r in sub:
                    extra = ("  <- %s" % r["detail"]) if r["detail"] else ""
                    # SIG_ONLY keeps nocturne's name, so showing the name it
                    # declined to apply would read as though it had applied it.
                    shown = (r["current"] if action == "SIG_ONLY" else r["want"])
                    lines.append("  %s <- %s  %.2f  %-14s %s%s"
                                 % (r["b"], r["a"], r["confidence"], r["shape"],
                                    shown, extra))
                lines.append("")
            with open(out_path, "w") as fh:
                fh.write("\n".join(lines) + "\n")

            print("\n=== plan ===")
            for a in ORDER:
                if counts[a]:
                    print("  %-11s %d" % (a, counts[a]))
            print("Report written to: %s" % out_path)

            to_apply = [r for r in rows
                        if r["action"] in ("NAME", "NAME_SIG", "SIG_ONLY")
                        and r["b"] in funcs]
            if args.limit:
                # Prefer rows that exercise the signature path when sampling.
                to_apply.sort(key=lambda r: r["action"] not in ("NAME_SIG",
                                                                "SIG_ONLY"))
                to_apply = to_apply[:args.limit]
                print("[limit] applying only %d row(s)" % len(to_apply))
            if args.apply and to_apply:
                print("\n[apply] %d function(s)..." % len(to_apply))
                tx = program.startTransaction("Apply sibling annotations")
                ok, done = True, 0
                outcomes = Counter()
                dtm = program.getDataTypeManager()
                type_cache = {}
                failures = []
                try:
                    for r in to_apply:
                        try:
                            outcomes[apply_row(program, funcs[r["b"]], r,
                                               args.signatures, dtm,
                                               type_cache)] += 1
                            done += 1
                        except Exception as e:
                            # One prototype Ghidra will not accept must not
                            # cost the other two thousand: record it, leave
                            # that function as it was, and carry on.
                            outcomes["FAILED"] += 1
                            failures.append((r["b"], r.get("conv"),
                                             str(e).split("\n")[0][:90]))
                except Exception as e:
                    ok = False
                    print("ERROR: %s" % e)
                    import traceback
                    traceback.print_exc()
                finally:
                    program.endTransaction(tx, ok)
                if ok and done:
                    from ghidra.util.task import ConsoleTaskMonitor
                    for what, n in outcomes.most_common():
                        print("  %-16s %d" % (what, n))
                    if failures:
                        print("  %d function(s) Ghidra refused; left unchanged:"
                              % len(failures))
                        for addr, conv, msg in failures[:12]:
                            print("      %s  conv=%s  %s" % (addr, conv, msg))
                    unresolved = [t for t, dt in type_cache.items() if dt is None]
                    if unresolved:
                        print("  %d type(s) the target does not have, so those "
                              "signatures were left alone:" % len(unresolved))
                        for t in sorted(unresolved)[:15]:
                            print("      %s" % t)
                    print("Applied %d. Saving..." % done)
                    # project.save() alone silently discards program mutations.
                    program.getDomainFile().save(ConsoleTaskMonitor())
                    print("Saved.")
            elif not args.apply:
                print("\n[dry-run] re-run with --apply to execute.")
        project.close()
    except Exception as e:
        print("ERROR: %s" % e)
        import traceback
        traceback.print_exc()
        code = 1
    sys.stdout.flush()
    sys.stderr.flush()
    os._exit(code)


if __name__ == "__main__":
    main()

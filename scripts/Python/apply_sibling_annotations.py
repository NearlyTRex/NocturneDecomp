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
#   NAME_SIG    confidence + shape agree + sig_verdict == agree -> name & signature
#   NAME        passes the name gate, but the signature is unverified/conflicting
#   ALREADY     nocturne already carries this name
#   SKIP_CONF   below --min-confidence, or flagged ambiguous by the matcher
#   SKIP_SHAPE  bodies disagree too much in size to trust the pairing
#   SKIP_CRT    CRT interior: reachable only from other CRT, deliberately walled off
#   SKIP_NAMED  nocturne already has a class/method core that differs; never
#               clobbered, reported for review instead
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

ORDER = ["NAME_SIG", "NAME", "ALREADY", "SKIP_CONF", "SKIP_SHAPE",
         "SKIP_CRT", "SKIP_NAMED", "SKIP_TU"]


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
         require_tu_match=True, refresh_signatures=False):
    """Decide an action per pair without touching Ghidra."""
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
            # The confidence gate still applies. This branch sits above the
            # one below that enforces it, so without repeating it here refresh
            # would quietly signature every already-named function no matter
            # how weak its pairing -- which is not what --min-confidence says.
            row["action"] = ("NAME_SIG"
                             if (refresh_signatures and want_signatures
                                 and row["sig_verdict"] == "agree"
                                 and p["confidence"] >= min_confidence
                                 and not p.get("ambiguous"))
                             else "ALREADY")
        elif cur_core is not None:
            # A core already present is either hand-written or from an earlier
            # transfer; either way it is not this run's to overwrite.
            row["action"] = "SKIP_NAMED"
            row["detail"] = "already named %s" % cur
        elif tu_conflict:
            row["action"] = "SKIP_TU"
            row["detail"] = "unit disagrees: nocturne %s vs nocedit %s" % (
                cur_tu, edit_tu)
        elif p["confidence"] < min_confidence or p.get("ambiguous"):
            row["action"] = "SKIP_CONF"
            row["detail"] = ("ambiguous" if p.get("ambiguous")
                             else "confidence %.2f" % p["confidence"])
        elif row["shape"] in WEAK_SHAPES:
            row["action"] = "SKIP_SHAPE"
            row["detail"] = row["shape"]
        elif want_signatures and row["sig_verdict"] == "agree":
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


def apply_row(program, func, row, want_signatures, dtm=None, cache=None):
    """Set the name, and the full prototype where the signature is verified.

    Returns what was actually applied, so the report distinguishes a signature
    that transferred from one that was skipped for an unresolvable type.
    """
    from ghidra.program.model.symbol import SourceType

    func.setName(row["want"], SourceType.USER_DEFINED)
    if not (want_signatures and row["action"] == "NAME_SIG"):
        return "name"

    spec = row.get("sig")
    if not spec or dtm is None:
        if row.get("conv"):
            func.setCallingConvention(row["conv"])
        return "name+conv"

    built = build_signature(dtm, func, spec, cache if cache is not None else {})
    if built is None:
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
        return "name+signature"
    except Exception:
        # A failed updateFunction can leave storage half-assigned, and anything
        # that later enumerates parameters then throws as well -- the function
        # becomes unreadable rather than merely un-annotated. Reset it to
        # dynamic storage so it is at least consistent, and do NOT then set the
        # convention: doing that is what locked seven `crt_math.c` functions
        # into a broken state, because it pins a convention onto storage that
        # does not match it.
        try:
            func.setCustomVariableStorage(False)
        except Exception:
            pass
        return "name (prototype rejected)"


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
    ap.add_argument("--signatures", action="store_true",
                    help="also set the calling convention where sig_verdict==agree")
    ap.add_argument("--refresh-signatures", action="store_true",
                    help="also (re)apply signatures to already-named functions, "
                         "for prototypes blocked earlier by a missing type")
    ap.add_argument("--ignore-tu", action="store_true",
                    help="do not block on nocturne/nocedit translation-unit disagreement")
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
            print("Program has %d functions" % len(funcs))

            rows = plan(mapping, crt_wall, args.min_confidence,
                        args.signatures, current,
                        require_tu_match=not args.ignore_tu,
                        refresh_signatures=args.refresh_signatures)
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
                    lines.append("  %s <- %s  %.2f  %-14s %s%s"
                                 % (r["b"], r["a"], r["confidence"], r["shape"],
                                    r["want"], extra))
                lines.append("")
            with open(out_path, "w") as fh:
                fh.write("\n".join(lines) + "\n")

            print("\n=== plan ===")
            for a in ORDER:
                if counts[a]:
                    print("  %-11s %d" % (a, counts[a]))
            print("Report written to: %s" % out_path)

            to_apply = [r for r in rows
                        if r["action"] in ("NAME", "NAME_SIG") and r["b"] in funcs]
            if args.limit:
                # Prefer rows that exercise the signature path when sampling.
                to_apply.sort(key=lambda r: r["action"] != "NAME_SIG")
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

#!/usr/bin/env python3
"""Find functions in the suspect report whose flagged suspects are *entirely*
`warning_*` types, and run `prepare_keep.sh` on each. The keep generator
strips `/* WARNING: ... */` comment lines (and squeezes the orphaned blank
that bracketed them), so any function whose only sins are documentation
warnings can be cleared in one pass.

Usage:
    python3 scripts/Python/prepare_warning_only_keeps.py
        --dry-run            list candidates without running prepare_keep
        --report PATH        use a different suspect report
        --force              pass --force through to prepare_keep.sh
                             (overwrites any existing keep — be careful)
        --strip-existing     when a keep already exists, strip WARNING
                             comments in place instead of skipping. Catches
                             legacy keeps created before prepare_keep.sh
                             learned to strip them.

The report path defaults to
`annotations/nocedit.exe/reports/suspect_by_function.txt` relative to the
repo root.
"""

import argparse
import re
import subprocess
import sys
from pathlib import Path


REPO_ROOT = Path(__file__).resolve().parents[2]
DEFAULT_REPORT = REPO_ROOT / "annotations/nocedit.exe/reports/suspect_by_function.txt"
SRC_ROOT = REPO_ROOT / "annotations/nocedit.exe/pseudocode/src"
PREPARE_KEEP = REPO_ROOT / "scripts/Bash/prepare_keep.sh"


# Header line: `<fully_qualified_name>_FUN_<addr> (N suspects)`.
_FN_RE = re.compile(r"^(\S+_FUN_[0-9a-fA-F]+) \(\d+ suspects?\)$")
# Suspect line: `  Line 12 [some_type]: matched text`.
_SUSPECT_TYPE_RE = re.compile(r"^\s+Line \d+ \[(\w+)\]:")
# Section separators: runs of '=' on their own line. A function entry in
# the report is bracketed BY two separators (header above, suspects below):
#   ===
#   fn_name (N suspects)
#     File: ...
#   ===
#     Line X [type]: ...
#   <blank>
# So a naive split on `===` would put the header and the suspects in
# *different* halves. We do a streaming line-by-line walk instead.
_SEPARATOR_RE = re.compile(r"^={50,}$")


def parse_report(path: Path):
    """Yield (fn_name, [suspect_types]) for each function in the report.

    The report alternates between header blocks (function name + File:)
    and suspect blocks (one Line per suspect), bracketed by `===` rules.
    We walk the file line-by-line, latching the function name on a header
    line and flushing once we hit the next header (or EOF).
    """
    current_fn = None
    current_types: list[str] = []
    for raw in path.read_text().splitlines():
        line = raw.rstrip("\n")
        m_fn = _FN_RE.match(line)
        if m_fn:
            if current_fn is not None and current_types:
                yield current_fn, current_types
            current_fn = m_fn.group(1)
            current_types = []
            continue
        m_susp = _SUSPECT_TYPE_RE.match(line)
        if m_susp and current_fn is not None:
            current_types.append(m_susp.group(1))
    if current_fn is not None and current_types:
        yield current_fn, current_types


def find_source_file(fn: str):
    """Resolve a fully-qualified function name to its `.cpp`/`.c` source.

    The cpp tree is keyed off the trailing `_FUN_<addr>` so the address is
    enough — we just need the matching non-keep file.
    """
    m = re.search(r"_FUN_([0-9a-fA-F]+)$", fn)
    if not m:
        return None
    addr = m.group(1)
    # Files are named e.g. `CDeformableModelInstance_..._FUN_005a0d10.cpp`.
    # Glob both extensions, exclude any `.keep.*` siblings.
    candidates = []
    for ext in (".cpp", ".c"):
        candidates += list(SRC_ROOT.glob(f"**/*FUN_{addr}{ext}"))
    candidates = [c for c in candidates if ".keep." not in c.name]
    if not candidates:
        return None
    # Prefer an exact match if multiple addresses collide (shouldn't happen
    # in practice but be defensive).
    for c in candidates:
        if c.stem.endswith(f"_FUN_{addr}"):
            return c
    return candidates[0]


def keep_path_for(src: Path) -> Path:
    """Map a `.cpp`/`.c` source path to its `.keep.cpp`/`.keep.c` sibling."""
    if src.suffix == ".cpp":
        return src.with_suffix(".keep.cpp")
    if src.suffix == ".c":
        return src.with_suffix(".keep.c")
    raise ValueError(f"unexpected extension: {src}")


# Match a single-line `/* WARNING: ... */` (whitespace either side OK).
_WARNING_LINE_RE = re.compile(r"^\s*/\*\s*WARNING:.*\*/\s*$")


def strip_warnings_in_place(keep: Path) -> int:
    """Strip `/* WARNING: ... */` lines from an existing keep.

    Mirrors the sed pass in `prepare_keep.sh`: deletes the WARNING line
    itself, and if the immediately following line is blank, eats that
    blank too so the surrounding whitespace stays tight.

    Returns the number of WARNING lines removed.
    """
    lines = keep.read_text().splitlines(keepends=True)
    out: list[str] = []
    i = 0
    removed = 0
    while i < len(lines):
        if _WARNING_LINE_RE.match(lines[i].rstrip("\n")):
            removed += 1
            # Eat trailing blank if present.
            if i + 1 < len(lines) and lines[i + 1].strip() == "":
                i += 2
            else:
                i += 1
            continue
        out.append(lines[i])
        i += 1
    if removed:
        keep.write_text("".join(out))
    return removed


def main():
    ap = argparse.ArgumentParser(description=__doc__,
                                 formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument("--report", type=Path, default=DEFAULT_REPORT,
                    help="suspect report path (default: %(default)s)")
    ap.add_argument("--dry-run", action="store_true",
                    help="list candidates without running prepare_keep")
    ap.add_argument("--force", action="store_true",
                    help="pass --force to prepare_keep.sh (overwrites existing keeps)")
    ap.add_argument("--strip-existing", action="store_true",
                    help="when a keep already exists, strip WARNING comments "
                         "in place instead of skipping")
    args = ap.parse_args()

    if not args.report.exists():
        print(f"ERROR: report not found: {args.report}", file=sys.stderr)
        return 2

    candidates = []
    for fn, types in parse_report(args.report):
        if all(t.startswith("warning_") for t in types):
            candidates.append((fn, types))

    print(f"{len(candidates)} function(s) with warning-only suspects")

    if args.dry_run:
        for fn, types in candidates:
            print(f"  {fn}  ({', '.join(sorted(set(types)))})")
        return 0

    ran = 0
    skipped = 0
    stripped = 0           # in-place WARNING strips on existing keeps
    stripped_no_op = 0     # existing keep had nothing to strip
    missing = []
    for fn, _ in candidates:
        src = find_source_file(fn)
        if src is None:
            missing.append(fn)
            continue

        keep = keep_path_for(src)
        if args.strip_existing and keep.exists() and not args.force:
            # Existing keep + strip mode: skip prepare_keep, sed in place.
            removed = strip_warnings_in_place(keep)
            if removed:
                print(f"  STRIP  {keep} ({removed} WARNING line"
                      f"{'s' if removed != 1 else ''})")
                stripped += 1
            else:
                stripped_no_op += 1
            continue

        cmd = [str(PREPARE_KEEP)]
        if args.force:
            cmd.append("--force")
        cmd.append(str(src))
        result = subprocess.run(cmd, capture_output=True, text=True)
        # prepare_keep prints `  OK  <path>` on success, `  WARN ...` on
        # skip-existing. Forward both so the user sees a single tally.
        sys.stdout.write(result.stdout)
        if result.returncode != 0:
            sys.stderr.write(result.stderr)
        if "  OK  " in result.stdout:
            ran += 1
        elif "  WARN" in result.stdout or "  SKIP" in result.stdout:
            skipped += 1

    print()
    parts = [f"Ran prepare_keep on {ran}"]
    if args.strip_existing:
        parts.append(f"stripped WARNINGs in {stripped} existing keep"
                     f"{'s' if stripped != 1 else ''}")
        if stripped_no_op:
            parts.append(f"{stripped_no_op} existing keep"
                         f"{'s' if stripped_no_op != 1 else ''} already clean")
    parts.append(f"skipped {skipped} existing")
    parts.append(f"missing source for {len(missing)}")
    print(", ".join(parts))
    for fn in missing:
        print(f"  MISS  {fn}")
    return 0


if __name__ == "__main__":
    sys.exit(main())

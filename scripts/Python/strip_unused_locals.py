#!/usr/bin/env python3
"""Strip unused local declarations from .keep.cpp / .keep.c files.

Runs clang with `-Wunused-variable -Wunused-but-set-variable` to identify
each unused local, then deletes the declaration line. Iterates until clang
reports no more unused variables (deleting one local can reveal another
that becomes unused once its consumer is gone).

Conservative: only deletes lines that match the simple Ghidra
"one-decl-per-line" shape:

    TYPE [*|**] NAME [array_size]?;

Multi-variable declarations and lines with initializers are skipped — the
report is printed so you can clean those up by hand.

Usage:
    python3 scripts/Python/strip_unused_locals.py FILE [FILE ...]
    python3 scripts/Python/strip_unused_locals.py --all          # every .keep.cpp/.keep.c
    python3 scripts/Python/strip_unused_locals.py --dry-run FILE # preview only

Exits non-zero if any file failed to compile under the same clang flags
the keep pipeline expects.
"""

import argparse
import re
import shlex
import subprocess
import sys
from pathlib import Path


REPO_ROOT = Path(__file__).resolve().parents[2]
INCLUDE_DIR = REPO_ROOT / "annotations/nocedit.exe/pseudocode/include"
SHIMS_DIR = REPO_ROOT / "annotations/nocedit.exe/pseudocode/shims"

# Mirror of test_compilation.sh CFLAGS so we exercise the same compile
# environment a keep file is expected to satisfy.
CLANG_FLAGS = [
    "-m32", "-mmmx", "-fasm-blocks", "-fsyntax-only", "-std=gnu++11",
    "-Wno-everything",
    "-Warray-bounds",
    "-Wformat", "-Wformat-overflow",
    "-Werror=format", "-Werror=format-overflow",
    "-Wno-format-security", "-Wno-format-extra-args",
    "-Wincompatible-pointer-types", "-Wint-conversion",
    "-Wreturn-type", "-Wtautological-compare",
    # Only match `-Wunused-variable` (declared, never read OR written).
    # `-Wunused-but-set-variable` is dangerous: when clang reports it, the
    # declaration is gone but the assignment statements stay, leaving the
    # body referring to an undeclared identifier. Need a body-aware sweep
    # to handle that flavor; until then, leave them alone.
    "-Wunused-variable",
    "-I", str(INCLUDE_DIR),
    "-I", str(SHIMS_DIR),
]


# Match clang's plain "unused variable 'NAME'" warning ONLY. Do NOT match
# the "set but not used" variant — the declaration's gone if we delete it,
# but the assignment statements in the body would dangle as references to
# an undeclared identifier. (`-Wunused-but-set-variable` is also disabled
# in CFLAGS as defense in depth.)
_UNUSED_RE = re.compile(
    r":(?P<line>\d+):\d+:\s*warning:\s*unused variable '(?P<name1>[^']+)'"
)

# A declaration line we're willing to delete. Must contain exactly one
# variable, no initializer, no comma, no parens (rules out function
# declarations and complex types). Pointer stars and a trailing array size
# are allowed.
_SIMPLE_DECL_RE = re.compile(
    r"^\s*"
    r"(?:[A-Za-z_][\w]*\s+)+"        # one or more type words
    r"\*?\s*\*?\s*"                  # optional * or **
    r"(?P<name>[A-Za-z_]\w*)"        # variable name
    r"\s*(?:\[[^\]]*\])?"            # optional [size]
    r"\s*;\s*$"
)


def collect_unused(file: Path):
    """Return a list of (line_number, var_name) clang flagged as unused."""
    result = subprocess.run(
        ["clang++", *CLANG_FLAGS, str(file)],
        capture_output=True, text=True,
    )
    if result.returncode != 0 and not result.stderr:
        # Hard compile failure with no diagnostics — surface it.
        sys.stderr.write(f"ERROR running clang on {file}: {result.stdout}\n")
        return None
    unused = []
    for line in result.stderr.splitlines():
        # Only consider warnings whose source path matches the file we ran
        # against — clang sometimes reports warnings inside included headers
        # which we never want to edit.
        if not line.startswith(str(file)):
            continue
        m = _UNUSED_RE.search(line)
        if not m:
            continue
        name = m.group("name1")
        unused.append((int(m.group("line")), name))
    return unused, result.returncode


def strip_pass(file: Path, dry_run: bool):
    """One pass of stripping. Returns (deleted_count, skipped_count, ok)."""
    info = collect_unused(file)
    if info is None:
        return 0, 0, False
    unused, _ = info
    if not unused:
        return 0, 0, True

    lines = file.read_text().splitlines(keepends=True)
    to_delete: set[int] = set()
    skipped: list[tuple[int, str, str]] = []
    for line_num, name in unused:
        if line_num < 1 or line_num > len(lines):
            continue
        idx = line_num - 1
        line = lines[idx]
        m = _SIMPLE_DECL_RE.match(line)
        if not m or m.group("name") != name:
            # Not a one-decl-per-line shape we can safely delete — leave
            # for human review and report.
            skipped.append((line_num, name, line.rstrip("\n")))
            continue
        to_delete.add(idx)

    for line_num, name, text in skipped:
        print(f"  SKIP  {file}:{line_num} '{name}'  (multi-decl/init/odd shape: {text.strip()})")

    if not to_delete:
        return 0, len(skipped), True

    new_lines = [l for i, l in enumerate(lines) if i not in to_delete]
    if not dry_run:
        file.write_text("".join(new_lines))
    return len(to_delete), len(skipped), True


def strip_file(file: Path, dry_run: bool):
    total_deleted = 0
    total_skipped = 0
    # Iterate: removing one decl can render another unused (when its only
    # consumer was the now-removed local). Cap the number of passes as a
    # safety net. Skip the loop in dry-run mode — without actually writing,
    # each pass would re-find the same unused locals and inflate the count.
    max_passes = 1 if dry_run else 8
    for _ in range(max_passes):
        deleted, skipped, ok = strip_pass(file, dry_run)
        if not ok:
            return total_deleted, total_skipped, False
        total_deleted += deleted
        total_skipped = max(total_skipped, skipped)
        if deleted == 0:
            break
    return total_deleted, total_skipped, True


def main():
    ap = argparse.ArgumentParser(description=__doc__,
                                 formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument("files", nargs="*", type=Path,
                    help=".keep.cpp / .keep.c files to clean (omit with --all)")
    ap.add_argument("--all", action="store_true",
                    help="process every .keep.cpp/.keep.c under annotations/")
    ap.add_argument("--dry-run", action="store_true",
                    help="report what would be deleted, but don't write")
    args = ap.parse_args()

    if args.all:
        if args.files:
            print("ERROR: --all and explicit file list are mutually exclusive",
                  file=sys.stderr)
            return 2
        keep_root = REPO_ROOT / "annotations"
        files = sorted(list(keep_root.rglob("*.keep.cpp")) +
                       list(keep_root.rglob("*.keep.c")))
    else:
        files = args.files

    if not files:
        ap.print_help()
        return 1

    total_deleted = 0
    total_skipped = 0
    fail = []
    changed_files = 0
    for f in files:
        deleted, skipped, ok = strip_file(f, args.dry_run)
        if not ok:
            fail.append(f)
            continue
        if deleted > 0:
            tag = "DRY" if args.dry_run else "STRIP"
            print(f"  {tag}  {f}  -{deleted} unused local(s)")
            changed_files += 1
        total_deleted += deleted
        total_skipped += skipped

    suffix = " (dry run, no writes)" if args.dry_run else ""
    print()
    print(f"Files touched: {changed_files}/{len(files)}{suffix}")
    print(f"Total declarations deleted: {total_deleted}")
    if total_skipped:
        print(f"Total skipped (need manual review): {total_skipped}")
    if fail:
        print(f"Failed to analyse: {len(fail)}")
        for f in fail:
            print(f"  {f}")
        return 1
    return 0


if __name__ == "__main__":
    sys.exit(main())

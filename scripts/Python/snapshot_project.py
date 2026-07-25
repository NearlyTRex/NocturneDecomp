#!/usr/bin/env python3
"""
snapshot_project.py

Create a Ghidra project archive (.gar) of a NocturneDecomp Ghidra project, for a
restorable snapshot before a destructive/headless mutation pass (delete_function,
fix_function_boundaries --apply, validate_function_ranges --fix, ...).

This does NOT need Ghidra/pyghidra running - a .gar is a plain deflate zip with a
known layout, so we reproduce Ghidra's own File > Archive Current Project output
byte-for-byte in structure. That means it stays usable even when the project is
locked or won't open, and it is fast (no JVM startup).

The layout Ghidra's ArchiveTask writes (verified against existing projects/*.gar):
  * <Name>.gpr            - the project marker file, at the archive root
  * JAR_FORMAT            - a zero-length marker entry
  * user/ versioned/ idata/ ...
                         - the <Name>.rep SUBDIRECTORIES, recursed in, arcnames
                           relative to the .rep dir; *.ulock lock files excluded
  * top-level .rep files (project.prp, projectState) are NOT archived - Ghidra's
    own archiver only recurses subdirectories, and restore regenerates them
  * zip comment: "Ghidra archive file for <Name> project."

Restore with Ghidra's front-end: File > Restore Project, pick the .gar.

Usage:
    python3 snapshot_project.py <project_dir> <project_name> [--out FILE]
                                [--date YYYY_MM_DD] [--tag TEXT] [--force]

    # default output: <project_dir>/<name>_<today>.gar (auto -2/-3 on collision)
    python3 snapshot_project.py /abs/projects NocturneEdit
    python3 snapshot_project.py /abs/projects NocturneEdit --tag pre-delete
"""

import argparse
import datetime
import os
import sys
import zipfile

LOCK_SUFFIX = ".ulock"   # the only extension Ghidra's JarWriter excludes


def collect_entries(gpr_path, rep_path, name):
    """Return an ordered list of (arcname, abspath_or_None) entries.

    abspath_or_None is None for the zero-length JAR_FORMAT marker.
    Mirrors ghidra.app.plugin.core.archive.ArchiveTask.run().
    """
    entries = []
    # 1. the .gpr marker file, at the archive root, stored under its own name
    entries.append(("%s.gpr" % name, gpr_path))
    # 2. the JAR_FORMAT zero-length marker
    entries.append(("JAR_FORMAT", None))
    # 3. each SUBDIRECTORY of the .rep, recursed; top-level files are skipped
    for child in sorted(os.listdir(rep_path)):
        child_path = os.path.join(rep_path, child)
        if not os.path.isdir(child_path):
            continue  # ArchiveTask only recurses directories (skips project.prp etc.)
        for root, _dirs, files in os.walk(child_path):
            for fn in sorted(files):
                if fn.endswith(LOCK_SUFFIX):
                    continue
                full = os.path.join(root, fn)
                arc = os.path.relpath(full, rep_path).replace(os.sep, "/")
                entries.append((arc, full))
    return entries


def write_archive(out_path, entries, comment):
    with zipfile.ZipFile(out_path, "w", zipfile.ZIP_DEFLATED) as zf:
        for arc, src in entries:
            if src is None:
                zf.writestr(arc, b"")            # JAR_FORMAT marker
            else:
                zf.write(src, arc)
        zf.comment = comment.encode("utf-8")


def verify_archive(out_path, entries, comment):
    """Re-open and sanity-check the produced archive. Returns list of problems."""
    problems = []
    want = [a for a, _ in entries]
    with zipfile.ZipFile(out_path, "r") as zf:
        bad = zf.testzip()
        if bad is not None:
            problems.append("CRC failure on entry: %s" % bad)
        got = zf.namelist()
        if "JAR_FORMAT" not in got:
            problems.append("missing JAR_FORMAT marker")
        gpr = [a for a in want if a.endswith(".gpr")]
        if gpr and gpr[0] not in got:
            problems.append("missing %s marker file" % gpr[0])
        missing = set(want) - set(got)
        if missing:
            problems.append("%d ent(y/ies) missing from archive" % len(missing))
        if zf.comment.decode("utf-8", "replace") != comment:
            problems.append("archive comment mismatch")
    return problems


def choose_out_path(project_dir, name, date_tag, extra_tag):
    stem = "%s_%s" % (name, date_tag)
    if extra_tag:
        stem += "_" + extra_tag
    candidate = os.path.join(project_dir, stem + ".gar")
    n = 2
    while os.path.exists(candidate):
        candidate = os.path.join(project_dir, "%s-%d.gar" % (stem, n))
        n += 1
    return candidate


def main():
    p = argparse.ArgumentParser(
        description="Create a Ghidra .gar snapshot of a project (no Ghidra needed).")
    p.add_argument("project_dir", help="dir holding <name>.gpr and <name>.rep (e.g. /abs/projects)")
    p.add_argument("project_name", help="project name, e.g. NocturneEdit")
    p.add_argument("--out", default=None, help="output .gar path (default: <dir>/<name>_<date>.gar)")
    p.add_argument("--date", default=None, help="date tag for the default name (default: today, YYYY_MM_DD)")
    p.add_argument("--tag", default=None, help="extra label appended to the default name, e.g. pre-delete")
    p.add_argument("--force", action="store_true", help="overwrite --out if it already exists")
    args = p.parse_args()

    project_dir = os.path.abspath(args.project_dir)
    name = args.project_name
    gpr_path = os.path.join(project_dir, "%s.gpr" % name)
    rep_path = os.path.join(project_dir, "%s.rep" % name)

    for path, what in ((gpr_path, "project file"), (rep_path, "project database dir")):
        if not os.path.exists(path):
            print("ERROR: %s not found: %s" % (what, path))
            sys.exit(1)

    # Warn (do not block) if a lock is present - archiving a live-open project is
    # fine (that is the GUI's normal case), but unsaved in-memory changes will not
    # be on disk yet and therefore not in the snapshot.
    lock = os.path.join(project_dir, "%s.lock" % name)
    if os.path.exists(lock):
        print("NOTE: %s.lock present - project may be open; snapshot captures the "
              "on-disk (last-saved) state only." % name)

    date_tag = args.date or datetime.date.today().strftime("%Y_%m_%d")
    if args.out:
        out_path = os.path.abspath(args.out)
        if os.path.exists(out_path) and not args.force:
            print("ERROR: %s already exists (use --force to overwrite)" % out_path)
            sys.exit(1)
    else:
        out_path = choose_out_path(project_dir, name, date_tag, args.tag)

    comment = "Ghidra archive file for %s project." % name
    entries = collect_entries(gpr_path, rep_path, name)
    file_entries = [e for e in entries if e[1] is not None]

    print("Snapshotting %s -> %s" % (name, out_path))
    print("  %d file entrie(s) + JAR_FORMAT marker + %s.gpr" % (len(file_entries) - 1, name))
    write_archive(out_path, entries, comment)

    problems = verify_archive(out_path, entries, comment)
    size = os.path.getsize(out_path)
    print("  wrote %.1f MiB" % (size / (1024.0 * 1024.0)))
    if problems:
        print("!! verification found %d problem(s):" % len(problems))
        for pr in problems:
            print("   - %s" % pr)
        sys.exit(2)
    print("  verified: JAR_FORMAT + %s.gpr present, all entries readable, comment OK" % name)
    print("Snapshot OK. Restore via Ghidra front-end: File > Restore Project.")


if __name__ == "__main__":
    main()

#!/usr/bin/env python3
"""Delete Ghidra's "Failed to disassemble" bookmarks that no longer apply.

Ghidra leaves an Error bookmark (category "Bad Instruction") where a flow ran into
bytes it could not decode, and never removes it. Once the bad function is deleted
or the code redisassembled, an instruction starts at the bookmark's address and
the bookmark is stale; report_bad_instructions.py marks those STALE from the
export. This removes them from the program itself, so the next export drops them.

A bookmark still in the middle of an instruction is kept: Watcom's strstr jumps
into `test ax,0xcf89` on purpose, and anything else there is a live misdecode.

Report-first; --apply removes and saves.

    python3 -u scripts/Python/clear_stale_bookmarks.py <ABS_project_path> <project_name> bw1.exe bw3.exe
    python3 -u scripts/Python/clear_stale_bookmarks.py <ABS_project_path> <project_name> bw1.exe --apply
"""

import argparse
import os
import sys

TYPE = "Error"
CATEGORY = "Bad Instruction"


def stale_bookmarks(program):
    """([stale], [kept]) Bad Instruction bookmarks, by whether an instruction starts at each now."""
    listing = program.getListing()
    stale, kept = [], []
    for bookmark in program.getBookmarkManager().getBookmarksIterator():
        if bookmark.getTypeString() != TYPE or bookmark.getCategory() != CATEGORY:
            continue
        (stale if listing.getInstructionAt(bookmark.getAddress()) is not None else kept).append(bookmark)
    return stale, kept


def remove(program, bookmarks):
    tx = program.startTransaction("Clear stale Bad Instruction bookmarks")
    ok = False
    try:
        manager = program.getBookmarkManager()
        for bookmark in bookmarks:
            manager.removeBookmark(bookmark)
        ok = True
    finally:
        program.endTransaction(tx, ok)


def run(program, do_apply, log=print):
    """Report (and with do_apply remove) one program's stale bookmarks; True if it changed."""
    stale, kept = stale_bookmarks(program)
    log("%s: %d stale, %d kept" % (program.getName(), len(stale), len(kept)))
    for bookmark in stale:
        log("  stale  %s  %s" % (bookmark.getAddress(), bookmark.getComment()))
    for bookmark in kept:
        log("  kept   %s  %s" % (bookmark.getAddress(), bookmark.getComment()))
    if do_apply and stale:
        remove(program, stale)
        return True
    return False


def main(argv=None):
    ap = argparse.ArgumentParser(description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument("project_path")
    ap.add_argument("project_name")
    ap.add_argument("programs", nargs="+")
    ap.add_argument("--apply", action="store_true")
    args = ap.parse_args(argv)
    import pyghidra
    pyghidra.start()
    project = pyghidra.open_project(os.path.abspath(args.project_path), args.project_name)
    try:
        for name in args.programs:
            with pyghidra.program_context(project, "/" + name) as program:
                if run(program, args.apply):
                    from ghidra.util.task import ConsoleTaskMonitor
                    program.getDomainFile().save(ConsoleTaskMonitor())
    finally:
        project.close()
    if not args.apply:
        print("(dry run -- --apply removes the stale ones)")
    return 0


if __name__ == "__main__":
    sys.exit(main())

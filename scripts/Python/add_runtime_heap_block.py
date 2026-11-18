#!/usr/bin/env python3
# Map the uninitialized tail of .bss that Ghidra's PE loader drops.
#
# Watcom writes VirtualSize=0 for every section and relies on SizeOfRawData, so
# .bss declares a huge SizeOfRawData with PointerToRawData=0. Ghidra's importer
# clamps such a block to the size of the file on disk, which leaves the rest of
# .bss -- tens of megabytes of real globals -- with no memory block at all.
#
# Nothing can be defined at those addresses: the decompiler emits bare
# `_DAT_xxxxxxxx` reads it cannot type, which is where the "Globals starting
# with '_' overlap smaller symbols at the same address" warnings come from.
#
# nocturne.exe, before:
#   .bss     005c5000 - 007a09ff   (1,948,160 == the exact file size)
#   <38 MB unmapped hole, 18k references into it>
#   .reloc   02de6000 - 02dfe9ff
#
# nocedit.exe already has this fixed by hand, as a block named RUNTIME_HEAP;
# this script reproduces that as a repeatable operation.
#
# The range is derived from the PE section table and cross-checked against the
# actual hole between the .bss block and the block that follows it. If the two
# disagree the script refuses to act.
#
# Report-first; --apply mutates + saves, after a .gar snapshot unless --no-snapshot.
#
# Usage (PyGhidra headless):
#   python add_runtime_heap_block.py <project_dir> <project_name> <program_name> <exe_path>
#   python add_runtime_heap_block.py /abs/projects NocturneEdit nocturne.exe /abs/nocturne.exe
#   python add_runtime_heap_block.py /abs/projects NocturneEdit nocturne.exe /abs/nocturne.exe --apply
#
# Note: pass ABSOLUTE paths and set GHIDRA_INSTALL_DIR, per the other headless
# scripts in this directory.
#
#@author NearlyTRex
#@category Annotations

import os
import subprocess
import sys
import traceback
import argparse

from extract_line_pins import parse_pe

THIS_DIR = os.path.dirname(os.path.abspath(__file__))

DEFAULT_BLOCK_NAME = "RUNTIME_HEAP"

# Exit codes: done or nothing to do, the block could not be created, the hole disagrees with the PE
OK, FAILED, REFUSED = 0, 1, 2


def pe_bss_extent(exe_path, section_name=".bss"):
    """(start_va, end_va_inclusive) that the PE declares for the section.

    VirtualSize is 0 in these images, so SizeOfRawData is the authority.
    """
    with open(exe_path, "rb") as fh:
        data = fh.read()
    _, sections = parse_pe(data)
    for sec in sections:
        if sec.name == section_name:
            size = sec.vsize or sec.raw_size
            return sec.va, sec.va + size - 1
    raise ValueError("no %s section in %s" % (section_name, exe_path))


def find_hole(program, section_name=".bss"):
    """(block, gap_start, gap_end_inclusive) between section_name and the next block.

    The gap is (None, None) when the next block follows on directly, or when
    section_name is the last block, so there is no next block to bound it.
    """
    blocks = sorted(program.getMemory().getBlocks(),
                    key=lambda b: b.getStart().getOffset())
    for i, b in enumerate(blocks):
        if b.getName() != section_name:
            continue
        end = b.getEnd().getOffset()
        if i + 1 >= len(blocks):
            return b, None, None
        nxt = blocks[i + 1].getStart().getOffset()
        if nxt <= end + 1:
            return b, None, None
        return b, end + 1, nxt - 1
    raise ValueError("no %s block in the program" % section_name)


def plan(program, section, pe_end):
    """Check the hole against the PE. Returns (exit code, (start, size) to create or None)."""
    block, gap_start, gap_end = find_hole(program, section)
    print("Ghidra %s block: %s - %s (%d bytes)"
          % (section, block.getStart(), block.getEnd(), block.getSize()))
    if gap_start is None:
        print("No hole after %s -- nothing to do." % section)
        return OK, None

    size = gap_end - gap_start + 1
    print("Unmapped hole: %08x - %08x (%d bytes)" % (gap_start, gap_end, size))

    # The hole must contain the whole PE-declared tail. It may run slightly PAST
    # the PE-declared end: sections are padded up to SectionAlignment, so a few
    # hundred bytes of padding usually sit between the declared end of .bss and
    # the start of the next section. Filling that in too avoids leaving a
    # pointless unmapped sliver behind.
    if not gap_start <= pe_end <= gap_end:
        print("REFUSING: PE-declared %s end %08x is outside the hole %08x-%08x."
              % (section, pe_end, gap_start, gap_end))
        return REFUSED, None

    padding = gap_end - pe_end
    print("Hole covers the PE-declared %s tail%s."
          % (section, " plus %d byte(s) of section-alignment padding" % padding if padding else ""))
    return OK, (gap_start, size)


def create_block(program, name, section, start, size):
    """Create the uninitialized block in one transaction. True when it was created."""
    start_addr = program.getAddressFactory().getDefaultAddressSpace().getAddress(start)
    tx = program.startTransaction("Add %s memory block" % name)
    ok = True
    try:
        new_block = program.getMemory().createUninitializedBlock(name, start_addr, size, False)
        new_block.setRead(True)
        new_block.setWrite(True)
        new_block.setExecute(False)
        new_block.setSourceName("add_runtime_heap_block.py")
        new_block.setComment(
            "Uninitialized tail of %s that the PE loader clamped away "
            "(VirtualSize=0; SizeOfRawData is the authority)." % section)
        print("Created %s at %08x (%d bytes)" % (name, start, size))
    except Exception as e:
        ok = False
        print("ERROR creating block: %s" % e)
    finally:
        program.endTransaction(tx, ok)
    return ok


def run(program, args, pe_end):
    """Report, and with --apply create the block and save. Returns the exit code."""
    code, todo = plan(program, args.section, pe_end)
    if todo is None:
        return code
    start, size = todo
    if not args.apply:
        print("\n[dry-run] would create uninitialized block %r at %08x, "
              "%d bytes (r=True w=True x=False)" % (args.name, start, size))
        print("re-run with --apply to execute.")
        return OK
    if not create_block(program, args.name, args.section, start, size):
        return FAILED
    from ghidra.util.task import ConsoleTaskMonitor
    print("Saving program database...")
    program.getDomainFile().save(ConsoleTaskMonitor())
    print("Saved.")
    return OK


def snapshot(args):
    cmd = [sys.executable, os.path.join(THIS_DIR, "snapshot_project.py"),
           os.path.abspath(args.project_path), args.project_name, "--tag", "pre-runtime-heap"]
    print("Snapshot: %s" % " ".join(cmd))
    return subprocess.call(cmd) == 0


def main(argv=None):
    p = argparse.ArgumentParser(
        description="Map the unmapped tail of .bss as an uninitialized block.")
    p.add_argument("project_path")
    p.add_argument("project_name")
    p.add_argument("program_name")
    p.add_argument("exe_path", help="the on-disk PE, for the section table")
    p.add_argument("--section", default=".bss")
    p.add_argument("--name", default=DEFAULT_BLOCK_NAME)
    p.add_argument("--apply", action="store_true",
                   help="Create the block + save the program (default: report only)")
    p.add_argument("--no-snapshot", action="store_true", help="--apply without a .gar snapshot first")
    args = p.parse_args(argv)

    project_path = os.path.abspath(args.project_path)
    pe_start, pe_end = pe_bss_extent(os.path.abspath(args.exe_path), args.section)
    print("PE %s declares: %08x - %08x (%d bytes)"
          % (args.section, pe_start, pe_end, pe_end - pe_start + 1))

    if args.apply and not args.no_snapshot and not snapshot(args):
        print("Snapshot failed - refusing to mutate.", flush=True)
        os._exit(FAILED)

    import pyghidra
    print("Starting PyGhidra...")
    pyghidra.start()
    print("Opening %s/%s :: %s" % (project_path, args.project_name, args.program_name))

    code = FAILED
    project = pyghidra.open_project(project_path, args.project_name)
    try:
        with pyghidra.program_context(project, "/" + args.program_name) as program:
            code = run(program, args, pe_end)
    except Exception as e:
        print("ERROR: %s" % e)
        traceback.print_exc()
    finally:
        project.close()

    sys.stdout.flush()
    sys.stderr.flush()
    os._exit(code)


if __name__ == "__main__":
    main()

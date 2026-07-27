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
# Report-first; --apply mutates + saves.
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
import sys
import argparse

THIS_DIR = os.path.dirname(os.path.abspath(__file__))
if THIS_DIR not in sys.path:
    sys.path.insert(0, THIS_DIR)

from extract_line_pins import parse_pe

DEFAULT_BLOCK_NAME = "RUNTIME_HEAP"


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
    """(block, gap_start, gap_end_inclusive) between section_name and the next block."""
    blocks = sorted(program.getMemory().getBlocks(),
                    key=lambda b: b.getStart().getOffset())
    for i, b in enumerate(blocks):
        if b.getName() != section_name:
            continue
        end = b.getEnd().getOffset()
        if i + 1 >= len(blocks):
            return b, end + 1, None
        nxt = blocks[i + 1].getStart().getOffset()
        if nxt <= end + 1:
            return b, None, None  # no hole
        return b, end + 1, nxt - 1
    raise ValueError("no %s block in the program" % section_name)


def main():
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
    args = p.parse_args()

    project_path = os.path.abspath(args.project_path)
    exe_path = os.path.abspath(args.exe_path)

    pe_start, pe_end = pe_bss_extent(exe_path, args.section)
    print("PE %s declares: %08x - %08x (%d bytes)"
          % (args.section, pe_start, pe_end, pe_end - pe_start + 1))

    import pyghidra
    print("Starting PyGhidra...")
    pyghidra.start()
    print("Opening %s/%s :: %s" % (project_path, args.project_name, args.program_name))

    code = 0
    try:
        project = pyghidra.open_project(project_path, args.project_name)
        with pyghidra.program_context(project, "/" + args.program_name) as program:
            block, gap_start, gap_end = find_hole(program, args.section)
            print("Ghidra %s block: %s - %s (%d bytes)"
                  % (args.section, block.getStart(), block.getEnd(), block.getSize()))

            if gap_start is None or gap_end is None:
                print("No hole after %s -- nothing to do." % args.section)
                project.close()
                sys.stdout.flush(); os._exit(0)

            size = gap_end - gap_start + 1
            print("Unmapped hole: %08x - %08x (%d bytes)" % (gap_start, gap_end, size))

            # The hole must start exactly where the loaded block ends, and must
            # contain the whole PE-declared tail. It may run slightly PAST the
            # PE-declared end: sections are padded up to SectionAlignment, so a
            # few hundred bytes of padding usually sit between the declared end
            # of .bss and the start of the next section. Filling that in too
            # avoids leaving a pointless unmapped sliver behind.
            if gap_start != block.getEnd().getOffset() + 1:
                print("REFUSING: hole starts at %08x but the %s block ends at %08x."
                      % (gap_start, args.section, block.getEnd().getOffset()))
                project.close()
                sys.stdout.flush(); os._exit(2)
            if not (gap_start <= pe_end <= gap_end):
                print("REFUSING: PE-declared %s end %08x is outside the hole %08x-%08x."
                      % (args.section, pe_end, gap_start, gap_end))
                project.close()
                sys.stdout.flush(); os._exit(2)

            padding = gap_end - pe_end
            print("Hole covers the PE-declared %s tail%s."
                  % (args.section,
                     " plus %d byte(s) of section-alignment padding" % padding
                     if padding else ""))

            if not args.apply:
                print("\n[dry-run] would create uninitialized block %r at %08x, "
                      "%d bytes (r=True w=True x=False)" % (args.name, gap_start, size))
                print("re-run with --apply to execute.")
                project.close()
                sys.stdout.flush(); os._exit(0)

            space = program.getAddressFactory().getDefaultAddressSpace()
            start_addr = space.getAddress(gap_start)
            tx = program.startTransaction("Add %s memory block" % args.name)
            ok = True
            try:
                new_block = program.getMemory().createUninitializedBlock(
                    args.name, start_addr, size, False)
                new_block.setRead(True)
                new_block.setWrite(True)
                new_block.setExecute(False)
                new_block.setSourceName("add_runtime_heap_block.py")
                new_block.setComment(
                    "Uninitialized tail of %s that the PE loader clamped away "
                    "(VirtualSize=0; SizeOfRawData is the authority)." % args.section)
                print("Created %s at %08x (%d bytes)" % (args.name, gap_start, size))
            except Exception as e:
                ok = False
                print("ERROR creating block: %s" % e)
                import traceback
                traceback.print_exc()
            finally:
                program.endTransaction(tx, ok)

            if ok:
                from ghidra.util.task import ConsoleTaskMonitor
                print("Saving program database...")
                program.getDomainFile().save(ConsoleTaskMonitor())
                print("Saved.")
            else:
                code = 1
        project.close()
    except Exception as e:
        print("ERROR: %s" % str(e))
        import traceback
        traceback.print_exc()
        code = 1

    sys.stdout.flush()
    sys.stderr.flush()
    os._exit(code)


if __name__ == "__main__":
    main()

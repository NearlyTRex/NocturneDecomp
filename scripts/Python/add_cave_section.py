#!/usr/bin/env python3
"""
add_cave_section.py

Creates a new executable memory block in the Ghidra database for use as code
cave space. No modifications are made to the original binary — the block lives
entirely in Ghidra's program database, filled with INT3 bytes.

The block is placed at a virtual address that doesn't conflict with existing
sections, and a CODE_CAVE plate comment marker is set so the exporter
recognizes it.

Usage:
    # Dry run — show what would be created
    python3 add_cave_section.py <project> <name> <program>

    # Apply — create the memory block in Ghidra
    python3 add_cave_section.py <project> <name> <program> --apply

    # Custom size (default 64 KB)
    python3 add_cave_section.py <project> <name> <program> --apply --size 131072

    # Custom address (auto-detected from PE if omitted)
    python3 add_cave_section.py <project> <name> <program> --apply --address 0x03fc0000
"""

import argparse
import os
import struct
import sys


# ---------------------------------------------------------------------------
# PE analysis (read-only — just to find a safe VA)
# ---------------------------------------------------------------------------

def align_up(val, alignment):
    return (val + alignment - 1) & ~(alignment - 1)


def find_free_va(prog):
    """Find a virtual address for the new block that doesn't conflict with
    any existing memory blocks in the Ghidra program.

    Returns (va, section_alignment) or raises if no space found.
    """
    memory = prog.getMemory()
    blocks = list(memory.getBlocks())

    if not blocks:
        raise ValueError("No memory blocks found in program")

    # Find the highest address in use
    max_end = 0
    for block in blocks:
        end = block.getEnd().getOffset() + 1
        if end > max_end:
            max_end = end

    # Use 0x1000 alignment (standard PE section alignment)
    section_alignment = 0x1000
    new_va = align_up(max_end, section_alignment)

    return new_va, section_alignment


def find_free_va_from_binary(binary_path):
    """Parse the PE binary to find where a new section would go.

    Returns (va, section_alignment) based on PE headers.
    """
    with open(binary_path, 'rb') as f:
        data = f.read(4096)  # headers only

    pe_offset = struct.unpack_from('<I', data, 0x3C)[0]
    sig = data[pe_offset:pe_offset + 4]
    if sig != b'PE\x00\x00':
        raise ValueError("Not a valid PE file")

    coff_start = pe_offset + 4
    num_sections = struct.unpack_from('<H', data, coff_start + 2)[0]
    opt_header_size = struct.unpack_from('<H', data, coff_start + 16)[0]
    opt_start = coff_start + 20

    image_base = struct.unpack_from('<I', data, opt_start + 28)[0]
    section_alignment = struct.unpack_from('<I', data, opt_start + 32)[0]
    size_of_image = struct.unpack_from('<I', data, opt_start + 56)[0]

    # New VA is at the current SizeOfImage (which is the aligned end)
    new_va = image_base + size_of_image

    return new_va, section_alignment, image_base, size_of_image


# ---------------------------------------------------------------------------
# Ghidra integration
# ---------------------------------------------------------------------------

def create_cave_block(prog, cave_va, cave_size):
    """Create an initialized memory block filled with INT3 bytes.

    Sets CODE_CAVE plate comment for the exporter.
    Returns True on success.
    """
    from ghidra.program.model.listing import CodeUnit

    memory = prog.getMemory()
    space = prog.getAddressFactory().getDefaultAddressSpace()
    listing = prog.getListing()

    cave_addr = space.getAddress(cave_va)

    # Check for conflicts
    existing = memory.getBlock(cave_addr)
    if existing is not None:
        print("ERROR: Memory block already exists at 0x%x (%s)" % (
            cave_va, existing.getName()))
        return False

    tx_id = prog.startTransaction("Add .cave memory block")
    try:
        # Create INT3-filled block
        from java.io import ByteArrayInputStream
        int3_data = bytearray(b'\xCC' * cave_size)
        stream = ByteArrayInputStream(int3_data)

        block = memory.createInitializedBlock(
            ".cave",        # name
            cave_addr,      # start address
            stream,         # data source
            cave_size,      # length
            None,           # monitor
            False,          # overlay
        )
        block.setRead(True)
        block.setWrite(False)
        block.setExecute(True)
        block.setSourceName("add_cave_section.py")
        block.setComment("Code cave block for MOVSD struct copy patches")

        print("  Created memory block: .cave at 0x%08x (%d bytes)" % (
            cave_va, cave_size))

        # Set CODE_CAVE plate comment at the start
        cave_comment = "CODE_CAVE cave_%08x %d" % (cave_va, cave_size)
        cu = listing.getCodeUnitAt(cave_addr)
        if cu is not None:
            cu.setComment(CodeUnit.PLATE_COMMENT, cave_comment)
            print("  Set plate comment: %s" % cave_comment)
        else:
            print("  WARNING: Could not set plate comment (no code unit at cave start)")

        prog.endTransaction(tx_id, True)
        print("  Transaction committed")
        return True

    except Exception as e:
        prog.endTransaction(tx_id, False)
        print("ERROR: Transaction rolled back: %s" % e)
        import traceback
        traceback.print_exc()
        return False


# ---------------------------------------------------------------------------
# Main
# ---------------------------------------------------------------------------

def main():
    parser = argparse.ArgumentParser(
        description="Add a code cave memory block in Ghidra (no binary modification)")
    parser.add_argument("project_path", help="Path to Ghidra project directory")
    parser.add_argument("project_name", help="Ghidra project name")
    parser.add_argument("program_name", help="Program name within the project")
    parser.add_argument("--size", type=int, default=65536,
                        help="Cave size in bytes (default: 65536 = 64 KB)")
    parser.add_argument("--address", type=str, default=None,
                        help="Virtual address for cave (hex). Auto-detected if omitted")
    parser.add_argument("--binary", type=str, default=None,
                        help="Path to PE binary (for VA auto-detection). "
                             "Optional — Ghidra memory map is used if omitted")
    parser.add_argument("--apply", action="store_true",
                        help="Create the memory block (without this, dry-run only)")
    args = parser.parse_args()

    cave_size = args.size

    if args.address:
        cave_va = int(args.address, 16)
        print("Using specified address: 0x%08x" % cave_va)
    elif args.binary:
        binary_path = os.path.abspath(args.binary)
        if not os.path.isfile(binary_path):
            print("ERROR: Binary not found: %s" % binary_path)
            return 1
        cave_va, sect_align, image_base, size_of_image = find_free_va_from_binary(binary_path)
        print("PE analysis (%s):" % os.path.basename(binary_path))
        print("  Image base:        0x%08x" % image_base)
        print("  Size of image:     0x%08x" % size_of_image)
        print("  Section alignment: 0x%x" % sect_align)
    else:
        # Will detect from Ghidra memory map during apply
        cave_va = None

    print()
    print("New cave block:")
    if cave_va:
        print("  Address:  0x%08x" % cave_va)
    else:
        print("  Address:  (auto-detect from Ghidra memory map)")
    print("  Size:     %d bytes (%d KB)" % (cave_size, cave_size // 1024))
    print("  Fill:     0xCC (INT3)")
    print("  Perms:    READ | EXECUTE")

    if not args.apply:
        print("\nDry run — no changes made. Use --apply to create the block.")
        return 0

    # Start pyghidra
    print("\nStarting pyghidra...")
    try:
        import pyghidra
    except ImportError:
        print("ERROR: pyghidra is not installed.")
        print("Install with: pip install pyghidra")
        return 1

    pyghidra.start()

    project_path = os.path.abspath(args.project_path)
    project = pyghidra.open_project(project_path, args.project_name)

    with pyghidra.program_context(project, "/" + args.program_name) as prog:
        # Auto-detect VA from Ghidra if not specified
        if cave_va is None:
            cave_va, _ = find_free_va(prog)
            print("Auto-detected address from Ghidra: 0x%08x" % cave_va)

        print()
        print("Creating cave block at 0x%08x (%d KB)..." % (cave_va, cave_size // 1024))
        ok = create_cave_block(prog, cave_va, cave_size)

        if ok:
            prog.save("Added .cave memory block", None)
            print("  Project saved.")

    if ok:
        print("\nDone. Cave at 0x%08x (%d KB) ready for use." % (cave_va, cave_size // 1024))
    else:
        print("\nFailed to create cave block.")

    return 0 if ok else 1


if __name__ == '__main__':
    sys.exit(main())

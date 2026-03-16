#!/usr/bin/env python3
"""
fix_split_double_reads.py

Patches specific call sites where the compiler reads a struct double field as
two separate dword MOVs and pushes them individually, which causes Ghidra to
emit CONCAT26/undefined6 artifacts instead of recognizing the double field.

The fix replaces the two MOV+PUSH sequences with FLD/FSTP to move the double
as a proper 8-byte value, so Ghidra sees the struct field access directly.

Each patch site is explicitly defined with before/after byte sequences to
ensure safety. Only exact byte matches are patched.

Usage:
    # Dry run - show what would be patched
    python3 fix_split_double_reads.py <project_dir> <project_name> <program_name>

    # Apply patches
    python3 fix_split_double_reads.py <project_dir> <project_name> <program_name> --apply

    # Test mode - decompile before/after to verify improvement
    python3 fix_split_double_reads.py <project_dir> <project_name> <program_name> --test
"""

import os
import sys
import struct
import argparse
import difflib


def _le32(addr):
    """Encode a 32-bit address as little-endian bytes."""
    return struct.pack('<I', addr)


def make_fld_fstp_args(double_addrs, extra_prefix=b'', extra_suffix=b''):
    """Generate FLD/FSTP byte sequence to push N doubles onto the stack.

    Args:
        double_addrs: List of global addresses for the doubles, in the order
                      they should appear on the stack (first = lowest ESP offset).
                      These are pushed in reverse order.
        extra_prefix: Extra bytes to emit before the double setup.
        extra_suffix: Extra bytes to emit after the doubles (e.g., this_ptr push).

    Returns:
        bytes of the replacement instructions.
    """
    n = len(double_addrs)
    total_size = n * 8
    result = bytearray(extra_prefix)

    # SUB ESP, total_size
    if total_size < 128:
        result += bytes([0x83, 0xEC, total_size])
    else:
        result += bytes([0x81, 0xEC]) + _le32(total_size)

    # FLD/FSTP pairs — store from highest offset down to 0
    for i in range(n - 1, -1, -1):
        addr = double_addrs[i]
        offset = i * 8

        # FLD double ptr [absolute_addr] — DD 05 <addr32>
        result += bytes([0xDD, 0x05]) + _le32(addr)

        # FSTP double ptr [ESP + offset]
        if offset == 0:
            result += bytes([0xDD, 0x1C, 0x24])          # [ESP]
        else:
            result += bytes([0xDD, 0x5C, 0x24, offset])  # [ESP+disp8]

    result += bytearray(extra_suffix)
    return bytes(result)


# Each patch is a dict with:
#   'name': descriptive name
#   'address': hex address of the first byte to patch
#   'original': bytes that must be present (safety check)
#   'patched': replacement bytes (same length)
#   'description': what the patch does
PATCHES = [
    {
        'name': 'CSfxSlot_seek: cvtPlaybackPos double arg',
        'address': 0x005a83c4,
        'original': bytes([
            0x6A, 0x00,                   # PUSH 0x0
            0x8B, 0x7B, 0x68,             # MOV EDI,[EBX+0x68]
            0x57,                          # PUSH EDI
            0x8B, 0x6B, 0x64,             # MOV EBP,[EBX+0x64]
            0x55,                          # PUSH EBP
            0x8B, 0x43, 0x60,             # MOV EAX,[EBX+0x60]
            0x50,                          # PUSH EAX
            0x8B, 0x53, 0x78,             # MOV EDX,[EBX+0x78]
            0x52,                          # PUSH EDX
        ]),
        'patched': bytes([
            0x6A, 0x00,                   # PUSH 0x0              (output_type)
            0xFF, 0x73, 0x68,             # PUSH [EBX+0x68]       (input_type)
            0x83, 0xEC, 0x08,             # SUB ESP, 0x8          (room for double)
            0xDD, 0x43, 0x60,             # FLD double [EBX+0x60] (trigger_time)
            0xDD, 0x1C, 0x24,             # FSTP double [ESP]     (to stack)
            0xFF, 0x73, 0x78,             # PUSH [EBX+0x78]       (sample ptr)
            0x90,                          # NOP                   (padding)
        ]),
        'description': 'Replace split dword reads of trigger_time with FLD/FSTP double',
    },
    {
        'name': 'CSfxSlot_seek: normalizePlaybackPos double arg',
        'address': 0x005a83f8,
        'original': bytes([
            0x8B, 0x73, 0x64,             # MOV ESI,[EBX+0x64]  (trigger_time high)
            0x56,                          # PUSH ESI
            0x8B, 0x7B, 0x60,             # MOV EDI,[EBX+0x60]  (trigger_time low)
            0x57,                          # PUSH EDI
            0x8B, 0x6B, 0x78,             # MOV EBP,[EBX+0x78]  (sample)
            0x55,                          # PUSH EBP
        ]),
        'patched': bytes([
            0x83, 0xEC, 0x08,             # SUB ESP, 0x8          (room for double)
            0xDD, 0x43, 0x60,             # FLD double [EBX+0x60] (trigger_time)
            0xDD, 0x1C, 0x24,             # FSTP double [ESP]     (to stack)
            0xFF, 0x73, 0x78,             # PUSH [EBX+0x78]       (sample ptr)
        ]),
        'description': 'Replace split dword reads of trigger_time for normalizePlaybackPos call',
    },
    {
        'name': 'getSfxPlaybackPosition: cvtPlaybackPos double arg',
        'address': 0x005a9760,
        'original': bytes([
            0x8B, 0x4B, 0x68,             # MOV ECX,[EBX+0x68]  (trigger_id)
            0x51,                          # PUSH ECX
            0x8B, 0x73, 0x64,             # MOV ESI,[EBX+0x64]  (trigger_time high)
            0x56,                          # PUSH ESI
            0x8B, 0x7B, 0x60,             # MOV EDI,[EBX+0x60]  (trigger_time low)
            0x57,                          # PUSH EDI
            0x8B, 0x43, 0x78,             # MOV EAX,[EBX+0x78]  (sample)
            0x50,                          # PUSH EAX
        ]),
        'patched': bytes([
            0xFF, 0x73, 0x68,             # PUSH [EBX+0x68]       (trigger_id)
            0x83, 0xEC, 0x08,             # SUB ESP, 0x8          (room for double)
            0xDD, 0x43, 0x60,             # FLD double [EBX+0x60] (trigger_time)
            0xDD, 0x1C, 0x24,             # FSTP double [ESP]     (to stack)
            0xFF, 0x73, 0x78,             # PUSH [EBX+0x78]       (sample ptr)
            0x90,                          # NOP                   (padding)
        ]),
        'description': 'Replace split dword reads of trigger_time for cvtPlaybackPos call',
    },
    {
        'name': 'audioThreadProc: sleep double arg (g_AudioLatencySeconds)',
        'address': 0x005abbd1,
        'original': bytes([
            0x8B, 0x1D, 0xFC, 0x93, 0xF6, 0x03,  # MOV EBX,[0x03f693fc] (high)
            0x53,                                   # PUSH EBX
            0x8B, 0x35, 0xF8, 0x93, 0xF6, 0x03,  # MOV ESI,[0x03f693f8] (low)
            0x56,                                   # PUSH ESI
        ]),
        'patched': bytes([
            0x83, 0xEC, 0x08,                      # SUB ESP, 0x8
            0xDD, 0x05, 0xF8, 0x93, 0xF6, 0x03,  # FLD double [0x03f693f8]
            0xDD, 0x1C, 0x24,                      # FSTP double [ESP]
            0x90, 0x90,                             # NOP NOP
        ]),
        'description': 'Replace split dword reads of g_AudioLatencySeconds for sleep call',
    },
]


def _make_global_double_push_patch(name, patch_addr, global_addr, hi_mov, hi_push, lo_mov, lo_push):
    """Generate a patch for a single global double pushed as two dwords.

    Original: MOV reg_hi,[global+4]; PUSH reg_hi; MOV reg_lo,[global]; PUSH reg_lo (14 bytes)
    Patched:  SUB ESP,8; FLD double [global]; FSTP double [ESP]; NOP; NOP (14 bytes)
    """
    return {
        'name': name,
        'address': patch_addr,
        'original': (
            bytes([0x8B, hi_mov]) + _le32(global_addr + 4) +
            bytes([hi_push]) +
            bytes([0x8B, lo_mov]) + _le32(global_addr) +
            bytes([lo_push])
        ),
        'patched': (
            bytes([0x83, 0xEC, 0x08]) +
            bytes([0xDD, 0x05]) + _le32(global_addr) +
            bytes([0xDD, 0x1C, 0x24]) +
            bytes([0x90, 0x90])
        ),
        'description': 'FLD/FSTP global double at 0x%08x' % global_addr,
    }

# Register encoding bytes: MOV reg,[addr32] = 8B xx, PUSH reg = 5x
_ESI = (0x35, 0x56)
_EDI = (0x3D, 0x57)
_EBP = (0x2D, 0x55)
_EDX = (0x15, 0x52)
_ECX = (0x0D, 0x51)

# enableSoundSystem vtable call patches
# Each vtable call's last double is skipped (CSoundDevicePtr load interleaved)
_ENABLE_SOUND_PATCHES = [
    # set3DListenerPos: only z is clean (y has MixBuffer writes interleaved)
    ('enableSound: ListenerPos.z',   0x005aafa0, 0x03f68840, _ESI, _EDI),

    # set3DListenerOrient: 8 of 9 doubles clean (front.x has interleaving)
    ('enableSound: OrientRight.z',   0x005aafe6, 0x03f688a0, _EDI, _EBP),
    ('enableSound: OrientRight.y',   0x005aaff4, 0x03f68898, _EDX, _ECX),
    ('enableSound: OrientRight.x',   0x005ab002, 0x03f68890, _ESI, _EDI),
    ('enableSound: OrientUp.z',      0x005ab010, 0x03f68888, _EBP, _EDX),
    ('enableSound: OrientUp.y',      0x005ab01e, 0x03f68880, _ECX, _ESI),
    ('enableSound: OrientUp.x',      0x005ab02c, 0x03f68878, _EDI, _EBP),
    ('enableSound: OrientFront.z',   0x005ab03a, 0x03f68870, _EDX, _ECX),
    ('enableSound: OrientFront.y',   0x005ab048, 0x03f68868, _ESI, _EDI),

    # set3DListenerVelocity: 2 of 3 clean (vel.x has interleaving)
    ('enableSound: Velocity.z',      0x005ab072, 0x03f68858, _ECX, _ESI),
    ('enableSound: Velocity.y',      0x005ab080, 0x03f68850, _EDI, _EBP),
]

for _name, _addr, _global, _hi, _lo in _ENABLE_SOUND_PATCHES:
    PATCHES.append(_make_global_double_push_patch(_name, _addr, _global, _hi[0], _hi[1], _lo[0], _lo[1]))


def _make_last_double_with_devptr(name, patch_addr, global_addr, hi_mov, hi_push, lo_mov, lo_push):
    """Patch for the last double in a vtable call where CSoundDevicePtr load is interleaved.

    Original (22 bytes):
        MOV reg_hi,[global+4]; PUSH reg_hi; MOV reg_lo,[global];
        MOV EAX,[CSoundDevicePtr]; PUSH reg_lo; MOV EBX,[EAX]; PUSH EAX

    Patched (22 bytes):
        SUB ESP,8; FLD double [global]; FSTP double [ESP];
        MOV EAX,[CSoundDevicePtr]; MOV EBX,[EAX]; PUSH EAX; NOP; NOP
    """
    devptr = 0x03f69268
    return {
        'name': name,
        'address': patch_addr,
        'original': (
            bytes([0x8B, hi_mov]) + _le32(global_addr + 4) +
            bytes([hi_push]) +
            bytes([0x8B, lo_mov]) + _le32(global_addr) +
            bytes([0xA1]) + _le32(devptr) +
            bytes([lo_push]) +
            bytes([0x8B, 0x18, 0x50])
        ),
        'patched': (
            bytes([0x83, 0xEC, 0x08]) +
            bytes([0xDD, 0x05]) + _le32(global_addr) +
            bytes([0xDD, 0x1C, 0x24]) +
            bytes([0xA1]) + _le32(devptr) +
            bytes([0x8B, 0x18, 0x50]) +
            bytes([0x90, 0x90])
        ),
        'description': 'FLD/FSTP global double at 0x%08x (last + CSoundDevicePtr)' % global_addr,
    }

# Remaining 5 enableSoundSystem patches (interleaved patterns)
PATCHES.append({
    'name': 'enableSound: ListenerPos.y (MixBuffer interleaved)',
    'address': 0x005aafae,
    'original': (
        bytes([0x8B, 0x2D]) + _le32(0x03f6883c) +  # MOV EBP,[y+4]
        bytes([0x31, 0xC9]) +                         # XOR ECX,ECX
        bytes([0x55]) +                                # PUSH EBP
        bytes([0x8B, 0x15]) + _le32(0x03f68838) +  # MOV EDX,[y]
        bytes([0x89, 0x0D]) + _le32(0x03f69278) +  # MOV [MixBufRead],ECX
        bytes([0x52]) +                                # PUSH EDX
        bytes([0x89, 0x0D]) + _le32(0x03f6927c)    # MOV [MixBufWrite],ECX
    ),
    'patched': (
        bytes([0x31, 0xC9]) +                         # XOR ECX,ECX
        bytes([0x89, 0x0D]) + _le32(0x03f69278) +  # MOV [MixBufRead],ECX
        bytes([0x89, 0x0D]) + _le32(0x03f6927c) +  # MOV [MixBufWrite],ECX
        bytes([0x83, 0xEC, 0x08]) +                   # SUB ESP, 8
        bytes([0xDD, 0x05]) + _le32(0x03f68838) +  # FLD double [y]
        bytes([0xDD, 0x1C, 0x24]) +                   # FSTP double [ESP]
        bytes([0x90, 0x90])                            # NOP NOP
    ),
    'description': 'FLD/FSTP ListenerPos.y with MixBuffer zeroing moved before',
})

PATCHES.append(_make_last_double_with_devptr(
    'enableSound: ListenerPos.x', 0x005aafca, 0x03f68830, _ECX[0], _ECX[1], _ESI[0], _ESI[1]))
PATCHES.append(_make_last_double_with_devptr(
    'enableSound: OrientFront.x', 0x005ab056, 0x03f68860, _EBP[0], _EBP[1], _EDX[0], _EDX[1]))
PATCHES.append(_make_last_double_with_devptr(
    'enableSound: Velocity.x', 0x005ab08e, 0x03f68848, _EDX[0], _EDX[1], _ECX[0], _ECX[1]))
PATCHES.append(_make_last_double_with_devptr(
    'enableSound: DistanceFactor', 0x005ab0aa, 0x00681b30, _ESI[0], _ESI[1], _EDI[0], _EDI[1]))


def _make_ebx_relative_double_patch(name, patch_addr, disp32, hi_modrm, hi_push, lo_modrm, lo_push):
    """Patch for a double read via [EBX+disp32] pushed as two dwords.

    Original (14 bytes): MOV reg_hi,[EBX+disp+4]; PUSH; MOV reg_lo,[EBX+disp]; PUSH
    Patched (14 bytes):  SUB ESP,8; FLD double [EBX+disp]; FSTP double [ESP]; NOP; NOP
    """
    return {
        'name': name,
        'address': patch_addr,
        'original': (
            bytes([0x8B, hi_modrm]) + _le32(disp32 + 4) +
            bytes([hi_push]) +
            bytes([0x8B, lo_modrm]) + _le32(disp32) +
            bytes([lo_push])
        ),
        'patched': (
            bytes([0x83, 0xEC, 0x08]) +           # SUB ESP, 8
            bytes([0xDD, 0x83]) + _le32(disp32) + # FLD double [EBX+disp32]
            bytes([0xDD, 0x1C, 0x24]) +           # FSTP double [ESP]
            bytes([0x90, 0x90])                    # NOP NOP
        ),
        'description': 'FLD/FSTP [EBX+0x%x] double' % disp32,
    }

# ModRM bytes for MOV reg,[EBX+disp32]: mod=10, rm=011(EBX)
_ECX_EBX = 0x8B  # reg=001
_ESI_EBX = 0xB3  # reg=110
_EDI_EBX = 0xBB  # reg=111
_EAX_EBX = 0x83  # reg=000
_EDX_EBX = 0x93  # reg=010

# computeBoxStatistics: doubleMax call #2 (max_spread vs spread_blue)
PATCHES.append(_make_ebx_relative_double_patch(
    'computeBoxStats: doubleMax#2 spread_blue', 0x00441504, 0x4028, _ECX_EBX, 0x51, _ESI_EBX, 0x56))
PATCHES.append(_make_ebx_relative_double_patch(
    'computeBoxStats: doubleMax#2 max_spread', 0x00441518, 0x4038, _EDI_EBX, 0x57, _EAX_EBX, 0x50))

# computeBoxStatistics: doubleMax call #3 (max_spread vs spread_intensity)
PATCHES.append(_make_ebx_relative_double_patch(
    'computeBoxStats: doubleMax#3 spread_intensity', 0x0044153a, 0x4030, _EDX_EBX, 0x52, _ECX_EBX, 0x51))
PATCHES.append(_make_ebx_relative_double_patch(
    'computeBoxStats: doubleMax#3 max_spread', 0x0044154e, 0x4038, _ESI_EBX, 0x56, _EDI_EBX, 0x57))


def get_bytes(program, addr_int, length):
    """Read raw bytes from the program."""
    mem = program.getMemory()
    addr = program.getAddressFactory().getDefaultAddressSpace().getAddress(addr_int)
    buf = bytearray(length)
    for i in range(length):
        buf[i] = mem.getByte(addr.add(i)) & 0xFF
    return bytes(buf)


def write_bytes(program, addr_int, data):
    """Write raw bytes to the program."""
    mem = program.getMemory()
    addr = program.getAddressFactory().getDefaultAddressSpace().getAddress(addr_int)
    for i, b in enumerate(data):
        mem.setByte(addr.add(i), b & 0xFF if b < 128 else b - 256)


def clear_and_disassemble(program, addr_int, length):
    """Clear existing instructions and re-disassemble after patching."""
    from ghidra.program.model.address import AddressSet
    from ghidra.app.cmd.disassemble import DisassembleCommand

    space = program.getAddressFactory().getDefaultAddressSpace()
    addr = space.getAddress(addr_int)
    end_addr = addr.add(length - 1)

    listing = program.getListing()
    listing.clearCodeUnits(addr, end_addr, False)

    addr_set = AddressSet(addr, end_addr)
    cmd = DisassembleCommand(addr, addr_set, True)
    cmd.applyTo(program)


def apply_patch(program, patch, dry_run=True):
    """Apply a single patch. Returns (success, message)."""
    addr = patch['address']
    original = patch['original']
    patched = patch['patched']

    assert len(original) == len(patched), \
        "Patch %s: original and patched must be same length" % patch['name']

    # Safety check: verify the original bytes match
    current = get_bytes(program, addr, len(original))
    if current == patched:
        return True, "already patched"
    if current != original:
        return False, "byte mismatch at 0x%x (expected %s, got %s)" % (
            addr,
            ' '.join('%02x' % b for b in original),
            ' '.join('%02x' % b for b in current),
        )

    if not dry_run:
        # Must clear existing instructions before writing bytes
        space = program.getAddressFactory().getDefaultAddressSpace()
        ghidra_addr = space.getAddress(addr)
        end_addr = ghidra_addr.add(len(patched) - 1)
        program.getListing().clearCodeUnits(ghidra_addr, end_addr, False)

        write_bytes(program, addr, patched)
        clear_and_disassemble(program, addr, len(patched))

    return True, "patched" if not dry_run else "would patch"


def decompile_function_at(program, addr_int, timeout=60):
    """Decompile the function containing the given address."""
    from ghidra.app.decompiler import DecompInterface
    from ghidra.util.task import ConsoleTaskMonitor

    space = program.getAddressFactory().getDefaultAddressSpace()
    addr = space.getAddress(addr_int)
    func = program.getFunctionManager().getFunctionContaining(addr)
    if func is None:
        return "// No function at 0x%x\n" % addr_int

    interface = DecompInterface()
    interface.openProgram(program)
    try:
        res = interface.decompileFunction(func, timeout, ConsoleTaskMonitor())
        if not res.decompileCompleted():
            return "// Decompilation failed or timed out\n"
        decomp = res.getDecompiledFunction()
        if decomp is None:
            return "// No decompiled output\n"
        return decomp.getC()
    finally:
        interface.dispose()


def count_artifacts(code):
    """Count decompiler artifacts."""
    import re
    artifacts = {
        'undefined6': len(re.findall(r'undefined6', code)),
        'CONCAT': len(re.findall(r'CONCAT\d+', code)),
        'extraout_': len(re.findall(r'extraout_\w+', code)),
        'unaff_': len(re.findall(r'unaff_\w+', code)),
        'in_stack_': len(re.findall(r'in_stack_\w+', code)),
        'BITCAST': len(re.findall(r'__BITCAST_\w+', code)),
    }
    artifacts['total'] = sum(artifacts.values())
    return artifacts


def main():
    parser = argparse.ArgumentParser(
        description="Patch split double reads to use FLD/FSTP for cleaner decompilation",
        formatter_class=argparse.RawDescriptionHelpFormatter,
    )
    parser.add_argument("project_path", help="Path to Ghidra project directory")
    parser.add_argument("project_name", help="Ghidra project name")
    parser.add_argument("program_name", help="Program name within the project")
    parser.add_argument("--apply", action="store_true",
                        help="Apply patches (default is dry-run)")
    parser.add_argument("--test", action="store_true",
                        help="Test mode: decompile before/after to show diff")

    args = parser.parse_args()

    try:
        import pyghidra
    except ImportError:
        print("ERROR: pyghidra is not installed.")
        sys.exit(1)

    print("Starting PyGhidra...")
    pyghidra.start()

    project_path = os.path.abspath(args.project_path)
    dry_run = not args.apply

    print("Opening project: %s/%s" % (project_path, args.project_name))
    print("Opening program: %s" % args.program_name)
    if args.test:
        print("TEST MODE - patches will be applied and rolled back")
    elif dry_run:
        print("DRY RUN MODE - no changes will be made")
    print("=" * 70)
    print("%d patch(es) defined\n" % len(PATCHES))

    exit_code = 0
    try:
        project = pyghidra.open_project(project_path, args.project_name)
        with pyghidra.program_context(project, "/" + args.program_name) as prog:

            if args.test:
                for patch in PATCHES:
                    print("=" * 70)
                    print("%s" % patch['name'])
                    print("  Address: 0x%x" % patch['address'])
                    print("  %s" % patch['description'])
                    print("=" * 70)

                    # Decompile before
                    before_code = decompile_function_at(prog, patch['address'])
                    before_arts = count_artifacts(before_code)

                    # Apply in transaction, decompile, roll back
                    tx_id = prog.startTransaction("Test: %s" % patch['name'])
                    try:
                        ok, msg = apply_patch(prog, patch, dry_run=False)
                        if not ok:
                            print("  SKIP: %s" % msg)
                            continue
                        after_code = decompile_function_at(prog, patch['address'])
                        after_arts = count_artifacts(after_code)
                    finally:
                        prog.endTransaction(tx_id, False)

                    # Show results
                    print("\nArtifacts BEFORE: undefined6=%d CONCAT=%d BITCAST=%d extraout=%d (total=%d)" % (
                        before_arts['undefined6'], before_arts['CONCAT'],
                        before_arts['BITCAST'], before_arts['extraout_'],
                        before_arts['total']))
                    print("Artifacts AFTER:  undefined6=%d CONCAT=%d BITCAST=%d extraout=%d (total=%d)" % (
                        after_arts['undefined6'], after_arts['CONCAT'],
                        after_arts['BITCAST'], after_arts['extraout_'],
                        after_arts['total']))

                    delta = after_arts['total'] - before_arts['total']
                    if delta < 0:
                        print("Result: IMPROVED (-%d artifacts)" % abs(delta))
                    elif delta > 0:
                        print("Result: WORSE (+%d artifacts)" % delta)
                    else:
                        print("Result: NO CHANGE")

                    # Show diff
                    diff = list(difflib.unified_diff(
                        before_code.splitlines(keepends=True),
                        after_code.splitlines(keepends=True),
                        fromfile="before", tofile="after", n=3,
                    ))
                    if diff:
                        print("\nDiff:")
                        for line in diff:
                            sys.stdout.write("  " + line)
                        if not diff[-1].endswith('\n'):
                            print()
                    else:
                        print("\nNo difference in decompiled output.")
                    print()

            else:
                if not dry_run:
                    tx_id = prog.startTransaction("Patch split double reads")

                try:
                    for patch in PATCHES:
                        print("  %s (0x%x):" % (patch['name'], patch['address']), end=" ")
                        ok, msg = apply_patch(prog, patch, dry_run=dry_run)
                        print(msg)
                        if not ok:
                            print("    WARNING: %s" % msg)
                finally:
                    if not dry_run:
                        prog.endTransaction(tx_id, True)

                if not dry_run:
                    prog.save("Patched split double reads", None)
                    print("\nChanges saved.")
                else:
                    print("\n(Dry run - no changes made. Use --apply to patch.)")

        project.close()
    except Exception as e:
        print("ERROR: %s" % str(e))
        import traceback
        traceback.print_exc()
        exit_code = 1

    os._exit(exit_code)


if __name__ == "__main__":
    main()

#!/usr/bin/env python3
"""
generate_pcode_overrides.py

Generates p-code overrides to fix ESP tracking issues in exported function JSON files.

Suspect Types:
- callind_anchor (--type=callind-anchor): CALLIND in function WITH EBP frame
  Fix: Override ADD ESP to anchor ESP = EBP - frame_offset
  Status: STABLE - proven to work

- callind_preserve (--type=callind-preserve): CALLIND in function WITHOUT EBP frame
  Fix: Save ESP at entry, restore ESP = saved + offset after CALLIND
  Status: EXPERIMENTAL - may break decompilation

- variadic_anchor (--type=variadic-anchor): Variadic CALL with ADD ESP cleanup
  Fix: Override ADD ESP to anchor ESP = EBP - frame_offset
  Status: STABLE - preserves argument detection

- variadic_preserve_ebp (--type=variadic-ebp-preserve): Variadic CALL in EBP-frame, no ADD ESP
  Fix: Save/restore ESP across the CALL
  Status: EXPERIMENTAL - may break argument detection

- variadic_preserve (--type=variadic-preserve): Variadic CALL without EBP frame
  Fix: Save/restore ESP across the CALL
  Status: EXPERIMENTAL - may break argument detection

- stack_align_anchor (--type=stack-align): Stack alignment (AND ESP) in EBP-frame function
  Fix: Override instruction after AND ESP to anchor ESP = EBP - frame_offset
  Status: STABLE - restores ESP tracking after alignment

- call_esp_anchor (--type=call-anchor): Direct CALL in EBP-frame function with uncertain ESP
  Fix: Override ADD ESP after CALL to anchor ESP = EBP - frame_offset
  Status: STABLE - restores ESP tracking after call

- call_esp_preserve (--type=call-preserve): Direct CALL in non-EBP-frame function
  Fix: Save/restore ESP across the CALL
  Status: EXPERIMENTAL - may break decompilation

Usage:
    # Scan for CALLIND anchor suspects only (default, stable)
    python generate_pcode_overrides.py /path/to/pseudocode/src

    # Apply CALLIND anchor fixes
    python generate_pcode_overrides.py /path/to/pseudocode/src --apply

    # Scan for variadic anchor suspects (stable)
    python generate_pcode_overrides.py /path/to/pseudocode/src --type=variadic-anchor

    # Scan for all stable suspect types (recommended)
    python generate_pcode_overrides.py /path/to/pseudocode/src --type=stable

    # Scan for all suspect types (includes experimental)
    python generate_pcode_overrides.py /path/to/pseudocode/src --type=all

- movsd_df0 (--type=movsd): Bare MOVSD string copy with direction flag assumed clear
  Fix: Override MOVSD pcode to remove DF-dependent bVar*-8 arithmetic
  Status: STABLE - Watcom always uses DF=0 (forward direction)
"""

import argparse
import json
import os
import re
import sys
from pathlib import Path


def to_twos_complement(value, bits=32):
    """Convert a negative value to two's complement representation."""
    if value >= 0:
        return value
    return (1 << bits) + value


def generate_esp_anchor_pcode(frame_offset):
    """Generate p-code to anchor ESP = EBP - frame_offset.

    Args:
        frame_offset: Positive value (e.g., 0x50 means ESP = EBP - 0x50)

    Returns:
        P-code operation string
    """
    # ESP = EBP + (-frame_offset)
    # register 0x10 = ESP, register 0x14 = EBP
    offset_twos = to_twos_complement(-frame_offset)
    return "INT_ADD (register,0x10,4) = (register,0x14,4), (const,0x%x,4)" % offset_twos


def generate_call_esp_preserve_pcode(target_address, return_address, unique_index=0):
    """Generate p-code to preserve ESP across a regular CALL instruction.

    For variadic functions like sprintf/fscanf, internal stack frame issues
    can confuse Ghidra's ESP tracking in the caller. This override saves
    ESP before the call and restores it after.

    Args:
        target_address: Target function address (int)
        return_address: Return address (int) - instruction after the CALL
        unique_index: Index to offset unique addresses (0, 1, 2, ...) to avoid conflicts

    Returns:
        List of P-code operation strings
    """
    # RAM space ID for x86 (from Ghidra's address space)
    RAM_SPACE_ID = 0x1a1

    # Use unique space offsets, offset by unique_index * 0x100 to avoid conflicts
    base = 0x10000 + (unique_index * 0x100)

    # P-code sequence:
    # 1. Save ESP to unique
    # 2. Push return address (ESP -= 4, store return addr)
    # 3. CALL target
    # 4. Restore ESP from unique
    return [
        "COPY (unique,0x%x,4) = (register,0x10,4)" % base,  # save ESP
        "INT_SUB (register,0x10,4) = (register,0x10,4), (const,0x4,4)",  # ESP -= 4
        "STORE (const,0x%x,4), (register,0x10,4), (const,0x%x,4)" % (RAM_SPACE_ID, return_address),  # push return addr
        "CALL (ram,0x%x,4)" % target_address,  # call the function
        "COPY (register,0x10,4) = (unique,0x%x,4)" % base   # restore ESP
    ]


def generate_callind_preserve_pcode(target_type, target_value, return_address=None, unique_index=0):
    """Generate p-code to preserve ESP across a CALLIND.

    For cdecl calls, ESP is unchanged by the call itself (caller cleans up).
    We save ESP before the call and restore it after, so Ghidra knows ESP
    is preserved and subsequent ADD ESP works on a known value.

    If return_address is provided, we also push it onto the stack before
    the CALLIND to properly simulate the call instruction.

    Args:
        target_type: 'reg_offset', 'reg_deref', 'register', 'mem_absolute', or 'scaled_index'
        target_value: {'reg': str, 'offset': int} for reg_offset,
                      {'reg': str, 'scale': int, 'offset': int} for scaled_index,
                      register name (str) for reg_deref/register,
                      absolute address (int) for mem_absolute
        return_address: Optional return address (int) to push before CALLIND
        unique_index: Index to offset unique addresses (0, 1, 2, ...) to avoid conflicts

    Returns:
        List of P-code operation strings
    """
    # Register offsets for x86
    REG_OFFSETS = {
        'EAX': 0x0, 'ECX': 0x4, 'EDX': 0x8, 'EBX': 0xc,
        'ESP': 0x10, 'EBP': 0x14, 'ESI': 0x18, 'EDI': 0x1c,
    }

    # RAM space ID for x86 (from Ghidra's address space)
    RAM_SPACE_ID = 0x1a1

    # Using unique space offsets, offset by unique_index * 0x100 to avoid conflicts:
    #   base + 0x00 = saved ESP
    #   base + 0x10 = call target address (for reg_offset type)
    #   base + 0x20 = function pointer loaded from memory
    #   base + 0x30 = scaled value (for scaled_index type)
    base = 0x10000 + (unique_index * 0x100)

    # Build push return address ops if needed
    # These go AFTER target computation but BEFORE CALLIND
    # STORE format: STORE (const,SPACE_ID,4), (pointer), (value) - no output, no =
    push_ops = []
    if return_address is not None:
        push_ops = [
            "INT_SUB (register,0x10,4) = (register,0x10,4), (const,0x4,4)",  # ESP -= 4
            "STORE (const,0x%x,4), (register,0x10,4), (const,0x%x,4)" % (RAM_SPACE_ID, return_address),  # push return addr
        ]

    if target_type == 'reg_offset':
        # CALL dword ptr [REG + offset]
        # Order: save ESP, compute target, push ret addr, call, restore ESP
        reg = target_value.get('reg', 'ESP')
        offset = target_value.get('offset', 0)
        reg_offset = REG_OFFSETS.get(reg, 0x10)
        return [
            "COPY (unique,0x%x,4) = (register,0x10,4)" % base,  # save ESP
            "INT_ADD (unique,0x%x,4) = (register,0x%x,4), (const,0x%x,4)" % (base + 0x10, reg_offset, offset),  # addr = REG + offset
            "LOAD (unique,0x%x,4) = (const,0x%x,4), (unique,0x%x,4)" % (base + 0x20, RAM_SPACE_ID, base + 0x10),  # load func ptr
        ] + push_ops + [
            "CALLIND (unique,0x%x,4)" % (base + 0x20),  # call the function
            "COPY (register,0x10,4) = (unique,0x%x,4)" % base   # restore ESP
        ]
    elif target_type == 'reg_deref':
        # CALL dword ptr [REG] (no offset)
        # Order: save ESP, load target, push ret addr, call, restore ESP
        reg_offset = REG_OFFSETS.get(target_value, 0x10)
        return [
            "COPY (unique,0x%x,4) = (register,0x10,4)" % base,  # save ESP
            "LOAD (unique,0x%x,4) = (const,0x%x,4), (register,0x%x,4)" % (base + 0x20, RAM_SPACE_ID, reg_offset),  # load func ptr from [REG]
        ] + push_ops + [
            "CALLIND (unique,0x%x,4)" % (base + 0x20),  # call the function
            "COPY (register,0x10,4) = (unique,0x%x,4)" % base   # restore ESP
        ]
    elif target_type == 'register':
        # CALL REG (e.g., CALL EBP)
        # Order: save ESP, push ret addr, call, restore ESP
        # (no target computation needed - register is used directly)
        reg_offset = REG_OFFSETS.get(target_value, 0x14)  # default to EBP
        return [
            "COPY (unique,0x%x,4) = (register,0x10,4)" % base,  # save ESP
        ] + push_ops + [
            "CALLIND (register,0x%x,4)" % reg_offset,  # call via register
            "COPY (register,0x10,4) = (unique,0x%x,4)" % base   # restore ESP
        ]
    elif target_type == 'mem_absolute':
        # CALL dword ptr [0xADDRESS] or CALL dword ptr CS:[0xADDRESS]
        # Order: save ESP, load target, push ret addr, call, restore ESP
        # target_value is the absolute memory address (int)
        return [
            "COPY (unique,0x%x,4) = (register,0x10,4)" % base,  # save ESP
            "LOAD (unique,0x%x,4) = (const,0x%x,4), (const,0x%x,4)" % (base + 0x20, RAM_SPACE_ID, target_value),  # load func ptr from [addr]
        ] + push_ops + [
            "CALLIND (unique,0x%x,4)" % (base + 0x20),  # call the function
            "COPY (register,0x10,4) = (unique,0x%x,4)" % base   # restore ESP
        ]
    elif target_type == 'scaled_index':
        # CALL dword ptr [REG*scale + offset]
        # e.g., CALL dword ptr [EAX*0x4 + 0x66df88]
        # Order: save ESP, compute target, push ret addr, call, restore ESP
        reg = target_value.get('reg', 'EAX')
        scale = target_value.get('scale', 4)
        offset = target_value.get('offset', 0)
        reg_offset = REG_OFFSETS.get(reg, 0x0)
        return [
            "COPY (unique,0x%x,4) = (register,0x10,4)" % base,  # save ESP
            "INT_MULT (unique,0x%x,4) = (register,0x%x,4), (const,0x%x,4)" % (base + 0x30, reg_offset, scale),  # scaled = REG * scale
            "INT_ADD (unique,0x%x,4) = (unique,0x%x,4), (const,0x%x,4)" % (base + 0x10, base + 0x30, offset),  # addr = scaled + offset
            "LOAD (unique,0x%x,4) = (const,0x%x,4), (unique,0x%x,4)" % (base + 0x20, RAM_SPACE_ID, base + 0x10),  # load func ptr
        ] + push_ops + [
            "CALLIND (unique,0x%x,4)" % (base + 0x20),  # call the function
            "COPY (register,0x10,4) = (unique,0x%x,4)" % base   # restore ESP
        ]
    else:
        return None


def generate_movsd_df0_pcode():
    """Generate p-code for MOVSD assuming DF=0 (forward direction).

    Replaces Ghidra's DF-dependent MOVSD pcode (which produces garbled
    bVar*-8 pointer arithmetic) with a simple:
        [EDI] = [ESI]; ESI += 4; EDI += 4

    Returns:
        List of p-code operation strings
    """
    # ESI = register 0x18, EDI = register 0x1c
    # RAM space = 0x1a1
    return [
        "LOAD (unique,0x14800,4) = (const,0x1a1,4), (register,0x18,4)",   # tmp = [ESI]
        "STORE (const,0x1a1,4), (register,0x1c,4), (unique,0x14800,4)",   # [EDI] = tmp
        "INT_ADD (register,0x18,4) = (register,0x18,4), (const,0x4,4)",   # ESI += 4
        "INT_ADD (register,0x1c,4) = (register,0x1c,4), (const,0x4,4)",   # EDI += 4
    ]


# Regex to match bare MOVSD (not MOVSD.REP) in Ghidra asm output
RE_BARE_MOVSD = re.compile(
    r'^\s+MOVSD\s+ES:.*;\s*([0-9a-fA-F]+)', re.IGNORECASE)


def find_movsd_sites(asm_path):
    """Find bare MOVSD instruction addresses in an ASM file.

    Only matches single MOVSD (not MOVSD.REP which is handled by
    fix_movsd_caves.py). Returns addresses as hex strings with 0x prefix.
    """
    addresses = []
    with open(asm_path, 'r') as f:
        for line in f:
            # Skip REP MOVSD (Ghidra syntax: MOVSD.REP)
            if '.REP' in line.upper():
                continue
            m = RE_BARE_MOVSD.match(line)
            if m:
                addresses.append('0x' + m.group(1).lower())
    return addresses


def process_json_file_movsd(json_path, apply=False, verbose=True):
    """Process a JSON file to add MOVSD DF=0 pcode overrides.

    Finds the corresponding .asm file, scans for bare MOVSD instructions,
    and generates pcode overrides that assume DF=0.

    Returns:
        Tuple of (fixes_count, skipped_count)
    """
    # Find .asm file
    asm_path = json_path.replace('.json', '.asm')
    if not os.path.isfile(asm_path):
        return 0, 0

    # Scan for MOVSD sites
    movsd_addrs = find_movsd_sites(asm_path)
    if not movsd_addrs:
        return 0, 0

    # Load JSON
    try:
        with open(json_path, 'r') as f:
            data = json.load(f)
    except (json.JSONDecodeError, IOError):
        return 0, 0

    if not isinstance(data, dict):
        return 0, 0

    existing = data.get('pcode_overrides', {})
    pcode = generate_movsd_df0_pcode()

    # Filter to only new overrides
    new_addrs = []
    for addr in movsd_addrs:
        norm = addr.lower().replace('0x', '').lstrip('0') or '0'
        already = False
        for ex_addr in existing:
            ex_norm = ex_addr.lower().replace('0x', '').lstrip('0') or '0'
            if ex_norm == norm:
                already = True
                break
        if not already:
            new_addrs.append(addr)

    if not new_addrs:
        return 0, 0

    func_name = data.get('function', {}).get('name', os.path.basename(json_path))

    if verbose:
        print("\n%s: %d MOVSD site(s)" % (func_name, len(new_addrs)))
        for addr in new_addrs:
            print("    %s  MOVSD DF=0 override" % addr)

    if apply:
        if 'pcode_overrides' not in data:
            data['pcode_overrides'] = {}
        for addr in new_addrs:
            data['pcode_overrides'][addr] = pcode
        try:
            with open(json_path, 'w') as f:
                json.dump(data, f, indent=2, sort_keys=True)
            if verbose:
                print("  Applied %d override(s)" % len(new_addrs))
        except IOError as e:
            print("  Error writing %s: %s" % (json_path, e))
            return 0, 0

    return len(new_addrs), 0


def scan_directory_movsd(src_dir, apply=False, verbose=True):
    """Scan directory for JSON files and add MOVSD pcode overrides."""
    files_with_fixes = 0
    total_fixes = 0
    files_scanned = 0

    for root, dirs, files in os.walk(src_dir):
        for filename in files:
            if not filename.endswith('.json'):
                continue
            json_path = os.path.join(root, filename)
            files_scanned += 1
            fixes, _ = process_json_file_movsd(json_path, apply=apply, verbose=verbose)
            if fixes > 0:
                files_with_fixes += 1
                total_fixes += fixes

    return files_scanned, files_with_fixes, total_fixes


def find_fixable_suspects(json_data, suspect_types=None, verbose=True):
    """Find suspects that can be fixed with p-code overrides.

    Args:
        json_data: Parsed JSON data from function export
        suspect_types: Set of suspect types to process. Options:
            - 'callind_anchor' (EBP-frame CALLIND, stable)
            - 'callind_preserve' (no EBP frame CALLIND, experimental)
            - 'variadic_anchor' (EBP-frame variadic CALL with ADD ESP, stable)
            - 'variadic_preserve_ebp' (EBP-frame variadic CALL without ADD ESP, experimental)
            - 'variadic_preserve' (no EBP frame variadic CALL, experimental)
            - 'stack_align_anchor' (stack alignment in EBP-frame, stable)
            - 'call_esp_anchor' (direct CALL in EBP-frame, stable)
            - 'call_esp_preserve' (direct CALL in non-EBP-frame, experimental)
            If None, defaults to {'callind_anchor'}
        verbose: If True, print warnings

    Returns:
        Tuple of (fixes, skipped) where:
        - fixes is list of (fix_address, pcode_lines, offset_value, fix_type)
        - skipped is list of (fix_address, reason)
    """
    fixes = []
    skipped = []

    if suspect_types is None:
        suspect_types = {'callind_anchor'}

    # Skip non-dict JSON (some files may be arrays or other structures)
    if not isinstance(json_data, dict):
        return fixes, skipped

    suspects = json_data.get('suspects', [])
    existing_overrides = json_data.get('pcode_overrides', {})
    unique_counter = 0  # Counter for unique space addresses to avoid conflicts
    pending_fix_addrs = set()  # Track addresses we're about to fix to detect conflicts

    for suspect in suspects:
        suspect_type = suspect.get('type', '')

        # Skip suspect types not in the allowed set
        if suspect_type not in suspect_types:
            continue

        # Get the appropriate address field based on suspect type
        if suspect_type in ('variadic_preserve', 'variadic_preserve_ebp'):
            fix_address = suspect.get('call_address', '')
        elif suspect_type in ('callind_preserve', 'callind_preserve_lost'):
            fix_address = suspect.get('callind_address', '')
        else:
            # callind_anchor, variadic_anchor use fix_address
            fix_address = suspect.get('fix_address', '')

        if not fix_address:
            continue

        # Normalize address for comparison
        norm_addr = fix_address.lower().replace('0x', '').lstrip('0') or '0'

        # Check if already fixed
        already_fixed = False
        for existing_addr in existing_overrides.keys():
            existing_norm = existing_addr.lower().replace('0x', '').lstrip('0') or '0'
            if existing_norm == norm_addr:
                already_fixed = True
                break

        if already_fixed:
            continue

        # Check for conflict with another suspect targeting the same address
        if norm_addr in pending_fix_addrs:
            skipped.append((fix_address, 'CONFLICT: another suspect already targets this address (%s)' % suspect_type))
            continue

        if suspect_type == 'callind_anchor':
            # EBP-frame function: use ESP = EBP - frame_offset
            frame_offset = suspect.get('frame_offset')

            if frame_offset is None:
                skipped.append((fix_address, 'no frame_offset'))
                continue

            if frame_offset == 0:
                skipped.append((fix_address, 'frame_offset=0 (detection may have failed)'))
                continue

            # Generate the fix
            pcode = generate_esp_anchor_pcode(frame_offset)
            fixes.append((fix_address, [pcode], frame_offset, 'ebp_anchor'))
            pending_fix_addrs.add(norm_addr)

        elif suspect_type == 'callind_preserve':
            # Non-EBP-frame function: override the CALLIND to preserve ESP
            # and push the return address properly
            callind_address = suspect.get('callind_address', '')
            return_address = suspect.get('return_address', '')
            target_type = suspect.get('call_target_type', '')
            target_value = suspect.get('call_target_value', {})

            if not callind_address:
                skipped.append((fix_address, 'no callind_address'))
                continue

            if not return_address:
                skipped.append((fix_address, 'no return_address (re-export JSON)'))
                continue

            if not target_type:
                skipped.append((fix_address, 'no call_target_type'))
                continue

            # Parse return address to int
            try:
                ret_addr_int = int(return_address, 16)
            except (ValueError, TypeError):
                skipped.append((fix_address, 'invalid return_address: %s' % return_address))
                continue

            # Check if callind_address already has an override
            norm_callind = callind_address.lower().replace('0x', '').lstrip('0') or '0'
            callind_already_fixed = False
            for existing_addr in existing_overrides.keys():
                existing_norm = existing_addr.lower().replace('0x', '').lstrip('0') or '0'
                if existing_norm == norm_callind:
                    callind_already_fixed = True
                    break

            if callind_already_fixed:
                continue

            # Generate p-code override for the CALLIND with return address push
            # Use unique_counter to get separate unique addresses for each CALLIND
            pcode_lines = generate_callind_preserve_pcode(target_type, target_value, ret_addr_int, unique_counter)
            if pcode_lines is None:
                skipped.append((fix_address, 'unsupported target_type: %s' % target_type))
                continue

            fixes.append((callind_address, pcode_lines, ret_addr_int, 'callind_preserve'))
            norm_callind = callind_address.lower().replace('0x', '').lstrip('0') or '0'
            pending_fix_addrs.add(norm_callind)
            unique_counter += 1  # Increment for next preserve-style fix

        elif suspect_type == 'variadic_anchor':
            # EBP-frame variadic call with ADD ESP - anchor ESP at ADD ESP instruction
            # This preserves the original CALL semantics (argument detection works)
            frame_offset = suspect.get('frame_offset')
            target_function = suspect.get('target_function', '')

            if frame_offset is None:
                skipped.append((fix_address, 'no frame_offset'))
                continue

            if frame_offset == 0:
                skipped.append((fix_address, 'frame_offset=0 (detection may have failed)'))
                continue

            # Generate the fix - same as callind_anchor
            pcode = generate_esp_anchor_pcode(frame_offset)
            fixes.append((fix_address, [pcode], frame_offset, 'variadic_anchor'))
            pending_fix_addrs.add(norm_addr)

        elif suspect_type == 'variadic_preserve_ebp':
            # EBP-frame variadic call without ADD ESP - preserve ESP across CALL
            call_address = suspect.get('call_address', '')
            return_address = suspect.get('return_address', '')
            target_address = suspect.get('target_address', '')
            target_function = suspect.get('target_function', '')

            if not call_address:
                skipped.append((call_address or 'unknown', 'no call_address'))
                continue

            if not return_address:
                skipped.append((call_address, 'no return_address'))
                continue

            if not target_address:
                skipped.append((call_address, 'no target_address'))
                continue

            # Parse addresses to int
            try:
                ret_addr_int = int(return_address, 16)
                target_addr_int = int(target_address, 16)
            except (ValueError, TypeError):
                skipped.append((call_address, 'invalid address format'))
                continue

            # Check if call_address already has an override
            norm_call = call_address.lower().replace('0x', '').lstrip('0') or '0'
            call_already_fixed = False
            for existing_addr in existing_overrides.keys():
                existing_norm = existing_addr.lower().replace('0x', '').lstrip('0') or '0'
                if existing_norm == norm_call:
                    call_already_fixed = True
                    break

            if call_already_fixed:
                continue

            # Generate p-code override for the CALL
            pcode_lines = generate_call_esp_preserve_pcode(target_addr_int, ret_addr_int, unique_counter)
            fixes.append((call_address, pcode_lines, target_function, 'variadic_preserve_ebp'))
            norm_call = call_address.lower().replace('0x', '').lstrip('0') or '0'
            pending_fix_addrs.add(norm_call)
            unique_counter += 1

        elif suspect_type == 'variadic_preserve':
            # Non-EBP-frame variadic call - preserve ESP across the CALL
            call_address = suspect.get('call_address', '')
            return_address = suspect.get('return_address', '')
            target_address = suspect.get('target_address', '')
            target_function = suspect.get('target_function', '')

            if not call_address:
                skipped.append((call_address or 'unknown', 'no call_address'))
                continue

            if not return_address:
                skipped.append((call_address, 'no return_address'))
                continue

            if not target_address:
                skipped.append((call_address, 'no target_address'))
                continue

            # Parse addresses to int
            try:
                ret_addr_int = int(return_address, 16)
                target_addr_int = int(target_address, 16)
            except (ValueError, TypeError):
                skipped.append((call_address, 'invalid address format'))
                continue

            # Check if call_address already has an override
            norm_call = call_address.lower().replace('0x', '').lstrip('0') or '0'
            call_already_fixed = False
            for existing_addr in existing_overrides.keys():
                existing_norm = existing_addr.lower().replace('0x', '').lstrip('0') or '0'
                if existing_norm == norm_call:
                    call_already_fixed = True
                    break

            if call_already_fixed:
                continue

            # Generate p-code override for the CALL
            pcode_lines = generate_call_esp_preserve_pcode(target_addr_int, ret_addr_int, unique_counter)
            fixes.append((call_address, pcode_lines, target_function, 'variadic_preserve'))
            norm_call = call_address.lower().replace('0x', '').lstrip('0') or '0'
            pending_fix_addrs.add(norm_call)
            unique_counter += 1

        elif suspect_type == 'stack_align_anchor':
            # Stack alignment in EBP-frame function - anchor ESP after AND ESP
            frame_offset = suspect.get('frame_offset')

            if frame_offset is None:
                skipped.append((fix_address, 'no frame_offset'))
                continue

            if frame_offset == 0:
                skipped.append((fix_address, 'frame_offset=0 (detection may have failed)'))
                continue

            # Generate the fix
            pcode = generate_esp_anchor_pcode(frame_offset)
            fixes.append((fix_address, [pcode], frame_offset, 'stack_align_anchor'))
            pending_fix_addrs.add(norm_addr)

        elif suspect_type == 'call_esp_anchor':
            # Direct CALL in EBP-frame function - anchor ESP at ADD ESP
            frame_offset = suspect.get('frame_offset')

            if frame_offset is None:
                skipped.append((fix_address, 'no frame_offset'))
                continue

            if frame_offset == 0:
                skipped.append((fix_address, 'frame_offset=0 (detection may have failed)'))
                continue

            # Generate the fix
            pcode = generate_esp_anchor_pcode(frame_offset)
            fixes.append((fix_address, [pcode], frame_offset, 'call_esp_anchor'))
            pending_fix_addrs.add(norm_addr)

        elif suspect_type == 'call_esp_preserve':
            # Direct CALL in non-EBP-frame function - preserve ESP across CALL
            call_address = suspect.get('call_address', '')
            return_address = suspect.get('return_address', '')
            target_address = suspect.get('target_address', '')

            if not call_address:
                skipped.append((call_address or 'unknown', 'no call_address'))
                continue

            if not return_address:
                skipped.append((call_address, 'no return_address'))
                continue

            if not target_address:
                skipped.append((call_address, 'no target_address'))
                continue

            # Parse addresses to int
            try:
                ret_addr_int = int(return_address, 16)
                target_addr_int = int(target_address.replace('0x', ''), 16)
            except (ValueError, TypeError):
                skipped.append((call_address, 'invalid address format'))
                continue

            # Check if call_address already has an override
            norm_call = call_address.lower().replace('0x', '').lstrip('0') or '0'
            call_already_fixed = False
            for existing_addr in existing_overrides.keys():
                existing_norm = existing_addr.lower().replace('0x', '').lstrip('0') or '0'
                if existing_norm == norm_call:
                    call_already_fixed = True
                    break

            if call_already_fixed:
                continue

            # Check for conflict
            if norm_call in pending_fix_addrs:
                skipped.append((call_address, 'CONFLICT: another suspect already targets this address (call_esp_preserve)'))
                continue

            # Generate p-code override for the CALL
            pcode_lines = generate_call_esp_preserve_pcode(target_addr_int, ret_addr_int, unique_counter)
            fixes.append((call_address, pcode_lines, target_address, 'call_esp_preserve'))
            pending_fix_addrs.add(norm_call)
            unique_counter += 1

    return fixes, skipped


def process_json_file(json_path, suspect_types=None, apply=False, verbose=True):
    """Process a single JSON file for fixable suspects.

    Args:
        json_path: Path to the JSON file
        suspect_types: Set of suspect types to process
        apply: If True, write fixes back to the file
        verbose: If True, print progress info

    Returns:
        Tuple of (fixes_count, skipped_count)
    """
    try:
        with open(json_path, 'r') as f:
            data = json.load(f)
    except (json.JSONDecodeError, IOError) as e:
        if verbose:
            print("  Error reading %s: %s" % (json_path, e))
        return 0, 0

    # Find fixable suspects
    fixes, skipped = find_fixable_suspects(data, suspect_types, verbose)

    if not fixes and not skipped:
        return 0, 0

    func_name = data.get('function', {}).get('name', 'unknown')

    if verbose and (fixes or skipped):
        print("\n%s:" % func_name)

        if skipped:
            print("  Skipped (%d):" % len(skipped))
            for addr, reason in skipped:
                print("    %s - %s" % (addr, reason))

        if fixes:
            print("  Fixes (%d):" % len(fixes))
            for addr, pcode_lines, offset_value, fix_type in fixes:
                if fix_type in ('ebp_anchor', 'variadic_anchor', 'stack_align_anchor', 'call_esp_anchor'):
                    print("    %s (frame_offset=0x%x, type=%s):" % (addr, offset_value, fix_type))
                elif fix_type == 'callind_preserve':
                    print("    %s (return_addr=0x%x, type=%s):" % (addr, offset_value, fix_type))
                elif fix_type in ('variadic_preserve', 'variadic_preserve_ebp', 'call_esp_preserve'):
                    print("    %s (target=%s, type=%s):" % (addr, offset_value, fix_type))
                else:
                    print("    %s (value=%s, type=%s):" % (addr, offset_value, fix_type))
                for line in pcode_lines:
                    print("      %s" % line)

    if apply and fixes:
        # Ensure pcode_overrides exists
        if 'pcode_overrides' not in data:
            data['pcode_overrides'] = {}

        # Add the new overrides
        for addr, pcode_lines, offset_value, fix_type in fixes:
            data['pcode_overrides'][addr] = pcode_lines

        # Write back
        try:
            with open(json_path, 'w') as f:
                json.dump(data, f, indent=2, sort_keys=True)
            if verbose:
                print("  Applied %d fix(es)" % len(fixes))
        except IOError as e:
            print("  Error writing %s: %s" % (json_path, e))
            return 0, len(skipped)

    return len(fixes), len(skipped)


def scan_directory(src_dir, suspect_types=None, apply=False, verbose=True):
    """Scan a directory tree for JSON files with fixable suspects.

    Args:
        src_dir: Root directory to scan
        suspect_types: Set of suspect types to process
        apply: If True, apply fixes to files
        verbose: If True, print progress info

    Returns:
        Tuple of (files_scanned, files_with_fixes, total_fixes, total_skipped)
    """
    files_with_fixes = 0
    files_with_skipped = 0
    total_fixes = 0
    total_skipped = 0
    files_scanned = 0

    for root, dirs, files in os.walk(src_dir):
        for filename in files:
            if not filename.endswith('.json'):
                continue

            json_path = os.path.join(root, filename)
            files_scanned += 1

            fixes, skipped = process_json_file(json_path, suspect_types, apply=apply, verbose=verbose)

            if fixes > 0:
                files_with_fixes += 1
                total_fixes += fixes

            if skipped > 0:
                files_with_skipped += 1
                total_skipped += skipped

    return files_scanned, files_with_fixes, total_fixes, files_with_skipped, total_skipped


def main():
    parser = argparse.ArgumentParser(
        description='Generate p-code overrides for fixable ESP tracking issues',
        formatter_class=argparse.RawDescriptionHelpFormatter,
        epilog="""
Suspect Types:
    callind-anchor     - CALLIND with ESP anchor fix (ESP = EBP - offset) (STABLE)
    callind-preserve   - CALLIND with ESP preserve fix (save/restore ESP) (EXPERIMENTAL)
    callind            - Both CALLIND types

    variadic-anchor    - Variadic CALL with ESP anchor at ADD ESP (STABLE)
    variadic-ebp-preserve - Variadic CALL in EBP-frame but no ADD ESP (EXPERIMENTAL)
    variadic-preserve  - Variadic CALL in non-EBP-frame function (EXPERIMENTAL)
    variadic           - All variadic types

    stack-align        - Stack alignment (AND ESP) with ESP anchor fix (STABLE)

    call-anchor        - Direct CALL with ESP anchor at ADD ESP (STABLE)
    call-preserve      - Direct CALL in non-EBP-frame with ESP preserve (EXPERIMENTAL)
    direct-call        - Both direct CALL types

    movsd              - Bare MOVSD DF=0 override (STABLE, scans ASM files)

    stable             - All stable types (recommended, excludes movsd)
    all                - All types (includes experimental, excludes movsd)

Examples:
    # Dry run - CALLIND anchor suspects only (default, stable)
    %(prog)s /path/to/pseudocode/src

    # Apply CALLIND anchor fixes
    %(prog)s /path/to/pseudocode/src --apply

    # Scan variadic calls with anchor fix (stable)
    %(prog)s /path/to/pseudocode/src --type=variadic-anchor

    # Scan all variadic call suspects
    %(prog)s /path/to/pseudocode/src --type=variadic

    # Process all suspect types
    %(prog)s /path/to/pseudocode/src --type=all --apply
        """
    )
    parser.add_argument('path', help='Directory to scan or specific JSON file')
    parser.add_argument('--type', choices=['callind-anchor', 'callind-preserve', 'callind',
                                           'variadic-anchor', 'variadic-ebp-preserve', 'variadic-preserve',
                                           'variadic', 'stack-align', 'call-anchor', 'call-preserve',
                                           'direct-call', 'stable', 'all', 'movsd'],
                        default='callind-anchor', help='Suspect type to process (default: callind-anchor)')
    parser.add_argument('--apply', action='store_true',
                        help='Apply fixes to JSON files (default: dry run)')
    parser.add_argument('-q', '--quiet', action='store_true',
                        help='Only show summary')

    args = parser.parse_args()

    # Map --type argument to suspect type set
    if args.type == 'callind-anchor':
        suspect_types = {'callind_anchor'}
        type_desc = 'CALLIND anchor (stable)'
    elif args.type == 'callind-preserve':
        suspect_types = {'callind_preserve'}
        type_desc = 'CALLIND preserve (EXPERIMENTAL)'
    elif args.type == 'callind':
        suspect_types = {'callind_anchor', 'callind_preserve'}
        type_desc = 'all CALLIND types'
    elif args.type == 'variadic-anchor':
        suspect_types = {'variadic_anchor'}
        type_desc = 'variadic anchor (stable)'
    elif args.type == 'variadic-ebp-preserve':
        suspect_types = {'variadic_preserve_ebp'}
        type_desc = 'variadic EBP-frame preserve (EXPERIMENTAL)'
    elif args.type == 'variadic-preserve':
        suspect_types = {'variadic_preserve'}
        type_desc = 'variadic non-EBP preserve (EXPERIMENTAL)'
    elif args.type == 'variadic':
        suspect_types = {'variadic_anchor', 'variadic_preserve_ebp', 'variadic_preserve'}
        type_desc = 'all variadic types'
    elif args.type == 'stack-align':
        suspect_types = {'stack_align_anchor'}
        type_desc = 'stack alignment anchor (stable)'
    elif args.type == 'call-anchor':
        suspect_types = {'call_esp_anchor'}
        type_desc = 'direct CALL anchor (stable)'
    elif args.type == 'call-preserve':
        suspect_types = {'call_esp_preserve'}
        type_desc = 'direct CALL preserve (EXPERIMENTAL)'
    elif args.type == 'direct-call':
        suspect_types = {'call_esp_anchor', 'call_esp_preserve'}
        type_desc = 'all direct CALL types'
    elif args.type == 'stable':
        suspect_types = {'callind_anchor', 'variadic_anchor', 'stack_align_anchor', 'call_esp_anchor'}
        type_desc = 'all stable types (recommended)'
    elif args.type == 'movsd':
        # MOVSD is handled via a separate code path (ASM scanning, not suspects)
        path = Path(args.path)
        verbose = not args.quiet

        if not path.exists():
            print("Error: Path does not exist: %s" % path)
            sys.exit(1)

        if verbose:
            print("Scanning for bare MOVSD instructions (DF=0 override)...")
            if not args.apply:
                print("(Dry run - use --apply to apply fixes)\n")

        if path.is_file():
            if not path.suffix == '.json':
                print("Error: File must be a JSON file")
                sys.exit(1)
            fixes, _ = process_json_file_movsd(str(path), apply=args.apply, verbose=verbose)
            if fixes == 0:
                print("No bare MOVSD sites found")
            elif not args.apply:
                print("\nRun with --apply to apply these fixes")
        else:
            files_scanned, files_with_fixes, total_fixes = \
                scan_directory_movsd(str(path), apply=args.apply, verbose=verbose)
            print("\n" + "=" * 60)
            print("Summary:")
            print("  Type: MOVSD DF=0 override (stable)")
            print("  Files scanned: %d" % files_scanned)
            print("  Files with MOVSD: %d" % files_with_fixes)
            print("  Total overrides: %d" % total_fixes)
            if total_fixes > 0 and not args.apply:
                print("\nRun with --apply to apply these fixes")
        sys.exit(0)

    else:  # all
        suspect_types = {'callind_anchor', 'callind_preserve',
                         'variadic_anchor', 'variadic_preserve_ebp', 'variadic_preserve',
                         'stack_align_anchor', 'call_esp_anchor', 'call_esp_preserve'}
        type_desc = 'all types (includes EXPERIMENTAL)'

    path = Path(args.path)
    verbose = not args.quiet

    # Warn about experimental types
    experimental_types = suspect_types & {'callind_preserve', 'variadic_preserve_ebp', 'variadic_preserve', 'call_esp_preserve'}
    if experimental_types:
        print("WARNING: Processing EXPERIMENTAL suspect types: %s" % ', '.join(sorted(experimental_types)))
        print("         These overrides may affect decompilation!")
        print()

    if not path.exists():
        print("Error: Path does not exist: %s" % path)
        sys.exit(1)

    if path.is_file():
        # Process single file
        if not path.suffix == '.json':
            print("Error: File must be a JSON file")
            sys.exit(1)

        fixes, skipped = process_json_file(str(path), suspect_types, apply=args.apply, verbose=verbose)

        if fixes == 0 and skipped == 0:
            print("No fixable suspects found for type: %s" % type_desc)
        else:
            if skipped > 0:
                print("\n%d suspect(s) skipped (frame_offset=0 or missing)" % skipped)
            if fixes > 0 and not args.apply:
                print("\nRun with --apply to apply these fixes")
    else:
        # Scan directory
        if verbose:
            print("Scanning %s for %s suspects..." % (path, type_desc))
            if not args.apply:
                print("(Dry run - use --apply to apply fixes)\n")

        files_scanned, files_with_fixes, total_fixes, files_with_skipped, total_skipped = \
            scan_directory(str(path), suspect_types, apply=args.apply, verbose=verbose)

        print("\n" + "=" * 60)
        print("Summary:")
        print("  Suspect type: %s" % type_desc)
        print("  Files scanned: %d" % files_scanned)
        print("  Files with fixes: %d" % files_with_fixes)
        print("  Total fixes: %d" % total_fixes)
        if total_skipped > 0:
            print("  Files with skipped suspects: %d" % files_with_skipped)
            print("  Total skipped: %d (frame_offset=0 or missing)" % total_skipped)

        if total_fixes > 0 and not args.apply:
            print("\nRun with --apply to apply these fixes")


if __name__ == '__main__':
    main()

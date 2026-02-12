#!/usr/bin/env python3
"""
Find missing offset pointer typedefs for Ghidra decompilation.

Scans ctor/dtor .asm files for pointer adjustment patterns (LEA/SUB with
negative offsets after CALL instructions) and identifies which offset pointer
typedefs need to be created in Ghidra.

When Ghidra has the correct offset pointer typedef (e.g. CBoxActor_ptr_916),
it uses ADJ() and the decompilation is clean. When the typedef is missing,
Ghidra generates broken code with negative array indexing (pCVar3[-1].field).

Usage:
    python3 scripts/Python/find_missing_typedefs.py
"""

import json
import re
import sys
from collections import defaultdict
from pathlib import Path

ANNOTATIONS_REL = Path("annotations/nocedit.exe/pseudocode")
TYPEDEFS_REL = ANNOTATIONS_REL / "include" / "types" / "typedefs"


def find_project_root():
    """Find the project root (3 levels up from this script)."""
    return Path(__file__).resolve().parent.parent.parent


def get_existing_typedefs(root):
    """Parse existing typedef .h files. Returns {class_name: {offset, ...}}."""
    typedefs = defaultdict(set)
    typedefs_dir = root / TYPEDEFS_REL
    if not typedefs_dir.is_dir():
        return typedefs

    pat = re.compile(r"^(\w+)_ptr_(\d+)\.h$")
    for f in typedefs_dir.iterdir():
        m = pat.match(f.name)
        if m:
            typedefs[m.group(1)].add(int(m.group(2)))
    return typedefs


def find_ctor_dtor_files(root):
    """Find all *_ctor_*.asm and *_dtor_*.asm files under annotations."""
    results = []
    for asm_path in (root / ANNOTATIONS_REL).rglob("*.asm"):
        name = asm_path.stem
        if "_ctor_" in name or "_dtor_" in name:
            results.append((asm_path, asm_path.with_suffix(".json")))
    return results


def has_negative_offset(json_path):
    """Check if JSON metadata has negative_offset suspects."""
    if not json_path.exists():
        return False
    try:
        with open(json_path) as f:
            data = json.load(f)
        return "negative_offset" in data.get("complexity", {}).get("suspect_types", [])
    except (json.JSONDecodeError, OSError):
        return False


def simplify_call_name(name):
    """Strip module prefix from a CALL target name.

    "core_box.cpp_CBox_ctor_FUN_0041dc50" -> "CBox_ctor_FUN_0041dc50"
    """
    for ext in (".cpp_", ".c_", ".h_"):
        idx = name.find(ext)
        if idx >= 0:
            return name[idx + len(ext):]
    return name


# Regex patterns for assembly parsing
RE_CALL = re.compile(r"CALL\s+(\S+)")
RE_LEA_UNSIGNED = re.compile(
    r"LEA\s+\w+,\[(\w+)\s*\+\s*0x([0-9a-fA-F]+)\]"
)
RE_LEA_NEGATIVE_PLUS = re.compile(
    r"LEA\s+\w+,\[(\w+)\s*\+\s*-0x([0-9a-fA-F]+)\]"
)
RE_LEA_NEGATIVE_MINUS = re.compile(
    r"LEA\s+\w+,\[(\w+)\s*-\s*0x([0-9a-fA-F]+)\]"
)
RE_SUB = re.compile(r"SUB\s+(E[AB]X),0x([0-9a-fA-F]+)")
RE_ADDR = re.compile(r";\s*([0-9a-fA-F]{8})\b")


def parse_asm_for_adjustments(asm_path):
    """Parse .asm file for LEA/SUB back-adjustments after CALL instructions.

    Returns list of dicts: {offset, last_call, last_ctor_dtor_call, address, type}
    """
    results = []
    last_call = None
    last_ctor_dtor_call = None

    with open(asm_path) as f:
        for line in f:
            line = line.strip()

            # Track CALL instructions
            m = RE_CALL.match(line)
            if m:
                last_call = m.group(1)
                if "_ctor_" in last_call or "_dtor_" in last_call:
                    last_ctor_dtor_call = last_call
                continue

            # Extract instruction address from end-of-line comment
            addr = None
            addr_m = RE_ADDR.search(line)
            if addr_m:
                addr = addr_m.group(1)

            # LEA reg,[reg + 0xffff...] (unsigned negative, value >= 0x80000000)
            m = RE_LEA_UNSIGNED.match(line)
            if m:
                val = int(m.group(2), 16)
                if val >= 0x80000000:
                    results.append({
                        "offset": 0x100000000 - val,
                        "last_call": last_call,
                        "last_ctor_dtor_call": last_ctor_dtor_call,
                        "address": addr,
                        "type": "LEA",
                    })
                continue

            # LEA reg,[reg + -0xNN] (explicit negative with plus)
            m = RE_LEA_NEGATIVE_PLUS.match(line)
            if m:
                results.append({
                    "offset": int(m.group(2), 16),
                    "last_call": last_call,
                    "last_ctor_dtor_call": last_ctor_dtor_call,
                    "address": addr,
                    "type": "LEA",
                })
                continue

            # LEA reg,[reg - 0xNN] (direct subtraction)
            m = RE_LEA_NEGATIVE_MINUS.match(line)
            if m:
                results.append({
                    "offset": int(m.group(2), 16),
                    "last_call": last_call,
                    "last_ctor_dtor_call": last_ctor_dtor_call,
                    "address": addr,
                    "type": "LEA",
                })
                continue

            # SUB EAX/EBX,0xNNN (pointer back-adjustment, not stack ops)
            # Only consider SUBs where the last CALL was a ctor/dtor function.
            # This filters out intermediate adjustments in dtor destruction
            # chains where SUBs follow utility calls (free, memset, etc.)
            m = RE_SUB.match(line)
            if m and last_call and ("_ctor_" in last_call or "_dtor_" in last_call):
                offset = int(m.group(2), 16)
                if offset > 0:
                    results.append({
                        "offset": offset,
                        "last_call": last_call,
                        "last_ctor_dtor_call": last_ctor_dtor_call,
                        "address": addr,
                        "type": "SUB",
                    })
                continue

    return results


def extract_class_name(stem):
    """Extract class name from ctor/dtor filename stem."""
    for marker in ("_ctor_", "_dtor_"):
        if marker in stem:
            return stem.split(marker)[0]
    return None


def main():
    root = find_project_root()
    existing = get_existing_typedefs(root)
    files = find_ctor_dtor_files(root)

    print("Scanning {} ctor/dtor files...".format(len(files)))
    print("Found {} existing typedef(s) in {}".format(
        sum(len(v) for v in existing.values()),
        TYPEDEFS_REL,
    ))
    print()

    missing = []
    scanned_with_suspects = 0

    for asm_path, json_path in sorted(files):
        if not has_negative_offset(json_path):
            continue

        scanned_with_suspects += 1
        stem = asm_path.stem
        class_name = extract_class_name(stem)
        if not class_name:
            continue

        adjustments = parse_asm_for_adjustments(asm_path)

        for adj in adjustments:
            offset = adj["offset"]

            # Skip if typedef already exists
            if offset in existing.get(class_name, set()):
                continue

            ctor_call = adj["last_ctor_dtor_call"] or adj["last_call"]
            missing.append({
                "typedef_name": "{}_ptr_{}".format(class_name, offset),
                "function": stem,
                "offset": offset,
                "class_name": class_name,
                "last_call": simplify_call_name(ctor_call) if ctor_call else "unknown",
                "address": adj["address"],
                "adj_type": adj["type"],
            })

    # Deduplicate by typedef_name, preferring ctor over dtor
    seen = {}
    for entry in missing:
        key = entry["typedef_name"]
        if key not in seen:
            seen[key] = entry
        elif "_ctor_" in entry["function"] and "_dtor_" in seen[key]["function"]:
            seen[key] = entry

    unique = sorted(seen.values(), key=lambda e: e["typedef_name"])

    print("{} ctor/dtor files have negative_offset suspects".format(scanned_with_suspects))
    print()

    if not unique:
        print("No missing offset pointer typedefs found.")
        return

    print("=== Missing Offset Pointer Typedefs ===")
    print()
    print("Found {} missing typedef(s):".format(len(unique)))
    print()

    for entry in unique:
        print(entry["typedef_name"])
        print("  Function: {}".format(entry["function"]))
        print("  Offset: 0x{:x} ({})".format(entry["offset"], entry["offset"]))
        print("  Base class: {}".format(entry["class_name"]))
        print("  Last ctor call: {}".format(entry["last_call"]))
        print("  Ghidra path: /Typedef/Game/{}".format(entry["typedef_name"]))
        print()


if __name__ == "__main__":
    main()

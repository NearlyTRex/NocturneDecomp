#!/usr/bin/env python3
"""Analyze EBP-frame vs ESP-frame functions in the codebase."""

import sys
import json
from pathlib import Path

# Default path relative to this script's location
DEFAULT_PSEUDOCODE_DIR = Path(__file__).parent.parent.parent / "annotations/nocedit.exe/pseudocode"

def main():
    if len(sys.argv) > 1:
        base_dir = Path(sys.argv[1])
    else:
        base_dir = DEFAULT_PSEUDOCODE_DIR

    if not base_dir.exists():
        print(f"Error: Directory not found: {base_dir}")
        sys.exit(1)

    # Counters
    total_functions = 0
    ebp_frame_by_asm = 0
    esp_frame_by_asm = 0

    badspacebase_total = 0
    badspacebase_ebp_frame = 0
    badspacebase_esp_frame = 0

    # Find all JSON files
    json_files = list(base_dir.rglob("*.json"))

    for json_file in json_files:
        total_functions += 1

        # Check if ASM file exists
        asm_file = json_file.with_suffix(".asm")
        is_ebp_frame = False

        if asm_file.exists():
            try:
                asm_content = asm_file.read_text()
                is_ebp_frame = "MOV EBP,ESP" in asm_content
            except:
                pass

        if is_ebp_frame:
            ebp_frame_by_asm += 1
        else:
            esp_frame_by_asm += 1

        # Check for badspacebase
        try:
            data = json.loads(json_file.read_text())
            suspect_types = data.get("complexity", {}).get("suspect_types", [])

            if "badspacebase" in suspect_types:
                badspacebase_total += 1
                if is_ebp_frame:
                    badspacebase_ebp_frame += 1
                else:
                    badspacebase_esp_frame += 1
        except:
            pass

    print("=" * 60)
    print("FRAME TYPE ANALYSIS")
    print("=" * 60)
    print()
    print("OVERALL CODEBASE:")
    print(f"  Total functions:     {total_functions:,}")
    print(f"  EBP-frame functions: {ebp_frame_by_asm:,} ({100*ebp_frame_by_asm/total_functions:.1f}%)")
    print(f"  ESP-frame functions: {esp_frame_by_asm:,} ({100*esp_frame_by_asm/total_functions:.1f}%)")
    print()
    print("BADSPACEBASE FUNCTIONS:")
    print(f"  Total with badspacebase: {badspacebase_total:,}")
    print(f"  EBP-frame (fixable):     {badspacebase_ebp_frame:,} ({100*badspacebase_ebp_frame/badspacebase_total:.1f}%)")
    print(f"  ESP-frame (not fixable): {badspacebase_esp_frame:,} ({100*badspacebase_esp_frame/badspacebase_total:.1f}%)")
    print()
    print("IMPACT OF PROPOSED GHIDRA PATCH:")
    print(f"  Would fix {badspacebase_ebp_frame} of {badspacebase_total} badspacebase functions")
    print(f"  Remaining ESP-frame issues: {badspacebase_esp_frame}")

if __name__ == "__main__":
    main()

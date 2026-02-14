#!/usr/bin/env python3
"""
Finds global int variables that use Ghidra sub-word access patterns (._N_N_)
and would benefit from being retyped to a UInt32 union.

Ghidra notation: VAR._offset_size_
  ._0_1_ = byte at offset 0  (bits 0-7)
  ._1_1_ = byte at offset 1  (bits 8-15)
  ._2_1_ = byte at offset 2  (bits 16-23)
  ._3_1_ = byte at offset 3  (bits 24-31)
  ._0_2_ = short at offset 0 (bits 0-15)
  ._2_2_ = short at offset 2 (bits 16-31)
  ._0_4_ = full dword (not a real sub-word access, skip)
"""

import os
import re
from collections import defaultdict

PSEUDOCODE_DIR = os.path.join(
    os.path.dirname(os.path.abspath(__file__)), "..",
    "annotations", "nocedit.exe", "pseudocode", "src"
)

# Match: global_name._offset_size_
# Globals start with g_, INT_, DAT_, UINT_, or uppercase hex pattern
PATTERN = re.compile(
    r'\b((?:g_|INT_|DAT_|UINT_)[A-Za-z0-9_]+)\._(\d+)_(\d+)_'
)

def find_candidates():
    globals_info = defaultdict(lambda: {"accesses": set(), "files": set()})

    for root, dirs, files in os.walk(PSEUDOCODE_DIR):
        for fname in files:
            if not fname.endswith(".cpp"):
                continue
            fpath = os.path.join(root, fname)
            with open(fpath, "r") as f:
                for line in f:
                    for match in PATTERN.finditer(line):
                        var_name = match.group(1)
                        offset = int(match.group(2))
                        size = int(match.group(3))

                        # Skip ._0_4_ — that's a full dword access, not sub-word
                        if size == 4:
                            continue

                        access_str = "._{}_{}_".format(offset, size)
                        rel_path = os.path.relpath(fpath, PSEUDOCODE_DIR)
                        globals_info[var_name]["accesses"].add(access_str)
                        globals_info[var_name]["files"].add(rel_path)

    if not globals_info:
        print("No candidates found.")
        return

    print("=" * 70)
    print("Global variables with sub-word accesses (UInt32 union candidates)")
    print("=" * 70)
    print()

    for var_name in sorted(globals_info.keys()):
        info = globals_info[var_name]
        accesses = sorted(info["accesses"])
        files = sorted(info["files"])

        access_desc = []
        for a in accesses:
            # Parse ._offset_size_ for human-readable description
            parts = a.strip("._").split("_")
            offset, size = int(parts[0]), int(parts[1])
            if size == 1:
                access_desc.append("{} (bytes[{}])".format(a, offset))
            elif size == 2:
                access_desc.append("{} (words[{}])".format(a, offset // 2))

        print("  {}".format(var_name))
        print("    Accesses: {}".format(", ".join(access_desc)))
        print("    Used in:")
        for f in files:
            print("      - {}".format(f))
        print()

    print("Total: {} globals".format(len(globals_info)))


if __name__ == "__main__":
    find_candidates()

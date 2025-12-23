# P-code Override Automation Patterns

**Date**: 2024-12-23
**Goal**: Identify detectable patterns for automating p-code override fixes

---

## Overview

Two distinct patterns cause BADSPACEBASE/stack tracking issues that can be fixed with p-code overrides:

| Pattern | Root Cause | Detection | Fix |
|---------|-----------|-----------|-----|
| **Type A: CALLIND ESP Uncertainty** | CALLIND makes ESP opaque to Ghidra | CALLIND + ADD ESP with `?` marker | Override ADD ESP to anchor ESP = EBP - offset |
| **Type B: Jump Target ESP Mismatch** | Jump target after RET inherits sequential ESP | RET followed by jump-only reachable code | Override first instruction to anchor ESP |

Both patterns require **EBP-based frame pointer** (MOV EBP, ESP in prologue).

---

## Pattern Type A: CALLIND + ADD ESP

### Description

When a function uses indirect calls (vtable calls), Ghidra cannot determine:
1. Whether the callee preserves ESP
2. What stack effect the callee has

After CALLIND, ESP becomes "uncertain". Even `ADD ESP, N` (caller cleanup) computes `uncertain + N = still uncertain`.

### Assembly Pattern

```asm
PUSH arg2                    ; ESP -= 4
PUSH arg1                    ; ESP -= 4
CALL dword ptr [reg + off]   ; CALLIND - ESP becomes uncertain
ADD ESP, 0x8                 ; Cleanup - but ESP still uncertain!
```

### P-code Pattern

Look for the `?` marker after ADD ESP:
```
@ADDR [ESP:-XX](+N)?  # ADD ESP, N
```

The `?` indicates Ghidra computed a relative change but from an uncertain base.

### Detection Algorithm

```python
def detect_callind_esp_pattern(function_pcode, function_asm):
    """
    Detect CALLIND followed by ADD ESP with uncertain ESP.

    Returns list of (add_esp_addr, cleanup_size) tuples.
    """
    patterns = []

    # Find all CALLIND instructions
    callind_addrs = find_pcode_ops(function_pcode, "CALLIND")

    for callind_addr in callind_addrs:
        # Look for ADD ESP within next few instructions
        next_instrs = get_instructions_after(function_asm, callind_addr, limit=5)

        for instr in next_instrs:
            if is_add_esp(instr):
                # Check if pcode shows uncertain ESP (has '?' marker)
                pcode_line = get_pcode_at(function_pcode, instr.addr)
                if '?' in pcode_line:
                    cleanup_size = parse_add_esp_value(instr)
                    patterns.append((instr.addr, cleanup_size))
                break  # Only care about first ADD ESP after CALLIND

    return patterns
```

### Fix Generation

```python
def generate_callind_fix(add_esp_addr, frame_offset):
    """
    Generate p-code override for ADD ESP after CALLIND.

    frame_offset: The SUB ESP, N value from prologue (e.g., 0x50)
    Returns: (addr, pcode_ops) tuple
    """
    # ESP = EBP - frame_offset
    # In two's complement: -0x50 = 0xffffffb0
    offset_twos_comp = (0x100000000 - frame_offset) & 0xffffffff

    pcode = f"INT_ADD (register,0x10,4) = (register,0x14,4), (const,0x{offset_twos_comp:x},4)"

    return (f"{add_esp_addr:08x}", [pcode])
```

### Example (CSlew)

**Input:**
- 17 CALLINDs in function
- Frame offset: 0x24 (from `SUB ESP, 0x24`)
- All followed by `ADD ESP, 0x8`

**Output:** 17 p-code overrides setting ESP = EBP - 0x24

---

## Pattern Type B: Jump Target ESP Mismatch

### Description

When code is laid out as:
```
RET                          ; addr 0x1000
label_only_from_jump:        ; addr 0x1001 - only reachable via JMP/Jcc
    MOV ECX, 0xffffffff
```

Ghidra may compute ESP at 0x1001 from the sequential path (after RET pops return address), not from the actual jump sources. This creates ESP mismatches.

### Assembly Pattern

```asm
    ...
    MOV ESP, EBP           ; Restore stack
    POP EBP
    POP EDI
    POP ESI
    POP EBX
    RET                    ; 005d5983
LAB_005d5984:              ; Only reachable via JNC at 005d58c8
    MOV ECX, 0xffffffff    ; 005d5984 - ESP computed from RET fall-through!
```

### P-code Pattern

Jump source and target have mismatched ESP:
```
@005d58c8 [ESP:-84]  # JNC 0x005d5984
...
@005d5984 [ESP:-64]  # MOV ECX, 0xffffffff  <- 20-byte mismatch!
```

### Detection Algorithm

```python
def detect_jump_target_mismatch(function_pcode, function_asm):
    """
    Detect jump targets with ESP values that don't match their sources.

    Returns list of (target_addr, expected_esp, actual_esp, source_addrs) tuples.
    """
    patterns = []

    # Build map of jump sources to targets
    jumps = find_all_jumps(function_asm)  # {target_addr: [source_addrs]}

    # Find RET instructions
    ret_addrs = find_instructions(function_asm, "RET")

    for ret_addr in ret_addrs:
        # Check if next address is a jump target (not sequential flow)
        next_addr = ret_addr + get_instruction_length(ret_addr)

        if next_addr in jumps:
            source_addrs = jumps[next_addr]

            # Get ESP values
            target_esp = get_esp_at(function_pcode, next_addr)
            source_esps = [get_esp_at(function_pcode, src) for src in source_addrs]

            # Check for mismatch (all sources should have same ESP, different from target)
            if source_esps and all(esp == source_esps[0] for esp in source_esps):
                expected_esp = source_esps[0]
                if expected_esp != target_esp:
                    patterns.append((next_addr, expected_esp, target_esp, source_addrs))

    return patterns
```

### Fix Generation

For jump targets, we need to:
1. Anchor ESP to the correct value
2. Preserve the original instruction's behavior

```python
def generate_jump_target_fix(target_addr, original_instr, frame_offset):
    """
    Generate p-code override for jump target with ESP mismatch.

    original_instr: The instruction at target_addr (e.g., "MOV ECX, 0xffffffff" or "PUSH EBX")
    frame_offset: The SUB ESP, N value from prologue
    Returns: (addr, pcode_ops) tuple
    """
    offset_twos_comp = (0x100000000 - frame_offset) & 0xffffffff

    pcode_ops = [
        # First, anchor ESP
        f"INT_ADD (register,0x10,4) = (register,0x14,4), (const,0x{offset_twos_comp:x},4)"
    ]

    # Then, add original instruction's p-code
    if original_instr.mnemonic == "MOV" and original_instr.operands[0] == "ECX":
        # MOV ECX, imm32
        imm = original_instr.operands[1]
        pcode_ops.append(f"COPY (register,0x4,4) = (const,0x{imm:x},4)")

    elif original_instr.mnemonic == "PUSH":
        reg = original_instr.operands[0]
        reg_offset = REGISTER_OFFSETS[reg]  # EBX=0xc, etc.
        pcode_ops.extend([
            f"COPY (unique,0x20a80,4) = (register,0x{reg_offset:x},4)",
            "INT_SUB (register,0x10,4) = (register,0x10,4), (const,0x4,4)",
            "STORE (const,0x1a1,8), (register,0x10,4), (unique,0x20a80,4)"
        ])

    # Add more instruction handlers as needed...

    return (f"{target_addr:08x}", pcode_ops)
```

---

## Frame Offset Calculation

Both patterns require knowing the frame offset (the value N from `SUB ESP, N`).

### Detection Algorithm

```python
def get_frame_offset(function_asm):
    """
    Extract frame offset from function prologue.

    Looks for pattern:
        PUSH EBX/ESI/EDI/EBP (optional, any order)
        MOV EBP, ESP         <- Frame pointer setup
        SUB ESP, N           <- Frame allocation
        AND ESP, 0xfffffff8  <- Optional alignment

    Returns frame_offset (N) or None if not EBP-based frame.
    """
    found_mov_ebp_esp = False
    frame_offset = None

    for instr in function_asm[:20]:  # Check first 20 instructions
        if instr.mnemonic == "MOV" and instr.text == "MOV EBP,ESP":
            found_mov_ebp_esp = True

        elif found_mov_ebp_esp and instr.mnemonic == "SUB":
            if "ESP" in instr.operands[0]:
                frame_offset = parse_immediate(instr.operands[1])
                break

    return frame_offset if found_mov_ebp_esp else None
```

---

## New Suspect Types for PyGhidra Exporter

Add these to the suspect detection in the exporter:

### 1. `callind_esp_uncertain`

```python
def detect_callind_esp_uncertain(pcode_lines):
    """
    Detect: CALLIND followed by ADD ESP with uncertain marker.
    """
    suspects = []

    for i, line in enumerate(pcode_lines):
        if "CALLIND" in line:
            # Look ahead for ADD ESP with '?'
            for j in range(i+1, min(i+20, len(pcode_lines))):
                next_line = pcode_lines[j]
                if "ADD ESP" in next_line and "?" in next_line:
                    addr = extract_address(next_line)
                    suspects.append({
                        "type": "callind_esp_uncertain",
                        "description": "CALLIND makes ESP uncertain, ADD ESP doesn't resolve it",
                        "line": j,
                        "text": next_line,
                        "match": "CALLIND...ADD ESP?",
                        "fixable": True,
                        "fix_type": "esp_anchor_after_callind"
                    })
                    break
                # Stop if we hit another CALLIND or control flow
                if any(op in next_line for op in ["CALLIND", "CALL", "RETURN", "BRANCH"]):
                    break

    return suspects
```

### 2. `jump_target_esp_mismatch`

```python
def detect_jump_target_esp_mismatch(pcode_lines, asm_lines):
    """
    Detect: Jump target with ESP different from jump source.
    """
    suspects = []

    # Build ESP map: addr -> esp_value
    esp_map = {}
    for line in pcode_lines:
        match = re.match(r'@([0-9a-f]+) \[ESP:(-?\d+)\]', line)
        if match:
            esp_map[match.group(1)] = int(match.group(2))

    # Find jumps and check for mismatches
    for line in pcode_lines:
        if "CBRANCH" in line or "BRANCH" in line:
            source_addr = extract_address(line)
            target_addr = extract_branch_target(line)

            if source_addr in esp_map and target_addr in esp_map:
                source_esp = esp_map[source_addr]
                target_esp = esp_map[target_addr]

                if source_esp != target_esp:
                    # Check if target follows a RET (strong indicator)
                    if is_after_ret(target_addr, asm_lines):
                        suspects.append({
                            "type": "jump_target_esp_mismatch",
                            "description": f"Jump target ESP ({target_esp}) differs from source ({source_esp})",
                            "line": get_line_number(target_addr),
                            "text": f"Jump from {source_addr} to {target_addr}",
                            "match": f"ESP:{source_esp} -> ESP:{target_esp}",
                            "fixable": True,
                            "fix_type": "esp_anchor_at_jump_target",
                            "source_addr": source_addr,
                            "target_addr": target_addr,
                            "esp_delta": target_esp - source_esp
                        })

    return suspects
```

---

## Complete Automation Script Outline

```python
#!/usr/bin/env python3
"""
pcode_fix_generator.py

Analyzes functions for fixable BADSPACEBASE patterns and generates p-code overrides.
"""

import json
import re
from pathlib import Path

def analyze_function(json_path):
    """Analyze a function and generate fixes."""

    with open(json_path) as f:
        data = json.load(f)

    # Check if function uses EBP frame
    pcode_path = json_path.with_suffix('.pcode')
    asm_path = json_path.with_suffix('.asm')

    if not pcode_path.exists() or not asm_path.exists():
        return None

    pcode = pcode_path.read_text()
    asm = asm_path.read_text()

    # Get frame offset
    frame_offset = get_frame_offset(asm)
    if frame_offset is None:
        return None  # Not an EBP-based frame

    fixes = {}

    # Pattern A: CALLIND + ADD ESP
    callind_patterns = detect_callind_esp_pattern(pcode, asm)
    for addr, cleanup_size in callind_patterns:
        fix = generate_callind_fix(addr, frame_offset)
        fixes[fix[0]] = fix[1]

    # Pattern B: Jump target ESP mismatch
    mismatch_patterns = detect_jump_target_mismatch(pcode, asm)
    for target_addr, expected_esp, actual_esp, sources in mismatch_patterns:
        original_instr = get_instruction_at(asm, target_addr)
        fix = generate_jump_target_fix(target_addr, original_instr, frame_offset)
        fixes[fix[0]] = fix[1]

    return fixes

def apply_fixes(json_path, fixes):
    """Apply generated fixes to the JSON file."""

    with open(json_path) as f:
        data = json.load(f)

    if "pcode_overrides" not in data:
        data["pcode_overrides"] = {}

    data["pcode_overrides"].update(fixes)

    with open(json_path, 'w') as f:
        json.dump(data, f, indent=2)

def main():
    import argparse
    parser = argparse.ArgumentParser()
    parser.add_argument("json_files", nargs="+", help="Function JSON files to analyze")
    parser.add_argument("--apply", action="store_true", help="Apply fixes to JSON files")
    parser.add_argument("--dry-run", action="store_true", help="Show fixes without applying")
    args = parser.parse_args()

    for json_file in args.json_files:
        fixes = analyze_function(Path(json_file))

        if fixes:
            print(f"{json_file}: {len(fixes)} fixes found")

            if args.dry_run:
                print(json.dumps(fixes, indent=2))
            elif args.apply:
                apply_fixes(Path(json_file), fixes)
                print(f"  Applied {len(fixes)} fixes")
        else:
            print(f"{json_file}: No fixable patterns found")

if __name__ == "__main__":
    main()
```

---

## P-code Reference

### Register Offsets (x86 32-bit)
```
EAX = 0x0    ECX = 0x4    EDX = 0x8    EBX = 0xc
ESP = 0x10   EBP = 0x14   ESI = 0x18   EDI = 0x1c
```

### Two's Complement for Common Offsets
```
-0x24 = 0xffffffdc
-0x28 = 0xffffffd8
-0x50 = 0xffffffb0
-0x54 = 0xffffffac
```

### P-code Operation Templates

**ESP = EBP - offset:**
```
INT_ADD (register,0x10,4) = (register,0x14,4), (const,OFFSET_TWOS_COMP,4)
```

**MOV reg, imm32:**
```
COPY (register,REG_OFFSET,4) = (const,IMM_VALUE,4)
```

**PUSH reg:**
```
COPY (unique,0x20a80,4) = (register,REG_OFFSET,4)
INT_SUB (register,0x10,4) = (register,0x10,4), (const,0x4,4)
STORE (const,0x1a1,8), (register,0x10,4), (unique,0x20a80,4)
```

---

## Files to Modify

1. **PyGhidra Exporter** (`scripts/pyghidra_exporter.py` or similar):
   - Add `callind_esp_uncertain` suspect detection
   - Add `jump_target_esp_mismatch` suspect detection
   - Include `fixable` and `fix_type` fields in suspect entries

2. **New Script** (`scripts/pcode_fix_generator.py`):
   - Implement pattern detection
   - Implement fix generation
   - Apply fixes to JSON files

3. **Documentation** (this file):
   - Pattern descriptions
   - Detection algorithms
   - Fix generation logic

---

## Testing Strategy

1. **CSlew** (`CSlew_processInput_FUN_005a20b0`):
   - Known working: 17 CALLIND + ADD ESP fixes
   - Verify script detects all 17 patterns
   - Verify generated fixes match manual fixes

2. **CObj_findCoplanarPolygon** (`CObj_findCoplanarPolygon_FUN_005d5800`):
   - 6 CALLIND + ADD ESP patterns
   - 3 jump target ESP mismatch patterns
   - Verify script detects all 9 patterns
   - Verify generated fixes match manual fixes

3. **Batch Testing**:
   - Run on all functions with BADSPACEBASE suspects
   - Compare suspect counts before/after
   - Manual review of a sample

---

## Open Questions

1. **False Positives**: How to avoid generating fixes for patterns that don't actually cause issues?

2. **Instruction Coverage**: What other instructions might appear at jump targets besides MOV and PUSH?

3. **Non-EBP Frames**: Can we handle functions that use ESP-relative addressing without EBP frame pointer?

4. **Nested Loops**: Do functions with complex control flow need special handling?

5. **Validation**: How to verify fixes don't break the decompilation?

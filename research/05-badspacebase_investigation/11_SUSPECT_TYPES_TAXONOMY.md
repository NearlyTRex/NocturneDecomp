# Suspect Types Taxonomy

## Overview

This document catalogs all suspect types that cause or relate to BADSPACEBASE and other
decompilation artifacts, including existing detection/fix support and proposed additions.

**Diagnostic Results (from `diagnose_badspacebase.py`):**
- Total functions: 7,154
- Functions with BADSPACEBASE: 1,624 (22.7%)

---

## Part 1: Root Cause Categories

BADSPACEBASE occurs when Ghidra's decompiler cannot resolve a `TypeSpacebase` pointer
to a valid stack frame location. This happens in several distinct scenarios:

### Category A: ESP Uncertainty After Call Instructions

The decompiler tracks ESP (stack pointer) through the function. When ESP becomes
"uncertain" (multiple possible values, or unknown), stack variable accesses become
BADSPACEBASE.

### Category B: Dynamic Stack Manipulation

Instructions that modify ESP in ways the decompiler can't statically resolve.

### Category C: Non-Standard Frame Patterns

Functions that don't follow the standard `push ebp; mov ebp, esp` prologue pattern.

### Category D: Complex Control Flow

Functions where ESP tracking is lost due to CFG complexity.

---

## Part 2: Existing Suspect Types

### 2.1 CALLIND-Related (Indirect Calls)

These handle ESP uncertainty after indirect calls (vtable calls, function pointers).

| Suspect Type | Environment | Detection | Override | Status |
|--------------|-------------|-----------|----------|--------|
| `callind_anchor` | EBP-frame function, CALLIND followed by ADD ESP | `_detect_callind_anchor()` | `generate_esp_anchor_pcode()` | **STABLE** |
| `callind_preserve` | Non-EBP-frame function, CALLIND followed by ADD ESP | `_detect_callind_anchor()` | `generate_callind_preserve_pcode()` | EXPERIMENTAL |
| `callind_preserve_lost` | Non-EBP-frame, CALLIND with lost ESP (branching) | `_detect_callind_anchor()` | `generate_callind_preserve_pcode()` | EXPERIMENTAL |

**Scenario:** Virtual method calls through vtables, callbacks via function pointers.

**Why it causes BADSPACEBASE:** After CALLIND, Ghidra doesn't know if the callee
is cdecl (caller cleanup) or stdcall (callee cleanup), so ESP becomes uncertain.

**Fix Strategy:**
- EBP-frame: Anchor ESP = EBP - frame_offset at the ADD ESP instruction
- Non-EBP-frame: Save ESP before CALLIND, restore after

**Current Coverage:** 443 functions (27.3% of BADSPACEBASE cases)
- 922 resolved suspects
- 498 unresolved suspects

---

### 2.2 Variadic Call-Related

These handle ESP uncertainty after calls to variadic functions (printf, sprintf, scanf, etc.).

| Suspect Type | Environment | Detection | Override | Status |
|--------------|-------------|-----------|----------|--------|
| `variadic_anchor` | EBP-frame, variadic CALL with ADD ESP cleanup | `identify_variadic_calls()` | `generate_esp_anchor_pcode()` | **STABLE** |
| `variadic_preserve_ebp` | EBP-frame, variadic CALL without ADD ESP | `identify_variadic_calls()` | `generate_call_esp_preserve_pcode()` | EXPERIMENTAL |
| `variadic_preserve` | Non-EBP-frame, variadic CALL | `identify_variadic_calls()` | `generate_call_esp_preserve_pcode()` | EXPERIMENTAL |

**Scenario:** Calls to printf, sprintf, fprintf, scanf, fscanf, etc.

**Why it causes BADSPACEBASE:** Variadic functions have complex internal stack frames
that can confuse Ghidra's analysis of the calling function's ESP tracking.

**Fix Strategy:** Same as CALLIND - anchor or preserve ESP.

**Current Coverage:** 602 functions (37.1% of BADSPACEBASE cases)
- 1,209 resolved suspects
- 1,602 unresolved suspects

---

### 2.3 Jump Target ESP Mismatch

| Suspect Type | Environment | Detection | Override | Status |
|--------------|-------------|-----------|----------|--------|
| `jump_target_esp_mismatch` | Jump target after RET with mismatched ESP | `_detect_jump_target_esp_mismatch()` | None | DETECTION ONLY |

**Scenario:** Code after a RET instruction that is only reachable via jumps from
earlier in the function. Ghidra computes ESP from sequential fall-through instead
of jump sources.

**Why it causes BADSPACEBASE:** The computed ESP at the jump target doesn't match
the actual ESP from the jump sources.

**Current Coverage:** Detected but no automated fix.

---

### 2.4 Parameter Count Mismatch

| Suspect Type | Environment | Detection | Override | Status |
|--------------|-------------|-----------|----------|--------|
| `param_count_too_few` | Function declares fewer params than call sites push | `identify_param_count_mismatch()` | None | DETECTION ONLY |
| `param_count_too_many` | Function declares more params than call sites push | `identify_param_count_mismatch()` | None | DETECTION ONLY |

**Scenario:** Wrong function signature in Ghidra.

**Why it relates to BADSPACEBASE:** Wrong param count can cause ESP tracking issues.

**Fix Strategy:** Manual signature correction in Ghidra.

---

### 2.5 Format String Mismatch

| Suspect Type | Environment | Detection | Override | Status |
|--------------|-------------|-----------|----------|--------|
| `format_string_mismatch` | Variadic call where format specifiers don't match args | `identify_format_string_mismatch()` | None | DETECTION ONLY |

**Scenario:** `sprintf(buf, "%d %s", x)` - format expects 2 args, only 1 provided.

**Why it relates to BADSPACEBASE:** Wrong argument count affects stack analysis.

---

## Part 3: Detected but No Override Support

These patterns are detected in JSON metadata but have no pcode override fix.

### 3.1 Stack Alignment

| Pattern | Detection | Override | Functions |
|---------|-----------|----------|-----------|
| `stack_alignment` | `stack_patterns.patterns[].pattern_id` | **YES (proposed)** | 334 total, 198 with BADSPACEBASE |

**Instruction:** `AND ESP, 0xFFFFFFF8` (or similar alignment mask)

**Scenario:** Functions that align the stack for SIMD operations (SSE/MMX) or
to meet ABI requirements for certain calls.

**Why it causes BADSPACEBASE:** After AND ESP, the exact ESP value depends on
the runtime value at function entry. All ESP-relative accesses become uncertain.

**Key Finding:** ALL 540 functions with stack_alignment ALSO have an EBP frame.
The typical prologue is:
```
PUSH EBX/ESI/EDI/EBP
MOV EBP, ESP          ; EBP set BEFORE alignment
SUB ESP, 0x14c        ; Allocate locals
AND ESP, 0xFFFFFFF8   ; Align ESP (makes it uncertain)
```

**Fix Strategy: `stack_align_anchor`**

Since EBP is set BEFORE the AND ESP instruction, we can anchor ESP at the AND ESP
instruction to the value it had BEFORE alignment:

```
# At AND ESP instruction, override to:
ESP = EBP - (SUB ESP offset)

# Example: if SUB ESP was 0x14c (332), the pcode override is:
INT_ADD (register,0x10,4) = (register,0x14,4), (const,0xfffffeb4,4)
```

This "lies" about the actual ESP value by up to 7 bytes, but:
- Ghidra gets a deterministic frame to work with
- All locals resolve to named variables instead of `in_stack_*`
- The 0-7 byte difference is within alignment padding anyway
- Parameters accessed via EBP are unaffected

**Coverage:** 198 functions can be fixed with this approach.

---

### 3.2 Alternative Frame Pointer

| Pattern | Detection | Override | Functions |
|---------|-----------|----------|-----------|
| `alt_frame_pointer` | `stack_patterns.patterns[].pattern_id` | None | 174 (10.7%) |

**Scenario:** Function uses a register other than EBP as a frame pointer
(e.g., `mov esi, esp` or `lea edi, [esp+0x10]`).

**Why it causes BADSPACEBASE:** Ghidra's standard EBP-frame analysis doesn't apply.

**Potential Fix Strategies:**
1. Could detect which register is the frame pointer and generate appropriate overrides
2. Manual analysis required - pattern varies significantly

---

## Part 4: PROPOSED NEW Suspect Types

Based on diagnostic findings, these patterns cause BADSPACEBASE but are NOT currently
detected or fixed.

### 4.1 Direct Call ESP Uncertainty (NEW - BIGGEST GAP)

**Proposed Name:** `call_esp_uncertain`

| Proposed Type | Environment | Functions |
|---------------|-------------|-----------|
| `call_esp_uncertain_anchor` | EBP-frame, direct CALL with uncertain ESP after | TBD |
| `call_esp_uncertain_preserve` | Non-EBP-frame, direct CALL with uncertain ESP after | ~409 |

**Scenario:** Regular `CALL 0xADDRESS` instruction (not CALLIND, not variadic) in a
non-EBP-frame function where ESP tracking becomes uncertain after the call returns.

**Why it causes BADSPACEBASE:** Same fundamental issue as CALLIND, but for direct calls.
In non-EBP-frame functions, Ghidra may lose ESP tracking after any call returns.

**Evidence from diagnostics:**
```
Uncertain ESP after DIRECT CALL:  409  (84.5% of "unknown" cases)
```

**Example from pcode file:**
```
@004319c9 [ESP:-260](-4)  # CALL 0x00431870
@004319ce [ESP:-260](+8)?  # ADD ESP, 0x8
                      ^-- '?' indicates computed/uncertain
```

**Detection Strategy:**
1. Parse pcode files for CALL instructions (not CALLIND)
2. Check ESP certainty marker on instruction after CALL
3. If '?' (computed) or other uncertainty markers, flag as suspect

**Fix Strategy:**
- Same as CALLIND variants: anchor or preserve ESP

**Priority:** HIGH - covers 409 functions, biggest single gap

---

### 4.2 LEA ESP (Stack Address Taken)

**Proposed Name:** `lea_esp_stack_addr`

| Proposed Type | Environment | Functions |
|---------------|-------------|-----------|
| `lea_esp_stack_addr` | Non-EBP-frame, LEA reg, [ESP + offset] | 45 |

**Scenario:** Function takes the address of a stack variable using ESP-relative
addressing in a non-EBP-frame function.

**Instruction Pattern:** `LEA EAX, [ESP + 0x10]` or similar

**Why it causes BADSPACEBASE:** The LEA creates a `TypeSpacebase` pointer that
references ESP. If ESP tracking is uncertain at that point, the pointer becomes
BADSPACEBASE when dereferenced.

**Evidence from diagnostics:**
```
LEA ESP only (stack addr taken):   45
```

**Example:**
```
crc32UpdateDword_FUN_0051c480:
  LEA ESP count: 1
  LEA addresses: 0051c489
  EBP frame: False
```

**Detection Strategy:**
1. Parse pcode/assembly for `LEA reg, [ESP + offset]`
2. Check if function has EBP frame
3. If no EBP frame, flag as suspect

**Fix Strategy:**
- Ensure ESP is anchored before the LEA instruction
- Or convert to EBP-relative if possible

**Priority:** MEDIUM - 45 functions

---

### 4.3 CFG-Resolved ESP (Jump Target Recovery)

**Proposed Name:** `cfg_esp_conflict`

| Proposed Type | Environment | Functions |
|---------------|-------------|-----------|
| `cfg_esp_conflict` | Multiple paths to same instruction with different ESP | 10 |

**Scenario:** Control flow merge point where different paths have different ESP values.
Our CFG analysis can resolve this, but Ghidra's linear analysis cannot.

**Why it causes BADSPACEBASE:** Ghidra sees conflicting ESP values and gives up tracking.

**Evidence from diagnostics:**
```
CFG-resolved only (jump targets):  10
```

**Detection Strategy:**
1. Parse pcode files for '~' (cfg_resolved) markers
2. Identify instructions with cfg_resolved but no other known cause

**Fix Strategy:**
- Generate pcode override to anchor ESP at the merge point
- May require analyzing all incoming edges

**Priority:** LOW - only 10 functions, complex to fix automatically

---

### 4.4 Entry Point / Special Functions

**Proposed Name:** `special_function`

| Proposed Type | Environment | Functions |
|---------------|-------------|-----------|
| `entry_point` | Program entry point | 1 |
| `crt_function` | C runtime library functions | ~10 |
| `math_intrinsic` | Math library intrinsics | ~9 |

**Scenario:** Special functions with non-standard calling conventions or entry conditions.

**Why it causes BADSPACEBASE:** These functions don't follow normal patterns:
- Entry point has no caller, ESP is whatever the OS provides
- CRT functions have unusual stack manipulation for exception handling
- Math intrinsics may use FPU stack or have unusual register usage

**Evidence from diagnostics:**
```
Examples with NO detected pattern (truly unknown):
  - entry @ 0060239a
  - crt_unknown.c_FUN_00607858
  - crt_math.c_...
```

**Detection Strategy:**
1. Check if address is program entry point
2. Check if function is in CRT module (by path or name pattern)
3. Check if function is math intrinsic (by name pattern)

**Fix Strategy:**
- Usually not fixable automatically
- May require manual override or ignoring

**Priority:** LOW - small number, special cases

---

## Part 5: Summary Matrix

### Detection Status

| Pattern | Detected | Override | Functions | Priority |
|---------|----------|----------|-----------|----------|
| CALLIND (EBP) | Yes | Yes | 443 | - |
| CALLIND (no EBP) | Yes | Yes (exp) | included above | - |
| Variadic (EBP) | Yes | Yes | 602 | - |
| Variadic (no EBP) | Yes | Yes (exp) | included above | - |
| **Stack alignment** | Yes | **YES (proposed)** | 198 | **HIGH** |
| Alt frame pointer | Yes | No | 174 | MEDIUM |
| **Direct CALL uncertain** | **NO** | **NO** | **409** | **HIGH** |
| LEA ESP | NO | NO | 45 | MEDIUM |
| CFG conflict | Partial | NO | 10 | LOW |
| Entry/CRT/Math | NO | NO | ~20 | LOW |

### Proposed Implementation Order

1. **`call_esp_preserve`** - 409 functions, same fix strategy as CALLIND (HIGH)
2. **`stack_align_anchor`** - 198 functions, anchor ESP at AND ESP instruction (HIGH)
3. **`lea_esp_stack_addr`** - 45 functions, detection + possible fix (MEDIUM)
4. **`cfg_esp_conflict`** - 10 functions, detection only initially (LOW)
5. **`special_function`** - ~20 functions, detection for documentation (LOW)

---

## Part 6: Naming Convention

### Pattern: `{cause}_{frame_type}_{fix_strategy}`

**Cause prefixes:**
- `callind_` - Indirect call (CALLIND pcode op)
- `call_` - Direct call (CALL instruction)
- `variadic_` - Call to variadic function
- `lea_` - LEA instruction creating stack pointer
- `cfg_` - Control flow graph issue
- `align_` - Stack alignment instruction

**Frame type (optional, for call-related):**
- (none) - Applies to both frame types
- `_ebp_` or `_anchor` - Has EBP frame, can anchor
- `_nofp_` or `_preserve` - No EBP frame, must preserve

**Fix strategy suffix:**
- `_anchor` - Fix by anchoring ESP = EBP - offset
- `_preserve` - Fix by save/restore ESP across instruction
- `_detect` - Detection only, no automated fix

### Proposed Complete Type List

```
# CALLIND-related (existing)
callind_anchor              # EBP frame, anchor at ADD ESP
callind_preserve            # No EBP frame, preserve across CALLIND
callind_preserve_lost       # No EBP frame, ESP already lost

# Variadic-related (existing)
variadic_anchor             # EBP frame, anchor at ADD ESP
variadic_preserve_ebp       # EBP frame but no ADD ESP
variadic_preserve           # No EBP frame

# Direct call ESP uncertainty (NEW)
call_esp_anchor             # EBP frame, direct call causes uncertainty
call_esp_preserve           # No EBP frame, direct call causes uncertainty

# Stack alignment (NEW - fixable!)
stack_align_anchor          # EBP frame with AND ESP alignment
                            # Fix: Anchor ESP = EBP - (SUB ESP offset) at AND ESP

# LEA stack address (NEW)
lea_esp_stack_addr          # Takes address of ESP-relative stack location

# CFG issues (NEW)
cfg_esp_conflict            # Multiple paths with different ESP values
cfg_esp_unreachable         # Code unreachable by normal flow

# Stack manipulation (existing detection, no fix)
alt_frame_pointer           # Non-EBP frame pointer register

# Special functions (NEW)
special_entry_point         # Program entry point
special_crt_function        # C runtime library function
special_math_intrinsic      # Math library intrinsic
```

---

## Part 7: Implementation Notes

### For `call_esp_uncertain_*` (Highest Priority)

**Detection in `suspects.py`:**
```python
def _detect_direct_call_esp_uncertainty(pcode_data):
    """Detect direct CALL instructions with uncertain ESP after."""
    suspects = []

    prologue_offset, has_ebp_frame = get_prologue_offset(pcode_data)
    frame_offset = get_frame_offset_from_pcode(pcode_data) if has_ebp_frame else None

    for i, entry in enumerate(pcode_data):
        pcode_lines = entry.get('pcode', [])

        # Check for direct CALL (not CALLIND)
        has_call = any('CALL (ram,' in line for line in pcode_lines)
        has_callind = any('CALLIND' in line for line in pcode_lines)

        if has_call and not has_callind:
            # Check ESP certainty after call
            if i + 1 < len(pcode_data):
                next_certainty = pcode_data[i + 1].get('esp_certainty', '')
                if next_certainty in ('computed', 'unknown', 'lost', 'cfg_resolved'):
                    # Look for ADD ESP
                    for j in range(i + 1, min(i + 5, len(pcode_data))):
                        next_asm = pcode_data[j].get('assembly', '')
                        if 'ADD' in next_asm.upper() and 'ESP' in next_asm.upper():
                            if has_ebp_frame and frame_offset:
                                suspects.append({
                                    'type': 'call_esp_anchor',
                                    'fix_address': pcode_data[j].get('address'),
                                    'frame_offset': frame_offset,
                                    ...
                                })
                            else:
                                suspects.append({
                                    'type': 'call_esp_preserve',
                                    'call_address': entry.get('address'),
                                    ...
                                })
                            break
    return suspects
```

**Override generation:** Reuse existing `generate_esp_anchor_pcode()` and
`generate_call_esp_preserve_pcode()` functions.

---

### For `stack_align_anchor` (High Priority)

**Detection in `suspects.py`:**
```python
def _detect_stack_align_anchor(json_data, pcode_data):
    """Detect stack alignment that can be fixed with ESP anchor."""
    suspects = []

    # Check if function has stack_alignment pattern
    patterns = json_data.get('stack_patterns', {}).get('patterns', [])
    align_pattern = None
    for p in patterns:
        if p.get('pattern_id') == 'stack_alignment':
            align_pattern = p
            break

    if not align_pattern:
        return suspects

    # Must be EBP frame (all stack_alignment functions are)
    if not json_data.get('function', {}).get('is_ebp_frame', False):
        return suspects

    # Find SUB ESP offset before AND ESP
    sub_esp_offset = None
    for entry in pcode_data:
        asm = entry.get('assembly', '')
        if 'SUB ESP' in asm.upper():
            import re
            match = re.search(r'SUB ESP,\s*0x([0-9a-fA-F]+)', asm, re.IGNORECASE)
            if match:
                sub_esp_offset = int(match.group(1), 16)
                break

    if sub_esp_offset is None:
        return suspects

    suspects.append({
        'type': 'stack_align_anchor',
        'fix_address': align_pattern.get('address'),
        'sub_esp_offset': sub_esp_offset,
        'description': f'Stack alignment can be anchored: ESP = EBP - 0x{sub_esp_offset:x}'
    })

    return suspects
```

**Override generation:**
```python
def generate_stack_align_anchor_pcode(sub_esp_offset):
    """Generate p-code to anchor ESP at stack alignment instruction.

    Args:
        sub_esp_offset: The SUB ESP offset before the AND ESP (e.g., 0x14c)

    Returns:
        P-code operation string: ESP = EBP - sub_esp_offset
    """
    # ESP = EBP + (-sub_esp_offset) in two's complement
    offset_twos = (-sub_esp_offset) & 0xFFFFFFFF
    return "INT_ADD (register,0x10,4) = (register,0x14,4), (const,0x%x,4)" % offset_twos
```

**Key insight:** This uses the same `generate_esp_anchor_pcode()` function but with
`sub_esp_offset` instead of `frame_offset`. The offset comes from the SUB ESP
instruction that precedes the AND ESP.

---

## Appendix: Diagnostic Script Reference

The `diagnose_badspacebase.py` script provides detailed analysis:

```bash
python diagnose_badspacebase.py
```

Output includes:
- Cause breakdown by category
- Frame type breakdown (EBP vs non-EBP)
- Deep analysis of unknown functions via pcode parsing
- Examples of each pattern type
- Export of unknown functions to JSON for further analysis

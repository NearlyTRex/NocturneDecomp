# Runtime Patching Approaches

This document explores approaches to intercept or modify what Ghidra's decompiler sees, potentially converting ESP-relative code to EBP-relative on a per-function basis.

## Overview

The core idea: instead of fixing Ghidra's ESP tracking algorithm, **change what the decompiler sees** so it doesn't need to track ESP at all. By converting functions to use EBP-relative addressing, the decompiler can trivially resolve all stack references.

## Approach 1: Byte Patching in Ghidra (Simplest)

### Concept

Modify bytes directly in Ghidra's program database, then re-analyze. The original file is unchanged, but Ghidra decompiles the patched version.

### How It Works

```java
// Ghidra script to add EBP frame to a function
Address funcStart = toAddr(0x00510400);

// Original: sub esp, 0x214
// Patch to: push ebp; mov ebp, esp; sub esp, 0x214

// Clear existing code
clearListing(funcStart, funcStart.add(10));

// Patch new bytes
setBytes(funcStart, new byte[] {
    0x55,                   // push ebp
    (byte)0x89, (byte)0xe5, // mov ebp, esp
    (byte)0x81, (byte)0xec, // sub esp, ...
    0x14, 0x02, 0x00, 0x00  // 0x214
});

// Re-disassemble
disassemble(funcStart);

// Re-create function
createFunction(funcStart, "patched_function");
```

### Transformation Required

**Before (Watcom ESP-relative):**
```asm
005104d0:  sub esp, 0x214
005104d6:  mov eax, [esp+0x20c]    ; local at ESP+0x20c
005104dd:  push ebx
005104de:  mov ecx, [esp+0x210]    ; same local, now ESP+0x210!
```

**After (EBP-relative):**
```asm
005104d0:  push ebp
005104d1:  mov ebp, esp
005104d3:  sub esp, 0x214
005104d9:  mov eax, [ebp-0x8]      ; local at EBP-0x8 (constant!)
005104dc:  push ebx
005104dd:  mov ecx, [ebp-0x8]      ; same local, same offset!
```

### Offset Calculation

The hard part is computing EBP-relative offset Y from ESP-relative offset X:

```
At function entry after prologue:
  EBP = original_ESP - 4  (after push ebp)
  ESP = EBP - frame_size

For instruction at offset with N pushes on stack:
  [ESP + X] refers to address: current_ESP + X
  current_ESP = EBP - frame_size - (N * 4)

  So: address = EBP - frame_size - (N * 4) + X

  EBP-relative offset = -frame_size - (N * 4) + X
                      = X - frame_size - (N * 4)
```

### Pros
- Works in stock Ghidra 12.1
- Changes persist in database
- No external tools needed

### Cons
- Must patch ALL ESP-relative instructions in function
- Must track push/pop count at each instruction
- Space constraints (may need code caves for larger prologue)
- Labor-intensive without automation

### References
- [The quest to Patch Bytes/Instructions easily - Ghidra Issue #6804](https://github.com/NationalSecurityAgency/ghidra/issues/6804)
- [Reverse Engineering and Patching with Ghidra - Coalfire](https://coalfire.com/the-coalfire-blog/reverse-engineering-and-patching-with-ghidra)
- [Patching Binaries With Ghidra - RangeForce](https://materials.rangeforce.com/tutorial/2020/04/12/Patching-Binaries/)

---

## Approach 2: GhidraCraft P-code Patching (Most Powerful)

### Concept

GhidraCraft is a modified Ghidra that allows direct P-code patching. Instead of changing bytes, you change the **semantic interpretation** of instructions.

### Repository

https://github.com/Escapingbug/ghidracraft

### How It Works

GhidraCraft adds the ability to modify P-code (Ghidra's intermediate representation) without changing actual bytes:

#### UI-Based Patching

1. Open "edit the listing fields" in the listing view
2. Select the `PCode` field under `Instruction/Data`
3. Enable raw Pcode display: `Edit` → `Tool Options` → `Listing Fields` → `Pcode Field` → `Display Raw Pcode`
4. Right-click any P-code instruction to modify/insert/remove

#### Script-Based Patching

```python
# Patch a single instruction's P-code
inst = getInstructionAt(toAddr(0x00510450))

# Original: mov eax, [esp+0x20c]
# We want: mov eax, [ebp-0x8]

# Construct new P-code
# Varnode format: (space_name, offset, size)
# EBP is register 0x14 (20) in x86

new_pcode = """
(unique, 0x1000, 4) = INT_ADD (register, 0x14, 4), (const, 0xFFFFFFF8, 4)
(register, 0x0, 4) = LOAD (ram, (unique, 0x1000, 4), 4)
"""

# Parse and apply
from ghidra.program.model.pcode import PcodeRawParser
pcode_array = PcodeRawParser.parse(new_pcode)
inst.patchPcode(pcode_array)
```

### P-code Syntax Reference

| Element | Format | Example |
|---------|--------|---------|
| Varnode | `(space, offset, size)` | `(register, 0x14, 4)` = EBP |
| Constant | `(const, value, size)` | `(const, 0xFFFFFFF8, 4)` = -8 |
| Temporary | `(unique, offset, size)` | `(unique, 0x1000, 4)` |
| Operation | `output = OPCODE inputs` | `(reg, 0, 4) = INT_ADD ...` |

### Common x86 Register Offsets

| Register | Offset |
|----------|--------|
| EAX | 0x00 |
| ECX | 0x04 |
| EDX | 0x08 |
| EBX | 0x0C |
| ESP | 0x10 |
| EBP | 0x14 |
| ESI | 0x18 |
| EDI | 0x1C |

### Pros
- Change semantics without modifying bytes
- Very flexible - can express anything in P-code
- Patches persist in database
- Transfers between GhidraCraft users

### Cons
- Requires GhidraCraft fork (not mainline Ghidra)
- Must build/maintain custom Ghidra
- P-code syntax has learning curve

### References
- [GhidraCraft Pcode Patch Documentation](https://starcrossportal.github.io/ghidracraft-book/ghidracraft_changes/pcode_patch.html)
- [GhidraCraft GitHub](https://github.com/Escapingbug/ghidracraft)

---

## Approach 3: Call Fixups via Specification Extensions

### Concept

Ghidra allows per-program "specification extensions" that inject P-code at call sites. While primarily for function calls, this can modify stack behavior.

### How to Access

`Edit` → `Options for [Program]` → `Specification Extensions`

### Adding a Call Fixup

```xml
<!-- Example: __aeabi_uldivmod.xml -->
<callfixup name="__aeabi_uldivmod">
  <target name="__aeabi_uldivmod"/>
  <pcode>
    <body><![CDATA[
      r0 = r0;  // Placeholder - real fixup would model return
      r1 = r1;
    ]]></body>
  </pcode>
</callfixup>
```

### Limitations for BADSPACEBASE

Call fixups only apply **at call sites**, not at arbitrary instructions. They adjust ESP **after** the call, but BADSPACEBASE often occurs **before** the call (during argument setup).

### Pros
- Works in stock Ghidra
- Per-program, doesn't affect global specs
- Good for modeling function side effects

### Cons
- Only works at call sites
- Doesn't help with `[ESP+X]` computations before calls
- Not a general solution for BADSPACEBASE

### References
- [Patch pcode in script - Ghidra Discussion #5693](https://github.com/NationalSecurityAgency/ghidra/discussions/5693)

---

## Approach 4: Custom PcodeInjectLibrary (Advanced)

### Concept

Create a custom Java class that intercepts P-code generation at analysis time. This is a "man-in-the-middle" approach that modifies P-code before the decompiler sees it.

### Implementation Outline

```java
package custom.watcom;

import ghidra.program.model.lang.InjectPayload;
import ghidra.program.model.lang.PcodeInjectLibrary;

public class WatcomPcodeInjectLibrary extends PcodeInjectLibrary {

    public WatcomPcodeInjectLibrary(SleighLanguage lang) {
        super(lang);
    }

    @Override
    public InjectPayload getPayload(int type, String name) {
        // Check if this is an ESP-relative stack access
        // If so, return modified P-code with EBP-relative semantics

        if (isESPRelativeAccess(name)) {
            return createEBPRelativePayload(name);
        }

        return super.getPayload(type, name);
    }

    private InjectPayload createEBPRelativePayload(String name) {
        // Generate P-code that uses EBP instead of ESP
        // This would be called for each instruction during analysis
    }
}
```

### Registration

The inject library must be registered in the processor's `.pspec` or via a Ghidra extension:

```xml
<processor_spec>
  <programcounter register="EIP"/>
  <inject_library name="WatcomPcodeInjectLibrary"
                  class="custom.watcom.WatcomPcodeInjectLibrary"/>
</processor_spec>
```

### Pros
- True runtime interception
- Could handle all ESP-relative accesses automatically
- Clean separation from base Ghidra

### Cons
- Requires building custom Ghidra module
- Complex implementation
- Must handle all edge cases
- Significant development effort

### References
- [Guide to P-code Injection - PT SWARM](https://swarm.ptsecurity.com/guide-to-p-code-injection/)
- [Dynamic assembly/pcode patching - Ghidra Issue #2376](https://github.com/NationalSecurityAgency/ghidra/issues/2376)
- [Is there any way to dynamically inject pcode? - Ghidra Discussion #5450](https://github.com/NationalSecurityAgency/ghidra/discussions/5450)

---

## Approach 5: Hybrid Byte + P-code Transformation Script

### Concept

Combine byte patching with automated analysis to transform functions wholesale:

1. **Analyze** function to identify all ESP-relative accesses
2. **Compute** EBP-relative offset for each
3. **Patch prologue** to add `push ebp; mov ebp, esp`
4. **Patch each instruction** to use EBP
5. **Patch epilogue** to restore EBP
6. **Re-analyze** function

### Script Outline

```python
# transform_to_ebp_frame.py

def transform_function(func_addr):
    func = getFunctionAt(func_addr)

    # Step 1: Find frame size from SUB ESP, X
    frame_size = find_frame_allocation(func)

    # Step 2: Find all ESP-relative accesses
    esp_accesses = []
    for inst in func.getInstructions():
        if uses_esp_relative(inst):
            offset = get_esp_offset(inst)
            push_count = count_pushes_before(inst, func)
            ebp_offset = compute_ebp_offset(offset, frame_size, push_count)
            esp_accesses.append({
                'addr': inst.getAddress(),
                'esp_offset': offset,
                'ebp_offset': ebp_offset,
                'instruction': inst
            })

    # Step 3: Check if we have room for prologue
    prologue_size = 3  # push ebp (1) + mov ebp,esp (2)
    if not can_fit_prologue(func, prologue_size):
        print(f"Cannot fit prologue in {func.getName()}")
        return False

    # Step 4: Apply patches
    patch_prologue(func_addr, frame_size)

    for access in esp_accesses:
        patch_to_ebp_relative(access)

    patch_epilogue(func)

    # Step 5: Re-analyze
    disassemble(func_addr)
    createFunction(func_addr, func.getName() + "_ebp")

    return True

def compute_ebp_offset(esp_offset, frame_size, push_count):
    """
    Convert ESP-relative offset to EBP-relative.

    After prologue:
      EBP points to saved EBP on stack
      ESP = EBP - frame_size

    At instruction with N additional pushes:
      ESP = EBP - frame_size - (N * 4)
      [ESP + X] = [EBP - frame_size - (N * 4) + X]

    EBP-relative offset = X - frame_size - (N * 4)
    """
    return esp_offset - frame_size - (push_count * 4)
```

### Pros
- Automated transformation
- Works in stock Ghidra
- Can be refined iteratively

### Cons
- Complex to implement correctly
- Must handle many instruction variants
- Space constraints for prologue
- May break some functions

---

## Comparison Matrix

| Approach | Stock Ghidra | Automation | Complexity | Effectiveness |
|----------|--------------|------------|------------|---------------|
| Byte Patching | Yes | Manual | Low | High if done right |
| GhidraCraft P-code | No (fork) | Scriptable | Medium | High |
| Call Fixups | Yes | Semi-auto | Low | Low (calls only) |
| PcodeInjectLibrary | No (module) | Automatic | High | High |
| Hybrid Script | Yes | Automatic | High | High |

## Recommended Starting Point

1. **Pick one small BADSPACEBASE function** with clear structure
2. **Manually trace** ESP through the function
3. **Test byte patching approach** on that function:
   - Add EBP prologue
   - Patch 2-3 ESP-relative instructions to EBP-relative
   - Check if decompilation improves
4. If successful, **build automation** around the manual process
5. If byte patching is too constrained, **try GhidraCraft**

## Space Constraints

A key challenge is fitting the new prologue. Options:

1. **NOP sled**: If function has NOPs at start, use them
2. **Shorten existing prologue**: `sub esp, X` → smaller encoding if possible
3. **Code cave**: Jump to empty space, add prologue there, jump back
4. **Overlay**: Create patched copy at different address for decompilation only

---

## Future Work

- [ ] Write proof-of-concept script for one function
- [ ] Test GhidraCraft on this project
- [ ] Evaluate PcodeInjectLibrary feasibility
- [ ] Create automation framework if manual tests succeed

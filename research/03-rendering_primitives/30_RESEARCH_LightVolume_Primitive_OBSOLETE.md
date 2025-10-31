# Light Volume Primitive - Research Task

## Status: NEEDS INVESTIGATION

The "light volume" primitive used in fire effects (type flag `0x80000`) is still not fully understood. It appears to be a 40-byte structure, but its exact layout differs from the standard geometry primitives.

---

## What We Know

### Size
- **40 bytes (0x28)** - same size as other simple primitives

### Type Identification
- `primitive_type == 0x80000` or `vertex_count == 0x80000`
- The value `0x80000` appears to be a magic flag identifying light volume mode
- Also see `0x800000` (with extra zero) used elsewhere - relationship unclear

### Used By
- Fire/flame effect rendering system
- Function: `core_fire.cpp_FUN_004c25c0`
- Renderer: `engine_drender.cpp_CDemonRenderer_renderEnhancedQualityVariant_FUN_0048bdc0`

### Assembly Evidence

From `src/core/fire.cpp/FUN_004c25c0.cpp`, around address `0x004c36c9`:

```asm
# Setup values in registers:
004c36c9: MOV ESI,0x80000          ; ESI = 0x80000 (light volume flag)
004c36ce: MOV EAX,0xf80000         ; EAX = 0xf80000 (unknown parameter)
004c36d3: XOR ECX,ECX              ; ECX = 0
004c373e: MOV EDX,0x1              ; EDX = 1
004c3743: MOV ECX,0x2              ; ECX = 2

# Write structure to stack (starting at ESP+0x80):
004c36d5: MOV dword ptr [ESP + 0x84],EDX    ; [ESP+0x84] = 4
004c36dc: MOV dword ptr [ESP + 0x94],ECX    ; [ESP+0x94] = 0
004c36e3: MOV dword ptr [ESP + 0x90],ECX    ; [ESP+0x90] = 0
004c36ea: MOV dword ptr [ESP + 0x8c],ECX    ; [ESP+0x8C] = 0
004c36f1: MOV dword ptr [ESP + 0x88],ECX    ; [ESP+0x88] = 0
004c36f8: MOV dword ptr [ESP + 0x98],ECX    ; [ESP+0x98] = 0
004c36ff: MOV dword ptr [ESP + 0xbc],EBX    ; [ESP+0xBC] = 3
004c3706: MOV dword ptr [ESP + 0x9c],ESI    ; [ESP+0x9C] = 0x80000
004c370d: MOV dword ptr [ESP + 0xa0],ESI    ; [ESP+0xA0] = 0x80000
004c3714: MOV dword ptr [ESP + 0xa8],EAX    ; [ESP+0xA8] = 0xf80000
004c371b: MOV dword ptr [ESP + 0xac],ESI    ; [ESP+0xAC] = 0x80000
004c3722: MOV dword ptr [ESP + 0xb4],EAX    ; [ESP+0xB4] = 0xf80000
004c3729: MOV dword ptr [ESP + 0xb8],EAX    ; [ESP+0xB8] = 0xf80000
004c3730: MOV dword ptr [ESP + 0xc0],ESI    ; [ESP+0xC0] = 0x80000
004c3737: MOV dword ptr [ESP + 0xc4],EAX    ; [ESP+0xC4] = 0xf80000
004c374d: MOV dword ptr [ESP + 0xa4],EDX    ; [ESP+0xA4] = 1
004c3754: MOV dword ptr [ESP + 0xb0],ECX    ; [ESP+0xB0] = 2

# Pass to renderer:
004c3843: LEA EAX,[ESP + 0x80]              ; Load address of structure
004c384a: PUSH EAX                           ; Push as parameter
004c3851: PUSH ECX                           ; Push CDemonRenderer*
004c3852: CALL engine_drender.cpp_CDemonRenderer_renderEnhancedQualityVariant_FUN_0048bdc0
```

### Memory Layout (Relative to ESP+0x80)

Based on assembly writes, the structure starting at ESP+0x80:

```
Offset from ESP+0x80:
+0x00: ??? (not explicitly written - may be uninitialized)
+0x04: 4 (written at 004c36d5)
+0x08: 0
+0x0C: 0
+0x10: 0
+0x14: 0
+0x18: 0
+0x1C: 0x80000 (written at 004c3706)
+0x20: 0x80000 (written at 004c370d)
+0x24: 1 (written at 004c374d)
+0x28: 0xf80000 (written at 004c3714)
+0x2C: 0x80000 (written at 004c371b)
+0x30: 2 (written at 004c3754)
+0x34: 0xf80000 (written at 004c3722)
+0x38: 0xf80000 (written at 004c3729)
+0x3C: 3 (written at 004c36ff - stored at ESP+0xBC)
+0x40: 0x80000 (written at 004c3730 - stored at ESP+0xC0)
+0x44: 0xf80000 (written at 004c3737 - stored at ESP+0xC4)
```

**Wait, this is MORE than 40 bytes!** The structure appears to extend beyond 0x28 (40 bytes).

---

## What We Don't Know

### Critical Questions

1. **What is the actual size?**
   - Is it 40 bytes like other primitives?
   - Or does it extend further (up to 0x48 = 72 bytes)?
   - The assembly writes go up to ESP+0xC4, which is ESP+0x80+0x44 = 68 bytes from start!

2. **What is the memory layout?**
   - Does it share the `SMRGLHeaderPrimitive` structure (type + count + SClipPlane)?
   - Or is it completely different?
   - The decompiled code showed `SStack_204.base.type = 0x80000` but assembly shows structure at ESP+0x80

3. **What do the magic values mean?**
   - `0x80000` - Light volume flag?
   - `0xf80000` - Negative light value? Color? Alpha?
   - `0x800000` (seen elsewhere) - Related or different?

4. **What are the parameters at each offset?**
   - Offset +0x1C, +0x20, +0x2C, +0x40: All `0x80000` - why repeated?
   - Offset +0x24: `1` - light count?
   - Offset +0x30: `2` - light type?
   - Offset +0x28, +0x34, +0x38, +0x44: All `0xf80000` - what is this value?

5. **How does the renderer interpret it?**
   - Need to analyze `CDemonRenderer_renderEnhancedQualityVariant_FUN_0048bdc0`
   - Does it check for `0x80000` flag and branch to special light rendering?
   - What fields does it actually read?

---

## Research Tasks

### Task 1: Determine Actual Structure Size
- [ ] Analyze assembly in `FUN_004c25c0` to find ALL writes to the structure
- [ ] Determine if structure is 40, 48, 60, or 72 bytes
- [ ] Check if multiple smaller structures are being composed together

### Task 2: Analyze Renderer Function
- [ ] Read assembly of `CDemonRenderer_renderEnhancedQualityVariant_FUN_0048bdc0`
- [ ] Find where it checks for `0x80000` flag
- [ ] Trace which fields it accesses and in what order
- [ ] Determine if it branches to a special light volume rendering path

### Task 3: Compare with Similar Structures
- [ ] Check if this matches any existing MRGL light structure types
- [ ] Look for other functions that create structures with `0x80000` flag
- [ ] Search for `0xf80000` usage to understand what it represents

### Task 4: Find Other Usage Sites
- [ ] Search for other places that set `primitive_type = 0x80000`
- [ ] Look for other calls to `renderEnhancedQualityVariant` with light data
- [ ] Check flame, fire, smoke, and other effect rendering code

### Task 5: Cross-Reference with Game Data
- [ ] Check if `0xf80000` is a fixed-point color/light value
- [ ] Convert `0xf80000` to float to see if it's a normalized value
- [ ] Look for light buffer structures that might be referenced

---

## Hypotheses to Test

### Hypothesis 1: It's NOT a Standard Primitive
The structure may not follow the standard primitive layout at all. It might be:
- A custom light rendering command structure
- A completely different format that just happens to be passed to the same renderer
- Multiple smaller structures concatenated together

### Hypothesis 2: It's a 72-byte Extended Structure
Based on the assembly writes extending to ESP+0xC4:
- Total size: ~68+ bytes
- May be an MRGL_Quad-like structure (72 bytes)
- Extra data beyond 40 bytes used for light parameters

### Hypothesis 3: The 0x80000 Flag Triggers Special Handling
The renderer may:
- Check `primitive_type == 0x80000`
- Branch to a completely different rendering path
- Interpret remaining fields as light parameters instead of geometry

### Hypothesis 4: 0xf80000 is a Signed Fixed-Point Value
```
0xf80000 = -524288 as signed int
0xf80000 >> 16 = 0xf8 = -8 as signed byte
```
Could be a light intensity, color component, or attenuation factor.

---

## Current Best Guess (UNVERIFIED)

Based on limited evidence, the structure MIGHT look like:

```c
// UNVERIFIED - NEEDS ASSEMBLY ANALYSIS
typedef struct SPrimitive_LightVolume {
    int unknown_0x00;                // 0x00: ??? (uninitialized?)
    int count_or_flag;               // 0x04: 4 (seen in assembly)
    int padding[4];                  // 0x08-0x17: Zeroed
    int light_volume_flag_1;         // 0x18: 0x80000
    int light_volume_flag_2;         // 0x1C: 0x80000
    int light_count;                 // 0x20: 1
    int light_param_1;               // 0x24: 0xf80000
    int light_volume_flag_3;         // 0x28: 0x80000
    int light_type;                  // 0x2C: 2
    int light_param_2;               // 0x30: 0xf80000
    int light_param_3;               // 0x34: 0xf80000
    int some_count;                  // 0x38: 3
    int light_volume_flag_4;         // 0x3C: 0x80000
    int light_param_4;               // 0x40: 0xf80000
    // Total: 68 bytes (0x44) - NOT 40!
} SPrimitive_LightVolume;
```

**Problem**: This doesn't match the 40-byte size claimed in previous analysis!

---

## Files to Examine

### Source Files (Assembly)
- `src/core/fire.cpp/FUN_004c25c0.cpp` - Creates light volume primitives
- `src/engine/drender.cpp/CDemonRenderer_renderEnhancedQualityVariant_FUN_0048bdc0.cpp` - Renders them
- `src/engine/drender.cpp/CDemonRenderer_renderMaximumQuality_FUN_0048bad0.cpp` - May also handle light volumes

### Related Files
- `src/core/fire.cpp/*` - Other fire effect functions
- `src/core/flame.cpp/*` - Flame effects
- `src/core/dlight.cpp/*` - Demon light system

### Header Files
- Current structure: `include/Nocturne/Struct/Game/SMRGLHeaderPrimitive.h`
- May need new: `SPrimitive_LightVolume.h` (once layout is determined)

---

## Action Items

1. **PRIORITY 1**: Analyze `CDemonRenderer_renderEnhancedQualityVariant_FUN_0048bdc0` assembly
   - Find the actual field accesses
   - Determine real structure size
   - Map out field usage

2. **PRIORITY 2**: Complete the memory layout table
   - Trace ALL assembly writes in `FUN_004c25c0`
   - Determine which writes belong to the light volume structure
   - Calculate actual size

3. **PRIORITY 3**: Search for similar patterns
   - Find other `0x80000` usage
   - Find other `0xf80000` usage
   - Look for related light rendering code

4. **PRIORITY 4**: Document findings
   - Update this research document
   - Create proper struct definition
   - Add to unified primitive headers

---

## Notes

- The decompiled code is unreliable for this function - stack variable assignments don't match assembly
- Must rely on assembly-level analysis for accurate structure layout
- The "40 bytes" assumption may be wrong - assembly suggests larger structure
- The relationship between ESP+0x80 structure and `SStack_204` is unclear
- May be multiple separate structures being confused as one

---

## Related Magic Numbers

- `0x80000` (524288 decimal) - Light volume flag
- `0xf80000` (-524288 as signed, or 16252928 unsigned) - Unknown light parameter
- `0x800000` (8388608 decimal) - Seen in other fire code, relationship unclear

Convert to float interpretations:
```c
// As IEEE 754 float:
0x80000 as float = 1.1641532e-39 (very small)
0xf80000 as float = -8.1094092e+29 (invalid/garbage)

// As 16.16 fixed-point:
0x80000 >> 16 = 0x8 = 8
0xf80000 >> 16 = 0xff8 = -8 (signed)

// As 8.24 fixed-point:
0x80000 >> 24 = 0x0 = 0
0xf80000 >> 24 = 0xf8 = -8 (signed)
```

Most likely: **16.16 fixed-point** with values 8 and -8.

---

## Conclusion

**Current Status**: The light volume primitive structure is NOT fully understood and needs detailed assembly-level analysis before we can create an accurate struct definition.

**Recommendation**: Do NOT include `SPrimitive_LightVolume` in the unified primitive headers until this research is complete. Mark it as "TODO - under investigation" in any documentation.

**Next Step**: Analyze the renderer function assembly to understand what fields it actually reads.

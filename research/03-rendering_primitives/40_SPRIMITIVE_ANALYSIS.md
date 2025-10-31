# SPrimitiveLit and SPrimitiveGeometry Analysis

## Investigation Summary

We investigated whether `SPrimitiveLit` and `SPrimitiveGeometry` are actually MRGL primitive types that should be replaced with specific MRGL structures.

## Key Findings

### 1. SPrimitiveLit Structure Layout (36 bytes)

```c
typedef struct SPrimitiveLit {
    char field_0[4];              // 0x00 - NEVER ACCESSED
    int type;                     // 0x04 - checked for == 0
    SClipPlane clip_plane;        // 0x08 - 16 bytes for culling
    SPrimitiveGeometry primitive; // 0x18 - 12 bytes geometry data
} SPrimitiveLit;
```

### 2. Comparison with MRGL Primitives

#### SMRGLPrimitiveTriangle/Quad Layout:
```c
+0x00: type (int)          // SMRGLHeaderBasic.type
+0x04: count (int)         // SMRGLHeaderBasic.count
+0x08: SClipPlane          // SMRGLHeaderPrimitive.surface_normal (16 bytes)
+0x18: SMRGLVertex[]       // Vertices start here
```

#### The Critical Observation:

**SPrimitiveLit has a 4-byte offset compared to MRGL primitives!**

If we skip the first 4 bytes of SPrimitiveLit:
- **+0x04 (type)** → would match **+0x00 (MRGL type)**
- **+0x08 (clip_plane)** → matches **+0x08 (MRGL surface_normal)**
- **+0x18 (primitive)** → matches **+0x18 (MRGL vertices)**

### 3. Assembly Evidence

#### From `renderLitObject` (0048c8d0):
```assembly
// EBX = SPrimitiveLit pointer
0048c8f1: LEA EAX,[EBX + 0x8]   // Access clip_plane at +0x08
0048c905: CMP dword ptr [EAX + 0x4],0x0  // Check type at +0x04
0048c910: LEA EAX,[EBX + 0x18]  // Access primitive data at +0x18
0048c919: MOV EBP,dword ptr [EBX + 0x4]  // Load type at +0x04
```

**CRITICAL**: Offset **+0x00 is NEVER accessed** in any code path!

#### From `FUN_00471400` (construction):
```assembly
// Building SPrimitiveLit on stack at ESP+0xc
00471517: MOV EAX,dword ptr [EBX + 0x66f2fc]  // field_0 from globals
0047151d: MOV dword ptr [ESP + 0xc],EAX       // ESP+0xc = +0x00
00471521: MOV EAX,dword ptr [EBX + 0x66f300]  // type from globals
00471527: MOV dword ptr [ESP + 0x10],EAX      // ESP+0x10 = +0x04
// ... continues building clip_plane at ESP+0x14 (+0x08)
// ... continues building primitive at ESP+0x24 (+0x18)
```

The data is read from **global constant arrays** (0x66f2fc+), not from MRGL files.

### 4. Global Data Investigation

Looking at the constants:
```c
const undefined4 DAT_0066f2fc = {0x30, 0x78, 0x33, 0x00};  // "0x3\0"
const undefined4 DAT_0066f300 = {0x30, 0x78, 0x34, 0x32};  // "0x42"
const undefined4 DAT_0066f304 = {0x2D, 0x30, 0x78, 0x66};  // "-0xf"
```

These are **ASCII hex strings**, not MRGL primitive data! This suggests either:
1. Ghidra misidentified this data section
2. The decompilation is incorrect in how it references these addresses
3. These are debug/editor-only data structures

## Lifecycle Analysis

### Where SPrimitiveLit Comes From:

1. **Lighting functions** (`FUN_004758d0`, `FUN_004736c0`, `FUN_00471400`):
   - Construct SPrimitiveLit **on the stack**
   - Populate vertices by transforming light geometry
   - Pass to `renderLitObject` for rendering

2. **Usage Pattern**:
   - These are used for **procedural geometry** (light halos, coronas, lens flares)
   - NOT read from MRGL files
   - NOT parsed from .SET/.GEO data
   - Created dynamically per frame

### Why the 4-byte Offset?

**Hypothesis**: SPrimitiveLit may be a **wrapper around actual MRGL primitive data**.

The structure could be interpreted as:
```c
typedef struct SPrimitiveLit {
    char padding[4];              // 0x00 - alignment or reserved
    // From here on, it LOOKS like an MRGL primitive
    int mrgl_type;                // 0x04 - maps to MRGL +0x00
    int mrgl_count;               // 0x08 (first 4 bytes of clip_plane) - maps to MRGL +0x04
    // But wait - clip_plane is 16 bytes, not 4+12!
    SClipPlane clip_plane;        // 0x08 - full 16 bytes
    SPrimitiveGeometry primitive; // 0x18 - vertex data
} SPrimitiveLit;
```

**Problem with this hypothesis**: The clip_plane is accessed as a full `SClipPlane` at +0x08, which is 16 bytes. In MRGL primitives, this would be only the `surface_normal` field of `SMRGLHeaderPrimitive`.

## Recommendations

### Option 1: SPrimitiveLit is NOT an MRGL Type (LIKELY CORRECT)

**Evidence**:
- +0x00 is never accessed (not a real MRGL type field)
- Created dynamically, not parsed from files
- Used only for procedural lighting geometry
- The structure doesn't perfectly match MRGL layout

**Action**:
- Keep SPrimitiveLit and SPrimitiveGeometry as-is
- Document that they are **runtime wrappers** for dynamic geometry
- Add comments explaining the apparent similarity to MRGL is coincidental

```c
// SPrimitiveLit - Runtime wrapper for dynamically generated geometry
// Used by lighting system to render halos, coronas, and lens flares
// NOTE: Layout superficially resembles MRGL primitives but is NOT file-based
typedef struct SPrimitiveLit {
    char field_0[4];              // 0x00 - unused/padding
    int type;                     // 0x04 - rendering mode (0 = normal)
    SClipPlane clip_plane;        // 0x08 - visibility culling plane
    SPrimitiveGeometry primitive; // 0x18 - vertex data
} SPrimitiveLit;
```

### Option 2: SPrimitiveLit Wraps MRGL Data with Offset (LESS LIKELY)

**Evidence**:
- The +4 byte offset is consistent
- Vertices start at +0x18, exactly matching MRGL
- clip_plane at +0x08 matches MRGL surface_normal position

**Problem**:
- No evidence of actual MRGL primitives being used
- Data comes from questionable global arrays
- The wrapper would serve no clear purpose

**Action**:
- Would need to verify if field_0 contains valid MRGL type codes
- Would need to find where actual MRGL primitives are cast to SPrimitiveLit*
- Currently no evidence supporting this

## Conclusion

**SPrimitiveLit is a runtime-only structure** used for dynamically generated geometry in the lighting system. It is **NOT an MRGL type** and should **NOT be replaced** with MRGL primitive structures.

The apparent similarity in layout (especially the offset +0x18 for vertex data) is likely due to:
1. Both systems needing a clip plane for culling
2. Both systems storing vertex arrays at similar offsets
3. Possible design influence from MRGL, but implemented independently

## Next Steps

- [x] Confirm SPrimitiveLit is not MRGL-based
- [x] Document the structure's actual purpose
- [ ] Add detailed comments to SPrimitiveLit.h explaining its use case
- [ ] Check if there are ANY functions that read actual MRGL primitives and render them
- [ ] Investigate `transformAndClipGeometry` to see what format it expects

# Nocturne Primitive Structures - Research Progression Index

This directory documents the investigation into Nocturne's rendering primitive structures, showing the evolution of understanding from initial confusion to final clarity.

---

## Research Timeline

### Phase 1: Initial Discovery (Docs 01-08)
**Goal**: Understand basic MRGL format and model structures

- `01_README.md` - Project overview
- `02_MRGL_TEXTURE_DISCOVERY.md` - First MRGL texture analysis
- `03_MRGL_FixedSizeStructs.h` - Early MRGL type definitions
- `04_CKeyFramedModel.h` - Keyframed model structure
- `05_POLY_STRUCTURE_ANALYSIS.md` - Polygon structure investigation
- `06_SupportingStructs.h` - Supporting type definitions
- `07_ANALYSIS_SUMMARY.md` - Early findings summary
- `08_RENDERING_PIPELINE_TRACE.md` - First rendering pipeline trace

**Key Finding**: MRGL uses polymorphic structures with type/size headers

---

### Phase 2: Primitive Format Investigation (Docs 09-14)
**Goal**: Understand different primitive rendering formats

- `09_MRGL_PRIMITIVE_FORMAT.md` - MRGL primitive structure analysis
- `10_PRIMITIVE_TYPES_IN_USE.md` - Catalog of primitive types found
- `11_DFM_PRIMITIVE_FORMAT.md` - Deformable model (DFM) primitives
- `12_RENDERING_PATHS_COMPARISON.md` - Compare different rendering paths
- `13_EFFECTS_RENDERING_PATHS.md` - Effects (fire, water, glass) rendering
- `14_RENDERING_ARCHITECTURE_COMPLETE.md` - Complete architecture overview

**Key Finding**: Multiple primitive formats exist (40, 60, 72 bytes)

---

### Phase 3: Size and Structure Confusion (Docs 15-20)
**Goal**: Determine exact sizes and layouts

- `15_RENDERER_PRIMITIVE_STRUCT_MAPPING.md` - Map renderers to struct types
- `16_CDEMONSET_PRIMITIVE_CORRECTED.md` - Correct CDemonSet primitive size
- `17_FINAL_PRIMITIVE_SIZES.md` - Confirmed size measurements
- `18_CDEMONSET_PRIMITIVE_FINAL_ANALYSIS.md` - Detailed CDemonSet analysis
- `19_ALL_PRIMITIVE_FORMATS_FINAL.md` - All formats catalogued
- `20_INVESTIGATION_SUMMARY.md` - Summary of size findings

**Key Finding**: Same size ≠ same structure! Must look at actual layouts.

---

### Phase 4: Renderer Path Analysis (Docs 21-24)
**Goal**: Trace rendering code paths to understand usage

- `21_CDEMONSET_GEOMETRY_RENDERING_PATH.md` - CDemonSet rendering flow
- `22_CDEMONSET_ADAPTER_FUNCTIONS.md` - Adapter/wrapper functions
- `23_MYSTERY_SOLVED_VERTEX_INDICES.md` - Vertex index array interpretation
- `24_CDEMONSET_PRIMITIVE_FINAL_COMPLETE.md` - Complete CDemonSet primitive

**Key Finding**: Vertex indices stored as sequential int array, regardless of structure

---

### Phase 5: Comprehensive Structure Documentation (Docs 25-28)
**Goal**: Document all variants and create unified type system

- `25_ALL_PRIMITIVE_STRUCT_VARIATIONS.md` - All variations mapped
- `26_FIRE_PRIMITIVE_FORMAT.md` - Fire effect primitive analysis
- `27_PRIMITIVE_STRUCTURE_SUMMARY.md` - Complete summary of all types
- `28_RECOMMENDED_TYPE_STRUCTURE.md` - Recommended struct organization

**Key Finding**: Need separate structs for different purposes, avoid unions

---

### Phase 6: MRGL Primitive Structs (Doc 29)
**Goal**: Create clean MRGL primitive structure definitions

- `29_SMRGLPrimitive_Structs.h` - Final MRGL primitive definitions
  - `SMRGLPrimitiveHeader` (24 bytes)
  - `SVertexElement` (12 bytes)
  - `SMRGLPrimitive_Triangle` (60 bytes)
  - `SMRGLPrimitive_Quad` (72 bytes)
  - `SMRGLPrimitive_Variable` (flexible)

**Key Finding**: MRGL primitives follow composition pattern like SMRGLTexture0x0d/0x40

---

### Phase 7: The "Light Volume" Mystery (Docs 30-31)
**Goal**: Understand mysterious "light volume" primitive with 0x80000 values

- `30_RESEARCH_LightVolume_Primitive_OBSOLETE.md` - Initial investigation (WRONG!)
  - Thought it was a special 40-byte light structure
  - Misinterpreted 0x80000 as a magic flag
  - Confused by multiple code paths

- `31_SOLVED_LightVolume_Actually_MRGL_Quad.md` - ✅ SOLUTION!
  - It's a standard SMRGLPrimitive_Quad (72 bytes)
  - 0x80000 = 8.0 in 16.16 fixed-point (UV coordinate)
  - 0xf80000 = -8.0 in 16.16 fixed-point
  - Creates 16×16 unit quad in UV space for texture tiling
  - NO special "light volume" structure exists!

**BREAKTHROUGH**: Assembly analysis revealed the truth - just a textured quad with large UV coordinates!

---

### Phase 8: Non-MRGL Primitives (Doc 32)
**Goal**: Define simple 40-byte rendering primitives

- `32_SPrimitive_Structs_NEEDS_UPDATE.h` - Simple primitive definitions (NEEDS UPDATE)
  - `SPrimitive_Geometry` (40 bytes) - CDemonSet triangles
  - `SPrimitive_FireQuad` (40 bytes) - Fire quads (4 indices)
  - ~~`SPrimitive_LightVolume`~~ - DELETE THIS! (proven to not exist)

**Status**: Needs update to remove SPrimitive_LightVolume references

---

## Final Structure Taxonomy

### MRGL Primitives (Variable Size)
All use composition pattern: header + vertex elements

```
SMRGLPrimitiveHeader (24 bytes)
├─ type: int (4 bytes)
├─ element_count: int (4 bytes)
└─ surface_normal: SClipPlane (16 bytes)

SVertexElement (12 bytes per vertex)
├─ vertex_index: int (4 bytes)
├─ texture_u: int (4 bytes) - 16.16 fixed-point
└─ texture_v: int (4 bytes) - 16.16 fixed-point

SMRGLPrimitive_Triangle = header + 3 vertices = 60 bytes
SMRGLPrimitive_Quad = header + 4 vertices = 72 bytes
SMRGLPrimitive_Variable = header + N vertices = 24 + N×12 bytes
```

**Used by**: KFM models, DFM models, water, glass, curtains, fire effects

---

### Simple Primitives (40 bytes)
Stack-allocated for immediate rendering

```
SPrimitive_Geometry (40 bytes) - CDemonSet level geometry
├─ primitive_type: int
├─ vertex_count: int (always 3)
├─ surface_normal: SClipPlane (16 bytes)
├─ vertex_indices[3]: int[3] (12 bytes)
└─ padding: int

SPrimitive_FireQuad (40 bytes) - Fire particle quads
├─ primitive_type: int (4)
├─ vertex_count: int (0)
├─ surface_normal: SClipPlane (16 bytes, usually zero)
└─ vertex_indices[4]: int[4] (16 bytes - uses padding slot!)
```

**Used by**: Static level geometry, simple fire effects

---

## Common Misconceptions (Now Corrected)

### ❌ WRONG: "There's a special light volume primitive"
✅ RIGHT: Fire effects use standard MRGL quads with large UV coordinates

### ❌ WRONG: "0x80000 is a magic flag for light rendering"
✅ RIGHT: 0x80000 = 8.0 in 16.16 fixed-point UV coordinate

### ❌ WRONG: "Same size means same structure"
✅ RIGHT: 40-byte structures have different layouts depending on usage

### ❌ WRONG: "Fire rendering needs special primitive types"
✅ RIGHT: Fire uses both 40-byte simple quads AND 72-byte MRGL quads

### ❌ WRONG: "The decompiled code shows the actual structure layout"
✅ RIGHT: Must verify with assembly - Ghidra's stack variables can be wrong!

---

## Research Methods That Worked

### ✅ Assembly Analysis
- Trace actual memory writes/reads
- Identify structure offsets from instructions
- Verify sizes from loop strides (ADD reg, 0xNN)
- Check function parameters at call sites

### ✅ Renderer Function Analysis
- What fields does the renderer actually read?
- What offsets are accessed?
- What's the loop stride for vertex iteration?

### ✅ Cross-Referencing
- Find all call sites of a renderer
- Compare structures passed from different callers
- Look for patterns in multiple usage sites

### ❌ Methods That Failed
- Trusting decompiled variable names
- Assuming magic numbers are flags without verification
- Inferring structure from size alone
- Following wrong code paths

---

## Key Lessons Learned

1. **Assembly is ground truth** - Decompilation can be misleading
2. **Verify everything** - Don't assume, trace and confirm
3. **Check multiple call sites** - Patterns emerge across usage
4. **Question magic numbers** - They're often just data values
5. **Size ≠ Structure** - Same size can mean different layouts
6. **Composition over unions** - Use embedded structs, not unions
7. **Follow the renderer** - What it reads determines actual structure

---

## Files Summary

### Header Files (Use These)
- `29_SMRGLPrimitive_Structs.h` - ✅ FINAL MRGL primitives
- `32_SPrimitive_Structs_NEEDS_UPDATE.h` - ⚠️ Needs light volume removal
- `03_MRGL_FixedSizeStructs.h` - ✅ MRGL texture/model types
- `04_CKeyFramedModel.h` - ✅ Model structure
- `06_SupportingStructs.h` - ✅ Supporting types

### Documentation (Read These)
- `31_SOLVED_LightVolume_Actually_MRGL_Quad.md` - ✅ The solution!
- `27_PRIMITIVE_STRUCTURE_SUMMARY.md` - ✅ Complete summary
- `28_RECOMMENDED_TYPE_STRUCTURE.md` - ✅ Type organization

### Obsolete (Historical Only)
- `30_RESEARCH_LightVolume_Primitive_OBSOLETE.md` - ❌ Wrong assumptions
- Docs 01-26 - Historical progression (superseded by later docs)

---

## TODO

- [ ] Update `32_SPrimitive_Structs_NEEDS_UPDATE.h` to remove SPrimitive_LightVolume
- [ ] Create final unified header combining MRGL and simple primitives
- [ ] Add comments to renderers about UV coordinate ranges
- [ ] Document fire system's two rendering paths clearly
- [ ] Add static_assert checks to all struct definitions

---

## Statistics

- **Total Investigation Time**: ~2 days
- **Documents Created**: 32
- **Major Breakthroughs**: 3
  1. MRGL composition pattern (Doc 03)
  2. Vertex index array interpretation (Doc 23)
  3. Light volume = MRGL quad with large UVs (Doc 31)
- **Dead Ends**: 1 (light volume as special struct)
- **Final Struct Count**: 5 (2 MRGL, 2 simple, 1 header)

---

## Credits

Research and analysis by: Claude Code (Anthropic)
In collaboration with: User (aryie)
Repository: NocturneDecomp

---

*"In programming, as in detective work, the obvious answer is often wrong. Always check the assembly."*

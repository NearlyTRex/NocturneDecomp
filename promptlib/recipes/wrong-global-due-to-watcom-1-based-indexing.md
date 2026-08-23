---
id: wrong-global-due-to-watcom-1-based-indexing
kind: recipe
title: Wrong global due to Watcom 1-based indexing optimization
legacy_section: 15
requires: []
triggers: [displaced_global_access, wrong_global]
provides: []
---

**Cause:** The Watcom compiler often emits array accesses as `[index*stride + (base - stride)]` with a 1-based index instead of `[index*stride + base]` with a 0-based index. This shifts the effective base address down by one entry size (e.g., 4 or 8 bytes lower than the real array start). Because Watcom also packs globals tightly, the shifted address lands in a neighboring global's memory range, and Ghidra resolves it to the wrong symbol.

**Symptoms:**
- Accesses through globals that make no semantic sense for the context (e.g., `g_VertexNormalArray[20000].y` in a display list builder, or `(&g_SetDisplayListCount)[iVar1 * 2]` indexing past a scalar)
- Field accesses like `.y` on unrelated structs that happen to be at the right byte offset
- Pointer-to-float casts when storing actor pointers into what's really a struct array with a pointer field
- The `.asm` file's global annotations show the *correct* global name, but the decompiler picked the wrong overlapping one

**Diagnosis:** Check the `.asm` file for the global annotations on the relevant `MOV`/`FSTP` instructions. The assembly comments (e.g., `; g_SetDisplayListSortBuffer`) usually identify the correct global even when the decompiler doesn't. Then check the struct definition for that global to find the right field names.

**Fix:** Replace the wrong global access with the correct global and proper struct field access:
```cpp promptc:noverify
// BROKEN (decompiler picked wrong overlapping global):
(&g_VertexNormalArray[20000].y)[g_SetDisplayListCount * 2] = (float)this_ptr_00;

// FIXED (correct global with proper struct access):
g_SetDisplayListSortBuffer[g_SetDisplayListCount].actor = (CDemonActor *)this_ptr_00;
```

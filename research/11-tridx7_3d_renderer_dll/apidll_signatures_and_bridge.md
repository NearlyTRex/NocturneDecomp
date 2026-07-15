# tridx7.dll (3D renderer DLL) — APIDLL export signatures & CExternalRendererBridge

`tridx7.dll` is the retail DirectX7 hardware renderer that nocedit.exe loads at runtime. Its
37 `APIDLL*` exports are the render API; nocedit calls them through typed `g_APIDLL_*` pointers.
This document covers: (1) the game structs the APIDLL signatures reference and how to add them,
(2) the 3 exports nocedit couldn't type (derived here from the DLL asm), and (3) a field-by-field
verification of the `CExternalRendererBridge` struct against the DLL's actual usage.

See also [`apply_apidll_signatures.py`](../../scripts/Python/apply_apidll_signatures.py) (applies
these signatures) and [`10-tridx7_crt_identification/`](../10-tridx7_crt_identification/) (the DLL's
statically-linked CRT).

## Missing structs — needed for the 7 blocked APIDLL signatures

Source: nocedit.exe exported definitions (`annotations/nocedit.exe/pseudocode/include/types/`).
Add these to **tridx7.dll**'s Ghidra DataTypeManager, then re-run:

```
GHIDRA_INSTALL_DIR=$HOME/Tools/Ghidra/lib python3 scripts/Python/apply_apidll_signatures.py \
  "$(pwd)/projects" NocturneEdit tridx7.dll --apply
```

They're layout-identical to nocedit's (same game data). All are `#pragma pack(1)`, but every
field is 4-byte-aligned so default packing yields the same offsets/sizes. Create in this order
(dependencies first). Ghidra's DataTypeManager → *Parse C Source* accepts this block directly.

```c
// --- leaf deps ---
union UIntegerFloat { int i; float f; };                     // 0x04

struct SProjectedVertex {                                    // 0x18
    int transformed_x, transformed_y, transformed_z;         // 0x00 0x04 0x08
    int inv_z, screen_x, screen_y;                           // 0x0c 0x10 0x14
};

struct SMRGLHeaderBasic { int type; int count; };            // 0x08

struct SMRGLVertex { int vertex_index, texture_u, texture_v; }; // 0x0c

struct SClipPlane { UIntegerFloat A, B, C, D; };             // 0x10

// --- mid-level ---
struct SMRGLHeaderPrimitive {                                // 0x18
    SMRGLHeaderBasic base;        // 0x00
    SClipPlane       surface_normal; // 0x08
};

// --- the 4 the APIDLL sigs reference ---
struct SRenderVertex {                                       // 0x30
    SProjectedVertex projected_vertex; // 0x00
    int u, v, r, g, b, a;              // 0x18 0x1c 0x20 0x24 0x28 0x2c
};

struct SMRGLTextureBasic {                                   // 0x18
    SMRGLHeaderBasic base;            // 0x00
    char texture_name[16];            // 0x08
};

struct SMRGLPrimitiveTriangle {                              // 0x3c
    SMRGLHeaderPrimitive base;        // 0x00
    SMRGLVertex          vertices[3]; // 0x18
};

struct CExternalRendererBridge {                             // 0x8c
    int* red_bit_position;   int* red_scale_factor;   int* red_bit_count;    // 0x00 0x04 0x08
    int* green_bit_position; int* green_scale_factor; int* green_bit_count;  // 0x0c 0x10 0x14
    int* blue_bit_position;  int* blue_scale_factor;  int* blue_bit_count;   // 0x18 0x1c 0x20
    int* blend_mode;         int* current_lighting;   int* current_alpha;    // 0x24 0x28 0x2c
    int* console_text_color; int* clip_left; int* clip_top; int* clip_right; int* clip_bottom; // 0x30..0x40
    int* texture_filtering;  int* texture_dimension;  int* texture_bits;     // 0x44 0x48 0x4c
    int* system_memory_size; int* video_memory_size;  int* max_texture_size; // 0x50 0x54 0x58
    void** frame_buffer_ptr;                                                 // 0x5c
    int* system_initialized; int* agp_texture_mode;   int* processor_type; int* rendering_quality; // 0x60..0x6c
    unsigned int sizeof1, sizeof2, sizeof4, sizeof5, sizeof7, sizeof6, sizeof3; // 0x70..0x88
};
```

## What each unblocks
| struct | APIDLL exports |
|--------|----------------|
| SRenderVertex | drawPolygon, drawPolygon2, drawPolyList, drawPolyList2 |
| SMRGLTextureBasic | selectTexture, updateTexture |
| SMRGLPrimitiveTriangle | drawPolyList |
| CExternalRendererBridge | init |

## The 3 previously-untyped funcs — DERIVED FROM tridx7 asm (fill these into nocedit)

nocedit types all three as `APIDLL_unknown` = `int(void)` — **all three guesses are wrong**
(wrong return and/or params). Real prototypes, proven by the DLL bodies:

```c
// GetDisplayContext (10004d30): calls DirectDrawSurface::GetDC (vtbl+0x44), writes the
// HDC into *out. Returns void (no EAX set), takes an OUTPUT pointer — NOT int(void).
typedef void APIDLL_GetDisplayContext(HDC* out_hdc);

// ReleaseDisplayContext (10004da0): passes the handle by VALUE to ReleaseDC (vtbl+0x68).
typedef void APIDLL_ReleaseDisplayContext(HDC hdc);

// setVideoMode (10002500): caches one pointer arg (DAT_10138fb4) and copies
// DAT_10014178 (== screen height, guarded `>480 -> fatal`) dwords from it into an
// internal array. Returns int (0 on failure). param is an array of `height` dwords —
// most likely per-scanline buffer pointers. (return+params both differ from int(void).)
typedef int APIDLL_setVideoMode(void** scanline_ptrs);   // param name/type: MEDIUM confidence
```

---

# CExternalRendererBridge — verification against tridx7 asm

**Size CONFIRMED**: `APIDLLinit` copies exactly `0x23 = 35` dwords from the bridge param into
its own global `DAT_102268b8` (`for(i=0x23..) *dst++ = *bridge++`). 35 * 4 = 0x8c. Field
*offsets/order* are also confirmed — every DLL field access lands at the nocedit offset.

Legend: ✓ confirmed by DLL use · ⚠ MISLABELED (asm proves different) · ? unreferenced by
the DLL (label is nocedit-side guesswork, cannot confirm here).

| off | nocedit label | verdict | DLL evidence |
|-----|---------------|:-------:|--------------|
| 0x00 | red_bit_position | ✓ | shift amount: `<< (*f & 0x1f)` in setColorTable16 |
| 0x04 | red_scale_factor | ✓ | `*f = 0xff / (R_range)` |
| 0x08 | red_bit_count | ⚠ | `*f = floor(log2(red_scale))` — **bits-dropped/dither shift, NOT a bit count** |
| 0x0c | green_bit_position | ✓ | shift amount |
| 0x10 | green_scale_factor | ✓ | `0xff / G_range` |
| 0x14 | green_bit_count | ⚠ | `floor(log2(green_scale))` — same as 0x08 |
| 0x18 | blue_bit_position | ✓ | shift amount |
| 0x1c | blue_scale_factor | ✓ | `0xff / B_range` |
| 0x20 | blue_bit_count | ⚠ | `floor(log2(blue_scale))` — same as 0x08 |
| 0x24 | blend_mode | ~ | 0/1 flag: `*f = 0/1`, gates `*f != 1` (a mode/enable flag; name plausible) |
| 0x28 | current_lighting | ~ | `(*f - 0x100) >> 4` brightness calc (plausible) |
| 0x2c | current_alpha | ✓ | set 0/0xFF, read as alpha |
| 0x30 | console_text_color | ~ | set to 0 (weak) |
| 0x34 | clip_left | ? | **no DLL reference** |
| 0x38 | clip_top | ? | **no DLL reference** |
| 0x3c | clip_right | ? | **no DLL reference** |
| 0x40 | clip_bottom | ? | **no DLL reference** |
| 0x44 | texture_filtering | ? | **no DLL reference** |
| 0x48 | texture_dimension | ✓ | `for(i=*f;1<i;i/=2)` and `*f * *f` (size, squared→area) |
| 0x4c | texture_bits | ? | **no DLL reference** |
| 0x50 | system_memory_size | ~ | read as a value (plausible) |
| 0x54 | video_memory_size | ~ | `FUN_100037e0(0x1a, *f)` (plausible) |
| 0x58 | max_texture_size | ? | **no DLL reference** |
| 0x5c | frame_buffer_ptr | ~ | `if (*f != 0)` null-check (plausible ptr) |
| 0x60 | system_initialized | ~ | status flag `2 - (*f==0)` |
| 0x64 | agp_texture_mode | ~ | 0/1 mode flag (also zeroed in setVideoMode) |
| 0x68 | processor_type | ~ | `if (*f == 0)` type/flag |
| 0x6c | rendering_quality | ~ | `(*f==0 ? 1 : 3)` quality selector |
| 0x70..0x88 | sizeof1,2,4,5,7,6,3 (×7) | ? | **no DLL reference** — all 7 unused by the DLL; names are pure guesses |

**Summary**: layout (size 0x8c, 35 dwords, field offsets) is CORRECT. 8 fields fully
confirmed, 12 plausible-and-consistent, **3 proven mislabeled** (the RGB `*_bit_count`
trio = per-channel `floor(log2(scale))`), and **11 unreferenced** by the DLL (clip×4,
texture_filtering, texture_bits, max_texture_size, sizeof×7) so their nocedit names remain
unverified guesses. Note the DLL WRITES through the RGB pointers — the bridge is
bidirectional (game supplies pointers, DLL fills the pixel-format results back).

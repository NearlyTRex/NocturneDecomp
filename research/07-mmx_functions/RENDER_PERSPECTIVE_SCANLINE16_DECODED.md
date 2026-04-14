# `renderMMXPerspectiveScanline16/32` — Decoded

**Date**: 2026-04-13
**Functions covered**:
- `renderMMXPerspectiveScanline16_FUN_005b4823` — 16-bit framebuffer output (596 line `.cpp`, 555 line `.mmx.cpp`)
- `renderMMXPerspectiveScanline32_FUN_005b4031` — 32-bit framebuffer output (579 line `.cpp`, 495 line `.mmx.cpp`)

**Convention**: `__edi_esi_ebx` (Watcom: args in EDI, ESI, EBX)
**Signature**: `void(SSoftwareEdge *left_vertex, SSoftwareEdge *right_vertex, int scanline_y)`
**Companion**: `MMX_BLEND_FAMILY_DECODED.md` — the byte-channel blend formulas and the `uint5`/`uint7`/`CONCAT` artifact catalog generally apply here too.

**Verified by diff**: the two `.mmx.cpp` files are byte-identical except in 4 specific spots — see [§16-bit vs 32-bit differences](#16-bit-vs-32-bit-differences) at the end. Everything in this doc applies to **both** variants unless explicitly noted.

---

## What the function does

Renders one horizontal scanline of a perspective-correct, textured, lit, optionally alpha-blended polygon to a **16-bit framebuffer**, writing pixels via runtime-configured RGB565/RGB555 packing. This is the workhorse of the software rasterizer.

The two input edges (`left_vertex`/`right_vertex`) carry the interpolated state (x, U, V, W, fog, vertex color, alpha) for both endpoints of the scanline; the function spans them left-to-right and emits one pixel per column.

Per-pixel work is dispatched by `g_RenderStateFlags` bits (and one alt-mode in `g_RenderStateFlag2`) into one of four major render loops:

| Mode | When | Loop |
|---|---|---|
| Z-only fill | `g_RenderStateFlags == 0x80` (exact equality) | LAB_005b50a9 |
| Textured, no opacity map | `g_CurrentTextureOpacityData == 0 && (flags & 2) == 0` | LAB_005b4b73 |
| Textured, with opacity map | `g_CurrentTextureOpacityData != 0` (or `flags & 2`) | LAB_005b4d22 |
| Untextured / solid | `g_CurrentTextureOpacityData == 0 && (flags & 2) != 0` | LAB_005b4f11 |

The same MMX accumulator setup (MM5, MM6) feeds all 3 color loops; only the per-pixel inner body differs.

---

## Coordinate setup (lines 14-32 of `.mmx.cpp`)

```
EDI = left_vertex,  ESI = right_vertex,  EBX = scanline_y     (entry)

EAX = right.x_current                                          ; .x_current is 16.16 fixed
ECX = left.x_current
if (right.x_current > left.x_current) {
    swap(EAX, ECX); swap(EDI, ESI);                            ; ensure EAX = smaller-x vertex
}
EAX >>= 16                                                     ; left pixel x
ECX >>= 16                                                     ; right pixel x
ECX -= EAX                                                     ; pixel_count
if (pixel_count <= 0) return;                                  ; degenerate scanline
ECX <<= 2                                                      ; pixel_count * 4

g_ScanlinePixelCount = pixel_count * 4                         ; loop iterates while EDI < this
g_CurrentScreenPtr   = g_ScreenBufferArray[scanline_y]   + BPP*EAX ; BPP=2 for 16-bit, 4 for 32-bit
g_CurrentZBufferPtr  = g_ZBufferScanlineArray[scanline_y] + 4*EAX  ; (32-bit Z either way)
```

**Important convention used throughout the loops**: `EDI` is the loop counter, but it **strides by 4 per pixel** (not 1). So:
- 16-bit: `screen_ptr[EDI >> 1]` accesses the pixel at column `EDI/4` (>>1 because pixels are 2 bytes)
- 32-bit: `screen_ptr[EDI]` accesses the pixel at column `EDI/4` (no shift, EDI's ×4 stride matches 4-byte pixels)
- `zbuffer_ptr[EDI]` accesses the Z entry at column `EDI/4` (no shift in either variant — Z is 4 bytes)
- Loop condition: `EDI >= g_ScanlinePixelCount` (= pixel_count*4) means done

After swap, **EDI = right vertex, ESI = left vertex** when `right.x > left.x` (typical). Otherwise EDI = left, ESI = right. Either way, ESI = the smaller-x vertex and EDI = the larger-x. The interpolators all start at ESI's value and step toward EDI's.

---

## Setup phase: deltas and accumulators (lines 33-103)

After `g_ScanlinePixelCount` is set, ECX still holds `pixel_count*4`, used as a byte index into `g_ReciprocalLookupTable` (at `0x02d02584`). Each `imul [ECX + table]` computes:

```
delta = (right_value - left_value) * (2^32 / pixel_count)   [signed]
      = result high 32 bits in EDX (after imul)
```

This is the perspective-step-per-column reciprocal trick: instead of dividing by pixel_count per pixel, multiply by the precomputed reciprocal once.

### Texture U/V setup (two variants)

Branch on `g_RenderStateFlag2 == 0x5` (= `PREPROCESS_TEXTURE_NORMALIZE_ALT`):

**Perspective-corrected variant (LAB_005b4928 entry):**
```
g_StartTextureU = (right.u_current << 24) / right.w_current   ; 64-bit signed div
g_DeltaTextureU = ((left.u_current << 24) / left.w_current - g_StartTextureU)
                  * recip[pixel_count]
g_StartTextureV = (right.v_current << 24) / right.w_current
g_DeltaTextureV = ((left.v_current << 24) / left.w_current - g_StartTextureV)
                  * recip[pixel_count]
```

In the Ghidra `.cpp` this appears as:
```c
g_StartTextureU = (int)(CONCAT44(((int)uVar20 >> 0x1f) << 0x18 | uVar20 >> 8, uVar20 << 0x18) /
                       (longlong)(pSVar17->base).w_current);
```
The `CONCAT44(... | uVar20 >> 8, uVar20 << 0x18)` is just `(int64)(uVar20 << 24)` with sign-extend.

**Linear variant (LAB_005b48f4):**
```
g_StartTextureU = right.u_current
g_DeltaTextureU = (left.u_current - right.u_current) * recip[pixel_count]
g_StartTextureV = right.v_current
g_DeltaTextureV = (left.v_current - right.v_current) * recip[pixel_count]
```

### Always-computed deltas (after texture setup)

```
g_StartDepthW       = right.w_current
g_DeltaDepthW       = (left.w - right.w) * recip[pc]

g_VertexAlphaStart  = right.fog_current
g_VertexAlphaDelta  = (left.fog - right.fog) * recip[pc]
```

Then `pxor MM7, MM7` clears MM7 (used as the zero-extend source for `punpcklbw` throughout).

### MMX color accumulator (MM5 = current, MM6 = delta)

Branch tree on flag bits:

**A. `flags & 0x200`** (LAB_005b49a4, per-vertex RGB):
For each of R, G, B (using SSoftwareEdge fields `base.z_current`, `color_current`, `alpha_current`):
```
start = (right.field >> 1) & 0xffff
delta = ((left.field >> 1) - (right.field >> 1)) * recip[pc] & 0xffff
```
Then build MM5 and MM6 by `psllq 16` + `por` chain to pack 3 ushorts into the low 48 bits:
```
MM5 = [VertexRedStart, VertexGreenStart, VertexBlueStart, 0]   (16 bits each, low → high)
MM6 = [VertexRedDelta, VertexGreenDelta, VertexBlueDelta, 0]
```

**Important Ghidra artifact**: the `.cpp` shows
```c
uVar39 = ((CONCAT44(uRam00682694, uVar10) & 0xffffffff0000ffff) << 0x10 |
         CONCAT44(uRam0068269c, uVar15) & 0xffffffff0000ffff) << 0x10 |
         CONCAT44(uRam006826a4, uVar14) & 0xffffffff0000ffff;
```
The `uRam006826X4` references are the **upper 4 bytes of 8-byte-aligned slots** at `g_VertexRedStart` (0x682690) etc. The asm does `movq MM5, qword ptr [g_VertexRedStart]` which loads 8 bytes — but only the low 4 bytes (the int) matter; the upper 4 are garbage from neighboring memory. The Ghidra `CONCAT44(uRam, uVar) & 0xffffffff0000ffff` reconstruction expresses "load 8 bytes, mask out the upper-half-of-low-32" but it's all noise that gets shifted into don't-care positions.

**Scalar interpretation**: just write
```c
uVar39 = ((ulonglong)red_start_u16 << 32) | ((ulonglong)green_start_u16 << 16) | blue_start_u16;
uVar44 = ((ulonglong)red_delta_u16 << 32) | ((ulonglong)green_delta_u16 << 16) | blue_delta_u16;
```

**B. `flags & 0x4`** (LAB_005b4a61, fog-derived color from z_current):
```
left_z  = clamp(left.z_current  - 0x100, 0, 0xfff) << 3
right_z = clamp(right.z_current - 0x100, 0, 0xfff) << 3
start = right_z & 0xffff
delta = (left_z - right_z) * recip[pc] & 0xffff
```
Then **broadcast** the single ushort into all 3 R/G/B slots of MM5/MM6 (same `psllq + por` chain but using only the red value).

**C. `flags & 0x10`** (LAB_005b4aed, lit from `g_CurrentLightingValue`):
```
idx = clamp((g_CurrentLightingValue - 0x100) >> 4, 0, 0xff)
MM5 = g_AlphaTable[idx]   (8 bytes, 4 ushorts)
MM5 <<= 7                 (psllw)
MM6 = 0                   (no per-pixel change)
```

**D. None of the above** (LAB_005b4b17 fall-through):
```
MM5 = g_AlphaTable[0xff] << 7   (full bright)
MM6 = 0
```

---

## Main render loops

All 3 color loops share these counters in registers across iterations:
- `ECX` = current U (steps by `g_DeltaTextureU`)
- `EDX` = current V (steps by `g_DeltaTextureV`)
- `ESI` = current W / Z value (steps by `g_DeltaDepthW`)
- `EBP` = current alpha (steps by `g_VertexAlphaDelta`)
- `EDI` = pixel cursor (× 4, see "Coordinate setup")
- `MM5` = current vertex color (steps by `MM6`, with wrap-around protection against `g_SelectedClearColor`)

After each pixel, the per-channel `paddw MM5, MM6` step is followed by `pcmpgtw MM5, g_SelectedClearColor; pand MM5, MM0_pre_compare`. **Per-word semantic**: if `(signed)channel > (signed)clear_color`, KEEP the channel value; otherwise ZERO it. With `g_SelectedClearColor` typically 0, this is **wrap-around protection** — channels whose `paddw` overflowed into the signed-negative range (high bit set) are zeroed instead of becoming garbage values.

Scalar form per channel:
```c
ushort new_val = current[c] + delta[c];      // may wrap around
if ((short)new_val > (short)clear_word[c]) {
    current[c] = new_val;
} else {
    current[c] = 0;
}
```

`g_SelectedClearColor` is declared `extern double` in the headers — use `__BITCAST_UINT64(g_SelectedClearColor)` to get the 64-bit pattern, then extract per-channel with `(uint16_t)((bits >> (c * 16)) & 0xffff)`.

### Loop A — Textured, no opacity map (LAB_005b4b73, lines 212-314)

Entered when `g_CurrentTextureOpacityData == 0 && (g_RenderStateFlags & 2) != 0`. **Always alpha-blends** (no `flags & 0x8` gate) — it's the textured-with-vertex-alpha path. Pre-loop, `EBP` is set from either vertex alpha or `g_CurrentAlphaValue` based on `flags & 0x100` (LAB_005b4b47).

Per-pixel:
1. Z-test if `flags & 0x40`: skip pixel if `current_z < zbuffer[EDI]`
2. **Texture sample**:
   ```
   tex_idx = ((U >> g_TextureShift1) & g_TextureMask1) + ((V >> g_TextureShift2) & g_TextureMask2)
   pixel = g_Hardware32BitPalette[g_CurrentTextureData[tex_idx]]
   if (pixel == 0) skip            (color-key transparency)
   ```
3. **Set blend dest** (MM4):
   - If `flags & 0x20` set: read framebuffer pixel into MM4 (16-bit: word read + 3-pass mask/shift/OR expand; 32-bit: direct `movd`)
   - Else: `pxor MM4, MM4` — dest is treated as 0
4. **Lighting modulation**: `MM0 = (pixel << 4) pmulhw (MM5 >> 3)` — produces 4 modulated bytes
5. **Saturate** to bytes via `packuswb`
6. **Alpha blend** (always):
   - Look up `g_AlphaTable[EBP >> 8]` → MM2 (the alpha factors for each channel)
   - `MM3 = MM2 ^ g_AlphaTable[0xff]` (= "1 - alpha" for each channel — XOR trick from blend doc)
   - Branch on `g_BlendMode`:
     - 0 (alpha blend): `MM0 = (MM0 * MM2 + MM4 * MM3) >> 8`
     - non-0 (additive blend): `MM0 = (MM0 * MM2 + MM4 << 8) >> 8`
   - Note: when `flags & 0x20` was off, MM4=0, so the blend reduces to `pixel * alpha` — alpha attenuation only
7. **Write to framebuffer**:
   - **16-bit**: pack 32→16 via runtime-configured shifts then `mov word [screen], AX`:
     ```
     pix16 = ((pix32 & g_BlueMask32)  >> g_BlueBitShift)
           | ((pix32 & g_GreenMask32) >> g_GreenBlueBits)
           | ((pix32 & g_RedMask32)   >> g_TotalColorBits)
     screen[EDI >> 1] = pix16
     ```
   - **32-bit**: `movd dword ptr [screen + EDI], MM0` — direct 4-byte write, no packing
8. **Z-write** if `flags & 0x80`: `zbuffer[EDI] = current_z`
9. Advance interpolators (U += dU, V += dV, Z += dZ, EBP += dA, MM5 += MM6 with sat)

### Loop B — Textured with opacity map (LAB_005b4d22, lines 321-437)

Entered when `g_CurrentTextureOpacityData != 0`. Same overall structure as Loop A, but adds an **opacity-map sample** and **always reads the framebuffer pixel** (no `flags & 0x20` gate — Loop B always blends against the framebuffer, except in the fast path):

1. Z-test if `flags & 0x40`
2. Texture sample (same as Loop A) — but **doesn't color-key skip on pixel==0** (Loop B uses the opacity map for transparency instead)
3. **Opacity sample**: `opacity = g_CurrentTextureOpacityData[tex_idx]` — skip pixel if `opacity == 0`
4. **Branch on (alpha, opacity)**:
   - `EBP > 0xff00 && opacity >= 0xff` → **fast path** (LAB_005b4e3a): just lighting modulation, no blend, no framebuffer read
   - Otherwise → **blend path** (LAB_005b4da7): always reads framebuffer pixel into MM4
5. Blend path: `combined_alpha = (opacity * EBP) >> 16`, look up `g_AlphaTable[combined_alpha >> 8]`, then same blend math as Loop A (with the same `g_BlendMode` branch on alpha vs additive)
6. Write to framebuffer (16-bit pack OR direct 32-bit write)
7. Optional Z-write
8. Advance interpolators

### Loop C — Solid color / pure flat (LAB_005b4f11, lines 444-534)

Entered when there's no texture data at all (or `flags & 2`). Uses `g_SolidColorMode` as the **base color** (loaded into MM1 via `punpcklbw MM1, MM7` to expand 4 bytes to 4 ushorts).

Per-pixel:
1. If `flags & 0x8` not set: zero out alpha (`EBP = 0`, `g_VertexAlphaDelta = 0`)
2. Z-test if `flags & 0x40`
3. **Get base color** (LAB_005b4f52):
   - If `flags & 0x1`: sample texture (same UV math) → MM0 = palette[texel]
   - Else if `flags & 0x200`: MM0 = `g_SpecialColor`
   - Else: MM0 = `g_ActiveRenderColor`
4. **Lighting modulation** (LAB_005b4f9b): same `(pixel << 4) pmulhw (MM5 >> 3)` → packuswb
5. **Alpha blend** if `flags & 0x8`:
   ```
   MM3 = g_AlphaTable[EBP >> 8]
   MM2 = MM3 ^ g_AlphaTable[0xff]   (= 1-alpha)
   MM4 = MM1 * MM3                  (solid_color * alpha)
   MM0 = (MM0 * MM2 + MM4) >> 8     (lit_pixel * (1-alpha) + solid * alpha)
   ```
   Note this uses MM1 (`g_SolidColorMode` expanded) as the "destination color" for the blend, **not** the framebuffer pixel. So alpha here blends "modulated lit pixel" against "the constant solid color", giving a constant-tinted output. Different from Loops A/B which blend against the actual screen pixel.
6. Write to framebuffer (16-bit pack OR direct 32-bit write — same as Loop A step 7)
7. Optional Z-write
8. Advance interpolators

### Loop D — Z-only (LAB_005b50a9, lines 535-554)

```
g_StartDepthW = right.w_current
g_DeltaDepthW = (left.w - right.w) * recip[pc]
ESI = g_CurrentZBufferPtr
EAX = g_StartDepthW
EBX = g_DeltaDepthW
ECX = g_ScanlinePixelCount
do {
    *ESI = EAX
    EAX += EBX
    ESI += 4
    ECX -= 4
} while (ECX > 0);
emms
return
```

No color writes. Just walks the Z-buffer and writes the interpolated W. Used for depth pre-pass / Z-only scenes.

---

## `g_RenderStateFlags` bit reference

From the asm flag tests collected across all paths:

| Bit | Hex | Behavior when set |
|---|---|---|
| 0 | 0x001 | Texture sample (in solid-color path) |
| 1 | 0x002 | Forces "solid color" Loop C even with no opacity data |
| 2 | 0x004 | Use fog/z-derived color (interpolator B) |
| 3 | 0x008 | Enable per-pixel alpha blend |
| 4 | 0x010 | Use lighting-value-derived color (interpolator C) |
| 5 | 0x020 | Read framebuffer pixel for blend dest (Loop A) |
| 6 | 0x040 | Enable Z-test |
| 7 | 0x080 | Enable Z-write (also sole Z-only mode if flags == 0x80 exactly) |
| 8 | 0x100 | Use per-vertex alpha (don't override EBP) |
| 9 | 0x200 | Use per-vertex RGB (interpolator A) AND `g_SpecialColor` for solid base |

Multiple bits combine; for example a fully-lit, alpha-blended, Z-tested, textured polygon is `0x40 | 0x80 | 0x08 | 0x10 = 0xD8`.

---

## Globals used (need declarations / references)

### Already-named globals (all `extern`-ready)

```c
// Framebuffer / Z-buffer
extern void *g_ScreenBufferArray[1200];                // void* per scanline
extern uint *g_ZBufferScanlineArray[1200];             // uint* per scanline
extern int *g_CurrentScreenPtr;                        // current scanline write head
extern int *g_CurrentZBufferPtr;                       // current Z-buffer write head
extern int g_ScanlinePixelCount;                       // pixel_count * 4

// Interpolator state (written in setup, read in loops)
extern int g_StartTextureU, g_DeltaTextureU;
extern int g_StartTextureV, g_DeltaTextureV;
extern int g_StartDepthW,   g_DeltaDepthW;
extern int g_VertexAlphaStart, g_VertexAlphaDelta;
extern int g_VertexRedStart,   g_VertexRedDelta;       // 8-byte slots (low int = value)
extern int g_VertexGreenStart, g_VertexGreenDelta;
extern int g_VertexBlueStart,  g_VertexBlueDelta;

// Render-state knobs
extern _BIT_INTEGER32 g_RenderStateFlags;
extern int g_RenderStateFlag2;                          // == PREPROCESS_TEXTURE_NORMALIZE_ALT (0x5) for perspective UV
extern int g_BlendMode;                                 // 0 = alpha, !=0 = additive
extern int g_CurrentLightingValue;
extern int g_CurrentAlphaValue;
extern uint g_ActiveRenderColor;
extern uint g_SpecialColor;
extern ulong g_SolidColorMode;                          // .cpp emits "_g_SolidColorMode" — drop the underscore
extern double g_SelectedClearColor;                     // declared as double; bit-cast via __BITCAST_UINT64() for ushort×4 access

// Texture sampling
extern void *g_CurrentTextureData;                      // current texture base
extern void *g_CurrentTextureOpacityData;               // 0 if no opacity map
extern _MMX_INTEGER g_TextureShift1, g_TextureMask1;    // U-axis shift/mask
extern _MMX_INTEGER g_TextureShift2, g_TextureMask2;    // V-axis shift/mask

// 16-bit display mode (runtime-configured per RGB565/RGB555/etc)
extern _MMX_INTEGER g_BlueMask32, g_GreenMask32, g_RedMask32;
extern _MMX_INTEGER g_BlueMask16, g_GreenMask16, g_RedMask16;     // for read-back
extern _MMX_INTEGER g_BlueBitShift, g_GreenBlueBits, g_TotalColorBits;

// Lookup tables
extern uint g_ReciprocalLookupTable[];                  // at 0x02d02584; entry N = 2^32 / N
extern uint g_Hardware32BitPalette[256];
extern SAlphaEntry g_AlphaTable[256];                   // 8 bytes each = 4 ushorts (R, G, B, alignment)
```

### `uRam` aliases — what they actually are

The `.cpp` references `uRam00682694`, `uRam0068269c`, `uRam006826a4`, `uRam006826b4`, `uRam006826bc`, `uRam006826c4`. These are the **upper 4 bytes** of 8-byte-aligned slots whose lower 4 bytes are the named globals:

| `uRam` ref | Lives at | Lower 4 bytes are |
|---|---|---|
| `uRam00682694` | 0x682694 | (upper of) `g_VertexRedStart` (0x682690) |
| `uRam0068269c` | 0x68269c | (upper of) `g_VertexGreenStart` (0x682698) |
| `uRam006826a4` | 0x6826a4 | (upper of) `g_VertexBlueStart` (0x6826a0) |
| `uRam006826b4` | 0x6826b4 | (upper of) `g_VertexRedDelta` (0x6826b0) |
| `uRam006826bc` | 0x6826bc | (upper of) `g_VertexGreenDelta` (0x6826b8) |
| `uRam006826c4` | 0x6826c4 | (upper of) `g_VertexBlueDelta` (0x6826c0) |

In the asm these come from `movq MM5, qword ptr [g_VertexRedStart]` — an 8-byte load that grabs 4 wanted bytes (the int) plus 4 bytes of garbage from neighboring memory. The Ghidra `CONCAT44(uRam, val) & 0xffffffff0000ffff` reconstruction always masks the garbage out via the `& 0xffffffff0000ffff` (which keeps bits 0-15 and 32-63, zeroing 16-31). After the subsequent `<< 0x10 | ...` chain, the uRam contributions get shifted into don't-care positions and never affect the result.

**Translation rule**: pretend the `uRam006826XX` references don't exist; the value being constructed is just `((ulonglong)redval << 32) | ((ulonglong)greenval << 16) | blueval`. The asm achieves this via 8-byte MMX loads + shifts; the scalar form is direct integer arithmetic.

---

## Decompiler artifact catalog (this function specifically)

### `uint5` / `uint7` / `int3` / `int5` synthetic types (22 errors)

Every single appearance is part of a `CONCAT*` tower reconstructing a multi-byte sub-extract. Every one disappears when the surrounding tower is replaced with a `for (c = 0; c < 4; c++)` byte loop (per blend doc Part 5).

### `SAlphaEntry → ulonglong` implicit conversion (8 errors)

`g_AlphaTable[i]` is typed `SAlphaEntry` (struct of 4 ushorts, 8 bytes total). Ghidra emits `(ulonglong)g_AlphaTable[i]` to model `movq MM2, qword ptr [g_AlphaTable + EAX*8]`. Fix: explicit `*(ulonglong *)&g_AlphaTable[i]` cast, OR change the local from `ulonglong` to `SAlphaEntry` and access the struct fields directly. The XOR `(ulonglong)g_AlphaTable[i] ^ (ulonglong)g_AlphaTable[0xff]` is computing the per-channel "1 - alpha" via the bit-XOR-with-fully-opaque trick from the blend doc.

### `_g_SolidColorMode` (4 errors, leading underscore)

Ghidra warning at top of file: `Globals starting with '_' overlap smaller symbols at the same address`. The asm uses `qword ptr [g_SolidColorMode]` (8-byte load) but the symbol is declared as 4-byte `ulong`. Ghidra invents `_g_SolidColorMode` for the 8-byte view. Fix: just use `g_SolidColorMode` and access the upper bytes via shifts (e.g., `(g_SolidColorMode >> 16) & 0xffff` for what the asm reads as `MM1[16:32]`).

The 8-byte read is intentional: the asm does `movq MM1, qword ptr [g_SolidColorMode]; punpcklbw MM1, MM7` — only the **low 4 bytes** matter (they get unpacked into MM1's 4 ushorts). The upper 4 bytes get shifted out by punpcklbw. So the read of `_g_SolidColorMode`'s upper half is also don't-care noise.

### `double` vs `int` operand errors (3 errors)

Confirmed: these come from `g_SelectedClearColor` being declared `extern double` in `globals_680000.h`. The asm does `pcmpgtw MM5, qword ptr [g_SelectedClearColor]` — an 8-byte load treated as 4 packed ushorts. Ghidra preserves the declared type and emits expressions like `(short)((ulonglong)g_SelectedClearColor >> 0x30)` which clang rejects (truncating-cast a `double` to `ulonglong` is invalid in C++).

Fix per blend doc lesson #7: `__BITCAST_UINT64(g_SelectedClearColor)` to get the 64-bit pattern, then per-channel: `(int16_t)((bits >> (c * 16)) & 0xffff)`.

Note: `0x006837f8` referenced in `pxor MM3, qword ptr [0x006837f8]` is **`g_AlphaTable[255].red`** (asm comments confirm), not the `g_LightmapXorMask` constant. The XOR is the standard "1 - alpha" trick: each channel of `g_AlphaTable[255]` is the "fully opaque" max value, so XOR-ing the current alpha entry gives the per-channel inverse alpha.

### `rep movsd` artifacts

None — this function doesn't pass SRenderVertex by value.

---

## Translation plan

The function decomposes cleanly into 5 phases. Each can be written independently:

1. **Header + signature + sort + early-out** — straightforward (lines 14-32 of `.mmx.cpp`)
2. **Setup phase** — UV/W/alpha deltas (the `imul recip` blocks); 1 if/else for perspective vs linear (lines 33-95). About 40 lines of clean `(int64)(left - right) * recip >> 32` arithmetic.
3. **MMX color accumulator init** — 4-way branch on flag bits, building MM5/MM6 as 64-bit accumulators. Replace the `psllq + por` chain with direct `((ulonglong)R << 32) | ((ulonglong)G << 16) | B` construction. About 60 lines.
4. **Three render loops + Z-only** — each 30-50 lines of scalar after applying the blend doc's per-channel byte-loop recipe. The MMX accumulator step (`paddw MM5, MM6` with `pcmpgtw` saturation against `g_SelectedClearColor`) becomes a 4-iteration loop with `if (chan + delta_chan > clear_chan) chan = 0; else chan += delta_chan`.
5. **16-bit pack** is the standard one from the blend doc (3 mask+shift+OR operations).

Estimated keep size: **~250 lines** of portable C++ down from 596 lines of artifact-laden Ghidra output.

### Suggested order of attack

1. Write the **Z-only loop** first (LAB_005b50a9) — trivial, gets us a shape-preserving `.keep` skeleton with the right header and sort/setup.
2. Add the **setup phase** (UV/W/alpha deltas) — pure arithmetic, no MMX.
3. Add the **MMX accumulator init** — replace each `CONCAT44(uRam, val)` tower with the direct ulonglong build.
4. Add **Loop C (solid)** next — simplest of the 3 color loops because the alpha blend uses a constant rather than reading the framebuffer. Tests the per-channel blend translation in isolation.
5. Add **Loop A (textured-no-opacity)** — adds the framebuffer-readback path.
6. Add **Loop B (textured-with-opacity)** — adds the opacity-map sample and fast/slow path branch.

Each step should compile in isolation if the earlier steps are correct, because the keep can fall through `return;` from any of the unimplemented branches.

---

## 16-bit vs 32-bit differences

A normalized diff of the two `.mmx.cpp` files (with hex literals and `LAB_*` labels collapsed) shows the two functions are byte-identical except in **four specific spots**, all related to framebuffer pixel size. Everything else (sort, setup, MMX accumulator init, all 3 color loops + Z-only loop, per-pixel modulation/blend, interpolator stepping) is the same.

| Spot | 16-bit (FUN_005b4823) | 32-bit (FUN_005b4031) |
|---|---|---|
| **Screen base advance** (after sort) | `lea EBX, [EBX + EAX*0x2]` | `lea EBX, [EBX + EAX*0x4]` |
| **Pixel-write addressing** in loops | `mov EBX, EDI; shr EBX, 0x1; add EBX, screen_ptr` | `add EBX, EDI` (no shift) |
| **Framebuffer readback** (alpha blend dest, in Loops A/B) | 13-instruction expansion: read `word`, then `pand` + `psllq` + `por` × 3 against `g_BlueMask16` / `g_GreenMask16` / `g_RedMask16` to produce a 32-bit RGBA in MM4 | 1 instruction: `movd MM4, dword ptr [EBX]` |
| **Framebuffer write** (end of all 3 color loops) | 13-instruction pack: `pand` + `psrlq` + `por` × 3 against `g_BlueMask32` / `g_GreenMask32` / `g_RedMask32`, then `movd EAX, MM0; mov word ptr [EBX], AX` | 1 instruction: `movd dword ptr [EBX], MM0` |

The 32-bit variant is **simpler and shorter** — no pack/unpack overhead. Effectively, every instance of "fold 32-bit RGBA into 16 bits" or "expand 16-bit pixel into 32-bit RGBA" in the 16-bit version becomes a no-op in the 32-bit version.

### Translation implication

Once the 16-bit `.keep` is done, the 32-bit `.keep` is a copy with these exact substitutions:

```
g_CurrentScreenPtr advance:    + 2*EAX     →   + 4*EAX
pixel cursor:                  EDI >> 1    →   EDI
read framebuffer (Loop A):     unpack16    →   *(uint *)(screen + EDI)
write framebuffer (all loops): pack32→16   →   *(uint *)(screen + EDI) = pix32
```

No structural changes needed. The 4-channel byte loops, the `MM5/MM6` interpolator stepping with `g_SelectedClearColor` saturation, the `g_AlphaTable` blend, the texture sample, the Z-test/write — all stay verbatim. Estimated 32-bit keep size: ~220 lines (slightly smaller than 16-bit's ~250 because of the simpler pack/unpack).

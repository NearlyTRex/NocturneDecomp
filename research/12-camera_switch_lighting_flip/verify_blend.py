#!/usr/bin/env python3
"""Reimplement the per-pixel lightmap blend and check it against a real frame.

Step 1 of the shader migration is a lightmap post-pass.  Before writing GLSL,
reproduce the MMX blend here from real captured inputs and verify it matches the
real output byte for byte.  If it matches, the algorithm is proven and the GLSL
port is mechanical; if it does not, the gap is found without any shader work.

Reproduces blendHBilerpLightmapSharedU64toU64pBB12Px2MMX (FUN_004917bc), the
variant compositeLightmapToFramebuffer selects for EVEN rows at scale_factor==2:

    lm_idx   = lightmap_indices[0] + (texture_indices[1] >> 1)
    pal_byte = p0                for the first pixel of the pair
             = (p0 + p1) >> 1    for the second          <- the horizontal bilerp
    indices advance by 1 per TWO output pixels           <- the 2x downscale

All arithmetic is 16-bit signed with a >>16 take-high, a >>4, and a saturate --
every step expressible in GLSL with integer ops, which is the point of checking
it here first.

Ground truth from the .asm (FUN_004917bc), since the decompiled C cannot show
which multiply was used:

    PMULHW    signed multiply, high 16 bits, NO rounding  <- so no +0x8000
    PMULLW    signed multiply, low 16 bits
    PSRLW     LOGICAL shift right on words                <- (ushort)sum >> 4
    PACKUSWB  pack with UNSIGNED saturation               <- the 0..255 clamp
    PUNPCKLBW / PADDW / PSLLW / PXOR

A sweep that added 0x8000 before the >>16 raised the exact-match rate from 48.8%
to 55.8%, but the asm says PMULHW, so that was fitting noise, not a finding. The
version below is the faithful one.

STATUS: reproduces the real blend to within +/-2 per channel (mean abs error
0.17, max 2, ~49% of pixels bit-exact) from real captured inputs. Structurally
correct and safe to port; the residual rounding detail is NOT yet identified.
That accuracy is already irrelevant to the bug being fixed -- the defect it
addresses is a 2x error (window max 56 against 28) -- but bit-exactness would be
needed to claim true SW/HW determinism.

CAPTURE TRAPS (both cost an iteration, see blend_oracle_dump.gdb):
  - dumping the grids at compositeLightmapToFramebuffer's ENTRY reads the
    PREVIOUS frame: the composite's first action is blurCoronaBufferAndClearEdges,
    which is what fills g_CoronaBlurWorkBuffer;
  - dumping the blend's output at the next call's entry does not reliably give
    the finished row.
Capture on the caller side, after the call, where every pointer is still live.

Inputs come from blend_oracle_dump.gdb.
"""

import sys
import numpy as np

D = "/tmp/altfocus"

# Captured alongside the buffers by blend_oracle_dump.gdb.
SOLID = 0x181714
BIAS1 = 0x0
BIAS2 = 0x0008000800080008
XOR_MASK = 0x3FC03FC03FC03FC0
WIDTH = 640


def s16(v):
    """Truncate to 16 bits and reinterpret as signed, as the MMX ops do."""
    v &= 0xFFFF
    return v - 0x10000 if v & 0x8000 else v


def u16(v):
    return v & 0xFFFF


def word(qword, c):
    return (qword >> (c * 16)) & 0xFFFF


def blend_row(src, tex_idx, lm_idx_row, lmdata, palette):
    """One even row through the H-bilerp variant.  src is uint32[640]."""
    out = np.zeros(WIDTH, dtype=np.uint32)

    solid_ws = [((SOLID >> (c * 8)) & 0xFF) << 6 for c in range(4)]

    # Each iteration consumes one index pair and produces two pixels.
    for i in range(WIDTH // 2):
        t0 = int(tex_idx[i])
        t1 = int(tex_idx[i + 1]) if i + 1 < len(tex_idx) else int(tex_idx[i])
        l0 = int(lm_idx_row[i])

        palette0 = int(palette[t0])
        palette1 = int(palette[t1])

        lm_index = l0 + (t1 >> 1)
        lm_data = int(lmdata[lm_index])
        lm_xored = lm_data ^ XOR_MASK

        for pixel in (0, 1):
            bias_val = BIAS1 if pixel == 0 else BIAS2
            pix_in = int(src[i * 2 + pixel])
            out_pix = 0

            for c in range(4):
                pix = (pix_in >> (c * 8)) & 0xFF

                p0 = (palette0 >> (c * 8)) & 0xFF
                p1 = (palette1 >> (c * 8)) & 0xFF
                pal_byte = p0 if pixel == 0 else ((p0 + p1) >> 1)

                pix_pal_low = u16(pix * pal_byte)

                lm_x_w = s16(word(lm_xored, c))
                mul1_hi = s16((s16(pix_pal_low) * lm_x_w) >> 16)

                lm_w = s16(word(lm_data, c))
                solid_hi = s16((s16(solid_ws[c]) * lm_w) >> 16)

                bias_w = s16(word(bias_val, c))

                sum16 = s16(mul1_hi + solid_hi + bias_w)
                shifted = u16(sum16) >> 4
                clamped = 0xFF if shifted > 0xFF else shifted

                out_pix |= clamped << (c * 8)

            out[i * 2 + pixel] = out_pix

    return out


def main():
    src = np.fromfile(f"{D}/in_src_row100.bin", dtype=np.uint32)
    ref = np.fromfile(f"{D}/out_row100.bin", dtype=np.uint32)
    tex_idx = np.fromfile(f"{D}/in_texidx_row.bin", dtype=np.uint8)
    lm_idx_row = np.fromfile(f"{D}/in_lmidx_row.bin", dtype=np.uint8)
    lmdata = np.fromfile(f"{D}/tbl_lmdata.bin", dtype=np.uint64)
    palette = np.fromfile(f"{D}/tbl_palette.bin", dtype=np.uint32)

    print(f"src {src.shape} ref {ref.shape} texidx {tex_idx.shape} "
          f"lmidx {lm_idx_row.shape} lmdata {lmdata.shape} palette {palette.shape}")

    got = blend_row(src, tex_idx, lm_idx_row, lmdata, palette)

    same = int((got == ref).sum())
    print(f"\nexact matches: {same}/{WIDTH}  ({100.0 * same / WIDTH:.1f}%)")

    if same != WIDTH:
        diff = np.where(got != ref)[0]
        print(f"first mismatches at x = {diff[:12].tolist()}")
        for x in diff[:6]:
            print(f"  x={x:3d} src=0x{src[x]:08x} got=0x{got[x]:08x} ref=0x{ref[x]:08x}")
        # Per-channel error, to show whether it is a rounding edge or structural.
        g = got.view(np.uint8).reshape(-1, 4).astype(int)
        r = ref.view(np.uint8).reshape(-1, 4).astype(int)
        err = np.abs(g - r)
        print(f"  per-channel abs err: mean={err.mean():.3f} max={err.max()} "
              f"nonzero={(err != 0).sum()}/{err.size}")
        return 1

    print("EXACT — the reimplementation reproduces the MMX blend byte for byte.")
    return 0


if __name__ == "__main__":
    sys.exit(main())

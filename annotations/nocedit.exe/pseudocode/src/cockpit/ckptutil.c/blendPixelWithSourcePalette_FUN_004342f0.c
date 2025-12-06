// Name: cockpit_ckptutil.c_blendPixelWithSourcePalette_FUN_004342f0
// Address: 004342f0
// Address Range: [[004342f0, 004345b5]]
// Convention: __cdecl
// Signature: void cockpit_ckptutil.c_blendPixelWithSourcePalette_FUN_004342f0(int x, int y, float blend_factor, int palette_index)

#include "nocturne.h"

void __cdecl
cockpit_ckptutil_c_blendPixelWithSourcePalette_FUN_004342f0
          (int x,int y,float blend_factor,int palette_index)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  byte extraout_CL;
  int iVar5;
  uint *puVar6;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  float10 fVar10;
  double dVar11;
  uint local_2c;
  uint uStack_24;
  uint uStack_20;
  
  if ((((g_ClipLeft <= x) && (x <= g_ClipRight)) && (g_ClipTop <= y)) &&
     ((y <= g_ClipBottom && (g_BitsPerPixel != 8)))) {
    if (g_BitsPerPixel == 0x10) {
      uVar1 = *(ushort *)((int)g_ScreenBufferArray[y] + x * 2);
      uVar2 = (uint)(uVar1 >> ((byte)g_RedBitPosition & 0x1f)) << ((byte)g_RedBitCount & 0x1f);
      uVar3 = (uint)(uVar1 >> ((byte)g_GreenBitPosition & 0x1f)) << ((byte)g_GreenBitCount & 0x1f);
      uVar4 = (uint)(uVar1 >> ((byte)g_BlueBitPosition & 0x1f)) << ((byte)g_BlueBitCount & 0x1f);
    }
    else {
      puVar6 = (uint *)(x * 4 + (int)g_ScreenBufferArray[y]);
      uVar2 = (*puVar6 >> ((byte)g_RedBitPosition & 0x1f)) << ((byte)g_RedBitCount & 0x1f);
      uVar3 = (*puVar6 >> ((byte)g_GreenBitPosition & 0x1f)) << ((byte)g_GreenBitCount & 0x1f);
      uVar4 = (*puVar6 >> ((byte)g_BlueBitPosition & 0x1f)) << ((byte)g_BlueBitCount & 0x1f);
    }
    iVar5 = palette_index * 3;
    fVar9 = (float10)1 - (float10)blend_factor;
    fVar10 = (float10)(byte)g_SourcePaletteData[iVar5 + 2] * fVar9;
    fVar7 = (float10)(byte)g_SourcePaletteData[iVar5 + 1] * fVar9 +
            (float10)((float)(uVar3 & 0xff) * blend_factor);
    fVar8 = (float10)((float)(uVar4 & 0xff) * blend_factor);
    fVar9 = (float10)(float)((float10)(byte)g_SourcePaletteData[iVar5] * fVar9 +
                            (float10)((float)(uVar2 & 0xff) * blend_factor));
    dVar11 = crt_math_c_round_FUN_005fe6b0
                       ((double)CONCAT44 /* combine 2-byte values */(x,(uint)(byte)g_SourcePaletteData[iVar5 + 2]));
    dVar11 = crt_math_c_round_FUN_005fe6b0(dVar11);
    fVar10 = fVar10 + fVar8;
    uStack_24 = (uint)(longlong)ROUND(fVar7);
    local_2c = (uint)(longlong)ROUND(fVar9);
    local_2c = local_2c >> (extraout_CL & 0x1f);
    dVar11 = crt_math_c_round_FUN_005fe6b0
                       ((double)CONCAT44 /* combine 2-byte values */((int)((ulonglong)dVar11 >> 0x20),uStack_24));
    iVar5 = (int)((ulonglong)dVar11 >> 0x20);
    uStack_20 = (uint)(longlong)ROUND(fVar10);
    uVar2 = SUB84 /* extract 2-byte value */(dVar11,0) >> ((byte)g_GreenBitCount & 0x1f);
    uStack_20 = uStack_20 >> ((byte)g_BlueBitCount & 0x1f);
    if (g_BitsPerPixel != 0x10) {
      *(uint *)(iVar5 * 4 + (int)g_ScreenBufferArray[y]) =
           local_2c << ((byte)g_RedBitPosition & 0x1f) | uVar2 << ((byte)g_GreenBitPosition & 0x1f)
           | uStack_20 << ((byte)g_BlueBitPosition & 0x1f);
      return;
    }
    *(ushort *)((int)g_ScreenBufferArray[y] + iVar5 * 2) =
         (ushort)(uVar2 << ((byte)g_GreenBitPosition & 0x1f)) |
         (ushort)(local_2c << ((byte)g_RedBitPosition & 0x1f)) |
         (ushort)(uStack_20 << ((byte)g_BlueBitPosition & 0x1f));
  }
  return;
}

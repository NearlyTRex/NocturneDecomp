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
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint extraout_EAX;
  byte extraout_CL;
  int extraout_EDX;
  uint *puVar6;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  float10 fVar10;
  double dVar11;
  uint local_3c;
  uint local_38;
  
  if ((((g_ClipLeft <= x) && (x <= g_ClipRight)) && (g_ClipTop <= y)) &&
     ((y <= g_ClipBottom && (g_BitsPerPixel != 8)))) {
    if (g_BitsPerPixel == 0x10) {
      uVar1 = *(ushort *)((int)g_ScreenBufferArray[y] + x * 2);
      uVar3 = (uint)(uVar1 >> ((byte)g_RedBitPosition & 0x1f)) << ((byte)g_RedBitCount & 0x1f);
      uVar4 = (uint)(uVar1 >> ((byte)g_GreenBitPosition & 0x1f)) << ((byte)g_GreenBitCount & 0x1f);
      uVar5 = (uint)(uVar1 >> ((byte)g_BlueBitPosition & 0x1f)) << ((byte)g_BlueBitCount & 0x1f);
    }
    else {
      puVar6 = (uint *)(x * 4 + (int)g_ScreenBufferArray[y]);
      uVar3 = (*puVar6 >> ((byte)g_RedBitPosition & 0x1f)) << ((byte)g_RedBitCount & 0x1f);
      uVar4 = (*puVar6 >> ((byte)g_GreenBitPosition & 0x1f)) << ((byte)g_GreenBitCount & 0x1f);
      uVar5 = (*puVar6 >> ((byte)g_BlueBitPosition & 0x1f)) << ((byte)g_BlueBitCount & 0x1f);
    }
    iVar2 = palette_index * 3;
    fVar9 = (float10)1 - (float10)blend_factor;
    fVar10 = (float10)(byte)g_SourcePaletteData[iVar2 + 2] * fVar9;
    fVar7 = (float10)(byte)g_SourcePaletteData[iVar2 + 1] * fVar9 +
            (float10)((float)(uVar4 & 0xff) * blend_factor);
    fVar8 = (float10)((float)(uVar5 & 0xff) * blend_factor);
    dVar11 = crt_math_c_round_FUN_005fe6b0
                       ((double)(float)((float10)(byte)g_SourcePaletteData[iVar2] * fVar9 +
                                       (float10)((float)(uVar3 & 0xff) * blend_factor)));
    fVar9 = (float10)dVar11;
    crt_math_c_round_FUN_005fe6b0((double)fVar7);
    local_3c = (uint)(longlong)ROUND(fVar9);
    local_3c = local_3c >> (extraout_CL & 0x1f);
    dVar11 = crt_math_c_round_FUN_005fe6b0((double)(fVar10 + fVar8));
    local_38 = (uint)(longlong)ROUND(dVar11);
    uVar4 = extraout_EAX >> ((byte)g_GreenBitCount & 0x1f);
    local_38 = local_38 >> ((byte)g_BlueBitCount & 0x1f);
    if (g_BitsPerPixel != 0x10) {
      *(uint *)(extraout_EDX * 4 + (int)g_ScreenBufferArray[y]) =
           local_3c << ((byte)g_RedBitPosition & 0x1f) | uVar4 << ((byte)g_GreenBitPosition & 0x1f)
           | local_38 << ((byte)g_BlueBitPosition & 0x1f);
      return;
    }
    *(ushort *)((int)g_ScreenBufferArray[y] + extraout_EDX * 2) =
         (ushort)(uVar4 << ((byte)g_GreenBitPosition & 0x1f)) |
         (ushort)(local_3c << ((byte)g_RedBitPosition & 0x1f)) |
         (ushort)(local_38 << ((byte)g_BlueBitPosition & 0x1f));
  }
  return;
}

// Name: cockpit_ckptutil.c_blendPixelWithSourcePalette_FUN_004342f0
// Address: 004342f0
// Address Range: [[004342f0, 004345b5]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_ckptutil_c_blendPixelWithSourcePalette_FUN_004342f0(int x,int y,float blend_factor,int palette_index)

#include "nocturne.h"

void __cdecl cockpit_ckptutil_c_blendPixelWithSourcePalette_FUN_004342f0(int x,int y,float blend_factor,int palette_index)

{
  byte bVar1;
  ushort uVar2;
  int iVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint *puVar8;
  float10 fVar9;
  float10 fVar10;
  float10 fVar11;
  double dVar12;
  double dVar13;
  uint local_3c;
  uint local_38;
  uint local_34;
  
  bVar4 = (byte)g_RedBitCount;
  if ((((g_ClipLeft <= x) && (x <= g_ClipRight)) && (g_ClipTop <= y)) &&
     ((y <= g_ClipBottom && (g_BitsPerPixel != 8)))) {
    if (g_BitsPerPixel == 0x10) {
      uVar2 = *(ushort *)((int)g_ScreenBufferArray[y] + x * 2);
      uVar5 = (uint)(uVar2 >> ((byte)g_RedBitPosition & 0x1f)) << ((byte)g_RedBitCount & 0x1f);
      uVar6 = (uint)(uVar2 >> ((byte)g_GreenBitPosition & 0x1f)) << ((byte)g_GreenBitCount & 0x1f);
      uVar7 = (uint)(uVar2 >> ((byte)g_BlueBitPosition & 0x1f)) << ((byte)g_BlueBitCount & 0x1f);
    }
    else {
      puVar8 = (uint *)(x * 4 + (int)g_ScreenBufferArray[y]);
      uVar5 = (*puVar8 >> ((byte)g_RedBitPosition & 0x1f)) << ((byte)g_RedBitCount & 0x1f);
      uVar6 = (*puVar8 >> ((byte)g_GreenBitPosition & 0x1f)) << ((byte)g_GreenBitCount & 0x1f);
      uVar7 = (*puVar8 >> ((byte)g_BlueBitPosition & 0x1f)) << ((byte)g_BlueBitCount & 0x1f);
    }
    iVar3 = palette_index * 3;
    bVar1 = g_SourcePaletteData[iVar3 + 1];
    fVar10 = (float10)1 - (float10)blend_factor;
    fVar11 = (float10)(byte)g_SourcePaletteData[iVar3 + 2] * fVar10;
    fVar9 = (float10)((float)(uVar7 & 0xff) * blend_factor);
    dVar12 = round
                       ((double)(float)((float10)(byte)g_SourcePaletteData[iVar3] * fVar10 +
                                       (float10)((float)(uVar5 & 0xff) * blend_factor)));
    dVar13 = round
                       ((double)((float10)bVar1 * fVar10 +
                                (float10)((float)(uVar6 & 0xff) * blend_factor)));
    local_3c = (uint)(longlong)ROUND(dVar12);
    local_34 = (uint)(longlong)ROUND(dVar13);
    local_3c = local_3c >> (bVar4 & 0x1f);
    dVar12 = round((double)(fVar11 + fVar9));
    local_38 = (uint)(longlong)ROUND(dVar12);
    local_34 = local_34 >> ((byte)g_GreenBitCount & 0x1f);
    local_38 = local_38 >> ((byte)g_BlueBitCount & 0x1f);
    if (g_BitsPerPixel != 0x10) {
      *(uint *)(x * 4 + (int)g_ScreenBufferArray[y]) =
           local_3c << ((byte)g_RedBitPosition & 0x1f) |
           local_34 << ((byte)g_GreenBitPosition & 0x1f) |
           local_38 << ((byte)g_BlueBitPosition & 0x1f);
      return;
    }
    *(ushort *)((int)g_ScreenBufferArray[y] + x * 2) =
         (ushort)(local_34 << ((byte)g_GreenBitPosition & 0x1f)) |
         (ushort)(local_3c << ((byte)g_RedBitPosition & 0x1f)) |
         (ushort)(local_38 << ((byte)g_BlueBitPosition & 0x1f));
  }
  return;
}

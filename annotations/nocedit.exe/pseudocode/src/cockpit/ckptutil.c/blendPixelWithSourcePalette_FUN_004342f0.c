// Name: cockpit_ckptutil.c_blendPixelWithSourcePalette_FUN_004342f0
// Address: 004342f0
// Address Range: [[004342f0, 004345b5]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_ckptutil_c_blendPixelWithSourcePalette_FUN_004342f0(int x,int y,float blend_factor,int palette_index)

#include "nocturne.h"

void __cdecl cockpit_ckptutil_c_blendPixelWithSourcePalette_FUN_004342f0(int x,int y,float blend_factor,int palette_index)

{
  byte bVar1;
  byte bVar2;
  ushort uVar3;
  float fVar4;
  int iVar5;
  byte bVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint *puVar10;
  double dVar11;
  double dVar12;
  uint local_3c;
  uint local_38;
  uint local_34;
  
  bVar6 = (byte)g_RedBitCount;
  if ((((g_ClipLeft <= x) && (x <= g_ClipRight)) && (g_ClipTop <= y)) &&
     ((y <= g_ClipBottom && (g_BitsPerPixel != 8)))) {
    if (g_BitsPerPixel == 0x10) {
      uVar3 = *(ushort *)((int)g_ScreenBufferArray[y] + x * 2);
      uVar7 = (uint)(uVar3 >> ((byte)g_RedBitPosition & 0x1f)) << ((byte)g_RedBitCount & 0x1f);
      uVar8 = (uint)(uVar3 >> ((byte)g_GreenBitPosition & 0x1f)) << ((byte)g_GreenBitCount & 0x1f);
      uVar9 = (uint)(uVar3 >> ((byte)g_BlueBitPosition & 0x1f)) << ((byte)g_BlueBitCount & 0x1f);
    }
    else {
      puVar10 = (uint *)(x * 4 + (int)g_ScreenBufferArray[y]);
      uVar7 = (*puVar10 >> ((byte)g_RedBitPosition & 0x1f)) << ((byte)g_RedBitCount & 0x1f);
      uVar8 = (*puVar10 >> ((byte)g_GreenBitPosition & 0x1f)) << ((byte)g_GreenBitCount & 0x1f);
      uVar9 = (*puVar10 >> ((byte)g_BlueBitPosition & 0x1f)) << ((byte)g_BlueBitCount & 0x1f);
    }
    iVar5 = palette_index * 3;
    bVar1 = g_SourcePaletteData[iVar5 + 1];
    fVar4 = 1.0 - blend_factor;
    bVar2 = g_SourcePaletteData[iVar5 + 2];
    dVar11 = round
                       ((double)((float)(byte)g_SourcePaletteData[iVar5] * fVar4 +
                                (float)(uVar7 & 0xff) * blend_factor));
    dVar12 = round
                       ((double)((float)bVar1 * fVar4 + (float)(uVar8 & 0xff) * blend_factor));
    local_3c = (uint)(longlong)ROUND(dVar11);
    local_34 = (uint)(longlong)ROUND(dVar12);
    local_3c = local_3c >> (bVar6 & 0x1f);
    dVar11 = round
                       ((double)((float)bVar2 * fVar4 + (float)(uVar9 & 0xff) * blend_factor));
    local_38 = (uint)(longlong)ROUND(dVar11);
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

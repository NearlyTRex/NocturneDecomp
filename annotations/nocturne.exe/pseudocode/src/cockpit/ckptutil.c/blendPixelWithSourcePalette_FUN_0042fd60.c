// Name: cockpit_ckptutil.c_blendPixelWithSourcePalette_FUN_0042fd60
// Address: 0042fd60
// Address Range: [[0042fd60, 00430130]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_ckptutil_c_blendPixelWithSourcePalette_FUN_0042fd60(int x,int y,float blend_factor,int palette_index)

#include "nocturne.h"

void __cdecl cockpit_ckptutil_c_blendPixelWithSourcePalette_FUN_0042fd60(int x,int y,float blend_factor,int palette_index)

{
  int iVar1;
  byte bVar2;
  byte bVar3;
  ushort uVar4;
  void *pvVar5;
  byte bVar6;
  byte bVar7;
  float fVar8;
  byte uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  uint *puVar15;
  double dVar16;
  double dVar17;
  uint uStack_4c;
  uint uStack_44;
  uint uStack_40;
  short sStack_2c;
  
  uVar9 = g_RedDitherShift.bytes[0];
  if ((((g_ClipLeft <= x) && (x <= g_ClipRight)) && (g_ClipTop <= y)) && (y <= g_ClipBottom)) {
    if (g_BitsPerPixel == 8) {
      pvVar5 = g_ScreenBufferArray[y];
      iVar1 = (uint)*(byte *)((int)pvVar5 + x) * 3;
      bVar2 = g_SourcePaletteData[iVar1 + 2];
      bVar3 = g_SourcePaletteData[palette_index * 3 + 1];
      fVar8 = 1.0 - blend_factor;
      dVar16 = round
                         ((double)((float)g_SourcePaletteData[palette_index * 3] * fVar8 +
                                  (float)g_SourcePaletteData[iVar1] * blend_factor));
      iVar1 = (int)ROUND(dVar16);
      dVar16 = round
                         ((double)((float)bVar2 * fVar8 + (float)bVar3 * blend_factor));
      iVar13 = (int)ROUND(dVar16) >> 0x1f;
      sStack_2c = (short)iVar1;
      dVar17 = round
                         ((double)((float)bVar3 * fVar8 + (float)sStack_2c * blend_factor));
      iVar14 = (int)ROUND(dVar17) >> 0x1f;
      *(byte *)((int)pvVar5 + x) =
           g_ColorCubeLookup
           [((int)(((int)ROUND(dVar17) + iVar14 * -8) - (uint)(iVar14 << 2 < 0)) >> 3) +
            ((int)((iVar1 + (iVar1 >> 0x1f) * -8) - (uint)((iVar1 >> 0x1f) << 2 < 0)) >> 3) * 0x400
            + ((int)(((int)ROUND(dVar16) + iVar13 * -8) - (uint)(iVar13 << 2 < 0)) >> 3) * 0x20];
      return;
    }
    if (g_BitsPerPixel == 0x10) {
      uVar4 = *(ushort *)((int)g_ScreenBufferArray[y] + x * 2);
      uVar12 = (uint)uVar4;
      uVar10 = (uint)(uVar4 >> (g_RedBitPosition.bytes[0] & 0x1f)) <<
               (g_RedDitherShift.bytes[0] & 0x1f);
      uVar11 = (uint)(uVar4 >> (g_GreenBitPosition.bytes[0] & 0x1f)) <<
               (g_GreenDitherShift.bytes[0] & 0x1f);
    }
    else {
      puVar15 = (uint *)(x * 4 + (int)g_ScreenBufferArray[y]);
      uVar10 = (*puVar15 >> (g_RedBitPosition.bytes[0] & 0x1f)) <<
               (g_RedDitherShift.bytes[0] & 0x1f);
      uVar11 = (*puVar15 >> (g_GreenBitPosition.bytes[0] & 0x1f)) <<
               (g_GreenDitherShift.bytes[0] & 0x1f);
      uVar12 = *puVar15;
    }
    bVar7 = g_BlueBitPosition.bytes[0] & 0x1f;
    bVar6 = g_BlueDitherShift.bytes[0] & 0x1f;
    iVar1 = palette_index * 3;
    bVar2 = g_SourcePaletteData[iVar1 + 1];
    fVar8 = 1.0 - blend_factor;
    bVar3 = g_SourcePaletteData[iVar1 + 2];
    dVar16 = round
                       ((double)((float)g_SourcePaletteData[iVar1] * fVar8 +
                                (float)(uVar10 & 0xff) * blend_factor));
    dVar17 = round
                       ((double)((float)bVar2 * fVar8 + (float)(uVar11 & 0xff) * blend_factor));
    uStack_44 = (uint)(longlong)ROUND(dVar16);
    uStack_4c = (uint)(longlong)ROUND(dVar17);
    uStack_44 = uStack_44 >> (uVar9 & 0x1f);
    dVar16 = round
                       ((double)((float)bVar3 * fVar8 +
                                (float)((uVar12 >> bVar7) << bVar6 & 0xff) * blend_factor));
    uStack_40 = (uint)(longlong)ROUND(dVar16);
    uStack_4c = uStack_4c >> (g_GreenDitherShift.bytes[0] & 0x1f);
    uStack_40 = uStack_40 >> (g_BlueDitherShift.bytes[0] & 0x1f);
    if (g_BitsPerPixel != 0x10) {
      *(uint *)((int)g_ScreenBufferArray[y] + x * 4) =
           uStack_44 << (g_RedBitPosition.bytes[0] & 0x1f) |
           uStack_4c << (g_GreenBitPosition.bytes[0] & 0x1f) |
           uStack_40 << (g_BlueBitPosition.bytes[0] & 0x1f);
      return;
    }
    *(ushort *)((int)g_ScreenBufferArray[y] + x * 2) =
         (ushort)(uStack_4c << (g_GreenBitPosition.bytes[0] & 0x1f)) |
         (ushort)(uStack_44 << (g_RedBitPosition.bytes[0] & 0x1f)) |
         (ushort)(uStack_40 << (g_BlueBitPosition.bytes[0] & 0x1f));
  }
  return;
}

// Name: cockpit_ckptutil.c_blendPixelWithSourcePalette_FUN_004342f0
// Address: 004342f0
// MANUAL RECONSTRUCTION
// Address Range: [[004342f0, 004345b5]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_ckptutil_c_blendPixelWithSourcePalette_FUN_004342f0(int x,int y,float blend_factor,int palette_index)

#include "nocturne.h"

void __cdecl cockpit_ckptutil_c_blendPixelWithSourcePalette_FUN_004342f0(int x,int y,float blend_factor,int palette_index)

{
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar2;
  uint *puVar7;
  uint uVar3;
  uint uVar7;
  uint local_34;
  uint local_2c;
  float fVar2;
  int iVar3;
  ushort uVar1;
  
  if ((((g_ClipLeft <= x) && (x <= g_ClipRight)) && (g_ClipTop <= y)) &&
     ((y <= g_ClipBottom && (g_BitsPerPixel != 8)))) {
    if (g_BitsPerPixel == 0x10) {
      uVar1 = ((ushort *)g_ScreenBufferArray[y])[x];
      uVar4 = (uint)(uVar1 >> (g_RedBitPosition.bytes[0] & 0x1f)) << (g_RedDitherShift.bytes[0] & 0x1f)
      ;
      uVar5 = (uint)(uVar1 >> (g_GreenBitPosition.bytes[0] & 0x1f)) <<
              (g_GreenDitherShift.bytes[0] & 0x1f);
      uVar6 = (uint)(uVar1 >> (g_BlueBitPosition.bytes[0] & 0x1f)) <<
              (g_BlueDitherShift.bytes[0] & 0x1f);
    }
    else {
      puVar7 = &((uint *)g_ScreenBufferArray[y])[x];
      uVar4 = (*puVar7 >> (g_RedBitPosition.bytes[0] & 0x1f)) << (g_RedDitherShift.bytes[0] & 0x1f);
      uVar5 = (*puVar7 >> (g_GreenBitPosition.bytes[0] & 0x1f)) << (g_GreenDitherShift.bytes[0] & 0x1f)
      ;
      uVar6 = (*puVar7 >> (g_BlueBitPosition.bytes[0] & 0x1f)) << (g_BlueDitherShift.bytes[0] & 0x1f);
    }
    iVar3 = palette_index * 3;
    fVar2 = 1.0 - blend_factor;
    local_34 = (uint)(longlong)
                     ROUND(ROUND((float)(byte)g_SourcePaletteData[iVar3] * fVar2 +
                                 (float)(uVar4 & 0xff) * blend_factor));
    local_2c = (uint)(longlong)
                     ROUND(ROUND((float)(byte)g_SourcePaletteData[iVar3 + 1] * fVar2 +
                                 (float)(uVar5 & 0xff) * blend_factor));
    uVar7 = local_34 >> (g_RedDitherShift.bytes[0] & 0x1f);
    uVar2 = local_2c >> (g_GreenDitherShift.bytes[0] & 0x1f);
    local_2c = (uint)(longlong)
                     ROUND(ROUND((float)(byte)g_SourcePaletteData[iVar3 + 2] * fVar2 +
                                 (float)(uVar6 & 0xff) * blend_factor));
    uVar3 = local_2c >> (g_BlueDitherShift.bytes[0] & 0x1f);
    if (g_BitsPerPixel != 0x10) {
      ((uint *)g_ScreenBufferArray[y])[x] =
           uVar7 << (g_RedBitPosition.bytes[0] & 0x1f) |
           uVar2 << (g_GreenBitPosition.bytes[0] & 0x1f) |
           uVar3 << (g_BlueBitPosition.bytes[0] & 0x1f);
      return;
    }
    ((ushort *)g_ScreenBufferArray[y])[x] =
         (ushort)(uVar2 << (g_GreenBitPosition.bytes[0] & 0x1f)) |
         (ushort)(uVar7 << (g_RedBitPosition.bytes[0] & 0x1f)) |
         (ushort)(uVar3 << (g_BlueBitPosition.bytes[0] & 0x1f));
  }
  return;
}

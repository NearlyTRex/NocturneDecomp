// Name: cockpit_ckptutil.c_blendPixelWithSourcePalette_FUN_004342f0
// Address: 004342f0
// Address Range: [[004342f0, 004345b5]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_ckptutil_c_blendPixelWithSourcePalette_FUN_004342f0(int x,int y,float blend_factor,int palette_index)

#include "nocturne.h"

/* WARNING: Inlined function: crt_math.c_round_FUN_005fe6b0 */

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
      uVar1 = *(ushort *)((int)g_ScreenBufferArray[y] + x * 2);
      uVar4 = (uint)(uVar1 >> (g_RedBitPosition.bytes[0] & 0x1f)) <<
              (g_RedDitherShift.bytes[0] & 0x1f);
      uVar5 = (uint)(uVar1 >> (g_GreenBitPosition.bytes[0] & 0x1f)) <<
              (g_GreenDitherShift.bytes[0] & 0x1f);
      uVar6 = (uint)(uVar1 >> (g_BlueBitPosition.bytes[0] & 0x1f)) <<
              (g_BlueDitherShift.bytes[0] & 0x1f);
    }
    else {
      puVar7 = (uint *)(x * 4 + (int)g_ScreenBufferArray[y]);
      uVar4 = (*puVar7 >> (g_RedBitPosition.bytes[0] & 0x1f)) << (g_RedDitherShift.bytes[0] & 0x1f);
      uVar5 = (*puVar7 >> (g_GreenBitPosition.bytes[0] & 0x1f)) <<
              (g_GreenDitherShift.bytes[0] & 0x1f);
      uVar6 = (*puVar7 >> (g_BlueBitPosition.bytes[0] & 0x1f)) <<
              (g_BlueDitherShift.bytes[0] & 0x1f);
    }
    iVar3 = palette_index * 3;
    fVar2 = 1.0 - blend_factor;
    local_34 = (uint)(longlong)
                     ROUND(ROUND((float)g_SourcePaletteData[iVar3] * fVar2 +
                                 (float)(uVar4 & 0xff) * blend_factor));
    local_2c = (uint)(longlong)
                     ROUND(ROUND((float)g_SourcePaletteData[iVar3 + 1] * fVar2 +
                                 (float)(uVar5 & 0xff) * blend_factor));
    uVar7 = local_34 >> (g_RedDitherShift.bytes[0] & 0x1f);
    uVar2 = local_2c >> (g_GreenDitherShift.bytes[0] & 0x1f);
    local_2c = (uint)(longlong)
                     ROUND(ROUND((float)g_SourcePaletteData[iVar3 + 2] * fVar2 +
                                 (float)(uVar6 & 0xff) * blend_factor));
    uVar3 = local_2c >> (g_BlueDitherShift.bytes[0] & 0x1f);
    if (g_BitsPerPixel != 0x10) {
      *(uint *)(x * 4 + (int)g_ScreenBufferArray[y]) =
           uVar7 << (g_RedBitPosition.bytes[0] & 0x1f) |
           uVar2 << (g_GreenBitPosition.bytes[0] & 0x1f) |
           uVar3 << (g_BlueBitPosition.bytes[0] & 0x1f);
      return;
    }
    *(ushort *)((int)g_ScreenBufferArray[y] + x * 2) =
         (ushort)(uVar2 << (g_GreenBitPosition.bytes[0] & 0x1f)) |
         (ushort)(uVar7 << (g_RedBitPosition.bytes[0] & 0x1f)) |
         (ushort)(uVar3 << (g_BlueBitPosition.bytes[0] & 0x1f));
  }
  return;
}

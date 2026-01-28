// Name: cockpit_ckptutil.c_drawLineAA_FUN_00433c90
// Address: 00433c90
// Address Range: [[00433c90, 00433f41]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_ckptutil_c_drawLineAA_FUN_00433c90(int x0,int y0,int x1,int y1,int color)

#include "nocturne.h"

void __cdecl cockpit_ckptutil_c_drawLineAA_FUN_00433c90(int x0,int y0,int x1,int y1,int color)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int local_1c;
  uint local_18;
  uint local_14;
  
  iVar1 = x0;
  iVar2 = y0;
  if (y1 < y0) {
    y0 = y1;
    x0 = x1;
    x1 = iVar1;
    y1 = iVar2;
  }
  if ((g_LineClippingDisabled != 0) ||
     (((((g_ClipLeft <= x0 || (g_ClipLeft <= x1)) && ((x0 <= g_ClipRight || (x1 <= g_ClipRight))))
       && ((g_ClipTop <= y0 || (g_ClipTop <= y1)))) &&
      ((y0 <= g_ClipBottom || (y1 <= g_ClipBottom)))))) {
    cockpit_ckptutil_c_putPixel_FUN_004345c0(x0,y0,color);
    local_18 = x1 - x0;
    if ((int)local_18 < 0) {
      local_18 = -local_18;
      local_1c = -1;
    }
    else {
      local_1c = 1;
    }
    local_14 = y1 - y0;
    if (local_14 != 0) {
      if (local_18 == 0) {
        do {
          y0 = y0 + 1;
          cockpit_ckptutil_c_putPixel_FUN_004345c0(x0,y0,color);
          local_14 = local_14 - 1;
        } while (local_14 != 0);
        return;
      }
      if (local_18 != local_14) {
        if ((int)local_14 < (int)local_18) {
          uVar3 = (local_14 * 0x10000) / local_18;
          uVar5 = 0;
          while (local_18 = local_18 - 1, local_18 != 0) {
            uVar4 = uVar5 + uVar3 & 0xffff;
            if (uVar4 <= uVar5) {
              y0 = y0 + 1;
            }
            x0 = x0 + local_1c;
            cockpit_ckptutil_c_blendPixelWithSourcePalette_FUN_004342f0
                      (x0,y0,((float)(uVar4 >> 8) + 1.0) * 0.00390625,color);
            cockpit_ckptutil_c_blendPixelWithSourcePalette_FUN_004342f0
                      (x0,y0 + 1,(float)(uVar4 >> 8 ^ 0xff) * 0.00390625,color);
            uVar5 = uVar4;
          }
        }
        else {
          uVar3 = (local_18 << 0x10) / local_14;
          uVar5 = 0;
          while (local_14 = local_14 - 1, local_14 != 0) {
            uVar4 = uVar5 + uVar3 & 0xffff;
            if (uVar4 <= uVar5) {
              x0 = x0 + local_1c;
            }
            y0 = y0 + 1;
            cockpit_ckptutil_c_blendPixelWithSourcePalette_FUN_004342f0
                      (x0,y0,((float)(uVar4 >> 8) + 1.0) * 0.00390625,color);
            cockpit_ckptutil_c_blendPixelWithSourcePalette_FUN_004342f0
                      (local_1c + x0,y0,(float)(uVar4 >> 8 ^ 0xff) * 0.00390625,color);
            uVar5 = uVar4;
          }
        }
        cockpit_ckptutil_c_putPixel_FUN_004345c0(x1,y1,color);
        return;
      }
      do {
        y0 = y0 + 1;
        x0 = x0 + local_1c;
        cockpit_ckptutil_c_putPixel_FUN_004345c0(x0,y0,color);
        local_14 = local_14 - 1;
      } while (local_14 != 0);
      return;
    }
    while (local_18 = local_18 - 1, local_18 != 0xffffffff) {
      x0 = x0 + local_1c;
      cockpit_ckptutil_c_putPixel_FUN_004345c0(x0,y0,color);
    }
  }
  return;
}

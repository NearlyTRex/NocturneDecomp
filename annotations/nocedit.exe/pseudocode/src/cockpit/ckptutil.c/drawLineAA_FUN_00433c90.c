// Name: cockpit_ckptutil.c_drawLineAA_FUN_00433c90
// Address: 00433c90
// Address Range: [[00433c90, 00433f41]]
// Convention: __cdecl
// Signature: void cockpit_ckptutil.c_drawLineAA_FUN_00433c90(int x0, int y0, int x1, int y1, int color)

#include "nocturne.h"

void __cdecl cockpit_ckptutil_c_drawLineAA_FUN_00433c90(int x0,int y0,int x1,int y1,int color)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  float blend_factor;
  int unaff_EDI;
  uint uVar5;
  float in_stack_ffffffc4;
  float local_28;
  int local_18;
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
    local_14 = x1 - x0;
    if ((int)local_14 < 0) {
      local_14 = -local_14;
      local_18 = -1;
    }
    else {
      local_18 = 1;
    }
    uVar3 = y1 - y0;
    if (uVar3 != 0) {
      if (local_14 == 0) {
        do {
          y0 = y0 + 1;
          cockpit_ckptutil_c_putPixel_FUN_004345c0(x0,y0,color);
          unaff_EDI = unaff_EDI + -1;
        } while (unaff_EDI != 0);
        return;
      }
      if (local_14 != uVar3) {
        if ((int)uVar3 < (int)local_14) {
          uVar4 = (uVar3 * 0x10000) / local_14;
          uVar3 = 0;
          while (local_14 = local_14 - 1, local_14 != 0) {
            uVar5 = uVar3 + uVar4 & 0xffff;
            if (uVar5 <= uVar3) {
              y0 = y0 + 1;
            }
            x0 = x0 + local_18;
            cockpit_ckptutil_c_blendPixelWithSourcePalette_FUN_004342f0
                      (x0,y0,((float)(uVar5 >> 8) + 1.0) * in_stack_ffffffc4,color);
            in_stack_ffffffc4 = (float)color;
            cockpit_ckptutil_c_blendPixelWithSourcePalette_FUN_004342f0(x0,y0 + 1,local_28,color);
            uVar3 = uVar5;
          }
        }
        else {
          blend_factor = (float)((local_14 << 0x10) / uVar3);
          uVar4 = 0;
          while (uVar3 = uVar3 - 1, uVar3 != 0) {
            uVar5 = uVar4 + (int)blend_factor & 0xffff;
            if (uVar5 <= uVar4) {
              x0 = x0 + local_18;
            }
            y0 = y0 + 1;
            cockpit_ckptutil_c_blendPixelWithSourcePalette_FUN_004342f0
                      (x0,y0,((float)(uVar5 >> 8) + 1.0) * in_stack_ffffffc4,color);
            in_stack_ffffffc4 = (float)color;
            cockpit_ckptutil_c_blendPixelWithSourcePalette_FUN_004342f0
                      (local_14 + x0,y0,blend_factor,color);
            uVar4 = uVar5;
          }
        }
        cockpit_ckptutil_c_putPixel_FUN_004345c0(x1,y1,color);
        return;
      }
      do {
        y0 = y0 + 1;
        x0 = x0 + local_18;
        cockpit_ckptutil_c_putPixel_FUN_004345c0(x0,y0,color);
        unaff_EDI = unaff_EDI + -1;
      } while (unaff_EDI != 0);
      return;
    }
    while (local_14 = local_14 - 1, local_14 != 0xffffffff) {
      x0 = x0 + local_18;
      cockpit_ckptutil_c_putPixel_FUN_004345c0(x0,y0,color);
    }
  }
  return;
}

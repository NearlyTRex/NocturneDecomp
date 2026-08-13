// Name: cockpit_ckptutil.c_drawLineAA_FUN_0042f600
// Address: 0042f600
// Address Range: [[0042f600, 0042f8b1]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_ckptutil_c_drawLineAA_FUN_0042f600(int x0,int y0,int x1,int y1,int color)

#include "nocturne.h"

void __cdecl cockpit_ckptutil_c_drawLineAA_FUN_0042f600(int x0,int y0,int x1,int y1,int color)

{
  float blend_factor;
  float fVar1;
  float x;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int unaff_retaddr;
  float in_stack_ffffffcc;
  int iVar5;
  
  iVar5 = y0;
  x = (float)x0;
  if (y1 < y0) {
    y0 = y1;
    x = (float)x1;
    x1 = x0;
    y1 = iVar5;
  }
  if ((DAT_005ad280 != 0) ||
     (((((g_ClipLeft <= (int)x || (g_ClipLeft <= x1)) &&
        (((int)x <= g_ClipRight || (x1 <= g_ClipRight)))) &&
       ((g_ClipTop <= y0 || (g_ClipTop <= y1)))) && ((y0 <= g_ClipBottom || (y1 <= g_ClipBottom)))))
     ) {
    cockpit_ckptutil_c_putPixel_FUN_00430140((int)x,y0,color);
    blend_factor = (float)(x1 - (int)x);
    if ((int)blend_factor < 0) {
      blend_factor = (float)-(int)blend_factor;
      iVar5 = -1;
    }
    else {
      iVar5 = 1;
    }
    fVar1 = (float)(y1 - y0);
    if (fVar1 != 0.0) {
      if (blend_factor == 0.0) {
        do {
          y0 = y0 + 1;
          cockpit_ckptutil_c_putPixel_FUN_00430140((int)x,y0,color);
          x0 = x0 + -1;
        } while (x0 != 0);
        return;
      }
      if (blend_factor != fVar1) {
        if ((int)fVar1 < (int)blend_factor) {
          fVar1 = (float)((uint)((int)fVar1 * 0x10000) / (uint)blend_factor);
          uVar3 = 0;
          while (blend_factor = (float)((int)blend_factor + -1), blend_factor != 0.0) {
            uVar2 = uVar3 + (int)fVar1 & 0xffff;
            if (uVar2 <= uVar3) {
              y0 = y0 + 1;
            }
            x = (float)((int)x + iVar5);
            cockpit_ckptutil_c_blendPixelWithSourcePalette_FUN_0042fd60
                      ((int)x,y0,((float)(uVar2 >> 8) + 1.0) * in_stack_ffffffcc,color);
            in_stack_ffffffcc = x;
            cockpit_ckptutil_c_blendPixelWithSourcePalette_FUN_0042fd60((int)x,y0 + 1,fVar1,color);
            uVar3 = uVar2;
          }
        }
        else {
          uVar2 = (uint)((int)blend_factor << 0x10) / (uint)fVar1;
          uVar3 = 0;
          while (fVar1 = (float)((int)fVar1 - 1), fVar1 != 0.0) {
            uVar4 = uVar3 + uVar2 & 0xffff;
            if (uVar4 <= uVar3) {
              x = (float)((int)x + iVar5);
            }
            y0 = y0 + 1;
            cockpit_ckptutil_c_blendPixelWithSourcePalette_FUN_0042fd60
                      ((int)x,y0,((float)(uVar4 >> 8) + 1.0) * in_stack_ffffffcc,color);
            in_stack_ffffffcc = (float)(unaff_retaddr + (int)x);
            cockpit_ckptutil_c_blendPixelWithSourcePalette_FUN_0042fd60
                      ((int)in_stack_ffffffcc,y0,blend_factor,color);
            uVar3 = uVar4;
          }
        }
        cockpit_ckptutil_c_putPixel_FUN_00430140(x1,y1,color);
        return;
      }
      do {
        y0 = y0 + 1;
        x = (float)((int)x + iVar5);
        cockpit_ckptutil_c_putPixel_FUN_00430140((int)x,y0,color);
        x0 = x0 + -1;
      } while (x0 != 0);
      return;
    }
    while (blend_factor = (float)((int)blend_factor + -1), blend_factor != -NAN) {
      x = (float)((int)x + iVar5);
      cockpit_ckptutil_c_putPixel_FUN_00430140((int)x,y0,color);
    }
  }
  return;
}

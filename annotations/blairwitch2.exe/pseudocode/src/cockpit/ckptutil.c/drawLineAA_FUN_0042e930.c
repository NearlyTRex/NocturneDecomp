// Name: cockpit_ckptutil.c_drawLineAA_FUN_0042e930
// Address: 0042e930
// Address Range: [[0042e930, 0042ebe1]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_ckptutil_c_drawLineAA_FUN_0042e930(int x0,int y0,int x1,int y1,int color)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl cockpit_ckptutil_c_drawLineAA_FUN_0042e930(int x0,int y0,int x1,int y1,int color)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int x;
  uint uVar4;
  float fStack_34;
  int iVar5;
  
  iVar5 = y0;
  x = x0;
  if (y1 < y0) {
    y0 = y1;
    x = x1;
    x1 = x0;
    y1 = iVar5;
  }
  if ((_DAT_00609b30 != 0) ||
     (((((_DAT_01c35e48 <= x || (_DAT_01c35e48 <= x1)) &&
        ((x <= _DAT_01c35e50 || (x1 <= _DAT_01c35e50)))) &&
       ((_DAT_01c35e4c <= y0 || (_DAT_01c35e4c <= y1)))) &&
      ((y0 <= _DAT_01c35e54 || (y1 <= _DAT_01c35e54)))))) {
    cockpit_ckptutil_c_putPixel_FUN_0042f260(x,y0,color);
    uVar1 = x1 - x;
    if ((int)uVar1 < 0) {
      uVar1 = -uVar1;
      iVar5 = -1;
    }
    else {
      iVar5 = 1;
    }
    uVar2 = y1 - y0;
    if (uVar2 != 0) {
      if (uVar1 == 0) {
        do {
          y0 = y0 + 1;
          cockpit_ckptutil_c_putPixel_FUN_0042f260(x,y0,color);
          x0 = x0 + -1;
        } while (x0 != 0);
        return;
      }
      if (uVar1 != uVar2) {
        if ((int)uVar2 < (int)uVar1) {
          uVar3 = (uVar2 * 0x10000) / uVar1;
          uVar2 = 0;
          while (uVar1 = uVar1 - 1, uVar1 != 0) {
            uVar4 = uVar2 + uVar3 & 0xffff;
            if (uVar4 <= uVar2) {
              y0 = y0 + 1;
            }
            x = x + iVar5;
            cockpit_ckptutil_c_blendPixelWithSourcePalette_FUN_0042ef90
                      (x,y0,((float)(uVar4 >> 8) + 1.0) * fStack_34,color);
            cockpit_ckptutil_c_blendPixelWithSourcePalette_FUN_0042ef90
                      (x,y0 + 1,(float)(uVar4 >> 8 ^ 0xff) * fStack_34,color);
            uVar2 = uVar4;
          }
        }
        else {
          uVar3 = (uVar1 << 0x10) / uVar2;
          uVar1 = 0;
          while (uVar2 = uVar2 - 1, uVar2 != 0) {
            uVar4 = uVar1 + uVar3 & 0xffff;
            if (uVar4 <= uVar1) {
              x = x + iVar5;
            }
            y0 = y0 + 1;
            cockpit_ckptutil_c_blendPixelWithSourcePalette_FUN_0042ef90
                      (x,y0,((float)(uVar4 >> 8) + 1.0) * fStack_34,color);
            cockpit_ckptutil_c_blendPixelWithSourcePalette_FUN_0042ef90
                      (iVar5 + x,y0,(float)(uVar4 >> 8 ^ 0xff) * fStack_34,color);
            uVar1 = uVar4;
          }
        }
        cockpit_ckptutil_c_putPixel_FUN_0042f260(x1,y1,color);
        return;
      }
      do {
        y0 = y0 + 1;
        x = x + iVar5;
        cockpit_ckptutil_c_putPixel_FUN_0042f260(x,y0,color);
        x0 = x0 + -1;
      } while (x0 != 0);
      return;
    }
    while (uVar1 = uVar1 - 1, uVar1 != 0xffffffff) {
      x = x + iVar5;
      cockpit_ckptutil_c_putPixel_FUN_0042f260(x,y0,color);
    }
  }
  return;
}

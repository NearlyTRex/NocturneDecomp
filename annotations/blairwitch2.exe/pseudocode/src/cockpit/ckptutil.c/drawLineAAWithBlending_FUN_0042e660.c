// Name: cockpit_ckptutil.c_drawLineAAWithBlending_FUN_0042e660
// Address: 0042e660
// Address Range: [[0042e660, 0042e922]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_ckptutil_c_drawLineAAWithBlending_FUN_0042e660(int x0,int y0,int x1,int y1,int base_color,uchar blend_color,int blend_mode)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl cockpit_ckptutil_c_drawLineAAWithBlending_FUN_0042e660(int x0,int y0,int x1,int y1,int base_color,uchar blend_color,int blend_mode)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iStack_2c;
  uint uStack_28;
  uint uStack_24;
  int iStack_1c;
  byte bStack_18;
  
  if ((y0 <= y1) &&
     ((_DAT_007bee2c != 0 ||
      ((((_DAT_01c35e48 <= x0 || (_DAT_01c35e48 <= x1)) &&
        ((x0 <= _DAT_01c35e50 || (x1 <= _DAT_01c35e50)))) &&
       (((_DAT_01c35e4c <= y0 || (_DAT_01c35e4c <= y1)) &&
        ((y0 <= _DAT_01c35e54 || (y1 <= _DAT_01c35e54)))))))))) {
    uStack_24 = x1 - x0;
    if ((int)uStack_24 < 0) {
      uStack_24 = -uStack_24;
      iStack_2c = -1;
    }
    else {
      iStack_2c = 1;
    }
    uStack_28 = y1 - y0;
    bStack_18 = (byte)base_color;
    if (uStack_28 == 0) {
      while (uStack_24 = uStack_24 - 1, uStack_24 != 0) {
        x0 = x0 + iStack_2c;
        cockpit_ckptutil_c_putPixel_FUN_0042f260(x0,y0,base_color & 0xff);
      }
    }
    else {
      if (uStack_24 == 0) {
        do {
          y0 = y0 + 1;
          cockpit_ckptutil_c_putPixel_FUN_0042f260(x0,y0,base_color & 0xff);
          iStack_1c = iStack_1c + -1;
        } while (iStack_1c != 1);
        return;
      }
      if ((int)uStack_28 < (int)uStack_24) {
        if (blend_mode != 0) {
          bStack_18 = blend_color;
        }
        uVar2 = (uStack_28 * 0x10000) / uStack_24;
        uVar4 = 0;
        while (uStack_24 = uStack_24 - 1, uStack_24 != 0) {
          uVar3 = uVar4 + uVar2 & 0xffff;
          if (uVar3 <= uVar4) {
            y0 = y0 + 1;
          }
          x0 = x0 + iStack_2c;
          uVar4 = uVar3;
          if (blend_mode == 0) {
            cockpit_ckptutil_c_blendPixelWithHardwarePalette_FUN_0042ebf0
                      (x0,y0,((float)(uVar3 >> 8) + 1.0) * 0.00390625,(uint)bStack_18);
          }
          else {
            cockpit_ckptutil_c_blendPixelWithHardwarePalette_FUN_0042ebf0
                      (x0,y0 + 1,(float)(uVar3 >> 8 ^ 0xff) * 0.00390625,(uint)bStack_18);
          }
        }
      }
      else {
        if (((blend_mode == 0) && (iStack_2c == 1)) || ((blend_mode == 1 && (iStack_2c == -1)))) {
          bVar1 = true;
        }
        else {
          bVar1 = false;
        }
        if (bVar1) {
          blend_color = bStack_18;
        }
        uVar2 = (uStack_24 << 0x10) / uStack_28;
        uVar4 = 0;
        while (uStack_28 = uStack_28 - 1, uStack_28 != 0) {
          uVar3 = uVar4 + uVar2 & 0xffff;
          if (uVar3 <= uVar4) {
            x0 = x0 + iStack_2c;
          }
          y0 = y0 + 1;
          uVar4 = uVar3;
          if (bVar1) {
            cockpit_ckptutil_c_blendPixelWithHardwarePalette_FUN_0042ebf0
                      (x0,y0,((float)(uVar3 >> 8) + 1.0) * 0.00390625,(uint)blend_color);
          }
          else {
            cockpit_ckptutil_c_blendPixelWithHardwarePalette_FUN_0042ebf0
                      (iStack_2c + x0,y0,(float)(uVar3 >> 8 ^ 0xff) * 0.00390625,(uint)blend_color);
          }
        }
      }
    }
  }
  return;
}

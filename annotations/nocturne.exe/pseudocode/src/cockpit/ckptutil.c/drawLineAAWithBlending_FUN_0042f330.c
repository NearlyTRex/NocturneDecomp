// Name: cockpit_ckptutil.c_drawLineAAWithBlending_FUN_0042f330
// Address: 0042f330
// Address Range: [[0042f330, 0042f5f2]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_ckptutil_c_drawLineAAWithBlending_FUN_0042f330(int x0,int y0,int x1,int y1,int base_color,uchar blend_color,int blend_mode)

#include "nocturne.h"

void __cdecl cockpit_ckptutil_c_drawLineAAWithBlending_FUN_0042f330(int x0,int y0,int x1,int y1,int base_color,uchar blend_color,int blend_mode)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int local_2c;
  uint local_28;
  uint local_24;
  int local_1c;
  uchar local_18;
  
  if ((y0 <= y1) &&
     ((DAT_00766c6c != 0 ||
      ((((g_ClipLeft <= x0 || (g_ClipLeft <= x1)) && ((x0 <= g_ClipRight || (x1 <= g_ClipRight))))
       && (((g_ClipTop <= y0 || (g_ClipTop <= y1)) && ((y0 <= g_ClipBottom || (y1 <= g_ClipBottom)))
           ))))))) {
    local_24 = x1 - x0;
    if ((int)local_24 < 0) {
      local_24 = -local_24;
      local_2c = -1;
    }
    else {
      local_2c = 1;
    }
    local_28 = y1 - y0;
    local_18 = (uchar)base_color;
    if (local_28 == 0) {
      while (local_24 = local_24 - 1, local_24 != 0) {
        x0 = x0 + local_2c;
        cockpit_ckptutil_c_putPixel_FUN_00430140(x0,y0,base_color & 0xff);
      }
    }
    else {
      if (local_24 == 0) {
        do {
          y0 = y0 + 1;
          cockpit_ckptutil_c_putPixel_FUN_00430140(x0,y0,base_color & 0xff);
          local_1c = local_1c + -1;
        } while (local_1c != 1);
        return;
      }
      if ((int)local_28 < (int)local_24) {
        if (blend_mode != 0) {
          local_18 = blend_color;
        }
        uVar2 = (local_28 * 0x10000) / local_24;
        uVar4 = 0;
        while (local_24 = local_24 - 1, local_24 != 0) {
          uVar3 = uVar4 + uVar2 & 0xffff;
          if (uVar3 <= uVar4) {
            y0 = y0 + 1;
          }
          x0 = x0 + local_2c;
          uVar4 = uVar3;
          if (blend_mode == 0) {
            cockpit_ckptutil_c_FUN_0042f8c0(x0,y0,((float)(uVar3 >> 8) + 1.0) * 0.00390625,local_18)
            ;
          }
          else {
            cockpit_ckptutil_c_FUN_0042f8c0
                      (x0,y0 + 1,(float)(uVar3 >> 8 ^ 0xff) * 0.00390625,local_18);
          }
        }
      }
      else {
        if (((blend_mode == 0) && (local_2c == 1)) || ((blend_mode == 1 && (local_2c == -1)))) {
          bVar1 = true;
        }
        else {
          bVar1 = false;
        }
        if (bVar1) {
          blend_color = local_18;
        }
        uVar2 = (local_24 << 0x10) / local_28;
        uVar4 = 0;
        while (local_28 = local_28 - 1, local_28 != 0) {
          uVar3 = uVar4 + uVar2 & 0xffff;
          if (uVar3 <= uVar4) {
            x0 = x0 + local_2c;
          }
          y0 = y0 + 1;
          uVar4 = uVar3;
          if (bVar1) {
            cockpit_ckptutil_c_FUN_0042f8c0
                      (x0,y0,((float)(uVar3 >> 8) + 1.0) * 0.00390625,blend_color);
          }
          else {
            cockpit_ckptutil_c_FUN_0042f8c0
                      (local_2c + x0,y0,(float)(uVar3 >> 8 ^ 0xff) * 0.00390625,blend_color);
          }
        }
      }
    }
  }
  return;
}

// Name: cockpit_ckptutil.c_blitDualModeSprite_FUN_004326a0
// Address: 004326a0
// MANUAL RECONSTRUCTION
// Address Range: [[004326a0, 0043285a]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_ckptutil_c_blitDualModeSprite_FUN_004326a0(void *sprite_data,void *span_data,int dest_x,int dest_y,int width,int height)

#include "nocturne.h"

void __cdecl cockpit_ckptutil_c_blitDualModeSprite_FUN_004326a0(void *sprite_data,void *span_data,int dest_x,int dest_y,int width,int height)

{
  int iVar4;
  ColorConversionFunc *pCVar5;
  int *piVar6;
  int *piVar10;
  int iVar7;
  int iVar11;
  int local_28;
  int local_24;
  byte *local_18;
  ushort *local_14;
  byte *p_sprite;

  iVar4 = (intptr_t)g_ScreenBufferArray[1] - (intptr_t)g_ScreenBufferArray[0];
  if (sprite_data != (void *)0x0) {
    pCVar5 = cockpit_ckptutil_c_getColorConversionFunction_FUN_00431760();
    p_sprite = (byte *)sprite_data;
    if (g_BitsPerPixel == 8) {
      local_18 = (byte *)g_ScreenBufferArray[dest_y] + dest_x;
      if (0 < height) {
        local_28 = 0;
        do {
          if (span_data == (void *)0x0) {
            (*pCVar5)(local_18,p_sprite,width);
          }
          else {
            piVar6 = (int *)((char *)span_data + local_28);
            for (iVar7 = 0; iVar7 < *piVar6; iVar7 = iVar7 + 1) {
              (*pCVar5)(local_18 + piVar6[iVar7 + 1],
                        p_sprite + piVar6[iVar7 + 1],
                        piVar6[iVar7 + 17]);
            }
          }
          local_28 = local_28 + 0x84;
          local_18 = local_18 + iVar4;
          p_sprite = p_sprite + width;
        } while (local_28 < height * 0x84);
      }
    }
    else {
      local_14 = (ushort *)g_ScreenBufferArray[dest_y] + dest_x;
      if (0 < height) {
        local_24 = 0;
        do {
          if (span_data == (void *)0x0) {
            (*pCVar5)(local_14,p_sprite,width);
          }
          else {
            piVar10 = (int *)((char *)span_data + local_24);
            for (iVar11 = 0; iVar11 < *piVar10; iVar11 = iVar11 + 1) {
              (*pCVar5)(local_14 + piVar10[iVar11 + 1],
                        p_sprite + piVar10[iVar11 + 1],
                        piVar10[iVar11 + 17]);
            }
          }
          local_24 = local_24 + 0x84;
          local_14 = local_14 + (iVar4 / 2);
          p_sprite = p_sprite + width;
        } while (local_24 < height * 0x84);
      }
    }
  }
  return;
}

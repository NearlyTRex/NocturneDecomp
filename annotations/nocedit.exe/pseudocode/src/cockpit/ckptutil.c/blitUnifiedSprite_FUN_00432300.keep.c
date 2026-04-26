// Name: cockpit_ckptutil.c_blitUnifiedSprite_FUN_00432300
// Address: 00432300
// MANUAL RECONSTRUCTION
// Address Range: [[00432300, 00432530]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_ckptutil_c_blitUnifiedSprite_FUN_00432300(void *sprite_data,void *span_data,int dest_x,int dest_y,int width,int height)

#include "nocturne.h"

void __cdecl cockpit_ckptutil_c_blitUnifiedSprite_FUN_00432300(void *sprite_data,void *span_data,int dest_x,int dest_y,int width,int height)

{
  int iVar1;
  ColorConversionFunc *pCVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int *piVar1;
  int iVar2;
  int iVar6;
  int iVar4;
  int iVar8;
  int iVar9;
  int iVar10;
  int local_2c;
  int local_28;
  ushort *local_1c;
  byte *local_18;
  byte *p_sprite;

  iVar6 = g_ClipRight - dest_x;
  iVar1 = (int)g_ScreenBufferArray[1] - (int)g_ScreenBufferArray[0];
  iVar8 = g_ClipLeft - dest_x;
  if (sprite_data != (void *)0x0) {
    pCVar2 = cockpit_ckptutil_c_getColorConversionFunction_FUN_00431760();
    p_sprite = (byte *)sprite_data;
    if (g_BitsPerPixel == 8) {
      local_18 = (byte *)g_ScreenBufferArray[dest_y] + dest_x;
      if (0 < height) {
        local_28 = 0;
        do {
          if (span_data == (void *)0x0) {
            (*pCVar2)(local_18, p_sprite, width);
          }
          else {
            iVar9 = 0;
            while (piVar4 = (int *)((char *)span_data + local_28), iVar9 < *piVar4) {
              iVar4 = piVar4[iVar9 + 1];
              iVar5 = piVar4[iVar9 + 17] + iVar4 - 1;
              if (((iVar4 < iVar8) && (iVar4 = iVar8, iVar5 < iVar8)) ||
                 ((iVar6 < iVar5 && (iVar5 = iVar6, iVar6 < iVar4)))) {
                /* span fully clipped; render skipped */
              }
              else {
                (*pCVar2)(local_18 + iVar4, p_sprite + iVar4, (iVar5 - iVar4) + 1);
              }
              iVar9 = iVar9 + 1;
            }
          }
          local_28 = local_28 + 0x84;
          local_18 = local_18 + iVar1;
          p_sprite = p_sprite + width;
        } while (local_28 < height * 0x84);
      }
    }
    else {
      local_1c = (ushort *)g_ScreenBufferArray[dest_y] + dest_x;
      if (0 < height) {
        local_2c = 0;
        do {
          if (span_data == (void *)0x0) {
            (*pCVar2)(local_1c, p_sprite, width);
          }
          else {
            iVar10 = 0;
            while (piVar1 = (int *)((char *)span_data + local_2c), iVar10 < *piVar1) {
              iVar3 = piVar1[iVar10 + 1];
              iVar2 = piVar1[iVar10 + 17] + iVar3 - 1;
              if (((iVar3 < iVar8) && (iVar3 = iVar8, iVar2 < iVar8)) ||
                 ((iVar6 < iVar2 && (iVar2 = iVar6, iVar6 < iVar3)))) {
                /* span fully clipped; render skipped */
              }
              else {
                (*pCVar2)(local_1c + iVar3, p_sprite + iVar3, (iVar2 - iVar3) + 1);
              }
              iVar10 = iVar10 + 1;
            }
          }
          local_2c = local_2c + 0x84;
          local_1c = local_1c + (iVar1 / 2);
          p_sprite = p_sprite + width;
        } while (local_2c < height * 0x84);
      }
    }
  }
  return;
}

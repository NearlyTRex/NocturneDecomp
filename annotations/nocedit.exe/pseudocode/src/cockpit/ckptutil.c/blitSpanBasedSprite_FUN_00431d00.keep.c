// Name: cockpit_ckptutil.c_blitSpanBasedSprite_FUN_00431d00
// Address: 00431d00
// MANUAL RECONSTRUCTION
// Address Range: [[00431d00, 00431f3a]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_ckptutil_c_blitSpanBasedSprite_FUN_00431d00(void *sprite_data,void *span_data,int screen_x,int screen_y,int src_x,int src_y,int width,int height)

#include "nocturne.h"

void __cdecl cockpit_ckptutil_c_blitSpanBasedSprite_FUN_00431d00(void *sprite_data,void *span_data,int screen_x,int screen_y,int src_x,int src_y,int width,int height)

{
  int iVar1;
  ColorConversionFunc *pCVar2;
  int *piVar3;
  int *piVar1;
  int iVar4;
  int iVar5;
  int iVar2;
  int iVar6;
  int iVar3;
  int iVar8;
  int iVar9;
  int iVar10;
  int local_30;
  int local_2c;
  byte *local_1c;
  ushort *local_18;
  byte *p_sprite;

  iVar1 = (int)g_ScreenBufferArray[1] - (int)g_ScreenBufferArray[0];
  iVar6 = src_x + g_WindowWidth / 2;
  iVar8 = iVar6 + 1;
  if (sprite_data != (void *)0x0) {
    p_sprite = (byte *)sprite_data + width * screen_y + screen_x;
    pCVar2 = cockpit_ckptutil_c_getColorConversionFunction_FUN_00431760();
    local_30 = screen_y * 0x84;
    if (g_BitsPerPixel == 8) {
      local_1c = (byte *)g_ScreenBufferArray[src_y + screen_y] + screen_x;
      if (screen_y < height) {
        do {
          iVar9 = 0;
          while (piVar3 = (int *)((char *)span_data + local_30), iVar9 < *piVar3) {
            iVar3 = piVar3[iVar9 + 1];
            iVar5 = piVar3[iVar9 + 17] + iVar3 - 1;
            if (((iVar3 < iVar6) && (iVar3 = iVar6, iVar5 < iVar6)) ||
               ((iVar8 < iVar5 && (iVar5 = iVar8, iVar8 < iVar3)))) {
              /* span fully clipped; render skipped */
            }
            else {
              (*pCVar2)(local_1c + iVar3, p_sprite + iVar3, (iVar5 - iVar3) + 1);
            }
            iVar9 = iVar9 + 1;
          }
          iVar6 = iVar6 + -1;
          iVar8 = iVar8 + 1;
          local_30 = local_30 + 0x84;
          local_1c = local_1c + iVar1;
          p_sprite = p_sprite + width;
        } while (local_30 < height * 0x84);
      }
    }
    else {
      local_18 = (ushort *)g_ScreenBufferArray[src_y + screen_y] + screen_x;
      if (screen_y < height) {
        local_2c = local_30;
        do {
          iVar10 = 0;
          while (piVar1 = (int *)((char *)span_data + local_2c), iVar10 < *piVar1) {
            iVar4 = piVar1[iVar10 + 1];
            iVar2 = piVar1[iVar10 + 17] + iVar4 - 1;
            if (((iVar4 < iVar6) && (iVar4 = iVar6, iVar2 < iVar6)) ||
               ((iVar8 < iVar2 && (iVar2 = iVar8, iVar8 < iVar4)))) {
              /* span fully clipped; render skipped */
            }
            else {
              (*pCVar2)(local_18 + iVar4 - src_x, p_sprite + iVar4, (iVar2 - iVar4) + 1);
            }
            iVar10 = iVar10 + 1;
          }
          iVar6 = iVar6 + -1;
          iVar8 = iVar8 + 1;
          local_2c = local_2c + 0x84;
          local_18 = local_18 + (iVar1 / 2);
          p_sprite = p_sprite + width;
        } while (local_2c < height * 0x84);
      }
    }
  }
  return;
}

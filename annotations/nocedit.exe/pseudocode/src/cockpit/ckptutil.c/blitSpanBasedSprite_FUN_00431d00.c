// Name: cockpit_ckptutil.c_blitSpanBasedSprite_FUN_00431d00
// Address: 00431d00
// Address Range: [[00431d00, 00431f3a]]
// Convention: __cdecl
// Signature: void cockpit_ckptutil.c_blitSpanBasedSprite_FUN_00431d00(void * sprite_data, void * span_data, int screen_x, int screen_y, int src_x, int src_y, int width, int height)

#include "nocturne.h"

void __cdecl
cockpit_ckptutil_c_blitSpanBasedSprite_FUN_00431d00
          (void *sprite_data,void *span_data,int screen_x,int screen_y,int src_x,int src_y,int width
          ,int height)

{
  int iVar1;
  ColorConversionFunc *pCVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int local_30;
  int local_2c;
  int local_1c;
  void *local_18;
  
  iVar1 = (int)g_ScreenBufferArray[1] - (int)g_ScreenBufferArray[0];
  iVar6 = src_x + g_WindowWidth / 2;
  iVar8 = iVar6 + 1;
  if (sprite_data != (void *)0x0) {
    sprite_data = (void *)((int)sprite_data + width * screen_y + screen_x);
    pCVar2 = cockpit_ckptutil_c_getColorConversionFunction_FUN_00431760();
    local_30 = screen_y * 0x84;
    if (g_BitsPerPixel == 8) {
      local_1c = screen_x + (int)g_ScreenBufferArray[src_y + screen_y];
      if (screen_y < height) {
        do {
          iVar7 = 0;
          iVar9 = 0;
          while (piVar3 = (int *)((int)span_data + local_30), iVar9 < *piVar3) {
            iVar4 = *(int *)((int)piVar3 + iVar7 + 4);
            iVar5 = *(int *)((int)piVar3 + iVar7 + 0x44) + iVar4 + -1;
            if (((iVar4 < iVar6) && (iVar4 = iVar6, iVar5 < iVar6)) ||
               ((iVar8 < iVar5 && (iVar5 = iVar8, iVar8 < iVar4)))) {
              iVar9 = iVar9 + 1;
              iVar7 = iVar7 + 4;
            }
            else {
              (*pCVar2)((void *)(iVar4 + local_1c),(void *)((int)sprite_data + iVar4),
                        (iVar5 - iVar4) + 1);
              iVar9 = iVar9 + 1;
              iVar7 = iVar7 + 4;
            }
          }
          iVar6 = iVar6 + -1;
          iVar8 = iVar8 + 1;
          local_30 = local_30 + 0x84;
          local_1c = local_1c + iVar1;
          sprite_data = (void *)((int)sprite_data + width);
        } while (local_30 < height * 0x84);
      }
    }
    else {
      local_18 = (void *)((int)g_ScreenBufferArray[src_y + screen_y] + screen_x * 2);
      if (screen_y < height) {
        local_2c = local_30;
        do {
          iVar7 = 0;
          iVar9 = 0;
          while (piVar3 = (int *)((int)span_data + local_2c), iVar9 < *piVar3) {
            iVar4 = *(int *)((int)piVar3 + iVar7 + 4);
            iVar5 = *(int *)((int)piVar3 + iVar7 + 0x44) + iVar4 + -1;
            if (((iVar4 < iVar6) && (iVar4 = iVar6, iVar5 < iVar6)) ||
               ((iVar8 < iVar5 && (iVar5 = iVar8, iVar8 < iVar4)))) {
              iVar9 = iVar9 + 1;
              iVar7 = iVar7 + 4;
            }
            else {
              (*pCVar2)((void *)((int)local_18 + src_x * -2 + iVar4 * 2),
                        (void *)((int)sprite_data + iVar4),(iVar5 - iVar4) + 1);
              iVar9 = iVar9 + 1;
              iVar7 = iVar7 + 4;
            }
          }
          iVar6 = iVar6 + -1;
          iVar8 = iVar8 + 1;
          local_2c = local_2c + 0x84;
          local_18 = (void *)((int)local_18 + (iVar1 / 2) * 2);
          sprite_data = (void *)((int)sprite_data + width);
        } while (local_2c < height * 0x84);
      }
    }
  }
  return;
}

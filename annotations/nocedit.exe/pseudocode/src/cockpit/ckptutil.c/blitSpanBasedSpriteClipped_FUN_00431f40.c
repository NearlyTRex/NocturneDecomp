// Name: cockpit_ckptutil.c_blitSpanBasedSpriteClipped_FUN_00431f40
// Address: 00431f40
// Address Range: [[00431f40, 00432185]]
// Convention: __cdecl
// Signature: void cockpit_ckptutil.c_blitSpanBasedSpriteClipped_FUN_00431f40(void * sprite_data, void * span_data, int screen_x, int screen_y, int src_x, int src_y, int width, int height)

#include "nocturne.h"

void __cdecl
cockpit_ckptutil_c_blitSpanBasedSpriteClipped_FUN_00431f40
          (void *sprite_data,void *span_data,int screen_x,int screen_y,int src_x,int src_y,int width
          ,int height)

{
  ColorConversionFunc *pCVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int in_stack_00000024;
  int local_30;
  int local_2c;
  int local_28;
  void *local_18;
  int local_14;
  
  iVar7 = src_x + g_ClipRight;
  iVar5 = src_x + g_ClipLeft;
  if (sprite_data != (void *)0x0) {
    pCVar1 = cockpit_ckptutil_c_getColorConversionFunction_FUN_00431760();
    local_2c = screen_y * 0x84;
    if (g_BitsPerPixel == 8) {
      local_14 = screen_y + (int)g_ScreenBufferArray[width + screen_y];
      if (screen_y < in_stack_00000024) {
        do {
          iVar6 = 0;
          iVar8 = 0;
          while (piVar2 = (int *)(screen_x + local_2c), iVar8 < *piVar2) {
            iVar3 = *(int *)((int)piVar2 + iVar6 + 4);
            iVar4 = *(int *)((int)piVar2 + iVar6 + 0x44) + iVar3 + -1;
            if (((iVar3 < iVar5) && (iVar3 = iVar5, iVar4 < iVar5)) ||
               ((iVar7 < iVar4 && (iVar4 = iVar7, iVar7 < iVar3)))) {
              iVar8 = iVar8 + 1;
              iVar6 = iVar6 + 4;
            }
            else {
              (*pCVar1)((void *)((iVar3 + local_14) - src_y),(void *)((int)span_data + iVar3),
                        (iVar4 - iVar3) + 1);
              iVar8 = iVar8 + 1;
              iVar6 = iVar6 + 4;
            }
          }
          local_2c = local_2c + 0x84;
          local_14 = local_14 + local_30;
          span_data = (void *)((int)span_data + height);
        } while (local_2c < height * 0x84);
      }
    }
    else {
      local_18 = (void *)((int)g_ScreenBufferArray[width + screen_y] + screen_y * 2);
      if (screen_y < in_stack_00000024) {
        local_28 = local_2c;
        do {
          iVar6 = 0;
          iVar8 = 0;
          while (piVar2 = (int *)(screen_x + local_28), iVar8 < *piVar2) {
            iVar3 = *(int *)((int)piVar2 + iVar6 + 4);
            iVar4 = *(int *)((int)piVar2 + iVar6 + 0x44) + iVar3 + -1;
            if (((iVar3 < iVar5) && (iVar3 = iVar5, iVar4 < iVar5)) ||
               ((iVar7 < iVar4 && (iVar4 = iVar7, iVar7 < iVar3)))) {
              iVar8 = iVar8 + 1;
              iVar6 = iVar6 + 4;
            }
            else {
              (*pCVar1)((void *)((int)local_18 + src_y * -2 + iVar3 * 2),
                        (void *)((int)span_data + iVar3),(iVar4 - iVar3) + 1);
              iVar8 = iVar8 + 1;
              iVar6 = iVar6 + 4;
            }
          }
          local_28 = local_28 + 0x84;
          local_18 = (void *)((int)local_18 + (local_30 / 2) * 2);
          span_data = (void *)((int)span_data + height);
        } while (local_28 < height * 0x84);
      }
    }
  }
  return;
}

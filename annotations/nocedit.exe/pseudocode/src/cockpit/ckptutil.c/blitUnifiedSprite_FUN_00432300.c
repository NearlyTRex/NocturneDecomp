// Name: cockpit_ckptutil.c_blitUnifiedSprite_FUN_00432300
// Address: 00432300
// Address Range: [[00432300, 00432530]]
// Convention: __cdecl
// Signature: void cockpit_ckptutil.c_blitUnifiedSprite_FUN_00432300(void * sprite_data, void * span_data, int dest_x, int dest_y, int width, int height)

#include "nocturne.h"

void __cdecl
cockpit_ckptutil_c_blitUnifiedSprite_FUN_00432300
          (void *sprite_data,void *span_data,int dest_x,int dest_y,int width,int height)

{
  ColorConversionFunc *pCVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int in_stack_0000001c;
  int local_2c;
  int local_28;
  int local_24;
  void *local_18;
  void *local_14;
  
  iVar5 = g_ClipRight - dest_x;
  iVar7 = g_ClipLeft - dest_x;
  if (sprite_data != (void *)0x0) {
    pCVar1 = cockpit_ckptutil_c_getColorConversionFunction_FUN_00431760();
    if (g_BitsPerPixel == 8) {
      local_14 = (void *)(dest_y + (int)g_ScreenBufferArray[width]);
      if (0 < in_stack_0000001c) {
        local_24 = 0;
        do {
          if (dest_x == 0) {
            (*pCVar1)(local_14,span_data,height);
          }
          else {
            iVar6 = 0;
            iVar8 = 0;
            while (piVar3 = (int *)(dest_x + local_24), iVar8 < *piVar3) {
              iVar2 = *(int *)((int)piVar3 + iVar6 + 4);
              iVar4 = *(int *)((int)piVar3 + iVar6 + 0x44) + iVar2 + -1;
              if (((iVar2 < iVar7) && (iVar2 = iVar7, iVar4 < iVar7)) ||
                 ((iVar5 < iVar4 && (iVar4 = iVar5, iVar5 < iVar2)))) {
                iVar8 = iVar8 + 1;
                iVar6 = iVar6 + 4;
              }
              else {
                (*pCVar1)((void *)(iVar2 + (int)local_14),(void *)((int)span_data + iVar2),
                          (iVar4 - iVar2) + 1);
                iVar8 = iVar8 + 1;
                iVar6 = iVar6 + 4;
              }
            }
          }
          local_24 = local_24 + 0x84;
          local_14 = (void *)((int)local_14 + local_2c);
          span_data = (void *)((int)span_data + height);
        } while (local_24 < in_stack_0000001c * 0x84);
      }
    }
    else {
      local_18 = (void *)((int)g_ScreenBufferArray[width] + dest_y * 2);
      if (0 < in_stack_0000001c) {
        local_28 = 0;
        do {
          if (dest_x == 0) {
            (*pCVar1)(local_18,span_data,height);
          }
          else {
            iVar6 = 0;
            iVar8 = 0;
            while (piVar3 = (int *)(dest_x + local_28), iVar8 < *piVar3) {
              iVar2 = *(int *)((int)piVar3 + iVar6 + 4);
              iVar4 = *(int *)((int)piVar3 + iVar6 + 0x44) + iVar2 + -1;
              if (((iVar2 < iVar7) && (iVar2 = iVar7, iVar4 < iVar7)) ||
                 ((iVar5 < iVar4 && (iVar4 = iVar5, iVar5 < iVar2)))) {
                iVar8 = iVar8 + 1;
                iVar6 = iVar6 + 4;
              }
              else {
                (*pCVar1)((void *)(iVar2 * 2 + (int)local_18),(void *)((int)span_data + iVar2),
                          (iVar4 - iVar2) + 1);
                iVar8 = iVar8 + 1;
                iVar6 = iVar6 + 4;
              }
            }
          }
          local_28 = local_28 + 0x84;
          local_18 = (void *)((int)local_18 + (local_2c / 2) * 2);
          span_data = (void *)((int)span_data + height);
        } while (local_28 < in_stack_0000001c * 0x84);
      }
    }
  }
  return;
}

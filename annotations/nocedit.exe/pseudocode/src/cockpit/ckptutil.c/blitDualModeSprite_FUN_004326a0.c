// Name: cockpit_ckptutil.c_blitDualModeSprite_FUN_004326a0
// Address: 004326a0
// Address Range: [[004326a0, 0043285a]]
// Convention: __cdecl
// Signature: void cockpit_ckptutil.c_blitDualModeSprite_FUN_004326a0(void * sprite_data, void * span_data, int dest_x, int dest_y, int width, int height)

#include "nocturne.h"

void __cdecl
cockpit_ckptutil_c_blitDualModeSprite_FUN_004326a0
          (void *sprite_data,void *span_data,int dest_x,int dest_y,int width,int height)

{
  int iVar1;
  int iVar2;
  int iVar3;
  ColorConversionFunc *pCVar4;
  int *piVar5;
  void *dest_buffer;
  int iVar6;
  int iVar7;
  int in_stack_0000001c;
  int local_28;
  int local_24;
  int local_20;
  void *local_14;
  
  if (sprite_data != (void *)0x0) {
    pCVar4 = cockpit_ckptutil_c_getColorConversionFunction_FUN_00431760();
    if (g_BitsPerPixel == 8) {
      local_14 = (void *)(dest_y + (int)g_ScreenBufferArray[width]);
      if (0 < in_stack_0000001c) {
        local_24 = 0;
        do {
          if (dest_x == 0) {
            (*pCVar4)(local_14,sprite_data,height);
          }
          else {
            iVar7 = 0;
            for (iVar6 = 0; piVar5 = (int *)(dest_x + local_24), iVar6 < *piVar5; iVar6 = iVar6 + 1)
            {
              iVar1 = iVar7 + 0x44;
              iVar2 = iVar7 + 4;
              iVar3 = iVar7 + 4;
              iVar7 = iVar7 + 4;
              (*pCVar4)((void *)((int)local_14 + *(int *)(iVar3 + (int)piVar5)),
                        (void *)(*(int *)(iVar2 + (int)piVar5) + (int)sprite_data),
                        *(int *)(iVar1 + (int)piVar5));
            }
          }
          local_24 = local_24 + 0x84;
          local_14 = (void *)((int)local_14 + local_28);
          sprite_data = (void *)((int)sprite_data + height);
        } while (local_24 < in_stack_0000001c * 0x84);
      }
    }
    else {
      dest_buffer = (void *)((int)g_ScreenBufferArray[width] + dest_y * 2);
      if (0 < in_stack_0000001c) {
        local_20 = 0;
        do {
          if (dest_x == 0) {
            (*pCVar4)(dest_buffer,sprite_data,height);
          }
          else {
            iVar7 = 0;
            for (iVar6 = 0; piVar5 = (int *)(dest_x + local_20), iVar6 < *piVar5; iVar6 = iVar6 + 1)
            {
              iVar1 = iVar7 + 0x44;
              iVar2 = iVar7 + 4;
              iVar3 = iVar7 + 4;
              iVar7 = iVar7 + 4;
              (*pCVar4)((void *)(*(int *)(iVar3 + (int)piVar5) * 2 + (int)dest_buffer),
                        (void *)(*(int *)(iVar2 + (int)piVar5) + (int)sprite_data),
                        *(int *)(iVar1 + (int)piVar5));
            }
          }
          local_20 = local_20 + 0x84;
          dest_buffer = (void *)((int)dest_buffer + (local_28 / 2) * 2);
          sprite_data = (void *)((int)sprite_data + height);
        } while (local_20 < in_stack_0000001c * 0x84);
      }
    }
  }
  return;
}

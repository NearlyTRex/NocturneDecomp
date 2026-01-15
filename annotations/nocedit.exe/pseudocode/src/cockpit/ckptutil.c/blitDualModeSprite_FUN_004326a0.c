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
  int iVar4;
  ColorConversionFunc *pCVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  int local_28;
  int local_24;
  void *local_18;
  void *local_14;
  
  iVar4 = (int)g_ScreenBufferArray[1] - (int)g_ScreenBufferArray[0];
  if (sprite_data != (void *)0x0) {
    pCVar5 = cockpit_ckptutil_c_getColorConversionFunction_FUN_00431760();
    if (g_BitsPerPixel == 8) {
      local_18 = (void *)(dest_x + (int)g_ScreenBufferArray[dest_y]);
      if (0 < height) {
        local_28 = 0;
        do {
          if (span_data == (void *)0x0) {
            (*pCVar5)(local_18,sprite_data,width);
          }
          else {
            iVar8 = 0;
            for (iVar7 = 0; piVar6 = (int *)((int)span_data + local_28), iVar7 < *piVar6;
                iVar7 = iVar7 + 1) {
              iVar1 = iVar8 + 0x44;
              iVar2 = iVar8 + 4;
              iVar3 = iVar8 + 4;
              iVar8 = iVar8 + 4;
              (*pCVar5)((void *)((int)local_18 + *(int *)(iVar3 + (int)piVar6)),
                        (void *)(*(int *)(iVar2 + (int)piVar6) + (int)sprite_data),
                        *(int *)(iVar1 + (int)piVar6));
            }
          }
          local_28 = local_28 + 0x84;
          local_18 = (void *)((int)local_18 + iVar4);
          sprite_data = (void *)((int)sprite_data + width);
        } while (local_28 < height * 0x84);
      }
    }
    else {
      local_14 = (void *)((int)g_ScreenBufferArray[dest_y] + dest_x * 2);
      if (0 < height) {
        local_24 = 0;
        do {
          if (span_data == (void *)0x0) {
            (*pCVar5)(local_14,sprite_data,width);
          }
          else {
            iVar8 = 0;
            for (iVar7 = 0; piVar6 = (int *)((int)span_data + local_24), iVar7 < *piVar6;
                iVar7 = iVar7 + 1) {
              iVar1 = iVar8 + 0x44;
              iVar2 = iVar8 + 4;
              iVar3 = iVar8 + 4;
              iVar8 = iVar8 + 4;
              (*pCVar5)((void *)(*(int *)(iVar3 + (int)piVar6) * 2 + (int)local_14),
                        (void *)(*(int *)(iVar2 + (int)piVar6) + (int)sprite_data),
                        *(int *)(iVar1 + (int)piVar6));
            }
          }
          local_24 = local_24 + 0x84;
          local_14 = (void *)((int)local_14 + (iVar4 / 2) * 2);
          sprite_data = (void *)((int)sprite_data + width);
        } while (local_24 < height * 0x84);
      }
    }
  }
  return;
}

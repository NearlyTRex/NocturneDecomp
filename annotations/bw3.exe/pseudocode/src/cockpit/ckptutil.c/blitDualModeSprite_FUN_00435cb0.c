// Name: cockpit_ckptutil.c_blitDualModeSprite_FUN_00435cb0
// Address: 00435cb0
// Address Range: [[00435cb0, 00435e6a]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_ckptutil_c_blitDualModeSprite_FUN_00435cb0(void *sprite_data,void *span_data,int dest_x,int dest_y,int width,int height)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl cockpit_ckptutil_c_blitDualModeSprite_FUN_00435cb0(void *sprite_data,void *span_data,int dest_x,int dest_y,int width,int height)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  code *pcVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  int iStack_28;
  int iStack_24;
  int iStack_18;
  int iStack_14;
  
  iVar4 = _DAT_01c5faf0 - _DAT_01c5faec;
  if (sprite_data != (void *)0x0) {
    pcVar5 = (code *)cockpit_ckptutil_c_FUN_00434e80();
    if (DAT_005fba20 == 8) {
      iStack_18 = dest_x + *(int *)(&DAT_01c5faec + dest_y * 4);
      if (0 < height) {
        iStack_28 = 0;
        do {
          if (span_data == (void *)0x0) {
            (*pcVar5)(iStack_18,sprite_data,width);
          }
          else {
            iVar8 = 0;
            for (iVar7 = 0; piVar6 = (int *)((int)span_data + iStack_28), iVar7 < *piVar6;
                iVar7 = iVar7 + 1) {
              iVar1 = iVar8 + 0x44;
              iVar2 = iVar8 + 4;
              iVar3 = iVar8 + 4;
              iVar8 = iVar8 + 4;
              (*pcVar5)(iStack_18 + *(int *)(iVar3 + (int)piVar6),
                        *(int *)(iVar2 + (int)piVar6) + (int)sprite_data,
                        *(uint *)(iVar1 + (int)piVar6));
            }
          }
          iStack_28 = iStack_28 + 0x84;
          iStack_18 = iStack_18 + iVar4;
          sprite_data = (void *)((int)sprite_data + width);
        } while (iStack_28 < height * 0x84);
      }
    }
    else {
      iStack_14 = *(int *)(&DAT_01c5faec + dest_y * 4) + dest_x * 2;
      if (0 < height) {
        iStack_24 = 0;
        do {
          if (span_data == (void *)0x0) {
            (*pcVar5)(iStack_14,sprite_data,width);
          }
          else {
            iVar8 = 0;
            for (iVar7 = 0; piVar6 = (int *)((int)span_data + iStack_24), iVar7 < *piVar6;
                iVar7 = iVar7 + 1) {
              iVar1 = iVar8 + 0x44;
              iVar2 = iVar8 + 4;
              iVar3 = iVar8 + 4;
              iVar8 = iVar8 + 4;
              (*pcVar5)(*(int *)(iVar3 + (int)piVar6) * 2 + iStack_14,
                        *(int *)(iVar2 + (int)piVar6) + (int)sprite_data,
                        *(uint *)(iVar1 + (int)piVar6));
            }
          }
          iStack_24 = iStack_24 + 0x84;
          iStack_14 = iStack_14 + (iVar4 / 2) * 2;
          sprite_data = (void *)((int)sprite_data + width);
        } while (iStack_24 < height * 0x84);
      }
    }
  }
  return;
}

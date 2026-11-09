// Name: cockpit_ckptutil.c_blitSimpleSprite_FUN_00435b50
// Address: 00435b50
// Address Range: [[00435b50, 00435ca0]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_ckptutil_c_blitSimpleSprite_FUN_00435b50(void *sprite_data,int dest_x,int dest_y,int width,int height)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl cockpit_ckptutil_c_blitSimpleSprite_FUN_00435b50(void *sprite_data,int dest_x,int dest_y,int width,int height)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  
  iVar3 = _DAT_01c5faf0 - _DAT_01c5faec;
  if (sprite_data != (void *)0x0) {
    pcVar1 = (code *)cockpit_ckptutil_c_FUN_00434e80();
    iVar2 = dest_y * 4;
    if (DAT_005fba20 == 8) {
      iVar2 = *(int *)(&DAT_01c5faec + iVar2) + dest_x;
      iStack_18 = 0;
      if (0 < height) {
        do {
          (*pcVar1)(iVar2,sprite_data,width);
          sprite_data = (void *)((int)sprite_data + width);
          iStack_18 = iStack_18 + 1;
          iVar2 = iVar2 + iVar3;
        } while (iStack_18 < height);
        return;
      }
    }
    else if (DAT_005fba20 == 0x10) {
      iVar2 = *(int *)(&DAT_01c5faec + iVar2) + dest_x * 2;
      iStack_14 = 0;
      if (0 < height) {
        do {
          (*pcVar1)(iVar2,sprite_data,width);
          sprite_data = (void *)((int)sprite_data + width);
          iStack_14 = iStack_14 + 1;
          iVar2 = iVar2 + (iVar3 / 2) * 2;
        } while (iStack_14 < height);
        return;
      }
    }
    else {
      iVar2 = *(int *)(&DAT_01c5faec + iVar2) + dest_x * 4;
      iStack_1c = 0;
      if (0 < height) {
        do {
          (*pcVar1)(iVar2,sprite_data,width);
          sprite_data = (void *)((int)sprite_data + width);
          iStack_1c = iStack_1c + 1;
          iVar2 = iVar2 + ((int)((iVar3 + (iVar3 >> 0x1f) * -4) - (uint)((iVar3 >> 0x1f) << 1 < 0))
                          >> 2) * 4;
        } while (iStack_1c < height);
        return;
      }
    }
  }
  return;
}

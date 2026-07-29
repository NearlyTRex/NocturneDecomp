// Name: cockpit_ckptutil.c_blitSimpleSprite_FUN_0042df00
// Address: 0042df00
// Address Range: [[0042df00, 0042e050]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_ckptutil_c_blitSimpleSprite_FUN_0042df00(void *sprite_data,int dest_x,int dest_y,int width,int height)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl cockpit_ckptutil_c_blitSimpleSprite_FUN_0042df00(void *sprite_data,int dest_x,int dest_y,int width,int height)

{
  ColorConversionFunc *pCVar1;
  int iVar2;
  int iVar3;
  void *pvVar4;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  
  iVar3 = _DAT_01bd2fa4 - _DAT_01bd2fa0;
  if (sprite_data != (void *)0x0) {
    pCVar1 = cockpit_ckptutil_c_FUN_0042d130();
    iVar2 = dest_y * 4;
    if (DAT_005b7624 == 8) {
      pvVar4 = (void *)(*(int *)(&DAT_01bd2fa0 + iVar2) + dest_x);
      iStack_18 = 0;
      if (0 < height) {
        do {
          (*pCVar1)(pvVar4,sprite_data,width);
          sprite_data = (void *)((int)sprite_data + width);
          iStack_18 = iStack_18 + 1;
          pvVar4 = (void *)((int)pvVar4 + iVar3);
        } while (iStack_18 < height);
        return;
      }
    }
    else if (DAT_005b7624 == 0x10) {
      pvVar4 = (void *)(*(int *)(&DAT_01bd2fa0 + iVar2) + dest_x * 2);
      iStack_14 = 0;
      if (0 < height) {
        do {
          (*pCVar1)(pvVar4,sprite_data,width);
          sprite_data = (void *)((int)sprite_data + width);
          iStack_14 = iStack_14 + 1;
          pvVar4 = (void *)((int)pvVar4 + (iVar3 / 2) * 2);
        } while (iStack_14 < height);
        return;
      }
    }
    else {
      pvVar4 = (void *)(*(int *)(&DAT_01bd2fa0 + iVar2) + dest_x * 4);
      iStack_1c = 0;
      if (0 < height) {
        do {
          (*pCVar1)(pvVar4,sprite_data,width);
          sprite_data = (void *)((int)sprite_data + width);
          iStack_1c = iStack_1c + 1;
          pvVar4 = (void *)((int)pvVar4 +
                           ((int)((iVar3 + (iVar3 >> 0x1f) * -4) - (uint)((iVar3 >> 0x1f) << 1 < 0))
                           >> 2) * 4);
        } while (iStack_1c < height);
        return;
      }
    }
  }
  return;
}

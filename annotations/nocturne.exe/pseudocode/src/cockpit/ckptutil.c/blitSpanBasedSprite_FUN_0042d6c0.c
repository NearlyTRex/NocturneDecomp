// Name: cockpit_ckptutil.c_blitSpanBasedSprite_FUN_0042d6c0
// Address: 0042d6c0
// Address Range: [[0042d6c0, 0042d8fa]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_ckptutil_c_blitSpanBasedSprite_FUN_0042d6c0(void *sprite_data,void *span_data,int screen_x,int screen_y,int src_x,int src_y,int width,int height)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl cockpit_ckptutil_c_blitSpanBasedSprite_FUN_0042d6c0(void *sprite_data,void *span_data,int screen_x,int screen_y,int src_x,int src_y,int width,int height)

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
  int iStack_30;
  int iStack_2c;
  int iStack_1c;
  int iStack_18;
  
  iVar1 = _DAT_01bd2fa4 - _DAT_01bd2fa0;
  iVar7 = src_x + DAT_005b761c / 2;
  iVar8 = iVar7 + 1;
  if (sprite_data != (void *)0x0) {
    sprite_data = (void *)((int)sprite_data + width * screen_y + screen_x);
    pCVar2 = cockpit_ckptutil_c_FUN_0042d130();
    iStack_30 = screen_y * 0x84;
    iVar5 = (src_y + screen_y) * 4;
    if (DAT_005b7624 == 8) {
      iStack_1c = screen_x + *(int *)(&DAT_01bd2fa0 + iVar5);
      if (screen_y < height) {
        do {
          iVar5 = 0;
          iVar9 = 0;
          while (piVar3 = (int *)((int)span_data + iStack_30), iVar9 < *piVar3) {
            iVar4 = *(int *)((int)piVar3 + iVar5 + 4);
            iVar6 = *(int *)((int)piVar3 + iVar5 + 0x44) + iVar4 + -1;
            if (((iVar4 < iVar7) && (iVar4 = iVar7, iVar6 < iVar7)) ||
               ((iVar8 < iVar6 && (iVar6 = iVar8, iVar8 < iVar4)))) {
              iVar9 = iVar9 + 1;
              iVar5 = iVar5 + 4;
            }
            else {
              (*pCVar2)((void *)(iVar4 + iStack_1c),(void *)((int)sprite_data + iVar4),
                        (iVar6 - iVar4) + 1);
              iVar9 = iVar9 + 1;
              iVar5 = iVar5 + 4;
            }
          }
          iVar7 = iVar7 + -1;
          iVar8 = iVar8 + 1;
          iStack_30 = iStack_30 + 0x84;
          iStack_1c = iStack_1c + iVar1;
          sprite_data = (void *)((int)sprite_data + width);
        } while (iStack_30 < height * 0x84);
      }
    }
    else {
      iStack_18 = *(int *)(&DAT_01bd2fa0 + iVar5) + screen_x * 2;
      if (screen_y < height) {
        iStack_2c = iStack_30;
        do {
          iVar5 = 0;
          iVar9 = 0;
          while (piVar3 = (int *)((int)span_data + iStack_2c), iVar9 < *piVar3) {
            iVar4 = *(int *)((int)piVar3 + iVar5 + 4);
            iVar6 = *(int *)((int)piVar3 + iVar5 + 0x44) + iVar4 + -1;
            if (((iVar4 < iVar7) && (iVar4 = iVar7, iVar6 < iVar7)) ||
               ((iVar8 < iVar6 && (iVar6 = iVar8, iVar8 < iVar4)))) {
              iVar9 = iVar9 + 1;
              iVar5 = iVar5 + 4;
            }
            else {
              (*pCVar2)((void *)(iVar4 * 2 + iStack_18 + src_x * -2),
                        (void *)((int)sprite_data + iVar4),(iVar6 - iVar4) + 1);
              iVar9 = iVar9 + 1;
              iVar5 = iVar5 + 4;
            }
          }
          iVar7 = iVar7 + -1;
          iVar8 = iVar8 + 1;
          iStack_2c = iStack_2c + 0x84;
          iStack_18 = iStack_18 + (iVar1 / 2) * 2;
          sprite_data = (void *)((int)sprite_data + width);
        } while (iStack_2c < height * 0x84);
      }
    }
  }
  return;
}

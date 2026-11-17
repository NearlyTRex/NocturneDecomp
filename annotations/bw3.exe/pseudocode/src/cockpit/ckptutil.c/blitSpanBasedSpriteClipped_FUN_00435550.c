// Name: cockpit_ckptutil.c_blitSpanBasedSpriteClipped_FUN_00435550
// Address: 00435550
// Address Range: [[00435550, 00435795]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_ckptutil_c_blitSpanBasedSpriteClipped_FUN_00435550(void *sprite_data,void *span_data,int screen_x,int screen_y,int src_x,int src_y,int width,int height)

#include "nocturne.h"

void __cdecl cockpit_ckptutil_c_blitSpanBasedSpriteClipped_FUN_00435550(void *sprite_data,void *span_data,int screen_x,int screen_y,int src_x,int src_y,int width,int height)

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
  byte *puStack_1c;
  byte *puStack_18;
  
  iVar1 = (int)g_ARRAY_PTR_01c5faec[1] - (int)g_ARRAY_PTR_01c5faec[0];
  iVar8 = src_x + g_INT_01c6b5b0;
  iVar6 = src_x + g_INT_01c6b5a8;
  if (sprite_data != (void *)0x0) {
    sprite_data = (void *)((int)sprite_data + width * screen_y + screen_x);
    pCVar2 = cockpit_ckptutil_c_getColorConversionFunction_FUN_00434e80();
    iStack_30 = screen_y * 0x84;
    if (g_INT_005fba20 == 8) {
      puStack_18 = g_ARRAY_PTR_01c5faec[src_y + screen_y] + screen_x;
      if (screen_y < height) {
        do {
          iVar7 = 0;
          iVar9 = 0;
          while (piVar3 = (int *)((int)span_data + iStack_30), iVar9 < *piVar3) {
            iVar4 = *(int *)((int)piVar3 + iVar7 + 4);
            iVar5 = *(int *)((int)piVar3 + iVar7 + 0x44) + iVar4 + -1;
            if (((iVar4 < iVar6) && (iVar4 = iVar6, iVar5 < iVar6)) ||
               ((iVar8 < iVar5 && (iVar5 = iVar8, iVar8 < iVar4)))) {
              iVar9 = iVar9 + 1;
              iVar7 = iVar7 + 4;
            }
            else {
              (*pCVar2)(puStack_18 + (iVar4 - src_x),(void *)((int)sprite_data + iVar4),
                        (iVar5 - iVar4) + 1);
              iVar9 = iVar9 + 1;
              iVar7 = iVar7 + 4;
            }
          }
          iStack_30 = iStack_30 + 0x84;
          puStack_18 = puStack_18 + iVar1;
          sprite_data = (void *)((int)sprite_data + width);
        } while (iStack_30 < height * 0x84);
      }
    }
    else {
      puStack_1c = g_ARRAY_PTR_01c5faec[src_y + screen_y] + screen_x * 2;
      if (screen_y < height) {
        iStack_2c = iStack_30;
        do {
          iVar7 = 0;
          iVar9 = 0;
          while (piVar3 = (int *)((int)span_data + iStack_2c), iVar9 < *piVar3) {
            iVar4 = *(int *)((int)piVar3 + iVar7 + 4);
            iVar5 = *(int *)((int)piVar3 + iVar7 + 0x44) + iVar4 + -1;
            if (((iVar4 < iVar6) && (iVar4 = iVar6, iVar5 < iVar6)) ||
               ((iVar8 < iVar5 && (iVar5 = iVar8, iVar8 < iVar4)))) {
              iVar9 = iVar9 + 1;
              iVar7 = iVar7 + 4;
            }
            else {
              (*pCVar2)(puStack_1c + src_x * -2 + iVar4 * 2,(void *)((int)sprite_data + iVar4),
                        (iVar5 - iVar4) + 1);
              iVar9 = iVar9 + 1;
              iVar7 = iVar7 + 4;
            }
          }
          iStack_2c = iStack_2c + 0x84;
          puStack_1c = puStack_1c + (iVar1 / 2) * 2;
          sprite_data = (void *)((int)sprite_data + width);
        } while (iStack_2c < height * 0x84);
      }
    }
  }
  return;
}

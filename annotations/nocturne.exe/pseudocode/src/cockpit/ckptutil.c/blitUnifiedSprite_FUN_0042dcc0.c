// Name: cockpit_ckptutil.c_blitUnifiedSprite_FUN_0042dcc0
// Address: 0042dcc0
// Address Range: [[0042dcc0, 0042def0]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_ckptutil_c_blitUnifiedSprite_FUN_0042dcc0(void *sprite_data,void *span_data,int dest_x,int dest_y,int width,int height)

#include "nocturne.h"

void __cdecl cockpit_ckptutil_c_blitUnifiedSprite_FUN_0042dcc0(void *sprite_data,void *span_data,int dest_x,int dest_y,int width,int height)

{
  int iVar1;
  ColorConversionFunc *pCVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iStack_2c;
  int iStack_28;
  void *pvStack_1c;
  void *pvStack_18;
  
  iVar6 = g_ClipRight - dest_x;
  iVar1 = (int)g_ScreenBufferArray[1] - (int)g_ScreenBufferArray[0];
  iVar8 = g_ClipLeft - dest_x;
  if (sprite_data != (void *)0x0) {
    pCVar2 = cockpit_ckptutil_c_FUN_0042d130();
    if (g_BitsPerPixel == 8) {
      pvStack_18 = (void *)(dest_x + (int)g_ScreenBufferArray[dest_y]);
      if (0 < height) {
        iStack_28 = 0;
        do {
          if (span_data == (void *)0x0) {
            (*pCVar2)(pvStack_18,sprite_data,width);
          }
          else {
            iVar7 = 0;
            iVar9 = 0;
            while (piVar4 = (int *)((int)span_data + iStack_28), iVar9 < *piVar4) {
              iVar3 = *(int *)((int)piVar4 + iVar7 + 4);
              iVar5 = *(int *)((int)piVar4 + iVar7 + 0x44) + iVar3 + -1;
              if (((iVar3 < iVar8) && (iVar3 = iVar8, iVar5 < iVar8)) ||
                 ((iVar6 < iVar5 && (iVar5 = iVar6, iVar6 < iVar3)))) {
                iVar9 = iVar9 + 1;
                iVar7 = iVar7 + 4;
              }
              else {
                (*pCVar2)((void *)(iVar3 + (int)pvStack_18),(void *)((int)sprite_data + iVar3),
                          (iVar5 - iVar3) + 1);
                iVar9 = iVar9 + 1;
                iVar7 = iVar7 + 4;
              }
            }
          }
          iStack_28 = iStack_28 + 0x84;
          pvStack_18 = (void *)((int)pvStack_18 + iVar1);
          sprite_data = (void *)((int)sprite_data + width);
        } while (iStack_28 < height * 0x84);
      }
    }
    else {
      pvStack_1c = (void *)((int)g_ScreenBufferArray[dest_y] + dest_x * 2);
      if (0 < height) {
        iStack_2c = 0;
        do {
          if (span_data == (void *)0x0) {
            (*pCVar2)(pvStack_1c,sprite_data,width);
          }
          else {
            iVar7 = 0;
            iVar9 = 0;
            while (piVar4 = (int *)((int)span_data + iStack_2c), iVar9 < *piVar4) {
              iVar3 = *(int *)((int)piVar4 + iVar7 + 4);
              iVar5 = *(int *)((int)piVar4 + iVar7 + 0x44) + iVar3 + -1;
              if (((iVar3 < iVar8) && (iVar3 = iVar8, iVar5 < iVar8)) ||
                 ((iVar6 < iVar5 && (iVar5 = iVar6, iVar6 < iVar3)))) {
                iVar9 = iVar9 + 1;
                iVar7 = iVar7 + 4;
              }
              else {
                (*pCVar2)((void *)(iVar3 * 2 + (int)pvStack_1c),(void *)((int)sprite_data + iVar3),
                          (iVar5 - iVar3) + 1);
                iVar9 = iVar9 + 1;
                iVar7 = iVar7 + 4;
              }
            }
          }
          iStack_2c = iStack_2c + 0x84;
          pvStack_1c = (void *)((int)pvStack_1c + (iVar1 / 2) * 2);
          sprite_data = (void *)((int)sprite_data + width);
        } while (iStack_2c < height * 0x84);
      }
    }
  }
  return;
}

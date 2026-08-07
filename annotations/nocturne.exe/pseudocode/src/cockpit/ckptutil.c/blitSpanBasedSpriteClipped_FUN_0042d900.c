// Name: cockpit_ckptutil.c_blitSpanBasedSpriteClipped_FUN_0042d900
// Address: 0042d900
// Address Range: [[0042d900, 0042db45]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_ckptutil_c_blitSpanBasedSpriteClipped_FUN_0042d900(void *sprite_data,void *span_data,int screen_x,int screen_y,int src_x,int src_y,int width,int height)

#include "nocturne.h"

void __cdecl cockpit_ckptutil_c_blitSpanBasedSpriteClipped_FUN_0042d900(void *sprite_data,void *span_data,int screen_x,int screen_y,int src_x,int src_y,int width,int height)

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
  void *pvStack_1c;
  int iStack_18;
  
  iVar1 = (int)g_ScreenBufferArray[1] - (int)g_ScreenBufferArray[0];
  iVar8 = src_x + g_ClipRight;
  iVar6 = src_x + g_ClipLeft;
  if (sprite_data != (void *)0x0) {
    sprite_data = (void *)((int)sprite_data + width * screen_y + screen_x);
    pCVar2 = cockpit_ckptutil_c_FUN_0042d130();
    iStack_30 = screen_y * 0x84;
    if (g_BitsPerPixel == 8) {
      iStack_18 = screen_x + (int)g_ScreenBufferArray[src_y + screen_y];
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
              (*pCVar2)((void *)((iVar4 + iStack_18) - src_x),(void *)((int)sprite_data + iVar4),
                        (iVar5 - iVar4) + 1);
              iVar9 = iVar9 + 1;
              iVar7 = iVar7 + 4;
            }
          }
          iStack_30 = iStack_30 + 0x84;
          iStack_18 = iStack_18 + iVar1;
          sprite_data = (void *)((int)sprite_data + width);
        } while (iStack_30 < height * 0x84);
      }
    }
    else {
      pvStack_1c = (void *)((int)g_ScreenBufferArray[src_y + screen_y] + screen_x * 2);
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
              (*pCVar2)((void *)((int)pvStack_1c + src_x * -2 + iVar4 * 2),
                        (void *)((int)sprite_data + iVar4),(iVar5 - iVar4) + 1);
              iVar9 = iVar9 + 1;
              iVar7 = iVar7 + 4;
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

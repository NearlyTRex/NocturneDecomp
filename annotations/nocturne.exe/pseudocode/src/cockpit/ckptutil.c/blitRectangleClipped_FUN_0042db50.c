// Name: cockpit_ckptutil.c_blitRectangleClipped_FUN_0042db50
// Address: 0042db50
// Address Range: [[0042db50, 0042dcb5]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_ckptutil_c_blitRectangleClipped_FUN_0042db50(void *sprite_data,int dest_x,int dest_y,int width,int height)

#include "nocturne.h"

void __cdecl cockpit_ckptutil_c_blitRectangleClipped_FUN_0042db50(void *sprite_data,int dest_x,int dest_y,int width,int height)

{
  int iVar1;
  int iVar2;
  ColorConversionFunc *pCVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  void *pvVar8;
  
  iVar1 = g_ClipRight - dest_x;
  iVar2 = (int)g_ScreenBufferArray[1] - (int)g_ScreenBufferArray[0];
  iVar6 = g_ClipLeft - dest_x;
  if (sprite_data != (void *)0x0) {
    pCVar3 = cockpit_ckptutil_c_getColorConversionFunction_FUN_0042d130();
    iVar4 = width + -1;
    if (g_BitsPerPixel == 8) {
      iVar7 = (int)g_ScreenBufferArray[dest_y] + dest_x;
      iVar5 = 0;
      if (((iVar6 < 1) || (iVar5 = iVar6, iVar6 <= iVar4)) &&
         (((iVar4 <= iVar1 || (iVar4 = iVar1, iVar5 <= iVar1)) && (iVar1 = 0, 0 < height)))) {
        do {
          (*pCVar3)((void *)(iVar7 + iVar5),(void *)((int)sprite_data + iVar5),(iVar4 - iVar5) + 1);
          iVar1 = iVar1 + 1;
          iVar7 = iVar7 + iVar2;
          sprite_data = (void *)((int)sprite_data + width);
        } while (iVar1 < height);
        return;
      }
    }
    else {
      pvVar8 = (void *)((int)g_ScreenBufferArray[dest_y] + dest_x * 2);
      iVar5 = 0;
      if (((iVar6 < 1) || (iVar5 = iVar6, iVar6 <= iVar4)) &&
         ((iVar4 <= iVar1 || (iVar4 = iVar1, iVar5 <= iVar1)))) {
        iVar1 = 0;
        if (0 < height) {
          do {
            (*pCVar3)((void *)(iVar5 * 2 + (int)pvVar8),(void *)((int)sprite_data + iVar5),
                      (iVar4 - iVar5) + 1);
            iVar1 = iVar1 + 1;
            pvVar8 = (void *)((int)pvVar8 + (iVar2 / 2) * 2);
            sprite_data = (void *)((int)sprite_data + width);
          } while (iVar1 < height);
          return;
        }
      }
    }
  }
  return;
}

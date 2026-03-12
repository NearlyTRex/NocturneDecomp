// Name: cockpit_ckptutil.c_blitRectangleClipped_FUN_00432190
// Address: 00432190
// Address Range: [[00432190, 004322f5]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_ckptutil_c_blitRectangleClipped_FUN_00432190(void *sprite_data,int dest_x,int dest_y,int width,int height)

#include "nocturne.h"

void __cdecl cockpit_ckptutil_c_blitRectangleClipped_FUN_00432190(void *sprite_data,int dest_x,int dest_y,int width,int height)

{
  int iVar1;
  int iVar2;
  ColorConversionFunc *pCVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar3;
  int iVar8;
  int iVar7;
  void *pvVar8;
  
  iVar1 = g_ClipRight - dest_x;
  iVar2 = (int)g_ScreenBufferArray[1] - (int)g_ScreenBufferArray[0];
  iVar6 = g_ClipLeft - dest_x;
  if (sprite_data != (void *)0x0) {
    pCVar3 = cockpit_ckptutil_c_getColorConversionFunction_FUN_00431760();
    iVar4 = width + -1;
    if (g_BitsPerPixel == 8) {
      iVar7 = (int)g_ScreenBufferArray[dest_y] + dest_x;
      iVar8 = 0;
      if (((iVar6 < 1) || (iVar8 = iVar6, iVar6 <= iVar4)) &&
         (((iVar4 <= iVar1 || (iVar4 = iVar1, iVar8 <= iVar1)) && (iVar3 = 0, 0 < height)))) {
        do {
          (*pCVar3)((void *)(iVar7 + iVar8),(void *)((int)sprite_data + iVar8),(iVar4 - iVar8) + 1);
          iVar3 = iVar3 + 1;
          iVar7 = iVar7 + iVar2;
          sprite_data = (void *)((int)sprite_data + width);
        } while (iVar3 < height);
        return;
      }
    }
    else {
      pvVar8 = (void *)((int)g_ScreenBufferArray[dest_y] + dest_x * 2);
      iVar5 = 0;
      if (((iVar6 < 1) || (iVar5 = iVar6, iVar6 <= iVar4)) &&
         ((iVar4 <= iVar1 || (iVar4 = iVar1, iVar5 <= iVar1)))) {
        iVar8 = 0;
        if (0 < height) {
          do {
            (*pCVar3)((void *)(iVar5 * 2 + (int)pvVar8),(void *)((int)sprite_data + iVar5),
                      (iVar4 - iVar5) + 1);
            iVar8 = iVar8 + 1;
            pvVar8 = (void *)((int)pvVar8 + (iVar2 / 2) * 2);
            sprite_data = (void *)((int)sprite_data + width);
          } while (iVar8 < height);
          return;
        }
      }
    }
  }
  return;
}

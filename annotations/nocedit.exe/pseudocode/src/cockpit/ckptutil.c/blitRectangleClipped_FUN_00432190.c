// Name: cockpit_ckptutil.c_blitRectangleClipped_FUN_00432190
// Address: 00432190
// Address Range: [[00432190, 004322f5]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_ckptutil_c_blitRectangleClipped_FUN_00432190 (void *sprite_data,int dest_x,int dest_y,int width,int height)

#include "nocturne.h"

void __cdecl
cockpit_ckptutil_c_blitRectangleClipped_FUN_00432190
          (void *sprite_data,int dest_x,int dest_y,int width,int height)

{
  int iVar1;
  int iVar2;
  ColorConversionFunc *pCVar3;
  int iVar4;
  int iVar5;
  int unaff_EDI;
  int iVar6;
  void *pvVar7;
  int in_stack_0000001c;
  int in_stack_00000020;
  
  iVar1 = g_ClipRight - dest_x;
  iVar2 = (int)g_ScreenBufferArray[1] - (int)g_ScreenBufferArray[0];
  iVar5 = g_ClipLeft - dest_x;
  if (sprite_data != (void *)0x0) {
    pCVar3 = cockpit_ckptutil_c_getColorConversionFunction_FUN_00431760();
    iVar4 = width + -1;
    if (g_BitsPerPixel == 8) {
      iVar6 = (int)g_ScreenBufferArray[dest_y] + dest_x;
      iVar2 = 0;
      if (((iVar5 < 1) || (iVar2 = iVar5, iVar5 <= iVar4)) &&
         (((iVar4 <= iVar1 || (iVar4 = iVar1, iVar2 <= iVar1)) && (iVar1 = 0, 0 < height)))) {
        do {
          (*pCVar3)((void *)(iVar6 + iVar2),(void *)((int)sprite_data + iVar2),(iVar4 - iVar2) + 1);
          iVar1 = iVar1 + 1;
          iVar6 = iVar6 + unaff_EDI;
          sprite_data = (void *)((int)sprite_data + in_stack_0000001c);
        } while (iVar1 < in_stack_00000020);
        return;
      }
    }
    else {
      pvVar7 = (void *)((int)g_ScreenBufferArray[dest_y] + dest_x * 2);
      iVar6 = 0;
      if (((iVar5 < 1) || (iVar6 = iVar5, iVar5 <= iVar4)) &&
         ((iVar4 <= iVar1 || (iVar4 = iVar1, iVar6 <= iVar1)))) {
        iVar1 = 0;
        if (0 < height) {
          do {
            (*pCVar3)((void *)(iVar6 * 2 + (int)pvVar7),(void *)((int)sprite_data + iVar6),
                      (iVar4 - iVar6) + 1);
            iVar1 = iVar1 + 1;
            pvVar7 = (void *)((int)pvVar7 + iVar2 / 2);
            sprite_data = (void *)((int)sprite_data + in_stack_0000001c);
          } while (iVar1 < in_stack_00000020);
          return;
        }
      }
    }
  }
  return;
}

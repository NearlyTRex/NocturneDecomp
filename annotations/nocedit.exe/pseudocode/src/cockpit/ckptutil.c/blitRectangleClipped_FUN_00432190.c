// Name: cockpit_ckptutil.c_blitRectangleClipped_FUN_00432190
// Address: 00432190
// Address Range: [[00432190, 004322f5]]
// Convention: __cdecl
// Signature: void cockpit_ckptutil.c_blitRectangleClipped_FUN_00432190(void * sprite_data, int dest_x, int dest_y, int width, int height)

#include "nocturne.h"

void __cdecl
cockpit_ckptutil_c_blitRectangleClipped_FUN_00432190
          (void *sprite_data,int dest_x,int dest_y,int width,int height)

{
  ColorConversionFunc *pCVar1;
  int iVar2;
  int unaff_EBX;
  int iVar3;
  int iVar4;
  void *pvVar5;
  int in_stack_00000018;
  int in_stack_00000030;
  int in_stack_00000034;
  int local_28;
  
  iVar4 = g_ClipLeft - dest_x;
  if (sprite_data != (void *)0x0) {
    pCVar1 = cockpit_ckptutil_c_getColorConversionFunction_FUN_00431760();
    iVar2 = height + -1;
    if (g_BitsPerPixel == 8) {
      pvVar5 = g_ScreenBufferArray[width];
      iVar3 = 0;
      if (((iVar4 < 1) || (iVar3 = iVar4, iVar4 <= iVar2)) &&
         (((iVar2 <= local_28 || (iVar2 = local_28, iVar3 <= local_28)) &&
          (iVar4 = 0, 0 < in_stack_00000018)))) {
        do {
          pvVar5 = (void *)((int)pvVar5 + dest_x);
          (*pCVar1)((void *)((int)pvVar5 + iVar3),(void *)((int)sprite_data + iVar3),
                    (iVar2 - iVar3) + 1);
          iVar4 = iVar4 + 1;
          sprite_data = (void *)((int)sprite_data + in_stack_00000030);
        } while (iVar4 < in_stack_00000034);
        return;
      }
    }
    else {
      pvVar5 = (void *)((int)g_ScreenBufferArray[width] + dest_x * 2);
      iVar3 = 0;
      if ((((iVar4 < 1) || (iVar3 = iVar4, iVar4 <= iVar2)) &&
          ((iVar2 <= local_28 || (iVar2 = local_28, iVar3 <= local_28)))) &&
         (iVar4 = 0, 0 < in_stack_00000018)) {
        do {
          (*pCVar1)((void *)(iVar3 * 2 + (int)pvVar5),(void *)((int)sprite_data + iVar3),
                    (iVar2 - iVar3) + 1);
          iVar4 = iVar4 + 1;
          pvVar5 = (void *)((int)pvVar5 + unaff_EBX);
          sprite_data = (void *)((int)sprite_data + in_stack_00000030);
        } while (iVar4 < in_stack_00000034);
        return;
      }
    }
  }
  return;
}

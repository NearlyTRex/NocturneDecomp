// Name: cockpit_ckptutil.c_blitRectangleClipped_FUN_004357a0
// Address: 004357a0
// Address Range: [[004357a0, 00435905]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_ckptutil_c_blitRectangleClipped_FUN_004357a0(void *sprite_data,int dest_x,int dest_y,int width,int height)

#include "nocturne.h"

void __cdecl cockpit_ckptutil_c_blitRectangleClipped_FUN_004357a0(void *sprite_data,int dest_x,int dest_y,int width,int height)

{
  int iVar1;
  int iVar2;
  ColorConversionFunc *pCVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  byte *puVar7;
  
  iVar1 = g_INT_01c6b5b0 - dest_x;
  iVar2 = (int)g_ARRAY_PTR_01c5faec[1] - (int)g_ARRAY_PTR_01c5faec[0];
  iVar6 = g_INT_01c6b5a8 - dest_x;
  if (sprite_data != (void *)0x0) {
    pCVar3 = cockpit_ckptutil_c_getColorConversionFunction_FUN_00434e80();
    iVar4 = width + -1;
    if (g_INT_005fba20 == 8) {
      puVar7 = g_ARRAY_PTR_01c5faec[dest_y] + dest_x;
      iVar5 = 0;
      if (((iVar6 < 1) || (iVar5 = iVar6, iVar6 <= iVar4)) &&
         (((iVar4 <= iVar1 || (iVar4 = iVar1, iVar5 <= iVar1)) && (iVar1 = 0, 0 < height)))) {
        do {
          (*pCVar3)(puVar7 + iVar5,(void *)((int)sprite_data + iVar5),(iVar4 - iVar5) + 1);
          iVar1 = iVar1 + 1;
          puVar7 = puVar7 + iVar2;
          sprite_data = (void *)((int)sprite_data + width);
        } while (iVar1 < height);
        return;
      }
    }
    else {
      puVar7 = g_ARRAY_PTR_01c5faec[dest_y] + dest_x * 2;
      iVar5 = 0;
      if (((iVar6 < 1) || (iVar5 = iVar6, iVar6 <= iVar4)) &&
         ((iVar4 <= iVar1 || (iVar4 = iVar1, iVar5 <= iVar1)))) {
        iVar1 = 0;
        if (0 < height) {
          do {
            (*pCVar3)(puVar7 + iVar5 * 2,(void *)((int)sprite_data + iVar5),(iVar4 - iVar5) + 1);
            iVar1 = iVar1 + 1;
            puVar7 = puVar7 + (iVar2 / 2) * 2;
            sprite_data = (void *)((int)sprite_data + width);
          } while (iVar1 < height);
          return;
        }
      }
    }
  }
  return;
}

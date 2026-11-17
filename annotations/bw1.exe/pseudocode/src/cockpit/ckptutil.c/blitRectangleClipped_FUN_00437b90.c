// Name: cockpit_ckptutil.c_blitRectangleClipped_FUN_00437b90
// Address: 00437b90
// Address Range: [[00437b90, 00437cf5]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_ckptutil_c_blitRectangleClipped_FUN_00437b90(void *sprite_data,int dest_x,int dest_y,int width,int height)

#include "nocturne.h"

void __cdecl cockpit_ckptutil_c_blitRectangleClipped_FUN_00437b90(void *sprite_data,int dest_x,int dest_y,int width,int height)

{
  int iVar1;
  int iVar2;
  ColorConversionFunc *pCVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  byte *puVar7;
  
  iVar1 = g_INT_01c4f010 - dest_x;
  iVar2 = (int)g_ARRAY_PTR_01c4354c[1] - (int)g_ARRAY_PTR_01c4354c[0];
  iVar6 = g_INT_01c4f008 - dest_x;
  if (sprite_data != (void *)0x0) {
    pCVar3 = cockpit_ckptutil_c_getColorConversionFunction_FUN_00437270();
    iVar4 = width + -1;
    if (g_INT_0061b4a0 == 8) {
      puVar7 = g_ARRAY_PTR_01c4354c[dest_y] + dest_x;
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
      puVar7 = g_ARRAY_PTR_01c4354c[dest_y] + dest_x * 2;
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

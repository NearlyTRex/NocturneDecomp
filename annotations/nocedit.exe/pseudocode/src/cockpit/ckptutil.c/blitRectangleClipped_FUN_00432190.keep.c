// Name: cockpit_ckptutil.c_blitRectangleClipped_FUN_00432190
// Address: 00432190
// MANUAL RECONSTRUCTION
// Address Range: [[00432190, 004322f5]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_ckptutil_c_blitRectangleClipped_FUN_00432190(void *sprite_data,int dest_x,int dest_y,int width,int height)

#include "nocturne.h"

void __cdecl cockpit_ckptutil_c_blitRectangleClipped_FUN_00432190(void *sprite_data,int dest_x,int dest_y,int width,int height)

{
  int iVar1;
  ColorConversionFunc *pCVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar3;
  int iVar8;
  byte *iVar7;
  ushort *pvVar8;
  byte *p_sprite;

  iVar1 = g_ClipRight - dest_x;
  iVar6 = g_ClipLeft - dest_x;
  if (sprite_data != (void *)0x0) {
    pCVar3 = cockpit_ckptutil_c_getColorConversionFunction_FUN_00431760();
    p_sprite = (byte *)sprite_data;
    iVar4 = width + -1;
    if (g_BitsPerPixel == 8) {
      iVar8 = 0;
      if (((iVar6 < 1) || (iVar8 = iVar6, iVar6 <= iVar4)) &&
         (((iVar4 <= iVar1 || (iVar4 = iVar1, iVar8 <= iVar1)) && (iVar3 = 0, 0 < height)))) {
        do {
          iVar7 = (byte *)g_ScreenBufferArray[dest_y + iVar3] + dest_x;
          (*pCVar3)(iVar7 + iVar8, p_sprite + iVar8, (iVar4 - iVar8) + 1);
          iVar3 = iVar3 + 1;
          p_sprite = p_sprite + width;
        } while (iVar3 < height);
        return;
      }
    }
    else {
      iVar5 = 0;
      if (((iVar6 < 1) || (iVar5 = iVar6, iVar6 <= iVar4)) &&
         ((iVar4 <= iVar1 || (iVar4 = iVar1, iVar5 <= iVar1)))) {
        iVar8 = 0;
        if (0 < height) {
          do {
            pvVar8 = (ushort *)g_ScreenBufferArray[dest_y + iVar8] + dest_x;
            (*pCVar3)(pvVar8 + iVar5, p_sprite + iVar5, (iVar4 - iVar5) + 1);
            iVar8 = iVar8 + 1;
            p_sprite = p_sprite + width;
          } while (iVar8 < height);
          return;
        }
      }
    }
  }
  return;
}

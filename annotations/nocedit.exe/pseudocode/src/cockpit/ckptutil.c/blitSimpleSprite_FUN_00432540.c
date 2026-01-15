// Name: cockpit_ckptutil.c_blitSimpleSprite_FUN_00432540
// Address: 00432540
// Address Range: [[00432540, 00432690]]
// Convention: __cdecl
// Signature: void cockpit_ckptutil.c_blitSimpleSprite_FUN_00432540(void * sprite_data, int dest_x, int dest_y, int width, int height)

#include "nocturne.h"

void __cdecl
cockpit_ckptutil_c_blitSimpleSprite_FUN_00432540
          (void *sprite_data,int dest_x,int dest_y,int width,int height)

{
  ColorConversionFunc *pCVar1;
  int unaff_EBP;
  int iVar2;
  void *pvVar3;
  int unaff_ESI;
  int unaff_EDI;
  
  iVar2 = (int)g_ScreenBufferArray[1] - (int)g_ScreenBufferArray[0];
  if (sprite_data != (void *)0x0) {
    pCVar1 = cockpit_ckptutil_c_getColorConversionFunction_FUN_00431760();
    if (g_BitsPerPixel == 8) {
      pvVar3 = g_ScreenBufferArray[dest_y];
      if (0 < height) {
        do {
          (*pCVar1)((void *)((int)pvVar3 + dest_x),sprite_data,width);
          sprite_data = (void *)((int)sprite_data + width);
          unaff_EDI = unaff_EDI + 1;
        } while (unaff_EDI < height);
        return;
      }
    }
    else if (g_BitsPerPixel == 0x10) {
      pvVar3 = (void *)((int)g_ScreenBufferArray[dest_y] + dest_x * 2);
      if (0 < height) {
        do {
          (*pCVar1)(pvVar3,sprite_data,width);
          sprite_data = (void *)((int)sprite_data + width);
          unaff_ESI = unaff_ESI + 1;
          pvVar3 = (void *)((int)pvVar3 + (iVar2 / 2) * 2);
        } while (unaff_ESI < height);
        return;
      }
    }
    else {
      pvVar3 = g_ScreenBufferArray[dest_y];
      if (0 < height) {
        do {
          (*pCVar1)((void *)((int)pvVar3 + dest_x * 4),sprite_data,width);
          sprite_data = (void *)((int)sprite_data + width);
          unaff_EBP = unaff_EBP + 1;
        } while (unaff_EBP < height);
        return;
      }
    }
  }
  return;
}

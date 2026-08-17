// Name: cockpit_ckptutil.c_blitSimpleSprite_FUN_0042df00
// Address: 0042df00
// Address Range: [[0042df00, 0042e050]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_ckptutil_c_blitSimpleSprite_FUN_0042df00(void *sprite_data,int dest_x,int dest_y,int width,int height)

#include "nocturne.h"

void __cdecl cockpit_ckptutil_c_blitSimpleSprite_FUN_0042df00(void *sprite_data,int dest_x,int dest_y,int width,int height)

{
  ColorConversionFunc *pCVar1;
  int iVar2;
  void *pvVar3;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  
  iVar2 = (int)g_ScreenBufferArray[1] - (int)g_ScreenBufferArray[0];
  if (sprite_data != (void *)0x0) {
    pCVar1 = cockpit_ckptutil_c_getColorConversionFunction_FUN_0042d130();
    if (g_BitsPerPixel == 8) {
      pvVar3 = (void *)((int)g_ScreenBufferArray[dest_y] + dest_x);
      iStack_18 = 0;
      if (0 < height) {
        do {
          (*pCVar1)(pvVar3,sprite_data,width);
          sprite_data = (void *)((int)sprite_data + width);
          iStack_18 = iStack_18 + 1;
          pvVar3 = (void *)((int)pvVar3 + iVar2);
        } while (iStack_18 < height);
        return;
      }
    }
    else if (g_BitsPerPixel == 0x10) {
      pvVar3 = (void *)((int)g_ScreenBufferArray[dest_y] + dest_x * 2);
      iStack_14 = 0;
      if (0 < height) {
        do {
          (*pCVar1)(pvVar3,sprite_data,width);
          sprite_data = (void *)((int)sprite_data + width);
          iStack_14 = iStack_14 + 1;
          pvVar3 = (void *)((int)pvVar3 + (iVar2 / 2) * 2);
        } while (iStack_14 < height);
        return;
      }
    }
    else {
      pvVar3 = (void *)((int)g_ScreenBufferArray[dest_y] + dest_x * 4);
      iStack_1c = 0;
      if (0 < height) {
        do {
          (*pCVar1)(pvVar3,sprite_data,width);
          sprite_data = (void *)((int)sprite_data + width);
          iStack_1c = iStack_1c + 1;
          pvVar3 = (void *)((int)pvVar3 +
                           ((int)((iVar2 + (iVar2 >> 0x1f) * -4) - (uint)((iVar2 >> 0x1f) << 1 < 0))
                           >> 2) * 4);
        } while (iStack_1c < height);
        return;
      }
    }
  }
  return;
}

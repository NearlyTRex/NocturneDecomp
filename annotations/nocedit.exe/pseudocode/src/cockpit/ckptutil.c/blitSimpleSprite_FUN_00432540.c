// Name: cockpit_ckptutil.c_blitSimpleSprite_FUN_00432540
// Address: 00432540
// Address Range: [[00432540, 00432690]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_ckptutil_c_blitSimpleSprite_FUN_00432540(void *sprite_data,int dest_x,int dest_y,int width,int height)

#include "nocturne.h"

void __cdecl cockpit_ckptutil_c_blitSimpleSprite_FUN_00432540(void *sprite_data,int dest_x,int dest_y,int width,int height)

{
  ColorConversionFunc *pCVar1;
  int iVar2;
  void *pvVar3;
  void *pvVar1;
  int local_1c;
  int local_18;
  int local_14;
  
  iVar2 = (int)g_ScreenBufferArray[1] - (int)g_ScreenBufferArray[0];
  if (sprite_data != (void *)0x0) {
    pCVar1 = cockpit_ckptutil_c_getColorConversionFunction_FUN_00431760();
    if (g_BitsPerPixel == 8) {
      pvVar3 = (void *)((int)g_ScreenBufferArray[dest_y] + dest_x);
      local_18 = 0;
      if (0 < height) {
        do {
          (*pCVar1)(pvVar3,sprite_data,width);
          sprite_data = (void *)((int)sprite_data + width);
          local_18 = local_18 + 1;
          pvVar3 = (void *)((int)pvVar3 + iVar2);
        } while (local_18 < height);
        return;
      }
    }
    else if (g_BitsPerPixel == 0x10) {
      pvVar1 = (void *)((int)g_ScreenBufferArray[dest_y] + dest_x * 2);
      local_14 = 0;
      if (0 < height) {
        do {
          (*pCVar1)(pvVar1,sprite_data,width);
          sprite_data = (void *)((int)sprite_data + width);
          local_14 = local_14 + 1;
          pvVar1 = (void *)((int)pvVar1 + (iVar2 / 2) * 2);
        } while (local_14 < height);
        return;
      }
    }
    else {
      pvVar1 = (void *)((int)g_ScreenBufferArray[dest_y] + dest_x * 4);
      local_1c = 0;
      if (0 < height) {
        do {
          (*pCVar1)(pvVar1,sprite_data,width);
          sprite_data = (void *)((int)sprite_data + width);
          local_1c = local_1c + 1;
          pvVar1 = (void *)((int)pvVar1 +
                           ((int)((iVar2 + (iVar2 >> 0x1f) * -4) - (uint)((iVar2 >> 0x1f) << 1 < 0))
                           >> 2) * 4);
        } while (local_1c < height);
        return;
      }
    }
  }
  return;
}

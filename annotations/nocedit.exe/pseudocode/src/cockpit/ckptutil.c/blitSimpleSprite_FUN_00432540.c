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
  int unaff_EBX;
  void *pvVar2;
  void *dest_buffer;
  int unaff_ESI;
  int local_20;
  
  if (sprite_data != (void *)0x0) {
    pCVar1 = cockpit_ckptutil_c_getColorConversionFunction_FUN_00431760();
    if (g_BitsPerPixel == 8) {
      pvVar2 = (void *)((int)g_ScreenBufferArray[width] + dest_y);
      if (0 < height) {
        do {
          (*pCVar1)(pvVar2,sprite_data,width);
          sprite_data = (void *)((int)sprite_data + width);
          dest_x = dest_x + 1;
          pvVar2 = (void *)((int)pvVar2 + unaff_EBX);
        } while (dest_x < height);
        return;
      }
    }
    else if (g_BitsPerPixel == 0x10) {
      pvVar2 = (void *)((int)g_ScreenBufferArray[width] + dest_y * 2);
      if (0 < height) {
        do {
          (*pCVar1)(pvVar2,sprite_data,width);
          sprite_data = (void *)((int)sprite_data + width);
          dest_y = dest_y + 1;
          pvVar2 = (void *)((int)pvVar2 + (local_20 / 2) * 2);
        } while (dest_y < height);
        return;
      }
    }
    else {
      dest_buffer = (void *)((int)g_ScreenBufferArray[width] + dest_y * 4);
      pvVar2 = sprite_data;
      if (0 < height) {
        do {
          (*pCVar1)(dest_buffer,pvVar2,width);
          sprite_data = (void *)((int)sprite_data + 1);
          dest_buffer = (void *)((int)dest_buffer + unaff_ESI);
          pvVar2 = (void *)((int)pvVar2 + width);
        } while ((int)sprite_data < height);
        return;
      }
    }
  }
  return;
}

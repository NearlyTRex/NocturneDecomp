// Name: cockpit_ckptutil.c_blitSimpleSprite_FUN_00432540
// Address: 00432540
// MANUAL RECONSTRUCTION
// Address Range: [[00432540, 00432690]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_ckptutil_c_blitSimpleSprite_FUN_00432540(void *sprite_data,int dest_x,int dest_y,int width,int height)

#include "nocturne.h"

void __cdecl cockpit_ckptutil_c_blitSimpleSprite_FUN_00432540(void *sprite_data,int dest_x,int dest_y,int width,int height)

{
  ColorConversionFunc *pCVar1;
  byte *p_sprite;
  int local_1c;
  int local_18;
  int local_14;

  if (sprite_data != (void *)0x0) {
    pCVar1 = cockpit_ckptutil_c_getColorConversionFunction_FUN_00431760();
    p_sprite = (byte *)sprite_data;
    if (g_BitsPerPixel == 8) {
      local_18 = 0;
      if (0 < height) {
        do {
          byte *pvVar3 = (byte *)g_ScreenBufferArray[dest_y + local_18] + dest_x;
          (*pCVar1)(pvVar3, p_sprite, width);
          p_sprite = p_sprite + width;
          local_18 = local_18 + 1;
        } while (local_18 < height);
        return;
      }
    }
    else if (g_BitsPerPixel == 0x10) {
      local_14 = 0;
      if (0 < height) {
        do {
          ushort *pvVar1 = (ushort *)g_ScreenBufferArray[dest_y + local_14] + dest_x;
          (*pCVar1)(pvVar1, p_sprite, width);
          p_sprite = p_sprite + width;
          local_14 = local_14 + 1;
        } while (local_14 < height);
        return;
      }
    }
    else {
      local_1c = 0;
      if (0 < height) {
        do {
          uint *pvVar1 = (uint *)g_ScreenBufferArray[dest_y + local_1c] + dest_x;
          (*pCVar1)(pvVar1, p_sprite, width);
          p_sprite = p_sprite + width;
          local_1c = local_1c + 1;
        } while (local_1c < height);
        return;
      }
    }
  }
  return;
}

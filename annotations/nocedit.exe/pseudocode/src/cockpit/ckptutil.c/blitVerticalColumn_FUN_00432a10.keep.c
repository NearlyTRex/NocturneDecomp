// Name: cockpit_ckptutil.c_blitVerticalColumn_FUN_00432a10
// Address: 00432a10
// MANUAL RECONSTRUCTION
// Address Range: [[00432a10, 00432ae7]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_ckptutil_c_blitVerticalColumn_FUN_00432a10(void *sprite_data,void *unused_param,int start_x,int start_y,int end_x,int end_y)

#include "nocturne.h"

void __cdecl cockpit_ckptutil_c_blitVerticalColumn_FUN_00432a10(void *sprite_data,void *unused_param,int start_x,int start_y,int end_x,int end_y)

{
  int count;
  ColorConversionFunc *pCVar2;
  int iVar3;
  int iVar5;
  byte *p_sprite;

  count = (end_x - start_x) + 1;
  if (sprite_data != (void *)0x0) {
    pCVar2 = cockpit_ckptutil_c_getColorConversionFunction_FUN_00431760();
    p_sprite = (byte *)sprite_data;
    if (g_BitsPerPixel == 8) {
      if (start_y < end_y) {
        do {
          iVar3 = g_WindowWidth * start_y;
          (*pCVar2)((byte *)g_ScreenBufferArray[start_y] + start_x,
                    p_sprite + iVar3 + start_x, count);
          start_y = start_y + 1;
        } while (start_y < end_y);
        return;
      }
    }
    else if (start_y < end_y) {
      do {
        iVar5 = g_WindowWidth * start_y;
        (*pCVar2)((ushort *)g_ScreenBufferArray[start_y] + start_x,
                  p_sprite + iVar5 + start_x, count);
        start_y = start_y + 1;
      } while (start_y < end_y);
      return;
    }
  }
  return;
}

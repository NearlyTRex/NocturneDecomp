// Name: cockpit_ckptutil.c_blitHorizontallyClippedSprite_FUN_004328d0
// Address: 004328d0
// MANUAL RECONSTRUCTION
// Address Range: [[004328d0, 00432a0a]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_ckptutil_c_blitHorizontallyClippedSprite_FUN_004328d0(void *sprite_data,int start_x,int dest_y,int end_x,int max_height,int unused_param,int src_y_offset,int src_stride)

#include "nocturne.h"

void __cdecl cockpit_ckptutil_c_blitHorizontallyClippedSprite_FUN_004328d0(void *sprite_data,int start_x,int dest_y,int end_x,int max_height,int unused_param,int src_y_offset,int src_stride)

{
  int count;
  ColorConversionFunc *pCVar2;
  int iVar3;
  byte *src_buffer;
  byte *iVar4;
  ushort *pvVar5;

  count = (end_x - start_x) + 1;
  if (sprite_data != (void *)0x0) {
    pCVar2 = cockpit_ckptutil_c_getColorConversionFunction_FUN_00431760();
    src_buffer = (byte *)sprite_data + start_x + g_WindowWidth / 2 + dest_y * src_stride;
    iVar3 = max_height - src_y_offset;
    if (g_BitsPerPixel == 8) {
      if (dest_y < iVar3) {
        do {
          iVar4 = (byte *)g_ScreenBufferArray[dest_y + src_y_offset] + start_x;
          (*pCVar2)(iVar4 - unused_param,src_buffer,count);
          dest_y = dest_y + 1;
          src_buffer = src_buffer + src_stride;
        } while (dest_y < iVar3);
        return;
      }
    }
    else {
      if (dest_y < iVar3) {
        do {
          pvVar5 = (ushort *)g_ScreenBufferArray[dest_y + src_y_offset] + start_x;
          (*pCVar2)(pvVar5 - unused_param,src_buffer,count);
          dest_y = dest_y + 1;
          src_buffer = src_buffer + src_stride;
        } while (dest_y < iVar3);
        return;
      }
    }
  }
  return;
}

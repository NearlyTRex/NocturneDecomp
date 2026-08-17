// Name: cockpit_ckptutil.c_blitHorizontallyClippedSprite_FUN_0042e290
// Address: 0042e290
// Address Range: [[0042e290, 0042e3ca]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_ckptutil_c_blitHorizontallyClippedSprite_FUN_0042e290(void *sprite_data,int start_x,int dest_y,int end_x,int max_height,int unused_param,int src_y_offset,int src_stride)

#include "nocturne.h"

void __cdecl cockpit_ckptutil_c_blitHorizontallyClippedSprite_FUN_0042e290(void *sprite_data,int start_x,int dest_y,int end_x,int max_height,int unused_param,int src_y_offset,int src_stride)

{
  int count;
  int iVar1;
  ColorConversionFunc *pCVar2;
  int iVar3;
  void *src_buffer;
  int iVar4;
  void *pvVar5;
  
  count = (end_x - start_x) + 1;
  iVar1 = (int)g_ScreenBufferArray[1] - (int)g_ScreenBufferArray[0];
  if (sprite_data != (void *)0x0) {
    pCVar2 = cockpit_ckptutil_c_getColorConversionFunction_FUN_0042d130();
    src_buffer = (void *)((int)sprite_data + start_x + g_WindowWidth / 2 + dest_y * src_stride);
    iVar3 = max_height - src_y_offset;
    if (g_BitsPerPixel == 8) {
      iVar4 = (int)g_ScreenBufferArray[dest_y + src_y_offset] + start_x;
      if (dest_y < iVar3) {
        do {
          (*pCVar2)((void *)(iVar4 - unused_param),src_buffer,count);
          dest_y = dest_y + 1;
          iVar4 = iVar4 + iVar1;
          src_buffer = (void *)((int)src_buffer + src_stride);
        } while (dest_y < iVar3);
        return;
      }
    }
    else {
      pvVar5 = (void *)((int)g_ScreenBufferArray[dest_y + src_y_offset] + start_x * 2);
      if (dest_y < iVar3) {
        do {
          (*pCVar2)((void *)((int)pvVar5 + unused_param * -2),src_buffer,count);
          dest_y = dest_y + 1;
          pvVar5 = (void *)((int)pvVar5 + (iVar1 / 2) * 2);
          src_buffer = (void *)((int)src_buffer + src_stride);
        } while (dest_y < iVar3);
        return;
      }
    }
  }
  return;
}

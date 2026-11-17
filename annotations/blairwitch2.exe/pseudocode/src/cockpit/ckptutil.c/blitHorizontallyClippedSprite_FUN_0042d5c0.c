// Name: cockpit_ckptutil.c_blitHorizontallyClippedSprite_FUN_0042d5c0
// Address: 0042d5c0
// Address Range: [[0042d5c0, 0042d6fa]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_ckptutil_c_blitHorizontallyClippedSprite_FUN_0042d5c0(void *sprite_data,int start_x,int dest_y,int end_x,int max_height,int unused_param,int src_y_offset,int src_stride)

#include "nocturne.h"

void __cdecl cockpit_ckptutil_c_blitHorizontallyClippedSprite_FUN_0042d5c0(void *sprite_data,int start_x,int dest_y,int end_x,int max_height,int unused_param,int src_y_offset,int src_stride)

{
  int count;
  int iVar1;
  ColorConversionFunc *pCVar2;
  int iVar3;
  void *src_buffer;
  byte *puVar4;
  
  count = (end_x - start_x) + 1;
  iVar1 = (int)g_ScreenBufferArray[1] - (int)g_ScreenBufferArray[0];
  if (sprite_data != (void *)0x0) {
    pCVar2 = cockpit_ckptutil_c_getColorConversionFunction_FUN_0042c410();
    src_buffer = (void *)((int)sprite_data + start_x + g_INT_006141b8 / 2 + dest_y * src_stride);
    iVar3 = max_height - src_y_offset;
    if (g_INT_006141c0 == 8) {
      puVar4 = g_ScreenBufferArray[dest_y + src_y_offset] + start_x;
      if (dest_y < iVar3) {
        do {
          (*pCVar2)(puVar4 + -unused_param,src_buffer,count);
          dest_y = dest_y + 1;
          puVar4 = puVar4 + iVar1;
          src_buffer = (void *)((int)src_buffer + src_stride);
        } while (dest_y < iVar3);
        return;
      }
    }
    else {
      puVar4 = g_ScreenBufferArray[dest_y + src_y_offset] + start_x * 2;
      if (dest_y < iVar3) {
        do {
          (*pCVar2)(puVar4 + unused_param * -2,src_buffer,count);
          dest_y = dest_y + 1;
          puVar4 = puVar4 + (iVar1 / 2) * 2;
          src_buffer = (void *)((int)src_buffer + src_stride);
        } while (dest_y < iVar3);
        return;
      }
    }
  }
  return;
}

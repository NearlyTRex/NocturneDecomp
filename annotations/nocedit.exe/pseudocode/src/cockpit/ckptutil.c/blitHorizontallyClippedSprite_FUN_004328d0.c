// Name: cockpit_ckptutil.c_blitHorizontallyClippedSprite_FUN_004328d0
// Address: 004328d0
// Address Range: [[004328d0, 00432a0a]]
// Convention: __cdecl
// Signature: void cockpit_ckptutil.c_blitHorizontallyClippedSprite_FUN_004328d0(void * sprite_data, int start_x, int dest_y, int end_x, int max_height, int unused_param, int src_y_offset, int src_stride)

#include "nocturne.h"

void __cdecl
cockpit_ckptutil_c_blitHorizontallyClippedSprite_FUN_004328d0
          (void *sprite_data,int start_x,int dest_y,int end_x,int max_height,int unused_param,
          int src_y_offset,int src_stride)

{
  int count;
  int iVar1;
  ColorConversionFunc *pCVar2;
  void *src_buffer;
  int unaff_EBP;
  int unaff_EDI;
  void *pvVar3;
  int in_stack_0000002c;
  
  count = (end_x - start_x) + 1;
  iVar1 = (int)g_ScreenBufferArray[1] - (int)g_ScreenBufferArray[0];
  if (sprite_data != (void *)0x0) {
    pCVar2 = cockpit_ckptutil_c_getColorConversionFunction_FUN_00431760();
    src_buffer = (void *)((int)sprite_data + start_x + g_WindowWidth / 2 + dest_y * src_stride);
    if (g_BitsPerPixel == 8) {
      iVar1 = (int)g_ScreenBufferArray[dest_y + src_y_offset] + start_x;
      if (dest_y < max_height - src_y_offset) {
        do {
          (*pCVar2)((void *)(iVar1 - unused_param),src_buffer,count);
          dest_y = dest_y + 1;
          iVar1 = iVar1 + unaff_EDI;
          src_buffer = (void *)((int)src_buffer + in_stack_0000002c);
        } while (dest_y < count);
        return;
      }
    }
    else {
      pvVar3 = (void *)((int)g_ScreenBufferArray[dest_y + src_y_offset] + start_x * 2);
      if (dest_y < max_height - src_y_offset) {
        do {
          (*pCVar2)((void *)((int)pvVar3 + unused_param * -2),src_buffer,count);
          dest_y = dest_y + 1;
          pvVar3 = (void *)((int)pvVar3 + iVar1 / 2);
          src_buffer = (void *)((int)src_buffer + in_stack_0000002c);
        } while (dest_y < unaff_EBP);
        return;
      }
    }
  }
  return;
}

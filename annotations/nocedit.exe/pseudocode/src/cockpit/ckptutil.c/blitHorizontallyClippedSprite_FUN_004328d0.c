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
  ColorConversionFunc *pCVar1;
  int unaff_EBX;
  void *src_buffer;
  int unaff_EBP;
  void *pvVar2;
  int unaff_retaddr;
  int in_stack_00000024;
  int in_stack_00000040;
  
  if (sprite_data != (void *)0x0) {
    pCVar1 = cockpit_ckptutil_c_getColorConversionFunction_FUN_00431760();
    src_buffer = (void *)((int)sprite_data + start_x + g_WindowWidth / 2 + end_x * in_stack_00000024
                         );
    if (g_BitsPerPixel == 8) {
      pvVar2 = g_ScreenBufferArray[end_x + src_y_offset];
      if (end_x < unused_param - src_y_offset) {
        do {
          pvVar2 = (void *)((int)pvVar2 + start_x);
          (*pCVar1)((void *)((int)pvVar2 - src_y_offset),src_buffer,unaff_EBP);
          end_x = end_x + 1;
          src_buffer = (void *)((int)src_buffer + in_stack_00000040);
        } while (end_x < unaff_retaddr);
        return;
      }
    }
    else {
      pvVar2 = (void *)((int)g_ScreenBufferArray[end_x + src_y_offset] + start_x * 2);
      if (end_x < unused_param - src_y_offset) {
        do {
          (*pCVar1)((void *)((int)pvVar2 + src_y_offset * -2),src_buffer,unaff_EBP);
          end_x = end_x + 1;
          pvVar2 = (void *)((int)pvVar2 + unaff_EBX);
          src_buffer = (void *)((int)src_buffer + in_stack_00000040);
        } while (end_x < (int)sprite_data);
        return;
      }
    }
  }
  return;
}

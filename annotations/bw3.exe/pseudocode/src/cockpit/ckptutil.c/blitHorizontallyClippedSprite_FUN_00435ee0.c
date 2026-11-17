// Name: cockpit_ckptutil.c_blitHorizontallyClippedSprite_FUN_00435ee0
// Address: 00435ee0
// Address Range: [[00435ee0, 0043601a]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_ckptutil_c_blitHorizontallyClippedSprite_FUN_00435ee0(void *sprite_data,int start_x,int dest_y,int end_x,int max_height,int unused_param,int src_y_offset,int src_stride)

#include "nocturne.h"

void __cdecl cockpit_ckptutil_c_blitHorizontallyClippedSprite_FUN_00435ee0(void *sprite_data,int start_x,int dest_y,int end_x,int max_height,int unused_param,int src_y_offset,int src_stride)

{
  int count;
  int iVar1;
  ColorConversionFunc *pCVar2;
  int iVar3;
  void *src_buffer;
  byte *puVar4;
  
  count = (end_x - start_x) + 1;
  iVar1 = (int)g_ARRAY_PTR_01c5faec[1] - (int)g_ARRAY_PTR_01c5faec[0];
  if (sprite_data != (void *)0x0) {
    pCVar2 = cockpit_ckptutil_c_getColorConversionFunction_FUN_00434e80();
    src_buffer = (void *)((int)sprite_data + start_x + g_INT_005fba18 / 2 + dest_y * src_stride);
    iVar3 = max_height - src_y_offset;
    if (g_INT_005fba20 == 8) {
      puVar4 = g_ARRAY_PTR_01c5faec[dest_y + src_y_offset] + start_x;
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
      puVar4 = g_ARRAY_PTR_01c5faec[dest_y + src_y_offset] + start_x * 2;
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

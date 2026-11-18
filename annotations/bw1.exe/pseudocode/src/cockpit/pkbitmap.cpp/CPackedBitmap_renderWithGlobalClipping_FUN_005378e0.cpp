// Name: cockpit_pkbitmap.cpp_CPackedBitmap_renderWithGlobalClipping_FUN_005378e0
// Address: 005378e0
// Address Range: [[005378e0, 005379d1]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_renderWithGlobalClipping_FUN_005378e0(CPackedBitmap *this_ptr,int dest_x,int dest_y,int src_left,int src_top,int width,int height)

#include "nocturne.h"

void __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_renderWithGlobalClipping_FUN_005378e0(CPackedBitmap *this_ptr,int dest_x,int dest_y,int src_left,int src_top,int width,int height)

{
  if ((this_ptr->row_offsets != (int *)0x0) && (this_ptr->packed_data != (ushort *)0x0)) {
    if (dest_x < g_INT_01c4f008) {
      src_left = src_left + (g_INT_01c4f008 - dest_x);
      dest_x = g_INT_01c4f008;
    }
    if (dest_y < g_INT_01c4f00c) {
      src_top = src_top + (g_INT_01c4f00c - dest_y);
      dest_y = g_INT_01c4f00c;
    }
    if (g_ClipRight < (width + dest_x) - src_left) {
      width = (g_ClipRight - dest_x) + src_left;
    }
    if (g_INT_01c4f014 < (dest_y + height) - src_top) {
      height = (g_INT_01c4f014 - dest_y) + src_top;
    }
    if ((((src_left <= width) && (src_top <= height)) && (0 < width)) &&
       (((0 < height && (src_left < this_ptr->width)) && (src_top < this_ptr->height)))) {
      if (src_left < 0) {
        dest_x = dest_x - src_left;
        src_left = 0;
      }
      if (src_top < 0) {
        dest_y = dest_y - src_top;
        src_top = 0;
      }
      if (this_ptr->width <= width) {
        width = this_ptr->width + -1;
      }
      if (this_ptr->height <= height) {
        height = this_ptr->height + -1;
      }
      cockpit_pkbitmap_cpp_CPackedBitmap_renderClippedRegion_FUN_00537760
                (this_ptr,dest_x,dest_y,src_left,src_top,width,height);
    }
  }
  return;
}

// Name: cockpit_pkbitmap.cpp_CPackedBitmap_renderWithGlobalClipping_FUN_0054acb0
// Address: 0054acb0
// Address Range: [[0054acb0, 0054ada1]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_renderWithGlobalClipping_FUN_0054acb0(CPackedBitmap *this_ptr,int dest_x,int dest_y,int src_left,int src_top,int width,int height)

#include "nocturne.h"

void __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_renderWithGlobalClipping_FUN_0054acb0(CPackedBitmap *this_ptr,int dest_x,int dest_y,int src_left,int src_top,int width,int height)

{
  if ((this_ptr->row_pointers != (void **)0x0) && (this_ptr->packed_data != (ushort *)0x0)) {
    if (dest_x < g_ClipLeft) {
      src_left = src_left + (g_ClipLeft - dest_x);
      dest_x = g_ClipLeft;
    }
    if (dest_y < g_ClipTop) {
      src_top = src_top + (g_ClipTop - dest_y);
      dest_y = g_ClipTop;
    }
    if (g_ClipRight < (width + dest_x) - src_left) {
      width = (g_ClipRight - dest_x) + src_left;
    }
    if (g_ClipBottom < (dest_y + height) - src_top) {
      height = (g_ClipBottom - dest_y) + src_top;
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
      cockpit_pkbitmap_cpp_CPackedBitmap_renderClippedRegion_FUN_0054ab30
                (this_ptr,dest_x,dest_y,src_left,src_top,width,height);
    }
  }
  return;
}

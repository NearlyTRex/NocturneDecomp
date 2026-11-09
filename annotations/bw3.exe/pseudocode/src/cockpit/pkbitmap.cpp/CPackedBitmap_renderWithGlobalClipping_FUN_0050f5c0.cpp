// Name: cockpit_pkbitmap.cpp_CPackedBitmap_renderWithGlobalClipping_FUN_0050f5c0
// Address: 0050f5c0
// Address Range: [[0050f5c0, 0050f6b1]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_renderWithGlobalClipping_FUN_0050f5c0(CPackedBitmap *this_ptr,int dest_x,int dest_y,int src_left,int src_top,int width,int height)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_renderWithGlobalClipping_FUN_0050f5c0(CPackedBitmap *this_ptr,int dest_x,int dest_y,int src_left,int src_top,int width,int height)

{
  if ((*(int *)&this_ptr->field_0x20 != 0) && (*(int *)&this_ptr->field_0x14 != 0)) {
    if (dest_x < _DAT_01c6b5a8) {
      src_left = src_left + (_DAT_01c6b5a8 - dest_x);
      dest_x = _DAT_01c6b5a8;
    }
    if (dest_y < _DAT_01c6b5ac) {
      src_top = src_top + (_DAT_01c6b5ac - dest_y);
      dest_y = _DAT_01c6b5ac;
    }
    if (_DAT_01c6b5b0 < (width + dest_x) - src_left) {
      width = (_DAT_01c6b5b0 - dest_x) + src_left;
    }
    if (_DAT_01c6b5b4 < (dest_y + height) - src_top) {
      height = (_DAT_01c6b5b4 - dest_y) + src_top;
    }
    if ((((src_left <= width) && (src_top <= height)) && (0 < width)) &&
       (((0 < height && (src_left < *(int *)&this_ptr->field_0x18)) &&
        (src_top < *(int *)&this_ptr->field_0x1c)))) {
      if (src_left < 0) {
        dest_x = dest_x - src_left;
        src_left = 0;
      }
      if (src_top < 0) {
        dest_y = dest_y - src_top;
        src_top = 0;
      }
      if (*(int *)&this_ptr->field_0x18 <= width) {
        width = *(int *)&this_ptr->field_0x18 + -1;
      }
      if (*(int *)&this_ptr->field_0x1c <= height) {
        height = *(int *)&this_ptr->field_0x1c + -1;
      }
      cockpit_pkbitmap_cpp_CPackedBitmap_renderClippedRegion_FUN_0050f440
                (this_ptr,dest_x,dest_y,src_left,src_top,width,height);
    }
  }
  return;
}

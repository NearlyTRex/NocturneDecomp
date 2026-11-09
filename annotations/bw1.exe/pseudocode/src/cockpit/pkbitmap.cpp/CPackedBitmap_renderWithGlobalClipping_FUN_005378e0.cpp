// Name: cockpit_pkbitmap.cpp_CPackedBitmap_renderWithGlobalClipping_FUN_005378e0
// Address: 005378e0
// Address Range: [[005378e0, 005379d1]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_renderWithGlobalClipping_FUN_005378e0(CPackedBitmap *this_ptr,int dest_x,int dest_y,int src_left,int src_top,int width,int height)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_renderWithGlobalClipping_FUN_005378e0(CPackedBitmap *this_ptr,int dest_x,int dest_y,int src_left,int src_top,int width,int height)

{
  if ((*(int *)&this_ptr->field_0x20 != 0) && (*(int *)&this_ptr->field_0x14 != 0)) {
    if (dest_x < _DAT_01c4f008) {
      src_left = src_left + (_DAT_01c4f008 - dest_x);
      dest_x = _DAT_01c4f008;
    }
    if (dest_y < _DAT_01c4f00c) {
      src_top = src_top + (_DAT_01c4f00c - dest_y);
      dest_y = _DAT_01c4f00c;
    }
    if (_DAT_01c4f010 < (width + dest_x) - src_left) {
      width = (_DAT_01c4f010 - dest_x) + src_left;
    }
    if (_DAT_01c4f014 < (dest_y + height) - src_top) {
      height = (_DAT_01c4f014 - dest_y) + src_top;
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
      cockpit_pkbitmap_cpp_CPackedBitmap_renderClippedRegion_FUN_00537760
                (this_ptr,dest_x,dest_y,src_left,src_top,width,height);
    }
  }
  return;
}

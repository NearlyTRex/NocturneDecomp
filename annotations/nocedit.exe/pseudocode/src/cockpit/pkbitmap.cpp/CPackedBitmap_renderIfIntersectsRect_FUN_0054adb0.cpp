// Name: cockpit_pkbitmap.cpp_CPackedBitmap_renderIfIntersectsRect_FUN_0054adb0
// Address: 0054adb0
// Address Range: [[0054adb0, 0054ae6f]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_renderIfIntersectsRect_FUN_0054adb0 (CPackedBitmap *this_ptr,int dest_x,int dest_y,int rect_left,int rect_top,int rect_right, int rect_bottom)

#include "nocturne.h"

void __cdecl
cockpit_pkbitmap_cpp_CPackedBitmap_renderIfIntersectsRect_FUN_0054adb0
          (CPackedBitmap *this_ptr,int dest_x,int dest_y,int rect_left,int rect_top,int rect_right,
          int rect_bottom)

{
  int iVar1;
  int width;
  int iVar2;
  int local_18;
  int local_14;
  
  if ((((this_ptr->row_pointers != (void **)0x0) && (this_ptr->packed_data != (char *)0x0)) &&
      (dest_x <= rect_right)) && (dest_y <= rect_bottom)) {
    iVar2 = this_ptr->width + dest_x + -1;
    iVar1 = this_ptr->height + dest_y + -1;
    if ((rect_left <= iVar2) && (rect_top <= iVar1)) {
      local_18 = 0;
      if (dest_x < rect_left) {
        local_18 = rect_left - dest_x;
        dest_x = rect_left;
      }
      local_14 = 0;
      if (dest_y < rect_top) {
        local_14 = rect_top - dest_y;
        dest_y = rect_top;
      }
      width = this_ptr->width + -1;
      if (rect_right < iVar2) {
        width = width - (iVar2 - rect_right);
      }
      iVar2 = this_ptr->height + -1;
      if (rect_bottom < iVar1) {
        iVar2 = iVar2 - (iVar1 - rect_bottom);
      }
      cockpit_pkbitmap_cpp_CPackedBitmap_renderWithGlobalClipping_FUN_0054acb0
                (this_ptr,dest_x,dest_y,local_18,local_14,width,iVar2);
    }
  }
  return;
}

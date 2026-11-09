// Name: shape_spotview.cpp_CSpotView_reset_FUN_005843f0
// Address: 005843f0
// Address Range: [[005843f0, 00584437]]
// Convention: __cdecl
// Signature: void __cdecl shape_spotview_cpp_CSpotView_reset_FUN_005843f0(CSpotView *this_ptr,uint control_flags)

#include "nocturne.h"

void __cdecl shape_spotview_cpp_CSpotView_reset_FUN_005843f0(CSpotView *this_ptr,uint control_flags)

{
  if ((control_flags & 1) != 0) {
    *(uint *)(this_ptr + 0x24) = *(uint *)(this_ptr + 8);
  }
  if ((control_flags & 2) != 0) {
    *(uint *)(this_ptr + 0x28) = *(uint *)(this_ptr + 0xc);
  }
  if ((control_flags & 8) != 0) {
    *(uint *)(this_ptr + 0x34) = *(uint *)(this_ptr + 0x14);
    *(uint *)(this_ptr + 0x30) = *(uint *)(this_ptr + 0x10);
  }
  if ((control_flags & 4) != 0) {
    *(uint *)(this_ptr + 0x2c) = *(uint *)this_ptr;
  }
  if ((control_flags & 0x10) == 0) {
    return;
  }
  *(uint *)(this_ptr + 0x38) = *(uint *)(this_ptr + 4);
  return;
}

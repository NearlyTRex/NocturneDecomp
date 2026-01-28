// Name: shape_spotview.cpp_CSpotView_FUN_005b9620
// Address: 005b9620
// Address Range: [[005b9620, 005b9667]]
// Convention: __cdecl
// Signature: void __cdecl shape_spotview_cpp_CSpotView_FUN_005b9620(CSpotView *this_ptr)

#include "nocturne.h"

void __cdecl shape_spotview_cpp_CSpotView_FUN_005b9620(CSpotView *this_ptr)

{
  uint in_stack_00000008;
  
  if ((in_stack_00000008 & 1) != 0) {
    *(uint *)(this_ptr->unk + 0x24) = *(uint *)(this_ptr->unk + 8);
  }
  if ((in_stack_00000008 & 2) != 0) {
    *(uint *)(this_ptr->unk + 0x28) = *(uint *)(this_ptr->unk + 0xc);
  }
  if ((in_stack_00000008 & 8) != 0) {
    *(uint *)(this_ptr->unk + 0x34) = *(uint *)(this_ptr->unk + 0x14);
    *(uint *)(this_ptr->unk + 0x30) = *(uint *)(this_ptr->unk + 0x10);
  }
  if ((in_stack_00000008 & 4) != 0) {
    *(uint *)(this_ptr->unk + 0x2c) = *(uint *)this_ptr->unk;
  }
  if ((in_stack_00000008 & 0x10) == 0) {
    return;
  }
  *(uint *)(this_ptr->unk + 0x38) = *(uint *)(this_ptr->unk + 4);
  return;
}

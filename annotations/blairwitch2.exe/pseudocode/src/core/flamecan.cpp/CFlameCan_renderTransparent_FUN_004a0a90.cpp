// Name: core_flamecan.cpp_CFlameCan_renderTransparent_FUN_004a0a90
// Address: 004a0a90
// Address Range: [[004a0a90, 004a0abc]]
// Convention: __cdecl
// Signature: int __cdecl core_flamecan_cpp_CFlameCan_renderTransparent_FUN_004a0a90(CFlameCan *this_ptr)

#include "nocturne.h"

int __cdecl core_flamecan_cpp_CFlameCan_renderTransparent_FUN_004a0a90(CFlameCan *this_ptr)

{
  if (this_ptr->is_visible == 0) {
    return this_ptr->is_visible;
  }
  core_flame_cpp_CFlame_renderTransparent_FUN_0049f850(&this_ptr->flame);
  return this_ptr->is_visible;
}

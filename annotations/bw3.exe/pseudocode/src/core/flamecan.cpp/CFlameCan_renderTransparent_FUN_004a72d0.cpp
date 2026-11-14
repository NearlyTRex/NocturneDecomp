// Name: core_flamecan.cpp_CFlameCan_renderTransparent_FUN_004a72d0
// Address: 004a72d0
// Address Range: [[004a72d0, 004a72fc]]
// Convention: __cdecl
// Signature: int __cdecl core_flamecan_cpp_CFlameCan_renderTransparent_FUN_004a72d0(CFlameCan *this_ptr)

#include "nocturne.h"

int __cdecl core_flamecan_cpp_CFlameCan_renderTransparent_FUN_004a72d0(CFlameCan *this_ptr)

{
  if (this_ptr->is_visible == 0) {
    return this_ptr->is_visible;
  }
  core_flame_cpp_CFlame_renderTransparent_FUN_004a6090(&this_ptr->flame);
  return this_ptr->is_visible;
}

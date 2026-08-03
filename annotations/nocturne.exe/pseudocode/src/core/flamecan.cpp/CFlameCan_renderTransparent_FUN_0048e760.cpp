// Name: core_flamecan.cpp_CFlameCan_renderTransparent_FUN_0048e760
// Address: 0048e760
// Address Range: [[0048e760, 0048e78c]]
// Convention: __cdecl
// Signature: int __cdecl core_flamecan_cpp_CFlameCan_renderTransparent_FUN_0048e760(CFlameCan *this_ptr)

#include "nocturne.h"

int __cdecl core_flamecan_cpp_CFlameCan_renderTransparent_FUN_0048e760(CFlameCan *this_ptr)

{
  if (this_ptr->is_visible == 0) {
    return this_ptr->is_visible;
  }
  core_flame_cpp_CFlame_renderTransparent_FUN_0048d5d0(&this_ptr->flame);
  return this_ptr->is_visible;
}

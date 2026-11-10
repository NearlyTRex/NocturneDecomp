// Name: core_flamecan.cpp_CFlameCan_renderTransparent_FUN_004b9340
// Address: 004b9340
// Address Range: [[004b9340, 004b936c]]
// Convention: __cdecl
// Signature: int __cdecl core_flamecan_cpp_CFlameCan_renderTransparent_FUN_004b9340(CFlameCan *this_ptr)

#include "nocturne.h"

int __cdecl core_flamecan_cpp_CFlameCan_renderTransparent_FUN_004b9340(CFlameCan *this_ptr)

{
  if (this_ptr->is_visible == 0) {
    return this_ptr->is_visible;
  }
  core_flame_cpp_CFlame_renderTransparent_FUN_004b8100(&this_ptr->flame);
  return this_ptr->is_visible;
}

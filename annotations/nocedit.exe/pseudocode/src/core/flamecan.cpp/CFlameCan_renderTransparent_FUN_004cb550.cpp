// Name: core_flamecan.cpp_CFlameCan_renderTransparent_FUN_004cb550
// Address: 004cb550
// Address Range: [[004cb550, 004cb57c]]
// Convention: __cdecl
// Signature: int __cdecl core_flamecan_cpp_CFlameCan_renderTransparent_FUN_004cb550(CFlameCan *this_ptr)

#include "nocturne.h"

int __cdecl core_flamecan_cpp_CFlameCan_renderTransparent_FUN_004cb550(CFlameCan *this_ptr)

{
  if (this_ptr->is_visible == 0) {
    return this_ptr->is_visible;
  }
  core_flame_cpp_CFlame_renderTransparent_FUN_004ca110(&this_ptr->flame);
  return this_ptr->is_visible;
}

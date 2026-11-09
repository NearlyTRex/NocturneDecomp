// Name: core_flamecan.cpp_CFlameCan_renderTransparent_FUN_004a72d0
// Address: 004a72d0
// Address Range: [[004a72d0, 004a72fc]]
// Convention: __cdecl
// Signature: int __cdecl core_flamecan_cpp_CFlameCan_renderTransparent_FUN_004a72d0(CFlameCan *this_ptr)

#include "nocturne.h"

int __cdecl core_flamecan_cpp_CFlameCan_renderTransparent_FUN_004a72d0(CFlameCan *this_ptr)

{
  if (*(int *)&this_ptr->field_0x5e4 == 0) {
    return *(int *)&this_ptr->field_0x5e4;
  }
  core_flame_cpp_FUN_004a6090((CFlame *)&this_ptr->field_0x340);
  return *(int *)&this_ptr->field_0x5e4;
}

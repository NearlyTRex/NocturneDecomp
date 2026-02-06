// Name: core_flamecan.cpp_CFlameCan_renderTransparent_FUN_004cb550
// Address: 004cb550
// Address Range: [[004cb550, 004cb57c]]
// Convention: __cdecl
// Signature: int __cdecl core_flamecan_cpp_CFlameCan_renderTransparent_FUN_004cb550(CFlameCan *this_ptr)

#include "nocturne.h"

int __cdecl core_flamecan_cpp_CFlameCan_renderTransparent_FUN_004cb550(CFlameCan *this_ptr)

{
  if (*(int *)(this_ptr->unk + 0x2a4) == 0) {
    return *(int *)(this_ptr->unk + 0x2a4);
  }
  core_flame_cpp_CFlame_FUN_004ca110((CFlame *)this_ptr->unk);
  return *(int *)(this_ptr->unk + 0x2a4);
}

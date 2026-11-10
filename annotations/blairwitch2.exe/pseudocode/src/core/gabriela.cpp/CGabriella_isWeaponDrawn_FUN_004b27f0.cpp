// Name: core_gabriela.cpp_CGabriella_isWeaponDrawn_FUN_004b27f0
// Address: 004b27f0
// Address Range: [[004b27f0, 004b2803]]
// Convention: __cdecl
// Signature: int __cdecl core_gabriela_cpp_CGabriella_isWeaponDrawn_FUN_004b27f0(CGabriella *this_ptr)

#include "nocturne.h"

int __cdecl core_gabriela_cpp_CGabriella_isWeaponDrawn_FUN_004b27f0(CGabriella *this_ptr)

{
  return (uint)(this_ptr->weapon_state_flags != 0);
}

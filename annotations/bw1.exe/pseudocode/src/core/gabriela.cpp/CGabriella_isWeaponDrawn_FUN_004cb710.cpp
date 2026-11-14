// Name: core_gabriela.cpp_CGabriella_isWeaponDrawn_FUN_004cb710
// Address: 004cb710
// Address Range: [[004cb710, 004cb723]]
// Convention: __cdecl
// Signature: int __cdecl core_gabriela_cpp_CGabriella_isWeaponDrawn_FUN_004cb710(CGabriella *this_ptr)

#include "nocturne.h"

int __cdecl core_gabriela_cpp_CGabriella_isWeaponDrawn_FUN_004cb710(CGabriella *this_ptr)

{
  return (uint)(this_ptr->weapon_state_flags != 0);
}

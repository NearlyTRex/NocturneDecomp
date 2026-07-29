// Name: core_weapon.cpp_CLadder_getGroundType_FUN_005543b0
// Address: 005543b0
// Address Range: [[005543b0, 005543ba]]
// Convention: __cdecl
// Signature: EGroundType __cdecl core_weapon_cpp_CLadder_getGroundType_FUN_005543b0(CLadder *this_ptr)

#include "nocturne.h"

EGroundType __cdecl core_weapon_cpp_CLadder_getGroundType_FUN_005543b0(CLadder *this_ptr)

{
  return *(EGroundType *)(this_ptr[1].base.actor_name + 4);
}

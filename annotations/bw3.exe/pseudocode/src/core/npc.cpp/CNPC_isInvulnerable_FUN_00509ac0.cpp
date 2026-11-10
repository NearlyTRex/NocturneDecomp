// Name: core_npc.cpp_CNPC_isInvulnerable_FUN_00509ac0
// Address: 00509ac0
// Address Range: [[00509ac0, 00509ad3]]
// Convention: __cdecl
// Signature: int __cdecl core_npc_cpp_CNPC_isInvulnerable_FUN_00509ac0(CNPC *this_ptr)

#include "nocturne.h"

int __cdecl core_npc_cpp_CNPC_isInvulnerable_FUN_00509ac0(CNPC *this_ptr)

{
  return (uint)(*(int *)&this_ptr->field_0x206a8 == 0);
}

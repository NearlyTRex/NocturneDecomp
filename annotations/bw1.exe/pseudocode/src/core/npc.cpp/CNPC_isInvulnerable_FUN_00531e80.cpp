// Name: core_npc.cpp_CNPC_isInvulnerable_FUN_00531e80
// Address: 00531e80
// Address Range: [[00531e80, 00531e93]]
// Convention: __cdecl
// Signature: int __cdecl core_npc_cpp_CNPC_isInvulnerable_FUN_00531e80(CNPC *this_ptr)

#include "nocturne.h"

int __cdecl core_npc_cpp_CNPC_isInvulnerable_FUN_00531e80(CNPC *this_ptr)

{
  return (uint)(*(int *)&this_ptr->field_0x1faac == 0);
}

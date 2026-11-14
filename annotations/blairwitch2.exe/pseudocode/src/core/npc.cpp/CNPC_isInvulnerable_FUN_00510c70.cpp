// Name: core_npc.cpp_CNPC_isInvulnerable_FUN_00510c70
// Address: 00510c70
// Address Range: [[00510c70, 00510c83]]
// Convention: __cdecl
// Signature: int __cdecl core_npc_cpp_CNPC_isInvulnerable_FUN_00510c70(CNPC *this_ptr)

#include "nocturne.h"

int __cdecl core_npc_cpp_CNPC_isInvulnerable_FUN_00510c70(CNPC *this_ptr)

{
  return (uint)(this_ptr->shoot_me == 0);
}

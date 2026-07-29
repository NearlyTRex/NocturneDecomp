// Name: core_npc.cpp_CNPC_isInvulnerable_FUN_004eef80
// Address: 004eef80
// Address Range: [[004eef80, 004eef93]]
// Convention: __cdecl
// Signature: int __cdecl core_npc_cpp_CNPC_isInvulnerable_FUN_004eef80(CNPC *this_ptr)

#include "nocturne.h"

int __cdecl core_npc_cpp_CNPC_isInvulnerable_FUN_004eef80(CNPC *this_ptr)

{
  return (uint)(this_ptr->shoot_me == 0);
}

// Name: core_actor.cpp_matchesClassName_FUN_0040c8a0
// Address: 0040c8a0
// Address Range: [[0040c8a0, 0040c8bc]]
// Convention: __cdecl
// Signature: bool __cdecl core_actor_cpp_matchesClassName_FUN_0040c8a0(undefined4 param_1)

#include "nocturne.h"

bool __cdecl core_actor_cpp_matchesClassName_FUN_0040c8a0(uint param_1)

{
  int iVar1;
  
  iVar1 = core_actor_cpp_matchClassExpression_FUN_0040c780(param_1,&stack0x00000008);
  return 0 < iVar1;
}

// Name: core_actor.cpp_matchesClassName_FUN_0040c7f0
// Address: 0040c7f0
// Address Range: [[0040c7f0, 0040c80c]]
// Convention: __cdecl
// Signature: bool __cdecl core_actor_cpp_matchesClassName_FUN_0040c7f0(undefined4 param_1)

#include "nocturne.h"

bool __cdecl core_actor_cpp_matchesClassName_FUN_0040c7f0(uint param_1)

{
  int iVar1;
  
  iVar1 = core_actor_cpp_matchClassExpression_FUN_0040c6d0(param_1,&stack0x00000008);
  return 0 < iVar1;
}

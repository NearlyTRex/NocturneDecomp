// Name: core_actor.cpp_matchesClassName_FUN_0040d840
// Address: 0040d840
// Address Range: [[0040d840, 0040d85c]]
// Convention: __cdecl
// Signature: bool __cdecl core_actor_cpp_matchesClassName_FUN_0040d840(undefined4 param_1)

#include "nocturne.h"

bool __cdecl core_actor_cpp_matchesClassName_FUN_0040d840(uint param_1)

{
  int iVar1;
  
  iVar1 = core_actor_cpp_matchClassExpression_FUN_0040d720(param_1,&stack0x00000008);
  return 0 < iVar1;
}

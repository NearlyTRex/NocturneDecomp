// Name: core_actor.cpp_castToClassHash_FUN_0040c600
// Address: 0040c600
// Address Range: [[0040c600, 0040c622]]
// Convention: __cdecl
// Signature: int __cdecl core_actor_cpp_castToClassHash_FUN_0040c600(int param_1,undefined4 param_2)

#include "nocturne.h"

int __cdecl core_actor_cpp_castToClassHash_FUN_0040c600(int param_1,uint param_2)

{
  int iVar1;
  
  if ((param_1 != 0) &&
     (iVar1 = core_actor_cpp_isOfClassHash_FUN_0040c5d0(param_1,param_2), iVar1 != 0)) {
    return param_1;
  }
  return 0;
}

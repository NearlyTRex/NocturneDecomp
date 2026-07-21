// Name: core_actor.cpp_checkNameHash_FUN_0040d810
// Address: 0040d810
// Address Range: [[0040d810, 0040d82f]]
// Convention: __cdecl
// Signature: undefined4 __cdecl core_actor_cpp_checkNameHash_FUN_0040d810(int param_1,int param_2)

#include "nocturne.h"

uint __cdecl core_actor_cpp_checkNameHash_FUN_0040d810(int param_1,int param_2)

{
  while( true ) {
    if (param_1 == 0) {
      return 0;
    }
    if (param_2 == *(int *)(param_1 + 0x38)) break;
    param_1 = *(int *)(param_1 + 0x28);
  }
  return 1;
}

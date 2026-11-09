// Name: core_flamegun.cpp_FUN_004b9810
// Address: 004b9810
// Address Range: [[004b9810, 004b982f] [004b9831, 004b9854]]
// Convention: unknown
// Signature: undefined4 core_flamegun_cpp_FUN_004b9810(int param_1)

#include "nocturne.h"

uint core_flamegun_cpp_FUN_004b9810(int param_1)

{
  uint uVar1;
  
  if (*(int *)(param_1 + 0x56c) == 6) {
    return 0;
  }
  uVar1 = core_actor_cpp_FUN_0040cc00(0x43160000,0x43480000);
  return uVar1;
}

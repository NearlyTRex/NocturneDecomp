// Name: core_shotgun.cpp_FUN_00516730
// Address: 00516730
// Address Range: [[00516730, 0051676f]]
// Convention: unknown
// Signature: undefined4 core_shotgun_cpp_FUN_00516730(int param_1)

#include "nocturne.h"

uint core_shotgun_cpp_FUN_00516730(int param_1)

{
  uint uVar1;
  
  if (*(int *)(param_1 + 0x564) == 6) {
    return 0;
  }
  uVar1 = core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(0x43160000,0x43480000);
  return uVar1;
}

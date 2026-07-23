// Name: core_manpuz.cpp_CMirrorHack_onLaserHit_FUN_004cbcb0
// Address: 004cbcb0
// Address Range: [[004cbcb0, 004cbcdb]]
// Convention: unknown
// Signature: void core_manpuz_cpp_CMirrorHack_onLaserHit_FUN_004cbcb0(undefined4 param_1,int param_2)

#include "nocturne.h"

void core_manpuz_cpp_CMirrorHack_onLaserHit_FUN_004cbcb0(uint param_1,int param_2)

{
  core_actor_cpp_FUN_0040ab10(param_1,param_2);
  if (*(float *)(param_2 + 0x34) <= (float)-0.01) {
    return;
  }
  *(uint *)(param_2 + 0x50) = 0x3f800000;
  return;
}

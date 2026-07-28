// Name: core_minecar.cpp_FUN_004d6040
// Address: 004d6040
// Address Range: [[004d6040, 004d60ae]]
// Convention: unknown
// Signature: void core_minecar_cpp_FUN_004d6040(int param_1,float param_2)

#include "nocturne.h"

void core_minecar_cpp_FUN_004d6040(int param_1,float param_2)

{
  core_platfrm_cpp_FUN_004f6170(param_1,param_2);
  if (((*(int *)(param_1 + 0x2cc) == 3) || (*(int *)(param_1 + 0x2cc) == 4)) &&
     (param_2 = *(float *)(param_1 + 0x720) - param_2, *(float *)(param_1 + 0x720) = param_2,
     param_2 < 0.0)) {
    *(uint *)(param_1 + 0x720) = 0x3dcccccd;
    core_fire_cpp_CFireEffect_createSpark_FUN_0048ae90
              (0x01C08D04,(CVector3f *)(param_1 + 0x20),(CVector3f *)0x0,0x4000,0x10000,0,0xffff);
    return;
  }
  return;
}

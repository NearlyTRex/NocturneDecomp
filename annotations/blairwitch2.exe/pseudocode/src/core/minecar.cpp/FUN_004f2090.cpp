// Name: core_minecar.cpp_FUN_004f2090
// Address: 004f2090
// Address Range: [[004f2090, 004f20fe]]
// Convention: unknown
// Signature: void core_minecar_cpp_FUN_004f2090(CPlatform *param_1,float param_2)

#include "nocturne.h"

void core_minecar_cpp_FUN_004f2090(CPlatform *param_1,float param_2)

{
  float fVar1;
  
  core_platfrm_cpp_FUN_005184c0(param_1,param_2);
  if (((*(int *)&param_1->field_0x430 == 3) || (*(int *)&param_1->field_0x430 == 4)) &&
     (fVar1 = *(float *)(param_1 + 1), *(float *)(param_1 + 1) = fVar1 - param_2,
     fVar1 - param_2 < 0.0)) {
    *(uint *)(param_1 + 1) = 0x3dcccccd;
    core_fire_cpp_FUN_0049d090
              (0x01C3DEB4,(CVector3f *)&param_1->field_0x20,(CVector3f *)0x0,0x4000,0x10000,0,
               0xffff);
    return;
  }
  return;
}

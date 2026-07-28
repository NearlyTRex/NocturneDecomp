// Name: core_actor.cpp_FUN_0040a420
// Address: 0040a420
// Address Range: [[0040a420, 0040a536]]
// Convention: unknown
// Signature: undefined4 core_actor_cpp_FUN_0040a420(int param_1,float *param_2,float *param_3,float *param_4)

#include "nocturne.h"

uint core_actor_cpp_FUN_0040a420(int param_1,float *param_2,float *param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  int iVar3;
  float fVar4;
  SCollisionInfo local_6c;
  float afStack_38 [3];
  byte auStack_2c [12];
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  
  core_setcolid_cpp_SCollisionInfo_ctor_FUN_00511990(&local_6c);
  local_6c.ray_query.ray_type = 0;
  iVar3 = (**(code **)(*(int *)(param_1 + 0x14c) + 0x34))(param_1,&local_6c);
  if (iVar3 == 2) {
    fStack_20 = *param_3 - *param_2;
    fStack_1c = param_3[1] - param_2[1];
    fStack_18 = param_3[2] - param_2[2];
    fVar4 = (float)core_actor_cpp_rayCylinderIntersect_FUN_00409860
                             (&local_6c,param_2,&fStack_20,auStack_2c);
    if ((0.0 <= fVar4) && (fVar4 <= 1.0)) {
      if (param_4 != (float *)0x0) {
        fVar1 = param_2[1];
        fVar2 = param_2[2];
        if (param_4 != afStack_38) {
          *param_4 = *param_2 + fStack_20 * fVar4;
          param_4[1] = fVar1 + fStack_1c * fVar4;
          param_4[2] = fVar2 + fStack_18 * fVar4;
        }
      }
      return 1;
    }
  }
  return 0;
}

// Name: core_actor.cpp_CDemonActor_getWorldBoundingBox_FUN_0040a540
// Address: 0040a540
// Address Range: [[0040a540, 0040a6be]]
// Convention: __cdecl
// Signature: float * __cdecl core_actor_cpp_CDemonActor_getWorldBoundingBox_FUN_0040a540(int param_1,float *param_2,int param_3,uint param_4)

#include "nocturne.h"

float * __cdecl core_actor_cpp_CDemonActor_getWorldBoundingBox_FUN_0040a540(int param_1,float *param_2,int param_3,uint param_4)

{
  uint uVar1;
  float *pfVar2;
  int iVar3;
  byte auStack_54 [24];
  byte auStack_3c [12];
  byte auStack_30 [12];
  byte auStack_24 [12];
  byte auStack_18 [12];
  
  if (param_4 < 2) {
    if (param_4 != 1) {
LAB_0040a68d:
      param_2[2] = 1e+08;
      param_2[1] = param_2[2];
      *param_2 = param_2[1];
      if (param_2 + 3 == param_2) {
        return param_2;
      }
      param_2[3] = *param_2;
      param_2[4] = param_2[1];
      param_2[5] = param_2[2];
      return param_2;
    }
  }
  else {
    if (param_4 < 3) {
      *param_2 = *(float *)(param_1 + 0x20) - *(float *)(param_3 + 0x1c);
      param_2[1] = *(float *)(param_1 + 0x24) + *(float *)(param_3 + 0x14);
      param_2[2] = *(float *)(param_1 + 0x28) - *(float *)(param_3 + 0x1c);
      param_2[3] = *(float *)(param_1 + 0x20) + *(float *)(param_3 + 0x1c);
      param_2[4] = *(float *)(param_1 + 0x24) + *(float *)(param_3 + 0x18);
      param_2[5] = *(float *)(param_1 + 0x28) + *(float *)(param_3 + 0x1c);
      return param_2;
    }
    if (param_4 != 3) goto LAB_0040a68d;
  }
  (**(code **)(*(int *)(param_1 + 0x14c) + 0x14))(param_1,auStack_54);
  uVar1 = core_box_cpp_CBoundingBox3D_getCorner_FUN_0041cc70(auStack_54,auStack_3c,0);
  pfVar2 = (float *)core_actor_cpp_CDemonActor_transformVector_FUN_0040a200
                              (param_1,auStack_18,uVar1);
  if (param_2 != pfVar2) {
    *param_2 = *pfVar2;
    param_2[1] = pfVar2[1];
    param_2[2] = pfVar2[2];
  }
  if (param_2 + 3 != pfVar2) {
    param_2[3] = *pfVar2;
    param_2[4] = pfVar2[1];
    param_2[5] = pfVar2[2];
  }
  iVar3 = 1;
  do {
    uVar1 = core_box_cpp_CBoundingBox3D_getCorner_FUN_0041cc70(auStack_54,auStack_30,iVar3);
    uVar1 = core_actor_cpp_CDemonActor_transformVector_FUN_0040a200(param_1,auStack_24,uVar1);
    iVar3 = iVar3 + 1;
    core_box_cpp_CBoundingBox3D_expand_FUN_0041cc00(param_2,uVar1);
  } while (iVar3 < 8);
  *param_2 = *(float *)(param_1 + 0x20) + *param_2;
  param_2[1] = *(float *)(param_1 + 0x24) + param_2[1];
  param_2[2] = *(float *)(param_1 + 0x28) + param_2[2];
  param_2[3] = *(float *)(param_1 + 0x20) + param_2[3];
  param_2[4] = *(float *)(param_1 + 0x24) + param_2[4];
  param_2[5] = *(float *)(param_1 + 0x28) + param_2[5];
  return param_2;
}

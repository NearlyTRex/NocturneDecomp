// Name: core_fire.cpp_CExplosion_activate_FUN_00486e40
// Address: 00486e40
// Address Range: [[00486e40, 00486f8c]]
// Convention: unknown
// Signature: void core_fire_cpp_CExplosion_activate_FUN_00486e40(float *param_1,float *param_2,float param_3,float param_4)

#include "nocturne.h"

void core_fire_cpp_CExplosion_activate_FUN_00486e40(float *param_1,float *param_2,float param_3,float param_4)

{
  uint uVar1;
  float fVar2;
  CKeyFramedModel *model_ptr;
  int iVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  CVector3f local_50;
  CVector3f local_44 [2];
  float local_28;
  float local_14;
  
  if (param_1 != param_2) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    param_1[2] = param_2[2];
  }
  uVar1 = 0x01E57284;
  param_1[3] = 1.0;
  param_1[4] = param_3;
  core_set_cpp_FUN_0050e660(uVar1,0x43480000,0,0,0x40000000);
  iVar3 = 0;
  fVar2 = (float)core_actor_cpp_randomChance_FUN_0040dea0(0.5);
  param_1[6] = fVar2;
  param_1[5] = param_4;
  do {
    local_28 = (float)core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(0x3f490fdb,0x3fc90fdb);
    local_14 = local_28;
    local_14 = (float)core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(0,0x40c90fdb);
    fVar4 = (float10)fcos((float10)local_14);
    fVar5 = (float10)fcos((float10)local_28);
    fVar6 = (float10)fsin((float10)local_14);
    fVar7 = (float10)fsin((float10)local_28);
    local_50.y = (float)(fVar7 * (float10)30.0f);
    local_50.x = (float)(fVar4 * (float10)30.0f * fVar5);
    local_50.z = (float)(fVar6 * (float10)30.0f * fVar5);
    local_44[0].x = *param_1;
    local_44[0].z = param_1[2];
    local_44[0].y = param_1[1] + 1.0;
    model_ptr = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530
                          ((CKeyFramedModelInstance *)((iVar3 % 5) * 0x17c + 0x1c094bc));
    iVar3 = iVar3 + 1;
    core_fire_cpp_CFireEffect_createRock_FUN_0048b320(0x01C08D04,local_44,&local_50,model_ptr);
  } while (iVar3 < 10);
  return;
}

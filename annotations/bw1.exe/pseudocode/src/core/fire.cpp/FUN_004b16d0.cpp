// Name: core_fire.cpp_FUN_004b16d0
// Address: 004b16d0
// Address Range: [[004b16d0, 004b1812]]
// Convention: unknown
// Signature: void core_fire_cpp_FUN_004b16d0(float *param_1,float *param_2,float param_3,float param_4)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_fire_cpp_FUN_004b16d0(float *param_1,float *param_2,float param_3,float param_4)

{
  CDemonSet *this_ptr;
  float fVar1;
  CKeyFramedModel *model_ptr;
  int iVar2;
  byte bVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  float afStackY_102c [1010];
  CVector3f local_50;
  CVector3f local_44 [3];
  float local_20;
  float local_14;
  
  bVar3 = 0;
  if (param_1 != param_2) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    param_1[2] = param_2[2];
  }
  this_ptr = g_CDemonSetPtr;
  param_1[3] = 1.0;
  param_1[4] = param_3;
  core_set_cpp_CDemonSet_initCameraShake_FUN_00555ab0(this_ptr,200.0,0.0,0.0,2.0);
  fVar1 = (float)core_actor_cpp_randomChance_FUN_0040cd00(0.5);
  param_1[6] = fVar1;
  iVar2 = 0;
  param_1[5] = param_4;
  do {
    local_20 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00(0.7853982,1.5707964);
    local_14 = local_20;
    local_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00(0.0,6.2831855);
    fVar4 = (float10)fcos((float10)local_14);
    fVar5 = (float10)fcos((float10)local_20);
    fVar6 = (float10)fsin((float10)local_14);
    fVar7 = (float10)fsin((float10)local_20);
    local_50.y = (float)(fVar7 * (float10)_DAT_005df358);
    local_50.x = (float)(fVar4 * (float10)_DAT_005df358 * fVar5);
    local_50.z = (float)(fVar6 * (float10)_DAT_005df358 * fVar5);
    local_44[0].x = *param_1;
    *(float *)((int)local_44 + (uint)bVar3 * -8 + 4) = param_1[(uint)bVar3 * -2 + 1];
    *(float *)((int)local_44 + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8) =
         (param_1 + (uint)bVar3 * -2 + 1)[(uint)bVar3 * -2 + 1];
    local_44[0].y = local_44[0].y + 1.0;
    model_ptr = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00468900
                          ((CKeyFramedModelInstance *)((iVar2 % 5) * 0x17c + 0x1c57e1c));
    iVar2 = iVar2 + 1;
    core_fire_cpp_CFireEffect_createRock_FUN_004b5eb0(0x01C57074,local_44,&local_50,model_ptr);
  } while (iVar2 < 10);
  return;
}

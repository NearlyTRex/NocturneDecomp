// Name: core_fire.cpp_FUN_004b16d0
// Address: 004b16d0
// Address Range: [[004b16d0, 004b1812]]
// Convention: unknown
// Signature: void core_fire_cpp_FUN_004b16d0(undefined4 *param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_fire_cpp_FUN_004b16d0(uint *param_1,uint *param_2,uint param_3,uint param_4)

{
  CDemonSet *this_ptr;
  int iVar1;
  CKeyFramedModel *model_ptr;
  byte bVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  float afStackY_102c [1010];
  byte local_50 [8];
  float local_48;
  byte local_44 [4];
  float local_40 [8];
  float local_20;
  float local_14;
  
  bVar2 = 0;
  if (param_1 != param_2) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    param_1[2] = param_2[2];
  }
  this_ptr = g_CDemonSetPtr;
  param_1[3] = 0x3f800000;
  param_1[4] = param_3;
  core_set_cpp_CDemonSet_initCameraShake_FUN_00555ab0(this_ptr,200.0,0.0,0.0,2.0);
  iVar1 = core_actor_cpp_FUN_0040cd00(0.5);
  param_1[6] = iVar1;
  iVar1 = 0;
  param_1[5] = param_4;
  do {
    local_20 = (float)core_actor_cpp_FUN_0040cc00(0x3f490fdb,0x3fc90fdb);
    local_14 = local_20;
    local_14 = (float)core_actor_cpp_FUN_0040cc00(0,0x40c90fdb);
    fVar3 = (float10)fcos((float10)local_14);
    fVar4 = (float10)fcos((float10)local_20);
    fVar5 = (float10)fsin((float10)local_14);
    fVar6 = (float10)fsin((float10)local_20);
    local_50._4_4_ = (uint)(fVar6 * (float10)_DAT_005df358);
    local_50._0_4_ = (uint)(fVar3 * (float10)_DAT_005df358 * fVar4);
    local_48 = (float)(fVar5 * (float10)_DAT_005df358 * fVar4);
    local_44 = (byte  [4])*param_1;
    local_40[(uint)bVar2 * -2] = (float)param_1[(uint)bVar2 * -2 + 1];
    local_40[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 1] =
         (float)(param_1 + (uint)bVar2 * -2 + 1)[(uint)bVar2 * -2 + 1];
    local_40[0] = local_40[0] + 1.0;
    model_ptr = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00468900
                          ((CKeyFramedModelInstance *)((iVar1 % 5) * 0x17c + 0x1c57e1c));
    iVar1 = iVar1 + 1;
    core_fire_cpp_FUN_004b5eb0(0x01C57074,(CVector3f *)local_44,(CVector3f *)local_50,model_ptr);
  } while (iVar1 < 10);
  return;
}

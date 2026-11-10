// Name: core_fire.cpp_FUN_004992b0
// Address: 004992b0
// Address Range: [[004992b0, 004993e0]]
// Convention: unknown
// Signature: void core_fire_cpp_FUN_004992b0(int *param_1,int param_2,CVector3f *param_3,CVector3f *param_4,CVector3f *param_5,int param_6)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_fire_cpp_FUN_004992b0(int *param_1,int param_2,CVector3f *param_3,CVector3f *param_4,CVector3f *param_5,int param_6)

{
  CKeyFramedModel *pCVar1;
  byte bVar2;
  float afStackY_1020 [1013];
  float volume;
  float local_38;
  float local_34;
  float local_30;
  CVector3f local_2c;
  CVector3f local_20;
  float local_14;
  
  bVar2 = 0;
  *param_1 = param_2;
  param_1[0xf7] = param_6;
  param_1[0xf8] = 0;
  if (*param_1 == 0) {
    core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_0044fd70
              ((CKeyFramedModelInstance *)(param_1 + 1),"@\\@dynamitestick.kfm" + 3);
    local_14 = 1.0;
  }
  else {
    _DAT_01d046a0 = "..\\core\\fire.cpp";
    _DAT_01d046a4 = 0xd76;
    core_main_c_FUN_004e4500("CToss::create - invalid toss type.");
  }
  if ((float)param_1[0xf7] <= 0.0) {
    param_1[0xf7] = 0x40a00000;
  }
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_0044fd00
            ((CKeyFramedModelInstance *)(param_1 + 1));
  pCVar1 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_0044fd20
                     ((CKeyFramedModelInstance *)(param_1 + 1));
  volume = local_14;
  local_38 = (pCVar1->bounds).max.x - (pCVar1->bounds).min.x;
  local_34 = (pCVar1->bounds).max.y - (pCVar1->bounds).min.y;
  local_30 = (pCVar1->bounds).max.z - (pCVar1->bounds).min.z;
  local_2c.x = local_38;
  *(uint *)((int)&local_2c + (uint)bVar2 * -8 + 4) =
       *(uint *)((int)&stack0xffffffcc + (uint)bVar2 * -8);
  *(uint *)((int)&local_2c + (uint)bVar2 * -8 + (uint)bVar2 * -8 + 8) =
       *(uint *)((int)&stack0xffffffd0 + (uint)bVar2 * -8 + (uint)bVar2 * -8);
  core_box_cpp_CBox_setupCorners_FUN_005b1c80
            ((CBox *)(param_1 + 0x60),param_3,param_4,&local_2c,volume);
  local_20.z = 0.0;
  local_20.y = 0.0;
  local_20.x = 9.424778;
  core_box_cpp_CBox_setupVelocities_FUN_005b4610((CBox *)(param_1 + 0x60),param_5,&local_20);
  return;
}

// Name: core_fire.cpp_FUN_0049cee0
// Address: 0049cee0
// Address Range: [[0049cee0, 0049d07d]]
// Convention: unknown
// Signature: void core_fire_cpp_FUN_0049cee0(undefined4 *param_1,undefined4 param_2,CVector3f *param_3,CVector3f *param_4,CVector3f *param_5,undefined4 param_6)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_fire_cpp_FUN_0049cee0(uint *param_1,uint param_2,CVector3f *param_3,CVector3f *param_4,CVector3f *param_5,uint param_6)

{
  CKeyFramedModel *pCVar1;
  byte bVar2;
  float afStackY_1020 [1013];
  CBox *this_ptr;
  CVector3f *extents;
  float volume;
  CVector3f local_38;
  CVector3f local_2c;
  float local_20;
  float local_1c [3];
  
  bVar2 = 0;
  *param_1 = param_2;
  param_1[0xf7] = param_6;
  param_1[0xf9] = 0;
  switch(*param_1) {
  case 0:
    core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_004625f0
              ((CKeyFramedModelInstance *)(param_1 + 1),"dynamitestick.kfm");
    local_1c[2] = 1.0;
    break;
  case 1:
    core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_004625f0
              ((CKeyFramedModelInstance *)(param_1 + 1),"bindingstone.kfm");
    local_1c[2] = 1.0;
    break;
  case 2:
    core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_004625f0
              ((CKeyFramedModelInstance *)(param_1 + 1),"scarabstone.kfm");
    local_1c[2] = 1.0;
    break;
  case 3:
    core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_004625f0
              ((CKeyFramedModelInstance *)(param_1 + 1),"rainvial.kfm");
    local_1c[2] = 1.0;
    break;
  default:
    _DAT_01d71de0 = "..\\core\\fire.cpp";
    _DAT_01d71de4 = 0xe59;
    core_main_c_FUN_004e4330("CToss::create - invalid toss type.");
  }
  extents = &local_38;
  if ((float)param_1[0xf7] <= 0.0) {
    param_1[0xf7] = 0x40a00000;
  }
  param_1[0xf8] = param_1[0xf7];
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00462580
            ((CKeyFramedModelInstance *)(param_1 + 1));
  pCVar1 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_004625a0
                     ((CKeyFramedModelInstance *)(param_1 + 1));
  volume = local_1c[2];
  local_20 = (pCVar1->bounds).max.x - (pCVar1->bounds).min.x;
  local_1c[0] = (pCVar1->bounds).max.y - (pCVar1->bounds).min.y;
  local_1c[1] = (pCVar1->bounds).max.z - (pCVar1->bounds).min.z;
  local_38.x = local_20;
  *(float *)((int)&local_38 + (uint)bVar2 * -8 + 4) = local_1c[(uint)bVar2 * -2];
  this_ptr = (CBox *)(param_1 + 0x60);
  *(float *)((int)&local_38 + (uint)bVar2 * -8 + (uint)bVar2 * -8 + 8) =
       local_1c[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 1];
  core_box_cpp_CBox_setupCorners_FUN_0041ae00(this_ptr,param_3,param_4,extents,volume);
  local_2c.z = 0.0;
  local_2c.y = 0.0;
  local_2c.x = 9.424778;
  core_box_cpp_CBox_setupVelocities_FUN_0041d790((CBox *)(param_1 + 0x60),param_5,&local_2c);
  return;
}

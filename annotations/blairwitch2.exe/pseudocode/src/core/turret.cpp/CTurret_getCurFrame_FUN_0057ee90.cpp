// Name: core_turret.cpp_CTurret_getCurFrame_FUN_0057ee90
// Address: 0057ee90
// Address Range: [[0057ee90, 0057ef9f]]
// Convention: __cdecl
// Signature: float __cdecl core_turret_cpp_CTurret_getCurFrame_FUN_0057ee90(CTurret *this_ptr,int model_index)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float __cdecl core_turret_cpp_CTurret_getCurFrame_FUN_0057ee90(CTurret *this_ptr,int model_index)

{
  CKeyFramedModel *pCVar1;
  CKeyFramedModelInstance *this_ptr_00;
  float local_18;
  float local_14;
  
  local_18 = 0.0;
  switch(*(uint *)&this_ptr->field_0x85c) {
  case 0:
    break;
  case 1:
    if (0.0 < *(float *)&this_ptr->field_0x8c4) {
      local_18 = 1.0 - *(float *)&this_ptr->field_0x8d8 / *(float *)&this_ptr->field_0x8c4;
    }
    break;
  case 2:
  case 3:
    local_18 = 1.0;
    break;
  case 4:
    if (0.0 < *(float *)&this_ptr->field_0x8cc) {
      local_18 = *(float *)&this_ptr->field_0x8d8 / *(float *)&this_ptr->field_0x8cc;
    }
    break;
  default:
    _DAT_01d046a0 = "..\\core\\turret.cpp";
    _DAT_01d046a4 = 0x1c1;
    core_main_c_FUN_004e4500("CTurret::getCurFrame - invalid state");
  }
  if (local_18 < 0.0) {
    local_14 = 0.0;
  }
  else {
    if (1.0 < local_18) {
      local_18 = 1.0;
    }
    if (model_index == 0) {
      this_ptr_00 = (CKeyFramedModelInstance *)&this_ptr->field_0x2b4;
    }
    else {
      this_ptr_00 = (CKeyFramedModelInstance *)&this_ptr->field_0x6e0;
    }
    pCVar1 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_0044fd20(this_ptr_00);
    local_14 = (float)(*(int *)&pCVar1->field_0x100 + -1) * local_18;
  }
  return local_14;
}

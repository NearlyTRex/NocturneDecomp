// Name: core_turret.cpp_CTurret_getCurFrame_FUN_005e2b30
// Address: 005e2b30
// Address Range: [[005e2b30, 005e2c3f]]
// Convention: __cdecl
// Signature: float __cdecl core_turret_cpp_CTurret_getCurFrame_FUN_005e2b30(CTurret *this_ptr,int model_index)

#include "nocturne.h"

float __cdecl core_turret_cpp_CTurret_getCurFrame_FUN_005e2b30(CTurret *this_ptr,int model_index)

{
  CKeyFramedModel *pCVar1;
  CKeyFramedModelInstance *this_ptr_00;
  float local_18;
  float local_14;
  
  local_18 = 0.0;
  switch(this_ptr->state) {
  case TURRET_STATE_IDLE:
    break;
  case TURRET_STATE_CHARGING:
    if (0.0 < this_ptr->charge_time) {
      local_18 = 1.0 - this_ptr->timer / this_ptr->charge_time;
    }
    break;
  case TURRET_STATE_ACTIVE:
  case TURRET_STATE_PATROL:
    local_18 = 1.0;
    break;
  case TURRET_STATE_POWERING_DOWN:
    if (0.0 < this_ptr->power_down_time) {
      local_18 = this_ptr->timer / this_ptr->power_down_time;
    }
    break;
  default:
    g_CurrentFilename = "..\\core\\turret.cpp";
    g_CurrentLineNumber = 449;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CTurret::getCurFrame - invalid state");
  }
  if (local_18 < 0.0) {
    local_14 = 0.0;
  }
  else {
    if (1.0 < local_18) {
      local_18 = 1.0;
    }
    if (model_index == 0) {
      this_ptr_00 = &(this_ptr->base).model;
    }
    else {
      this_ptr_00 = &this_ptr->model;
    }
    pCVar1 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80(this_ptr_00);
    local_14 = (float)(pCVar1->frame_count + -1) * local_18;
  }
  return local_14;
}

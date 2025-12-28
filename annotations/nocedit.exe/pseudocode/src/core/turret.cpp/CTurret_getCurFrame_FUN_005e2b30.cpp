// Name: core_turret.cpp_CTurret_getCurFrame_FUN_005e2b30
// Address: 005e2b30
// Address Range: [[005e2b30, 005e2c3f]]
// Convention: unknown
// Signature: undefined core_turret.cpp_CTurret_getCurFrame_FUN_005e2b30()

#include "nocturne.h"

/* Signature: byte actors_weapon_turret.cpp_CTurret_getCurFrame(CTurret* param_1, uint
   param_2) */

float core_turret_cpp_CTurret_getCurFrame_FUN_005e2b30(void)

{
  CKeyFramedModel *pCVar1;
  CKeyFramedModelInstance *this_ptr;
  int in_stack_00000004;
  int in_stack_00000008;
  float local_18;
  float local_14;
  float local_10;
  
  local_18 = 0.0;
  switch(*(uint *)(in_stack_00000004 + 0x700)) {
  case 0:
    break;
  case 1:
    if (0.0 < *(float *)(in_stack_00000004 + 0x768)) {
      local_18 = 1.0 - *(float *)(in_stack_00000004 + 0x77c) / *(float *)(in_stack_00000004 + 0x768)
      ;
    }
    break;
  case 2:
  case 3:
    local_18 = 1.0;
    break;
  case 4:
    if (0.0 < *(float *)(in_stack_00000004 + 0x770)) {
      local_18 = *(float *)(in_stack_00000004 + 0x77c) / *(float *)(in_stack_00000004 + 0x770);
    }
    break;
  default:
    g_CurrentFilename = "..\\core\\turret.cpp";
    g_CurrentLineNumber = 0x1c1;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CTurret::getCurFrame - invalid state");
  }
  if (0.0 <= local_18) {
    if (in_stack_00000008 == 0) {
      this_ptr = (CKeyFramedModelInstance *)(in_stack_00000004 + 0x158);
    }
    else {
      this_ptr = (CKeyFramedModelInstance *)(in_stack_00000004 + 0x584);
    }
    pCVar1 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80(this_ptr);
    local_10 = (float)(pCVar1->frame_count + -1) * local_14;
  }
  return local_10;
}

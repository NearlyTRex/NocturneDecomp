// Name: core_battery.cpp_FUN_00414d80
// Address: 00414d80
// Address Range: [[00414d80, 00414dd7]]
// Convention: unknown
// Signature: int * core_battery_cpp_FUN_00414d80(CDemonActor *param_1)

#include "nocturne.h"

int * core_battery_cpp_FUN_00414d80(CDemonActor *param_1)

{
  CDemonActor *pCVar1;
  CKeyFramedModelInstance *this_ptr;
  
  pCVar1 = core_actor_cpp_CDemonActor_ctor_FUN_00409d30(param_1);
  this_ptr = core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_00454490
                       ((CKeyFramedModelInstance *)(pCVar1 + 1));
  this_ptr[-1].model_ptr = (CKeyFramedModel *)&g_CBatteryVTable;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00454580
            (this_ptr,"question.kfm");
  this_ptr[1].part_visibility_flags[1] = 0x41f00000;
  this_ptr[1].part_visibility_flags[2] = 0x41f00000;
  return this_ptr[-1].part_visibility_flags + 0xb;
}

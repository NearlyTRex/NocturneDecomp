// Name: core_battery.cpp_CBattery_ctor_FUN_00417e90
// Address: 00417e90
// Address Range: [[00417e90, 00417ee7]]
// Convention: __cdecl
// Signature: CBattery * core_battery.cpp_CBattery_ctor_FUN_00417e90(CBattery * this_ptr)

#include "nocturne.h"

CBattery * __cdecl core_battery_cpp_CBattery_ctor_FUN_00417e90(CBattery *this_ptr)

{
  CDemonActor *pCVar1;
  CKeyFramedModelInstance *this_ptr_00;
  
  pCVar1 = core_actor_cpp_CDemonActor_ctor_FUN_004088b0(&this_ptr->base);
  this_ptr_00 = core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0
                          ((CKeyFramedModelInstance *)(pCVar1 + 1));
  this_ptr_00[-1].model_ptr = (CKeyFramedModel *)&g_CBatteryVTable;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
            (this_ptr_00,"question.kfm");
  this_ptr_00[1].part_visibility_flags[1] = 0x41f00000;
  this_ptr_00[1].part_visibility_flags[2] = 0x41f00000;
  return (CBattery *)(this_ptr_00[-1].part_visibility_flags + 9);
}

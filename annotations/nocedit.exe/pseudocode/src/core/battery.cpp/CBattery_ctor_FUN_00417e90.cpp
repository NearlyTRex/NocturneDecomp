// Name: core_battery.cpp_CBattery_ctor_FUN_00417e90
// Address: 00417e90
// Address Range: [[00417e90, 00417ee7]]
// Convention: __cdecl
// Signature: CBattery * __cdecl core_battery_cpp_CBattery_ctor_FUN_00417e90(CBattery *this_ptr)

#include "nocturne.h"

CBattery * __cdecl core_battery_cpp_CBattery_ctor_FUN_00417e90(CBattery *this_ptr)

{
  CBattery *pCVar1;
  CBattery_ptr_344 this_ptr_00;
  
  pCVar1 = (CBattery *)core_actor_cpp_CDemonActor_ctor_FUN_004088b0(&this_ptr->base);
  this_ptr_00 = core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0(&pCVar1->model);
  ADJ(this_ptr_00).base.vtable._ub = &g_CBatteryVTable;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
            (this_ptr_00,"question.kfm");
  ADJ(this_ptr_00)->recharge_time = 30.0;
  ADJ(this_ptr_00)->discharge_time = 30.0;
  return ADJ(this_ptr_00);
}

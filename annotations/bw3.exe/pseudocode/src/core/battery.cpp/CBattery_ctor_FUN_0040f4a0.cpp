// Name: core_battery.cpp_CBattery_ctor_FUN_0040f4a0
// Address: 0040f4a0
// Address Range: [[0040f4a0, 0040f4f7]]
// Convention: __cdecl
// Signature: CBattery * __cdecl core_battery_cpp_CBattery_ctor_FUN_0040f4a0(CBattery *this_ptr)

#include "nocturne.h"

CBattery * __cdecl core_battery_cpp_CBattery_ctor_FUN_0040f4a0(CBattery *this_ptr)

{
  CDemonActor *pCVar1;
  CKeyFramedModelInstance *this_ptr_00;
  
  pCVar1 = core_actor_cpp_CDemonActor_ctor_FUN_00408600((CDemonActor *)this_ptr);
  this_ptr_00 = core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_00462500
                          ((CKeyFramedModelInstance *)(pCVar1 + 1));
  *(byte **)&this_ptr_00[-1].field_0x178 = &g_CBatteryVTable;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_004625f0
            (this_ptr_00,"question.kfm");
  *(uint *)&this_ptr_00[1].field_0x4 = 0x41f00000;
  *(uint *)&this_ptr_00[1].field_0x8 = 0x41f00000;
  return (CBattery *)&this_ptr_00[-1].field_0x24;
}

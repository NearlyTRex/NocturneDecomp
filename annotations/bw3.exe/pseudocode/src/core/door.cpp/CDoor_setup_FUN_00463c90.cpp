// Name: core_door.cpp_CDoor_setup_FUN_00463c90
// Address: 00463c90
// Address Range: [[00463c90, 00463d01]]
// Convention: __cdecl
// Signature: void __cdecl core_door_cpp_CDoor_setup_FUN_00463c90(CDoor *this_ptr)

#include "nocturne.h"

void __cdecl core_door_cpp_CDoor_setup_FUN_00463c90(CDoor *this_ptr)

{
  int iVar1;
  
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00462580
            ((CKeyFramedModelInstance *)&this_ptr->field_0x158);
  core_actor_cpp_FUN_00408890((CDemonActor *)this_ptr);
  iVar1 = _strcmp(&this_ptr->field_0x2e8,"defaultDoorOpen");
  if (iVar1 == 0) {
    FUN_005a28c0(&this_ptr->field_0x2e8,"%sOpen",this_ptr);
  }
  iVar1 = _strcmp(&this_ptr->field_0x34c,"defaultDoorClose");
  if (iVar1 != 0) {
    return;
  }
  FUN_005a28c0(&this_ptr->field_0x34c,"%sClose",this_ptr);
  return;
}

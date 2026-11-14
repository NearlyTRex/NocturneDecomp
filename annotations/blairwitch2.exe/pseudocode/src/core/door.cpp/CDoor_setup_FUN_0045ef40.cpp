// Name: core_door.cpp_CDoor_setup_FUN_0045ef40
// Address: 0045ef40
// Address Range: [[0045ef40, 0045efb1]]
// Convention: __cdecl
// Signature: void __cdecl core_door_cpp_CDoor_setup_FUN_0045ef40(CDoor *this_ptr)

#include "nocturne.h"

void __cdecl core_door_cpp_CDoor_setup_FUN_0045ef40(CDoor *this_ptr)

{
  int iVar1;
  
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_0044fd00(&this_ptr->model);
  core_actor_cpp_CDemonActor_setup_FUN_00408a80(&this_ptr->base);
  iVar1 = _strcmp(this_ptr->open_condition,"defaultDoorOpen");
  if (iVar1 == 0) {
    _sprintf(this_ptr->open_condition,"%sOpen");
  }
  iVar1 = _strcmp(this_ptr->close_condition,"defaultDoorClose");
  if (iVar1 != 0) {
    return;
  }
  _sprintf(this_ptr->close_condition,"%sClose");
  return;
}

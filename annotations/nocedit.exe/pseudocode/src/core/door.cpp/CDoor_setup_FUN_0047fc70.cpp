// Name: core_door.cpp_CDoor_setup_FUN_0047fc70
// Address: 0047fc70
// Address Range: [[0047fc70, 0047fc8a]]
// Convention: __cdecl
// Signature: void __cdecl core_door_cpp_CDoor_setup_FUN_0047fc70(CDoor *this_ptr)

#include "nocturne.h"

void __cdecl core_door_cpp_CDoor_setup_FUN_0047fc70(CDoor *this_ptr)

{
  int iVar1;
  
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00478d60(&this_ptr->model);
  core_actor_cpp_CDemonActor_setup_FUN_00408bb0(&this_ptr->base);
  iVar1 = _strcmp(this_ptr->open_condition,"defaultDoorOpen");
  if (iVar1 == 0) {
    _sprintf(this_ptr->open_condition,"%sOpen",this_ptr);
  }
  iVar1 = _strcmp(this_ptr->close_condition,"defaultDoorClose");
  if (iVar1 != 0) {
    return;
  }
  _sprintf(this_ptr->close_condition,"%sClose",this_ptr);
  return;
}

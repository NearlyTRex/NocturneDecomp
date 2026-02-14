// Name: core_conveyor.cpp_CConveyor_getPropertyList_FUN_00442130
// Address: 00442130
// Address Range: [[00442130, 004421b5]]
// Convention: __cdecl
// Signature: void __cdecl core_conveyor_cpp_CConveyor_getPropertyList_FUN_00442130(CConveyor *this_ptr,CActorPropertyList *property_list)

#include "nocturne.h"

void __cdecl core_conveyor_cpp_CConveyor_getPropertyList_FUN_00442130(CConveyor *this_ptr,CActorPropertyList *property_list)

{
  core_actor_cpp_CDemonActor_getPropertyList_FUN_0040d290((CDemonActor *)this_ptr,property_list);
  core_actor_cpp_CActorPropertyList_addBool_FUN_0040e330
            (property_list,"Moving",&this_ptr->state);
  core_actor_cpp_CActorPropertyList_addEvent_FUN_0040e460
            (property_list,"Start condition",this_ptr->start_event);
  core_actor_cpp_CActorPropertyList_addEvent_FUN_0040e460
            (property_list,"Stop condition",this_ptr->stop_event);
  core_actor_cpp_CActorPropertyList_addVector_FUN_0040e260
            (property_list,"Direction",&this_ptr->direction,
             (CActorPropertyValidatorFunc *)0x0);
  core_actor_cpp_CActorPropertyList_addString_FUN_0040e290
            (property_list,"Actor class to effect",this_ptr->actor_class,0x4f,
             (CActorPropertyValidatorFunc *)0x0);
  return;
}

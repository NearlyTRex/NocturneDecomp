// Name: core_lever.cpp_CLever_getPropertyList_FUN_00505240
// Address: 00505240
// Address Range: [[00505240, 0050536e]]
// Convention: __cdecl
// Signature: void __cdecl core_lever_cpp_CLever_getPropertyList_FUN_00505240 (CLever *this_ptr,CActorPropertyList *property_list)

#include "nocturne.h"

void __cdecl
core_lever_cpp_CLever_getPropertyList_FUN_00505240
          (CLever *this_ptr,CActorPropertyList *property_list)

{
  core_actor_cpp_CDemonActor_getPropertyList_FUN_0040d290(&this_ptr->base,property_list);
  core_actor_cpp_CActorPropertyList_addModelKFM_FUN_0040e3b0
            (property_list,"Model file (.kfm)",&this_ptr->model,0);
  core_actor_cpp_CActorPropertyList_addAction_FUN_0040e670
            (property_list,"Lever type",
             core_lever_cpp_CLever_propertyDisplayTypeCallback_FUN_00505100,
             core_lever_cpp_CLever_propertyActionTypeCallback_FUN_00505160);
  core_actor_cpp_CActorPropertyList_addAction_FUN_0040e670
            (property_list,"Lever state",
             core_lever_cpp_CLever_propertyDisplayStateFunc_FUN_005051a0,
             core_lever_cpp_CLever_propertyActionStateCallback_FUN_00505210);
  core_actor_cpp_CActorPropertyList_addButton_FUN_0040e480
            (property_list,"On event",this_ptr->on_event);
  core_actor_cpp_CActorPropertyList_addButton_FUN_0040e480
            (property_list,"Off event",this_ptr->off_event);
  core_actor_cpp_CActorPropertyList_addSound_FUN_0040e2d0
            (property_list,"Sound",this_ptr->sound);
  core_actor_cpp_CActorPropertyList_addBool_FUN_0040e330
            (property_list,"Momentary event",&this_ptr->momentary_flag);
  core_actor_cpp_CActorPropertyList_addChoice_FUN_0040e350
            (property_list,"Linked lever",(CDemonActor **)&this_ptr->linked_lever,1,
             "CLever",(CActorPropertyValidatorFunc *)0x0);
  core_actor_cpp_CActorPropertyList_addInt_FUN_0040e1e0
            (property_list,"End vertex index",&this_ptr->end_vertex_index,
             (CActorPropertyValidatorFunc *)0x0);
  core_actor_cpp_CActorPropertyList_addRuleList_FUN_0040e5a0
            (property_list,"Rule",&this_ptr->rule,-1);
  core_actor_cpp_CActorPropertyList_addEnumPair_FUN_0040e640
            (property_list,"Open from side",3,g_LeverOpenFromSideTypePairs,
             &this_ptr->allowed_sides);
  core_actor_cpp_CActorPropertyList_addBool_FUN_0040e330
            (property_list,"Enable collision",&this_ptr->enable_collision);
  return;
}

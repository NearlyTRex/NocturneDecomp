// Name: core_anvil.cpp_CAnvil_getPropertyList_FUN_00412030
// Address: 00412030
// Address Range: [[00412030, 00412089]]
// Convention: __cdecl
// Signature: void __cdecl core_anvil_cpp_CAnvil_getPropertyList_FUN_00412030 (CAnvil *this_ptr,CActorPropertyList *property_list)

#include "nocturne.h"

void __cdecl
core_anvil_cpp_CAnvil_getPropertyList_FUN_00412030
          (CAnvil *this_ptr,CActorPropertyList *property_list)

{
  core_actor_cpp_CDemonActor_getPropertyList_FUN_0040d290(&this_ptr->base,property_list);
  core_actor_cpp_CActorPropertyList_addModelKFM_FUN_0040e3b0
            (property_list,"Model file (.kfm)",&this_ptr->model,0);
  core_actor_cpp_CActorPropertyList_addEvent_FUN_0040e460
            (property_list,"Drop cond",this_ptr->drop_condition);
  core_actor_cpp_CActorPropertyList_addFloat_FUN_0040e160
            (property_list,"Drop height",&this_ptr->drop_height,
             (CActorPropertyValidatorFunc *)0x0);
  return;
}

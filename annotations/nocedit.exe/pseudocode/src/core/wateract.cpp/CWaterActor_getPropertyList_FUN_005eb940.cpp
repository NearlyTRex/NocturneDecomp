// Name: core_wateract.cpp_CWaterActor_getPropertyList_FUN_005eb940
// Address: 005eb940
// Address Range: [[005eb940, 005ebaaa]]
// Convention: __cdecl
// Signature: void __cdecl core_wateract_cpp_CWaterActor_getPropertyList_FUN_005eb940(CWaterActor *this_ptr,CActorPropertyList *property_list)

#include "nocturne.h"

void __cdecl core_wateract_cpp_CWaterActor_getPropertyList_FUN_005eb940(CWaterActor *this_ptr,CActorPropertyList *property_list)

{
  core_actor_cpp_CDemonActor_getPropertyList_FUN_0040d290(&this_ptr->base,property_list);
  core_actor_cpp_CActorPropertyList_addInt_FUN_0040e1e0
            (property_list,"Opacity",&this_ptr->opacity,(CActorPropertyValidatorFunc *)0x0)
  ;
  core_actor_cpp_CActorPropertyList_addFloat_FUN_0040e160
            (property_list,"Height delta",&this_ptr->height_delta,
             (CActorPropertyValidatorFunc *)0x0);
  core_actor_cpp_CActorPropertyList_addFloat_FUN_0040e160
            (property_list,"Time to move up",&this_ptr->time_to_move,
             (CActorPropertyValidatorFunc *)0x0);
  core_actor_cpp_CActorPropertyList_addFloat_FUN_0040e160
            (property_list,"Time to move down",&this_ptr->time_to_move_down,
             (CActorPropertyValidatorFunc *)0x0);
  core_actor_cpp_CActorPropertyList_addSound_FUN_0040e2d0
            (property_list,"Move up sound",this_ptr->move_sound);
  core_actor_cpp_CActorPropertyList_addSound_FUN_0040e2d0
            (property_list,"Move down sound",this_ptr->move_down_sound);
  core_actor_cpp_CActorPropertyList_addEvent_FUN_0040e460
            (property_list,"Move up condition",this_ptr->move_event);
  core_actor_cpp_CActorPropertyList_addEvent_FUN_0040e460
            (property_list,"Move down condition",this_ptr->move_down_event);
  core_actor_cpp_CActorPropertyList_addFloat_FUN_0040e160
            (property_list,"Parameter",&this_ptr->param,(CActorPropertyValidatorFunc *)0x0)
  ;
  core_actor_cpp_CActorPropertyList_addEnumPair_FUN_0040e640
            (property_list,"State",4,g_WaterActorStateTypePairs,&this_ptr->state);
  core_actor_cpp_CActorPropertyList_addFloat_FUN_0040e160
            (property_list,"Patch size",&this_ptr->patch_size,
             (CActorPropertyValidatorFunc *)0x0);
  core_actor_cpp_CActorPropertyList_addBool_FUN_0040e330
            (property_list,"Round",&this_ptr->round_flag);
  core_actor_cpp_CActorPropertyList_addInt_FUN_0040e1e0
            (property_list,"Red value",&(this_ptr->color).r,
             (CActorPropertyValidatorFunc *)0x0);
  core_actor_cpp_CActorPropertyList_addInt_FUN_0040e1e0
            (property_list,"Green value",&(this_ptr->color).g,
             (CActorPropertyValidatorFunc *)0x0);
  core_actor_cpp_CActorPropertyList_addInt_FUN_0040e1e0
            (property_list,"Blue value",&(this_ptr->color).b,
             (CActorPropertyValidatorFunc *)0x0);
  return;
}

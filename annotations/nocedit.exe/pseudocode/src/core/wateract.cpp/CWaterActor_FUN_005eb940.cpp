// Name: core_wateract.cpp_CWaterActor_FUN_005eb940
// Address: 005eb940
// Address Range: [[005eb940, 005ebaaa]]
// Convention: __cdecl
// Signature: void __cdecl core_wateract_cpp_CWaterActor_FUN_005eb940(CWaterActor *this_ptr)

#include "nocturne.h"

void __cdecl core_wateract_cpp_CWaterActor_FUN_005eb940(CWaterActor *this_ptr)

{
  CActorPropertyList *in_stack_00000008;
  
  core_actor_cpp_CDemonActor_getPropertyList_FUN_0040d290(&this_ptr->base,in_stack_00000008);
  core_actor_cpp_CActorPropertyList_addInt_FUN_0040e1e0
            (in_stack_00000008,"Opacity",&this_ptr->opacity,
             (CDemonActor_CActorPropertyValidatorFunc *)0x0);
  core_actor_cpp_CActorPropertyList_addFloat_FUN_0040e160
            (in_stack_00000008,"Height delta",&this_ptr->height_delta,
             (CDemonActor_CActorPropertyValidatorFunc *)0x0);
  core_actor_cpp_CActorPropertyList_addFloat_FUN_0040e160
            (in_stack_00000008,"Time to move up",&this_ptr->time_to_move,
             (CDemonActor_CActorPropertyValidatorFunc *)0x0);
  core_actor_cpp_CActorPropertyList_addFloat_FUN_0040e160
            (in_stack_00000008,"Time to move down",&this_ptr->time_to_move_down,
             (CDemonActor_CActorPropertyValidatorFunc *)0x0);
  core_actor_cpp_CActorPropertyList_addSound_FUN_0040e2d0
            (in_stack_00000008,"Move up sound",&this_ptr->move_sound);
  core_actor_cpp_CActorPropertyList_addSound_FUN_0040e2d0
            (in_stack_00000008,"Move down sound",&this_ptr->move_down_sound);
  core_actor_cpp_CActorPropertyList_addEvent_FUN_0040e460
            (in_stack_00000008,"Move up condition",(char *)&this_ptr->move_event);
  core_actor_cpp_CActorPropertyList_addEvent_FUN_0040e460
            (in_stack_00000008,"Move down condition",(char *)&this_ptr->move_down_event);
  core_actor_cpp_CActorPropertyList_addFloat_FUN_0040e160
            (in_stack_00000008,"Parameter",&this_ptr->param,
             (CDemonActor_CActorPropertyValidatorFunc *)0x0);
  core_actor_cpp_CActorPropertyList_addEnumPair_FUN_0040e640
            (in_stack_00000008,"State",4,(int *)&PTR_s_Lowered_006846d0);
  core_actor_cpp_CActorPropertyList_addFloat_FUN_0040e160
            (in_stack_00000008,"Patch size",&this_ptr->patch_size,
             (CDemonActor_CActorPropertyValidatorFunc *)0x0);
  core_actor_cpp_CActorPropertyList_addBool_FUN_0040e330
            (in_stack_00000008,"Round",&this_ptr->round_flag);
  core_actor_cpp_CActorPropertyList_addInt_FUN_0040e1e0
            (in_stack_00000008,"Red value",&this_ptr->col_r,
             (CDemonActor_CActorPropertyValidatorFunc *)0x0);
  core_actor_cpp_CActorPropertyList_addInt_FUN_0040e1e0
            (in_stack_00000008,"Green value",&this_ptr->col_g,
             (CDemonActor_CActorPropertyValidatorFunc *)0x0);
  core_actor_cpp_CActorPropertyList_addInt_FUN_0040e1e0
            (in_stack_00000008,"Blue value",&this_ptr->col_b,
             (CDemonActor_CActorPropertyValidatorFunc *)0x0);
  return;
}

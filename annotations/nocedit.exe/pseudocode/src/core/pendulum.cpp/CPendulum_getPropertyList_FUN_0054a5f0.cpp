// Name: core_pendulum.cpp_CPendulum_getPropertyList_FUN_0054a5f0
// Address: 0054a5f0
// Address Range: [[0054a5f0, 0054a781]]
// Convention: __cdecl
// Signature: void __cdecl core_pendulum_cpp_CPendulum_getPropertyList_FUN_0054a5f0 (CPendulum *this_ptr,CActorPropertyList *property_list)

#include "nocturne.h"

void __cdecl
core_pendulum_cpp_CPendulum_getPropertyList_FUN_0054a5f0
          (CPendulum *this_ptr,CActorPropertyList *property_list)

{
  CActorProperty *pCVar1;
  
  core_actor_cpp_CDemonActor_getPropertyList_FUN_0040d290(&this_ptr->base,property_list);
  core_actor_cpp_CActorPropertyList_addModelKFM_FUN_0040e3b0
            (property_list,"Model file (.kfm)",&this_ptr->model,0);
  core_actor_cpp_CActorPropertyList_addEvent_FUN_0040e460
            (property_list,"Start event",this_ptr->start_event);
  core_actor_cpp_CActorPropertyList_addEvent_FUN_0040e460
            (property_list,"Stop event",this_ptr->stop_event);
  core_actor_cpp_CActorPropertyList_addBool_FUN_0040e330
            (property_list,"Moving",&this_ptr->moving);
  core_actor_cpp_CActorPropertyList_addFloat_FUN_0040e160
            (property_list,"Parameter",&this_ptr->param,(CActorPropertyValidatorFunc *)0x0)
  ;
  core_actor_cpp_CActorPropertyList_addFloat_FUN_0040e160
            (property_list,"Max angle",&this_ptr->max_angle,
             (CActorPropertyValidatorFunc *)0x0);
  core_actor_cpp_CActorPropertyList_addSound_FUN_0040e2d0
            (property_list,"SwooshSound",this_ptr->swoosh_sound);
  core_actor_cpp_CActorPropertyList_addFloat_FUN_0040e160
            (property_list,"SwooshPhaseBias",&this_ptr->swoosh_phase_bias,
             (CActorPropertyValidatorFunc *)0x0);
  core_actor_cpp_CActorPropertyList_addSound_FUN_0040e2d0
            (property_list,"creak1Sound",this_ptr->creak_1_sound);
  core_actor_cpp_CActorPropertyList_addSound_FUN_0040e2d0
            (property_list,"creak2Sound",this_ptr->creak_2_sound);
  pCVar1 = core_actor_cpp_CActorPropertyList_addAction_FUN_0040e670
                     (property_list,"1/2 period",
                      core_pendulum_cpp_CPendulum_propertyDisplayCallback_FUN_0054a5a0,
                      core_pendulum_cpp_CPendulum_propertyActionCallback_FUN_0054a5e0);
  pCVar1->enabled_flag = 0;
  core_actor_cpp_CActorPropertyList_addBool_FUN_0040e330
            (property_list,"Kill hero",&this_ptr->kill_hero);
  core_actor_cpp_CActorPropertyList_addBool_FUN_0040e330
            (property_list,"Kill enemies",&this_ptr->kill_enemy);
  core_actor_cpp_CActorPropertyList_addFloat_FUN_0040e160
            (property_list,"Decay of exp(-1.0 * decay * decayTimer)",&this_ptr->decay,
             (CActorPropertyValidatorFunc *)0x0);
  core_actor_cpp_CActorPropertyList_addFloat_FUN_0040e160
            (property_list,"Decay timer (should be 0.0)",&this_ptr->decay_timer,
             (CActorPropertyValidatorFunc *)0x0);
  core_actor_cpp_CActorPropertyList_addGroundType_FUN_0040e300
            (property_list,"groundType",&this_ptr->ground_type);
  core_actor_cpp_CActorPropertyList_addBool_FUN_0040e330
            (property_list,"Half movement",&this_ptr->one_shot);
  return;
}

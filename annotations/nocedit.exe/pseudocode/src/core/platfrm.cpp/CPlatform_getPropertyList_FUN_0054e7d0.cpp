// Name: core_platfrm.cpp_CPlatform_getPropertyList_FUN_0054e7d0
// Address: 0054e7d0
// Address Range: [[0054e7d0, 0054e9ef]]
// Convention: __cdecl
// Signature: void __cdecl core_platfrm_cpp_CPlatform_getPropertyList_FUN_0054e7d0 (CPlatform *this_ptr,CActorPropertyList *property_list)

#include "nocturne.h"

void __cdecl
core_platfrm_cpp_CPlatform_getPropertyList_FUN_0054e7d0
          (CPlatform *this_ptr,CActorPropertyList *property_list)

{
  CActorProperty *pCVar1;
  
  core_actor_cpp_CDemonActor_getPropertyList_FUN_0040d290(&this_ptr->base,property_list);
  core_actor_cpp_CActorPropertyList_addModelKFM_FUN_0040e3b0
            (property_list,"Model file (.kfm)",&this_ptr->model,0);
  core_actor_cpp_CActorPropertyList_addEvent_FUN_0040e460
            (property_list,"Move to end event",this_ptr->to_end_event);
  core_actor_cpp_CActorPropertyList_addEvent_FUN_0040e460
            (property_list,"Move to start event",this_ptr->to_start_event);
  core_actor_cpp_CActorPropertyList_addEvent_FUN_0040e460
            (property_list,"Stop event",this_ptr->stop_event);
  core_actor_cpp_CActorPropertyList_addSound_FUN_0040e2d0
            (property_list,"Start sound",this_ptr->start_sound);
  core_actor_cpp_CActorPropertyList_addSound_FUN_0040e2d0
            (property_list,"Stop sound",this_ptr->stop_sound);
  core_actor_cpp_CActorPropertyList_addSound_FUN_0040e2d0
            (property_list,"Active sound",this_ptr->active_sound);
  core_actor_cpp_CActorPropertyList_addFloat_FUN_0040e160
            (property_list,"Travel time start->end (sec)",&this_ptr->travel_time_to_end,
             (CDemonActor_CActorPropertyValidatorFunc *)0x0);
  core_actor_cpp_CActorPropertyList_addFloat_FUN_0040e160
            (property_list,"Travel time end->start (sec)",&this_ptr->travel_time_to_start,
             (CDemonActor_CActorPropertyValidatorFunc *)0x0);
  core_actor_cpp_CActorPropertyList_addGroundType_FUN_0040e300
            (property_list,"groundType",&this_ptr->ground_type);
  pCVar1 = core_actor_cpp_CActorPropertyList_addAction_FUN_0040e670
                     (property_list,"course",
                      core_platfrm_cpp_CPlatform_propertyDisplayTypeCallback_FUN_0054e4e0,
                      core_platfrm_cpp_CPlatform_propertyActionTypeCallback_FUN_0054e530);
  pCVar1->auto_update_flag = 1;
  if (this_ptr->course_filename[0] == '\0') {
    core_actor_cpp_CActorPropertyList_addAction_FUN_0040e670
              (property_list,"Editor slew mode",
               core_platfrm_cpp_CPlatform_propertyDisplaySlewCallback_FUN_0054e400,
               core_platfrm_cpp_CPlatform_propertyActionSlewCallback_FUN_0054e480);
  }
  core_actor_cpp_CActorPropertyList_addAction_FUN_0040e670
            (property_list,"state",
             core_platfrm_cpp_CPlatform_propertyDisplayStateCallback_FUN_0054e700,
             core_platfrm_cpp_CPlatform_propertyActionStateCallback_FUN_0054e760);
  core_actor_cpp_CActorPropertyList_addFloatRange_FUN_0040e1a0
            (property_list,"Paramater (0..1)",&this_ptr->param,0.0,1.0,
             (CDemonActor_CActorPropertyValidatorFunc *)0x0);
  core_actor_cpp_CActorPropertyList_addInt_FUN_0040e1e0
            (property_list,"One shot (0=no,1=yes,2=done)",&this_ptr->one_shot,
             (CDemonActor_CActorPropertyValidatorFunc *)0x0);
  core_actor_cpp_CActorPropertyList_addBool_FUN_0040e330
            (property_list,"Block virtual director",&this_ptr->block_virtual_director_flag)
  ;
  core_actor_cpp_CActorPropertyList_addBool_FUN_0040e330
            (property_list,"Render backgnd when not moving",
             &this_ptr->render_in_background_when_not_moving_flag);
  if (this_ptr->render_in_background_when_not_moving_flag != 0) {
    core_actor_cpp_CActorPropertyList_addString_FUN_0040e290
              (property_list,"Camera while moving : ",this_ptr->camera_while_moving,0x3f,
               (CDemonActor_CActorPropertyValidatorFunc *)0x0);
    core_actor_cpp_CActorPropertyList_addBool_FUN_0040e330
              (property_list,"Recompute fog in background : ",&this_ptr->recompute_fog);
  }
  core_actor_cpp_CActorPropertyList_addBool_FUN_0040e330
            (property_list,"Plot as a box in shadow",&this_ptr->plot_as_box_in_shadow);
  core_actor_cpp_CActorPropertyList_addBool_FUN_0040e330
            (property_list,"Push actor instead of killing him",&this_ptr->push_flag);
  core_actor_cpp_CActorPropertyList_addBool_FUN_0040e330
            (property_list,"Plot in shadow flag",&this_ptr->plot_in_shadow_flag);
  return;
}

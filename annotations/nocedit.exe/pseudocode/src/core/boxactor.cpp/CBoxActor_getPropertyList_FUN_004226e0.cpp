// Name: core_boxactor.cpp_CBoxActor_getPropertyList_FUN_004226e0
// Address: 004226e0
// Address Range: [[004226e0, 004228d1]]
// Convention: __cdecl
// Signature: void __cdecl core_boxactor_cpp_CBoxActor_getPropertyList_FUN_004226e0 (CBoxActor *this_ptr,CActorPropertyList *property_list)

#include "nocturne.h"

void __cdecl
core_boxactor_cpp_CBoxActor_getPropertyList_FUN_004226e0
          (CBoxActor *this_ptr,CActorPropertyList *property_list)

{
  CKeyFramedModel *pCVar1;
  
  core_actor_cpp_CDemonActor_getPropertyList_FUN_0040d290(&this_ptr->base,property_list);
  core_actor_cpp_CActorPropertyList_addModelKFM_FUN_0040e3b0
            (property_list,"Model file (.kfm)",&this_ptr->model,0);
  core_actor_cpp_CActorPropertyList_addFloatRange_FUN_0040e1a0
            (property_list,"weight (lbs)",&this_ptr->weight_in_pounds,0.0,1e+06,
             (CDemonActor_CActorPropertyValidatorFunc *)0x0);
  pCVar1 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80(&this_ptr->model);
  if (1 < pCVar1->frame_count) {
    core_actor_cpp_CActorPropertyList_addFloatRange_FUN_0040e1a0
              (property_list,"Animation fps",&this_ptr->fps,-100.0,100.0,
               (CDemonActor_CActorPropertyValidatorFunc *)0x0);
  }
  core_actor_cpp_CActorPropertyList_addVector_FUN_0040e260
            (property_list,"PHB RPM",&this_ptr->rpm,
             (CDemonActor_CActorPropertyValidatorFunc *)0x0);
  core_actor_cpp_CActorPropertyList_addSound_FUN_0040e2d0
            (property_list,"Loop WAV",this_ptr->loop_wav_name);
  core_actor_cpp_CActorPropertyList_addSound_FUN_0040e2d0
            (property_list,"Collision WAV",this_ptr->collision_wav_name);
  core_actor_cpp_CActorPropertyList_addEnumPair_FUN_0040e640
            (property_list,"Pickup type",5,(int *)&PTR_s_Cant_0066e5dc);
  core_actor_cpp_CActorPropertyList_addBool_FUN_0040e330
            (property_list,"canBePushed",&this_ptr->can_be_pushed);
  if (this_ptr->can_be_pushed != 0) {
    core_actor_cpp_CActorPropertyList_addChoice_FUN_0040e350
              (property_list,"Constrain to this actor's box",&this_ptr->constrain_extents_actor,
               1,"CDemonActor",(CDemonActor_CActorPropertyValidatorFunc *)0x0);
    core_actor_cpp_CActorPropertyList_addSound_FUN_0040e2d0
              (property_list,"push sound",this_ptr->push_sound);
  }
  core_actor_cpp_CActorPropertyList_addGroundType_FUN_0040e300
            (property_list,"groundType",&this_ptr->ground_type);
  core_actor_cpp_CActorPropertyList_addBool_FUN_0040e330
            (property_list,"plotInShadowFlag",&this_ptr->plot_in_shadow_flag);
  core_actor_cpp_CActorPropertyList_addBool_FUN_0040e330
            (property_list,"collisionFlag",&this_ptr->collision_flag);
  core_actor_cpp_CActorPropertyList_addBool_FUN_0040e330
            (property_list,"isTransparent",&(this_ptr->base).is_transparent);
  core_actor_cpp_CActorPropertyList_addBool_FUN_0040e330
            (property_list,"dontUseNormals",&this_ptr->dont_use_normals);
  core_actor_cpp_CActorPropertyList_addButton_FUN_0040e480
            (property_list,"Raise event when used",this_ptr->use_event);
  if ((this_ptr->pickup_type != 0) && (this_ptr->pickup_type != 1)) {
    core_actor_cpp_CActorPropertyList_addFlags_FUN_0040e6a0
              (property_list,"Melee attack types",&this_ptr->allowed_melee_attack_types);
  }
  core_actor_cpp_CActorPropertyList_addBool_FUN_0040e330
            (property_list,"Block virtual director",&this_ptr->block_virtual_director_flag)
  ;
  return;
}

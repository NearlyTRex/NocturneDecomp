// Name: core_mimic.cpp_CMimic_archive_FUN_004d5bb0
// Address: 004d5bb0
// Address Range: [[004d5bb0, 004d5c7e]]
// Convention: __cdecl
// Signature: void __cdecl core_mimic_cpp_CMimic_archive_FUN_004d5bb0(CMimic *this_ptr)

#include "nocturne.h"

void __cdecl core_mimic_cpp_CMimic_archive_FUN_004d5bb0(CMimic *this_ptr)

{
  CDeformableModelInstance *model_ptr;
  
  core_enemy_cpp_CEnemy_archive_FUN_004796c0(&this_ptr->base);
  core_actor_cpp_archiveFloat_FUN_0040c880(&(this_ptr->base).speed,"speed");
  model_ptr = &(this_ptr->base).base.model;
  core_actor_cpp_archiveDeformableModelInstance_FUN_0040ca80(model_ptr,"modelName");
  core_actor_cpp_archiveString_FUN_0040c6d0(this_ptr->attack_condition,"attackCondition");
  core_actor_cpp_archiveInteger_FUN_0040c900(&this_ptr->attack_mode,"attackMode");
  core_actor_cpp_archiveActor_FUN_0040c980
            (&this_ptr->mirror_plane_actor,"mirrorPlaneActor");
  if (INT_005baf48 < 2) {
    if (INT_005baf48 < 3) {
      return;
    }
  }
  else {
    core_actor_cpp_archiveMotionState_FUN_0040cb00
              (&model_ptr->motion_controller,"motion state");
    core_actor_cpp_archiveString_FUN_0040c6d0(this_ptr->morph_actor_type,"morphActorType");
    if (INT_005baf48 < 3) {
      return;
    }
  }
  core_actor_cpp_archiveString_FUN_0040c6d0(this_ptr->mirror_condition,"mirrorCondition");
  return;
}

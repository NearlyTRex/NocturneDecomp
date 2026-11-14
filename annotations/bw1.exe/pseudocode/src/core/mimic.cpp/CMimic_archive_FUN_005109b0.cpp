// Name: core_mimic.cpp_CMimic_archive_FUN_005109b0
// Address: 005109b0
// Address Range: [[005109b0, 00510a7e]]
// Convention: __cdecl
// Signature: void __cdecl core_mimic_cpp_CMimic_archive_FUN_005109b0(CMimic *this_ptr)

#include "nocturne.h"

void __cdecl core_mimic_cpp_CMimic_archive_FUN_005109b0(CMimic *this_ptr)

{
  CDeformableModelInstance *model_ptr;
  
  core_enemy_cpp_CEnemy_archive_FUN_004a0520(&this_ptr->base);
  core_actor_cpp_archiveFloat_FUN_0040b5f0(&(this_ptr->base).speed,"speed");
  model_ptr = &(this_ptr->base).base.model;
  core_actor_cpp_archiveDeformableModelInstance_FUN_0040b7f0(model_ptr,"modelName");
  core_actor_cpp_archiveString_FUN_0040b440(this_ptr->attack_condition,"attackCondition");
  core_actor_cpp_archiveInteger_FUN_0040b670(&this_ptr->attack_mode,"attackMode");
  core_actor_cpp_archiveActor_FUN_0040b6f0
            (&this_ptr->mirror_plane_actor,"mirrorPlaneActor");
  if (g_CMimicClassVersion < 2) {
    if (g_CMimicClassVersion < 3) {
      return;
    }
  }
  else {
    core_actor_cpp_archiveMotionState_FUN_0040b870(&model_ptr->base,"motion state");
    core_actor_cpp_archiveString_FUN_0040b440(this_ptr->morph_actor_type,"morphActorType");
    if (g_CMimicClassVersion < 3) {
      return;
    }
  }
  core_actor_cpp_archiveString_FUN_0040b440(this_ptr->mirror_condition,"mirrorCondition");
  return;
}

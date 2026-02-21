// Name: core_mimic.cpp_CMimic_archive_FUN_00520930
// Address: 00520930
// Address Range: [[00520930, 005209fe]]
// Convention: __cdecl
// Signature: void __cdecl core_mimic_cpp_CMimic_archive_FUN_00520930(CMimic *this_ptr)

#include "nocturne.h"

void __cdecl core_mimic_cpp_CMimic_archive_FUN_00520930(CMimic *this_ptr)

{
  CDeformableModelInstance *model_ptr;
  
  core_enemy_cpp_CEnemy_archive_FUN_004a9660(&this_ptr->base);
  core_actor_cpp_archiveFloat_FUN_0040b770(&(this_ptr->base).speed,"speed");
  model_ptr = &(this_ptr->base).base.model;
  core_actor_cpp_archiveDeformableModelInstance_FUN_0040b970(model_ptr,"modelName");
  core_actor_cpp_archiveString_FUN_0040b5c0(this_ptr->attack_condition,"attackCondition");
  core_actor_cpp_archiveInteger_FUN_0040b7f0(&this_ptr->attack_mode,"attackMode");
  core_actor_cpp_archiveActor_FUN_0040b870
            ((CDemonActor *)&this_ptr->mirror_plane_actor,"mirrorPlaneActor");
  if (g_CMimicClassVersion < 2) {
    if (g_CMimicClassVersion < 3) {
      return;
    }
  }
  else {
    core_actor_cpp_archiveMotionState_FUN_0040b9f0
              (&model_ptr->motion_controller,"motion state");
    core_actor_cpp_archiveString_FUN_0040b5c0(this_ptr->morph_actor_type,"morphActorType");
    if (g_CMimicClassVersion < 3) {
      return;
    }
  }
  core_actor_cpp_archiveString_FUN_0040b5c0(this_ptr->mirror_condition,"mirrorCondition");
  return;
}

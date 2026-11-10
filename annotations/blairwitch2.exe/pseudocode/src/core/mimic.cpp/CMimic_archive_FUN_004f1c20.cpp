// Name: core_mimic.cpp_CMimic_archive_FUN_004f1c20
// Address: 004f1c20
// Address Range: [[004f1c20, 004f1cee]]
// Convention: __cdecl
// Signature: void __cdecl core_mimic_cpp_CMimic_archive_FUN_004f1c20(CMimic *this_ptr)

#include "nocturne.h"

void __cdecl core_mimic_cpp_CMimic_archive_FUN_004f1c20(CMimic *this_ptr)

{
  CDeformableModelInstance *pCVar1;
  
  core_enemy_cpp_CEnemy_archive_FUN_00487ec0(&this_ptr->base);
  core_actor_cpp_archiveFloat_FUN_0040b8e0(&(this_ptr->base).speed,"speed");
  pCVar1 = &(this_ptr->base).base.model;
  core_actor_cpp_archiveDeformableModelInstance_FUN_0040bae0(pCVar1,"modelName");
  core_actor_cpp_archiveString_FUN_0040b730(this_ptr->attack_condition,"attackCondition");
  core_actor_cpp_archiveInteger_FUN_0040b960(&this_ptr->attack_mode,"attackMode");
  core_actor_cpp_archiveActor_FUN_0040b9e0
            (&this_ptr->mirror_plane_actor,"mirrorPlaneActor");
  if (g_CMimicClassVersion < 2) {
    if (g_CMimicClassVersion < 3) {
      return;
    }
  }
  else {
    core_actor_cpp_archiveMotionState_FUN_0040bb60(pCVar1,"motion state");
    core_actor_cpp_archiveString_FUN_0040b730(this_ptr->morph_actor_type,"morphActorType");
    if (g_CMimicClassVersion < 3) {
      return;
    }
  }
  core_actor_cpp_archiveString_FUN_0040b730(this_ptr->mirror_condition,"mirrorCondition");
  return;
}

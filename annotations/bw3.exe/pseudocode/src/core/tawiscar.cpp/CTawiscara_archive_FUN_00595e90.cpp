// Name: core_tawiscar.cpp_CTawiscara_archive_FUN_00595e90
// Address: 00595e90
// Address Range: [[00595e90, 00595f8b]]
// Convention: __cdecl
// Signature: void __cdecl core_tawiscar_cpp_CTawiscara_archive_FUN_00595e90(CTawiscara *this_ptr)

#include "nocturne.h"

void __cdecl core_tawiscar_cpp_CTawiscara_archive_FUN_00595e90(CTawiscara *this_ptr)

{
  core_enemy_cpp_CEnemy_archive_FUN_00489120((CEnemy *)this_ptr);
  core_actor_cpp_archiveFloat_FUN_0040b830(&this_ptr->field_0xcdcc,"?speed" + 1);
  core_actor_cpp_archiveDeformableModelInstance_FUN_0040ba30
            ((CDeformableModelInstance *)&this_ptr->field_0x158,"modelName");
  core_actor_cpp_archiveFloat_FUN_0040b830(&this_ptr->field_0xcddc,"guardDistance");
  core_actor_cpp_archiveMotionState_FUN_0040bab0
            ((CMotionController *)&this_ptr->field_0x158,"motion state");
  core_actor_cpp_archiveInteger_FUN_0040b8b0((int *)&this_ptr->field_0xd06c,"lightUpEyes");
  core_actor_cpp_archiveActor_FUN_0040b930(&this_ptr->field_0xd080,"chainAnchor");
  core_actor_cpp_archiveFloat_FUN_0040b830(&this_ptr->field_0xd084,"chainLength");
  core_actor_cpp_archiveInteger_FUN_0040b8b0((int *)&this_ptr->field_0xd054,&DAT_005d9408);
  core_actor_cpp_archiveInteger_FUN_0040b8b0((int *)&this_ptr->field_0xd090,"phase");
  core_actor_cpp_archiveFloat_FUN_0040b830(&this_ptr->field_0xd094,"phaseTimer");
  core_actor_cpp_archiveActor_FUN_0040b930(&this_ptr->field_0xd088,"alpha1");
  core_actor_cpp_archiveActor_FUN_0040b930(&this_ptr->field_0xd08c,"alpha2");
  return;
}

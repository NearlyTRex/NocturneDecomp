// Name: core_bird.cpp_CBird_archive_FUN_0040ff80
// Address: 0040ff80
// Address Range: [[0040ff80, 00410020]]
// Convention: __cdecl
// Signature: void __cdecl core_bird_cpp_CBird_archive_FUN_0040ff80(CBird *this_ptr)

#include "nocturne.h"

void __cdecl core_bird_cpp_CBird_archive_FUN_0040ff80(CBird *this_ptr)

{
  if (1 < g_CBirdClassVersion) {
    core_charactr_cpp_CCharacter_archive_FUN_0042b450((CCharacter *)this_ptr);
    return;
  }
  core_actor_cpp_CDemonActor_archive_FUN_0040c280((CDemonActor *)this_ptr);
  core_actor_cpp_archiveDeformableModelInstance_FUN_0040ba30
            ((CDeformableModelInstance *)&this_ptr->field_0x158,"modelName");
  core_actor_cpp_archiveMotionState_FUN_0040bab0
            ((CMotionController *)&this_ptr->field_0x158,"motion state");
  core_actor_cpp_archiveFloat_FUN_0040b830(&this_ptr->field_0x2538,"hitPoints");
  core_actor_cpp_archiveInteger_FUN_0040b8b0((int *)&this_ptr->field_0x206a8,"shootMe");
  core_actor_cpp_archiveInteger_FUN_0040b8b0((int *)&this_ptr->field_0x206ac,"poolMe");
  core_actor_cpp_archiveFloat_FUN_0040b830(&this_ptr->field_0x206b0,"speed");
  core_charactr_cpp_CCharacter_archive_FUN_0042b450((CCharacter *)this_ptr);
  return;
}

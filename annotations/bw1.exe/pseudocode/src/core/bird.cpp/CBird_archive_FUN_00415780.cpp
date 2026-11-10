// Name: core_bird.cpp_CBird_archive_FUN_00415780
// Address: 00415780
// Address Range: [[00415780, 00415820]]
// Convention: __cdecl
// Signature: void __cdecl core_bird_cpp_CBird_archive_FUN_00415780(CBird *this_ptr)

#include "nocturne.h"

void __cdecl core_bird_cpp_CBird_archive_FUN_00415780(CBird *this_ptr)

{
  if (1 < g_CBirdClassVersion) {
    core_charactr_cpp_CCharacter_archive_FUN_0042c7f0((CCharacter *)this_ptr);
    return;
  }
  core_actor_cpp_CDemonActor_archive_FUN_0040c040((CDemonActor *)this_ptr);
  core_actor_cpp_archiveDeformableModelInstance_FUN_0040b7f0
            ((CDeformableModelInstance *)&this_ptr->field_0x158,"modelName");
  core_actor_cpp_archiveMotionState_FUN_0040b870
            ((CMotionController *)&this_ptr->field_0x158,"motion state");
  core_actor_cpp_archiveFloat_FUN_0040b5f0(&this_ptr->field_0x2538,"hitPoints");
  core_actor_cpp_archiveInteger_FUN_0040b670((int *)&this_ptr->field_0x1faac,"shootMe");
  core_actor_cpp_archiveInteger_FUN_0040b670((int *)&this_ptr->field_0x1fab0,"poolMe");
  core_actor_cpp_archiveFloat_FUN_0040b5f0(&this_ptr->field_0x1fab4,"speed");
  core_charactr_cpp_CCharacter_archive_FUN_0042c7f0((CCharacter *)this_ptr);
  return;
}

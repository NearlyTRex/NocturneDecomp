// Name: core_spireagl.cpp_CSpiritEagle_archive_FUN_00599bc0
// Address: 00599bc0
// Address Range: [[00599bc0, 00599c77]]
// Convention: __cdecl
// Signature: void __cdecl core_spireagl_cpp_CSpiritEagle_archive_FUN_00599bc0(CSpiritEagle *this_ptr)

#include "nocturne.h"

void __cdecl core_spireagl_cpp_CSpiritEagle_archive_FUN_00599bc0(CSpiritEagle *this_ptr)

{
  core_actor_cpp_CDemonActor_archive_FUN_0040c280((CDemonActor *)this_ptr);
  core_actor_cpp_archiveDeformableModelInstance_FUN_0040ba30
            ((CDeformableModelInstance *)&this_ptr->field_0x158,"?modelName" + 1);
  core_actor_cpp_archiveMotionState_FUN_0040bab0
            ((CMotionController *)&this_ptr->field_0x158,"motion state");
  core_actor_cpp_archiveFloat_FUN_0040b830(&this_ptr->field_0x2538,"hitPoints");
  core_actor_cpp_archiveInteger_FUN_0040b8b0((int *)&this_ptr->field_0x20864,"shootMe");
  core_actor_cpp_archiveInteger_FUN_0040b8b0((int *)&this_ptr->field_0x20868,"poolMe");
  core_actor_cpp_archiveFloat_FUN_0040b830(&this_ptr->field_0x2086c,"speed");
  if (g_CSpiritEagleClassVersion < 2) {
    core_charactr_cpp_CCharacter_archive_FUN_0042b450((CCharacter *)this_ptr);
    return;
  }
  core_actor_cpp_archiveFloat_FUN_0040b830(&this_ptr->field_0x214a0,"morphTime");
  core_charactr_cpp_CCharacter_archive_FUN_0042b450((CCharacter *)this_ptr);
  return;
}

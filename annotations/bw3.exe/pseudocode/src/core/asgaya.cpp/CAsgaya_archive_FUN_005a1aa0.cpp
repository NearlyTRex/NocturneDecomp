// Name: core_asgaya.cpp_CAsgaya_archive_FUN_005a1aa0
// Address: 005a1aa0
// Address Range: [[005a1aa0, 005a1b0f]]
// Convention: __cdecl
// Signature: void __cdecl core_asgaya_cpp_CAsgaya_archive_FUN_005a1aa0(CAsgaya *this_ptr)

#include "nocturne.h"

void __cdecl core_asgaya_cpp_CAsgaya_archive_FUN_005a1aa0(CAsgaya *this_ptr)

{
  core_npc_cpp_CNPC_archive_FUN_00509800((CNPC *)this_ptr);
  core_actor_cpp_archiveDeformableModelInstance_FUN_0040ba30
            ((CDeformableModelInstance *)&this_ptr->field_0x158,"modelName");
  core_actor_cpp_archiveMotionState_FUN_0040bab0
            ((CMotionController *)&this_ptr->field_0x158,"motion state");
  core_actor_cpp_archiveInteger_FUN_0040b8b0((int *)&this_ptr->field_0x33fa4,"shootMe");
  core_actor_cpp_archiveInteger_FUN_0040b8b0((int *)&this_ptr->field_0x33fa8,"poolMe");
  core_actor_cpp_archiveFloat_FUN_0040b830(&this_ptr->field_0x33fac,"speed");
  return;
}

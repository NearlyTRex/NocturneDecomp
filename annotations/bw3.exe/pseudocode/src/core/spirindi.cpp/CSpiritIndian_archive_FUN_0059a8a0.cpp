// Name: core_spirindi.cpp_CSpiritIndian_archive_FUN_0059a8a0
// Address: 0059a8a0
// Address Range: [[0059a8a0, 0059a90f]]
// Convention: __cdecl
// Signature: void __cdecl core_spirindi_cpp_CSpiritIndian_archive_FUN_0059a8a0(CSpiritIndian *this_ptr)

#include "nocturne.h"

void __cdecl core_spirindi_cpp_CSpiritIndian_archive_FUN_0059a8a0(CSpiritIndian *this_ptr)

{
  core_npc_cpp_CNPC_archive_FUN_00509800((CNPC *)this_ptr);
  core_actor_cpp_archiveDeformableModelInstance_FUN_0040ba30
            ((CDeformableModelInstance *)&this_ptr->field_0x158,"modelName");
  core_actor_cpp_archiveMotionState_FUN_0040bab0
            ((CMotionController *)&this_ptr->field_0x158,"motion state");
  core_actor_cpp_archiveInteger_FUN_0040b8b0((int *)&this_ptr->field_0x34160,"shootMe");
  core_actor_cpp_archiveInteger_FUN_0040b8b0((int *)&this_ptr->field_0x34164,"poolMe");
  core_actor_cpp_archiveFloat_FUN_0040b830(&this_ptr->field_0x34168,"speed");
  return;
}

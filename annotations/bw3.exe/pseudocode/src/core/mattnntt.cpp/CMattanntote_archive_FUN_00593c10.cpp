// Name: core_mattnntt.cpp_CMattanntote_archive_FUN_00593c10
// Address: 00593c10
// Address Range: [[00593c10, 00593c93]]
// Convention: __cdecl
// Signature: void __cdecl core_mattnntt_cpp_CMattanntote_archive_FUN_00593c10(CMattanntote *this_ptr)

#include "nocturne.h"

void __cdecl core_mattnntt_cpp_CMattanntote_archive_FUN_00593c10(CMattanntote *this_ptr)

{
  core_enemy_cpp_CEnemy_archive_FUN_00489120((CEnemy *)this_ptr);
  core_actor_cpp_archiveFloat_FUN_0040b830(&this_ptr->field_0xcdcc,"@speed" + 1);
  core_actor_cpp_archiveDeformableModelInstance_FUN_0040ba30
            ((CDeformableModelInstance *)&this_ptr->field_0x158,"modelName");
  core_actor_cpp_archiveFloat_FUN_0040b830(&this_ptr->field_0xcddc,"guardDistance");
  core_actor_cpp_archiveMotionState_FUN_0040bab0
            ((CMotionController *)&this_ptr->field_0x158,"motion state");
  core_actor_cpp_archiveFloat_FUN_0040b830(&this_ptr->field_0xd06c,"maxFadeTime");
  core_actor_cpp_archiveInteger_FUN_0040b8b0
            ((int *)&this_ptr->field_0xd070,"fadeOutOpacity");
  return;
}

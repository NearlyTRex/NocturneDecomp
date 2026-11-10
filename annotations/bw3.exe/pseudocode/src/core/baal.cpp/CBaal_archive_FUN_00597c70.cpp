// Name: core_baal.cpp_CBaal_archive_FUN_00597c70
// Address: 00597c70
// Address Range: [[00597c70, 00597cf3]]
// Convention: __cdecl
// Signature: void __cdecl core_baal_cpp_CBaal_archive_FUN_00597c70(CBaal *this_ptr)

#include "nocturne.h"

void __cdecl core_baal_cpp_CBaal_archive_FUN_00597c70(CBaal *this_ptr)

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

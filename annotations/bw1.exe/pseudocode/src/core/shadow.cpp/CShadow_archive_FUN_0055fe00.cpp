// Name: core_shadow.cpp_CShadow_archive_FUN_0055fe00
// Address: 0055fe00
// Address Range: [[0055fe00, 0055fe9b]]
// Convention: __cdecl
// Signature: void __cdecl core_shadow_cpp_CShadow_archive_FUN_0055fe00(CShadow *this_ptr)

#include "nocturne.h"

void __cdecl core_shadow_cpp_CShadow_archive_FUN_0055fe00(CShadow *this_ptr)

{
  core_enemy_cpp_CEnemy_archive_FUN_004a0520((CEnemy *)this_ptr);
  core_actor_cpp_archiveFloat_FUN_0040b5f0(&this_ptr->field_0xc1d0,"speed");
  core_actor_cpp_archiveDeformableModelInstance_FUN_0040b7f0
            ((CDeformableModelInstance *)&this_ptr->field_0x158,"modelName");
  core_actor_cpp_archiveFloat_FUN_0040b5f0(&this_ptr->field_0xc1e0,"guardDistance");
  core_actor_cpp_archiveMotionState_FUN_0040b870
            ((CMotionController *)&this_ptr->field_0x158,"motion state");
  if (g_CShadowClassVersion < 2) {
    return;
  }
  core_actor_cpp_archiveInteger_FUN_0040b670((int *)&this_ptr->field_0xc290,"lightUpEyes");
  core_actor_cpp_archiveInteger_FUN_0040b670
            ((int *)&this_ptr->field_0xc30c,"scaredByLight");
  return;
}

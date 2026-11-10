// Name: core_shadowsc.cpp_CShadowsc_archive_FUN_005612d0
// Address: 005612d0
// Address Range: [[005612d0, 0056132b]]
// Convention: __cdecl
// Signature: void __cdecl core_shadowsc_cpp_CShadowsc_archive_FUN_005612d0(CShadowsc *this_ptr)

#include "nocturne.h"

void __cdecl core_shadowsc_cpp_CShadowsc_archive_FUN_005612d0(CShadowsc *this_ptr)

{
  core_enemy_cpp_CEnemy_archive_FUN_004a0520((CEnemy *)this_ptr);
  core_actor_cpp_archiveFloat_FUN_0040b5f0(&this_ptr->field_0xc1d0,"speed");
  core_actor_cpp_archiveDeformableModelInstance_FUN_0040b7f0
            ((CDeformableModelInstance *)&this_ptr->field_0x158,"modelName");
  core_actor_cpp_archiveFloat_FUN_0040b5f0(&this_ptr->field_0xc1e0,"guardDistance");
  core_actor_cpp_archiveMotionState_FUN_0040b870
            ((CMotionController *)&this_ptr->field_0x158,"motion state");
  return;
}

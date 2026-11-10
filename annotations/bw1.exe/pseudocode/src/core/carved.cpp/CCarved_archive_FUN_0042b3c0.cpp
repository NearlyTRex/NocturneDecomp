// Name: core_carved.cpp_CCarved_archive_FUN_0042b3c0
// Address: 0042b3c0
// Address Range: [[0042b3c0, 0042b429]]
// Convention: __cdecl
// Signature: void __cdecl core_carved_cpp_CCarved_archive_FUN_0042b3c0(CCarved *this_ptr)

#include "nocturne.h"

void __cdecl core_carved_cpp_CCarved_archive_FUN_0042b3c0(CCarved *this_ptr)

{
  byte *model_ptr;
  
  core_enemy_cpp_CEnemy_archive_FUN_004a0520((CEnemy *)this_ptr);
  core_actor_cpp_archiveFloat_FUN_0040b5f0(&this_ptr->field_0xc1d0,"speed");
  model_ptr = &this_ptr->field_0x158;
  core_actor_cpp_archiveDeformableModelInstance_FUN_0040b7f0
            ((CDeformableModelInstance *)model_ptr,"modelName");
  core_actor_cpp_archiveMotionState_FUN_0040b870
            ((CMotionController *)model_ptr,"motion state");
  core_actor_cpp_archivePartStatus_FUN_0040b960
            ((CDeformableModelInstance *)model_ptr,"partStatus");
  core_actor_cpp_archiveInteger_FUN_0040b670
            ((int *)&this_ptr->field_0xc284,"alwaysChaseFast");
  return;
}

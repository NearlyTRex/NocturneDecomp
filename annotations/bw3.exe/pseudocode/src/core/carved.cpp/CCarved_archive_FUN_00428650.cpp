// Name: core_carved.cpp_CCarved_archive_FUN_00428650
// Address: 00428650
// Address Range: [[00428650, 004286b9]]
// Convention: __cdecl
// Signature: void __cdecl core_carved_cpp_CCarved_archive_FUN_00428650(CCarved *this_ptr)

#include "nocturne.h"

void __cdecl core_carved_cpp_CCarved_archive_FUN_00428650(CCarved *this_ptr)

{
  byte *model_ptr;
  
  core_enemy_cpp_CEnemy_archive_FUN_00489120((CEnemy *)this_ptr);
  core_actor_cpp_archiveFloat_FUN_0040b830(&this_ptr->field_0xcdcc,"speed");
  model_ptr = &this_ptr->field_0x158;
  core_actor_cpp_archiveDeformableModelInstance_FUN_0040ba30
            ((CDeformableModelInstance *)model_ptr,"modelName");
  core_actor_cpp_archiveMotionState_FUN_0040bab0
            ((CMotionController *)model_ptr,"motion state");
  core_actor_cpp_archivePartStatus_FUN_0040bba0
            ((CDeformableModelInstance *)model_ptr,"partStatus");
  core_actor_cpp_archiveInteger_FUN_0040b8b0
            ((int *)&this_ptr->field_0xd070,"alwaysChaseFast");
  return;
}

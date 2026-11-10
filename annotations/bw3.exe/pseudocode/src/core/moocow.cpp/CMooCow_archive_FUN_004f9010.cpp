// Name: core_moocow.cpp_CMooCow_archive_FUN_004f9010
// Address: 004f9010
// Address Range: [[004f9010, 004f9041]]
// Convention: __cdecl
// Signature: void __cdecl core_moocow_cpp_CMooCow_archive_FUN_004f9010(CMooCow *this_ptr)

#include "nocturne.h"

void __cdecl core_moocow_cpp_CMooCow_archive_FUN_004f9010(CMooCow *this_ptr)

{
  core_charactr_cpp_CCharacter_archive_FUN_0042b450((CCharacter *)this_ptr);
  core_actor_cpp_archiveDeformableModelInstance_FUN_0040ba30
            ((CDeformableModelInstance *)&this_ptr->field_0x158,"?modelName" + 1);
  core_actor_cpp_archiveMotionState_FUN_0040bab0
            ((CMotionController *)&this_ptr->field_0x158,"motion state");
  return;
}

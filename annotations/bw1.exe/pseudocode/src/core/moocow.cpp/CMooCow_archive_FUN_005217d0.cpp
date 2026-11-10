// Name: core_moocow.cpp_CMooCow_archive_FUN_005217d0
// Address: 005217d0
// Address Range: [[005217d0, 00521801]]
// Convention: __cdecl
// Signature: void __cdecl core_moocow_cpp_CMooCow_archive_FUN_005217d0(CMooCow *this_ptr)

#include "nocturne.h"

void __cdecl core_moocow_cpp_CMooCow_archive_FUN_005217d0(CMooCow *this_ptr)

{
  core_charactr_cpp_CCharacter_archive_FUN_0042c7f0((CCharacter *)this_ptr);
  core_actor_cpp_archiveDeformableModelInstance_FUN_0040b7f0
            ((CDeformableModelInstance *)&this_ptr->field_0x158,"modelName");
  core_actor_cpp_archiveMotionState_FUN_0040b870
            ((CMotionController *)&this_ptr->field_0x158,"motion state");
  return;
}

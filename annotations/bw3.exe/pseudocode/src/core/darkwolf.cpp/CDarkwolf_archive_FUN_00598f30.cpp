// Name: core_darkwolf.cpp_CDarkwolf_archive_FUN_00598f30
// Address: 00598f30
// Address Range: [[00598f30, 00598fad]]
// Convention: __cdecl
// Signature: void __cdecl core_darkwolf_cpp_CDarkwolf_archive_FUN_00598f30(CDarkwolf *this_ptr)

#include "nocturne.h"

void __cdecl core_darkwolf_cpp_CDarkwolf_archive_FUN_00598f30(CDarkwolf *this_ptr)

{
  core_enemy_cpp_CEnemy_archive_FUN_00489120((CEnemy *)this_ptr);
  core_actor_cpp_archiveFloat_FUN_0040b830(&this_ptr->field_0xcdcc,"?speed" + 1);
  core_actor_cpp_archiveDeformableModelInstance_FUN_0040ba30
            ((CDeformableModelInstance *)&this_ptr->field_0x158,"modelName");
  core_actor_cpp_archiveFloat_FUN_0040b830(&this_ptr->field_0xcddc,"guardDistance");
  core_actor_cpp_archiveMotionState_FUN_0040bab0
            ((CMotionController *)&this_ptr->field_0x158,"motion state");
  if (g_CDarkwolfClassVersion < 2) {
    return;
  }
  core_actor_cpp_archiveFloat_FUN_0040b830(&this_ptr->field_0xdc90,"morphTime");
  return;
}

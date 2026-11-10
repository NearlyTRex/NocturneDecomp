// Name: core_styler.cpp_CStyler_archive_FUN_0059dee0
// Address: 0059dee0
// Address Range: [[0059dee0, 0059df5d]]
// Convention: __cdecl
// Signature: void __cdecl core_styler_cpp_CStyler_archive_FUN_0059dee0(CStyler *this_ptr)

#include "nocturne.h"

void __cdecl core_styler_cpp_CStyler_archive_FUN_0059dee0(CStyler *this_ptr)

{
  core_enemy_cpp_CEnemy_archive_FUN_00489120((CEnemy *)this_ptr);
  core_actor_cpp_archiveFloat_FUN_0040b830(&this_ptr->field_0xcdcc,"?speed" + 1);
  core_actor_cpp_archiveDeformableModelInstance_FUN_0040ba30
            ((CDeformableModelInstance *)&this_ptr->field_0x158,"modelName");
  core_actor_cpp_archiveFloat_FUN_0040b830(&this_ptr->field_0xcddc,"guardDistance");
  core_actor_cpp_archiveMotionState_FUN_0040bab0
            ((CMotionController *)&this_ptr->field_0x158,"motion state");
  if (g_CStylerClassVersion < 2) {
    return;
  }
  core_actor_cpp_archiveFloat_FUN_0040b830(&this_ptr->field_0x487c4,"morphTime");
  return;
}

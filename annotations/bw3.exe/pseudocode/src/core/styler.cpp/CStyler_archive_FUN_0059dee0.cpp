// Name: core_styler.cpp_CStyler_archive_FUN_0059dee0
// Address: 0059dee0
// Address Range: [[0059dee0, 0059df5d]]
// Convention: __cdecl
// Signature: void __cdecl core_styler_cpp_CStyler_archive_FUN_0059dee0(CStyler *this_ptr)

#include "nocturne.h"

void __cdecl core_styler_cpp_CStyler_archive_FUN_0059dee0(CStyler *this_ptr)

{
  CDeformableModelInstance *model_ptr;
  
  core_enemy_cpp_CEnemy_archive_FUN_00489120(&this_ptr->base);
  core_actor_cpp_archiveFloat_FUN_0040b830(&(this_ptr->base).speed,"?speed" + 1);
  model_ptr = &(this_ptr->base).base.model;
  core_actor_cpp_archiveDeformableModelInstance_FUN_0040ba30(model_ptr,"modelName");
  core_actor_cpp_archiveFloat_FUN_0040b830
            (&(this_ptr->base).guard_distance,"guardDistance");
  core_actor_cpp_archiveMotionState_FUN_0040bab0(&model_ptr->base,"motion state");
  if (g_CStylerClassVersion < 2) {
    return;
  }
  core_actor_cpp_archiveFloat_FUN_0040b830(&this_ptr->morph_time,"morphTime");
  return;
}

// Name: core_grave.cpp_CGrave_archive_FUN_004b0e20
// Address: 004b0e20
// Address Range: [[004b0e20, 004b0f19]]
// Convention: __cdecl
// Signature: void __cdecl core_grave_cpp_CGrave_archive_FUN_004b0e20(CGrave *this_ptr)

#include "nocturne.h"

void __cdecl core_grave_cpp_CGrave_archive_FUN_004b0e20(CGrave *this_ptr)

{
  int local_c;
  
  core_actor_cpp_CDemonActor_archive_FUN_0040d2d0(&this_ptr->base);
  core_actor_cpp_archiveKeyframedModelInstance_FUN_0040ca00(&this_ptr->model,"model name");
  core_actor_cpp_archiveFloat_FUN_0040c880(&this_ptr->fps,"fps");
  if (INT_005ba8c8 < 2) {
    core_actor_cpp_archiveInteger_FUN_0040c900(&local_c,"active");
    this_ptr->grave_state = 0;
    if (local_c != 0) {
      this_ptr->grave_state = 1;
    }
  }
  else {
    core_actor_cpp_archiveInteger_FUN_0040c900(&this_ptr->grave_state,"graveState");
  }
  core_actor_cpp_archiveFloat_FUN_0040c880(&this_ptr->cur_frame,"curFrame");
  if (2 < INT_005ba8c8) {
    core_actor_cpp_archiveInteger_FUN_0040c900
              (&this_ptr->hide_on_first_frame,"hideOnFirstFrame");
    core_actor_cpp_archiveString_FUN_0040c6d0(this_ptr->start_condition,"startCondition");
  }
  if (INT_005ba8c8 < 4) {
    return;
  }
  core_actor_cpp_archiveString_FUN_0040c6d0(this_ptr->start_sound,"startSound");
  return;
}

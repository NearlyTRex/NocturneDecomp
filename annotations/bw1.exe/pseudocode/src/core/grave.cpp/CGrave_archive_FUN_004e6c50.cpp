// Name: core_grave.cpp_CGrave_archive_FUN_004e6c50
// Address: 004e6c50
// Address Range: [[004e6c50, 004e6d49]]
// Convention: __cdecl
// Signature: void __cdecl core_grave_cpp_CGrave_archive_FUN_004e6c50(CGrave *this_ptr)

#include "nocturne.h"

void __cdecl core_grave_cpp_CGrave_archive_FUN_004e6c50(CGrave *this_ptr)

{
  int iStack_c;
  
  core_actor_cpp_CDemonActor_archive_FUN_0040c040(&this_ptr->base);
  core_actor_cpp_archiveKeyframedModelInstance_FUN_0040b770(&this_ptr->model,"model name");
  core_actor_cpp_archiveFloat_FUN_0040b5f0(&this_ptr->fps,&DAT_005e41a8);
  if (g_CGraveClassVersion < 2) {
    core_actor_cpp_archiveInteger_FUN_0040b670(&iStack_c,"active");
    this_ptr->grave_state = 0;
    if (iStack_c != 0) {
      this_ptr->grave_state = 1;
    }
  }
  else {
    core_actor_cpp_archiveInteger_FUN_0040b670(&this_ptr->grave_state,"graveState");
  }
  core_actor_cpp_archiveFloat_FUN_0040b5f0(&this_ptr->cur_frame,"curFrame");
  if (2 < g_CGraveClassVersion) {
    core_actor_cpp_archiveInteger_FUN_0040b670
              (&this_ptr->hide_on_first_frame,"hideOnFirstFrame");
    core_actor_cpp_archiveString_FUN_0040b440(this_ptr->start_condition,"startCondition");
  }
  if (g_CGraveClassVersion < 4) {
    return;
  }
  core_actor_cpp_archiveString_FUN_0040b440(this_ptr->start_sound,"startSound");
  return;
}

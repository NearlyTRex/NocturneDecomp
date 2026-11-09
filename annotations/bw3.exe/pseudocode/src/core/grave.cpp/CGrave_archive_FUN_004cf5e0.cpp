// Name: core_grave.cpp_CGrave_archive_FUN_004cf5e0
// Address: 004cf5e0
// Address Range: [[004cf5e0, 004cf6d9]]
// Convention: __cdecl
// Signature: void __cdecl core_grave_cpp_CGrave_archive_FUN_004cf5e0(CGrave *this_ptr)

#include "nocturne.h"

void __cdecl core_grave_cpp_CGrave_archive_FUN_004cf5e0(CGrave *this_ptr)

{
  int iStack_c;
  
  core_actor_cpp_CDemonActor_archive_FUN_0040c280((CDemonActor *)this_ptr);
  core_actor_cpp_archiveKeyframedModelInstance_FUN_0040b9b0
            (&this_ptr->field_0x158,"model name");
  core_actor_cpp_archiveFloat_FUN_0040b830(&this_ptr->field_0x2d8,&DAT_005c47cc);
  if (g_CGraveClassVersion < 2) {
    core_actor_cpp_archiveInteger_FUN_0040b8b0(&iStack_c,"active");
    *(uint *)&this_ptr->field_0x2e0 = 0;
    if (iStack_c != 0) {
      *(uint *)&this_ptr->field_0x2e0 = 1;
    }
  }
  else {
    core_actor_cpp_archiveInteger_FUN_0040b8b0((int *)&this_ptr->field_0x2e0,"graveState");
  }
  core_actor_cpp_archiveFloat_FUN_0040b830(&this_ptr->field_0x2d4,"curFrame");
  if (2 < g_CGraveClassVersion) {
    core_actor_cpp_archiveInteger_FUN_0040b8b0
              ((int *)&this_ptr->field_0x2e4,"hideOnFirstFrame");
    core_actor_cpp_archiveString_FUN_0040b680(&this_ptr->field_0x2e8,"startCondition");
  }
  if (g_CGraveClassVersion < 4) {
    return;
  }
  core_actor_cpp_archiveString_FUN_0040b680(&this_ptr->field_0x34c,"startSound");
  return;
}

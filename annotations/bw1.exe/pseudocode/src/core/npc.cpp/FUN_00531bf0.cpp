// Name: core_npc.cpp_FUN_00531bf0
// Address: 00531bf0
// Address Range: [[00531bf0, 00531cb5]]
// Convention: __cdecl
// Signature: void __cdecl core_npc_cpp_FUN_00531bf0(CNPC *this_ptr)

#include "nocturne.h"

void __cdecl core_npc_cpp_FUN_00531bf0(CNPC *this_ptr)

{
  if (g_CNPCClassVersion < 2) {
    core_actor_cpp_CDemonActor_archive_FUN_0040c040((CDemonActor *)this_ptr);
    core_actor_cpp_archiveFloat_FUN_0040b5f0(&this_ptr->field_0x2538,"hitPoints");
    return;
  }
  core_charactr_cpp_FUN_0042c7f0(this_ptr);
  if (2 < g_CNPCClassVersion) {
    core_actor_cpp_FUN_0040b7f0
              ((CDeformableModelInstance *)&this_ptr->field_0x158,"modelName");
    core_actor_cpp_FUN_0040b870((CMotionController *)&this_ptr->field_0x158,"motion state")
    ;
  }
  if (3 < g_CNPCClassVersion) {
    core_actor_cpp_archiveInteger_FUN_0040b670((int *)&this_ptr->field_0x1faac,"shootMe");
  }
  if (4 < g_CNPCClassVersion) {
    core_actor_cpp_archiveInteger_FUN_0040b670((int *)&this_ptr->field_0x1fab0,"poolMe");
  }
  if (g_CNPCClassVersion < 6) {
    return;
  }
  core_actor_cpp_archiveFloat_FUN_0040b5f0(&this_ptr->field_0x1fab4,"speed");
  return;
}

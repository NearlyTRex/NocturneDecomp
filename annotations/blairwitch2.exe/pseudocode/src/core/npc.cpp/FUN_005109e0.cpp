// Name: core_npc.cpp_FUN_005109e0
// Address: 005109e0
// Address Range: [[005109e0, 00510aa5]]
// Convention: __cdecl
// Signature: void __cdecl core_npc_cpp_FUN_005109e0(CNPC *this_ptr)

#include "nocturne.h"

void __cdecl core_npc_cpp_FUN_005109e0(CNPC *this_ptr)

{
  if (g_CNPCClassVersion < 2) {
    core_actor_cpp_CDemonActor_archive_FUN_0040c330((CDemonActor *)this_ptr);
    core_actor_cpp_archiveFloat_FUN_0040b8e0(&this_ptr->field_0x25a8,"hitPoints");
    return;
  }
  core_charactr_cpp_CCharacter_archive_FUN_00422c30((CCharacter *)this_ptr);
  if (2 < g_CNPCClassVersion) {
    core_actor_cpp_archiveDeformableModelInstance_FUN_0040bae0
              (&this_ptr->field_0x2b4,"modelName");
    core_actor_cpp_archiveMotionState_FUN_0040bb60(&this_ptr->field_0x2b4,"motion state");
  }
  if (3 < g_CNPCClassVersion) {
    core_actor_cpp_archiveInteger_FUN_0040b960((int *)&this_ptr->field_0x2433c,"shootMe");
  }
  if (4 < g_CNPCClassVersion) {
    core_actor_cpp_archiveInteger_FUN_0040b960((int *)&this_ptr->field_0x24340,"poolMe");
  }
  if (g_CNPCClassVersion < 6) {
    return;
  }
  core_actor_cpp_archiveFloat_FUN_0040b8e0(&this_ptr->field_0x24344,"speed");
  return;
}

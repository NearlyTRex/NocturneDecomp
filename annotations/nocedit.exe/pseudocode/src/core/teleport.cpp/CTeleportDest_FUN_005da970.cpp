// Name: core_teleport.cpp_CTeleportDest_FUN_005da970
// Address: 005da970
// Address Range: [[005da970, 005da99e]]
// Convention: __cdecl
// Signature: void core_teleport.cpp_CTeleportDest_FUN_005da970(CTeleportDest * this_ptr)

#include "nocturne.h"

void __cdecl core_teleport_cpp_CTeleportDest_FUN_005da970(CTeleportDest *this_ptr)

{
  int *in_stack_00000008;
  
  core_actor_cpp_CDemonActor_showEditorHelp_FUN_0040d150(&this_ptr->base_actor,in_stack_00000008);
  *in_stack_00000008 = *in_stack_00000008 + 0xb;
  core_actor_cpp_drawTwoColumnPropertyLine_FUN_0040d1e0
            (in_stack_00000008,"T","Show list of teleporters which go to this teleport dest.");
  return;
}

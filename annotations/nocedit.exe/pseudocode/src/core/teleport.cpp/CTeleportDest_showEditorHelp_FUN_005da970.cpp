// Name: core_teleport.cpp_CTeleportDest_showEditorHelp_FUN_005da970
// Address: 005da970
// Address Range: [[005da970, 005da99e]]
// Convention: __cdecl
// Signature: void __cdecl core_teleport_cpp_CTeleportDest_showEditorHelp_FUN_005da970(CTeleportDest *this_ptr,int *y_pos)

#include "nocturne.h"

void __cdecl
core_teleport_cpp_CTeleportDest_showEditorHelp_FUN_005da970(CTeleportDest *this_ptr,int *y_pos)

{
  core_actor_cpp_CDemonActor_showEditorHelp_FUN_0040d150(&this_ptr->base,y_pos);
  *y_pos = *y_pos + 0xb;
  core_actor_cpp_drawTwoColumnPropertyLine_FUN_0040d1e0
            (y_pos,"T","Show list of teleporters which go to this teleport dest.");
  return;
}

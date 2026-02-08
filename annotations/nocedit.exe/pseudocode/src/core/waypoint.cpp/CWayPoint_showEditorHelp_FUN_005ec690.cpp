// Name: core_waypoint.cpp_CWayPoint_showEditorHelp_FUN_005ec690
// Address: 005ec690
// Address Range: [[005ec690, 005ec6f7]]
// Convention: __cdecl
// Signature: void __cdecl core_waypoint_cpp_CWayPoint_showEditorHelp_FUN_005ec690(CWayPoint *this_ptr,int *y_pos)

#include "nocturne.h"

void __cdecl core_waypoint_cpp_CWayPoint_showEditorHelp_FUN_005ec690(CWayPoint *this_ptr,int *y_pos)

{
  core_trigger_cpp_CTrigger_showEditorHelp_FUN_005e1350(&this_ptr->base,y_pos);
  *y_pos = *y_pos + 0xb;
  core_actor_cpp_drawTwoColumnPropertyLine_FUN_0040d1e0
            (y_pos,"</>","Prev/next waypoint on trail.");
  core_actor_cpp_drawTwoColumnPropertyLine_FUN_0040d1e0
            (y_pos,"CTRL+B","Add WayPoint BEFORE this waypoint.");
  core_actor_cpp_drawTwoColumnPropertyLine_FUN_0040d1e0
            (y_pos,"CTRL+A","Add WayPoint AFTER this waypoint.");
  core_actor_cpp_drawTwoColumnPropertyLine_FUN_0040d1e0
            (y_pos,"CTRL+I","Insert WayPoint into trail.");
  return;
}

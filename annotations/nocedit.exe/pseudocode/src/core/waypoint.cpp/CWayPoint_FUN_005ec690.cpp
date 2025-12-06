// Name: core_waypoint.cpp_CWayPoint_FUN_005ec690
// Address: 005ec690
// Address Range: [[005ec690, 005ec6f7]]
// Convention: __cdecl
// Signature: void core_waypoint.cpp_CWayPoint_FUN_005ec690(CWayPoint * this_ptr)

#include "nocturne.h"

void __cdecl core_waypoint_cpp_CWayPoint_FUN_005ec690(CWayPoint *this_ptr)

{
  int *in_stack_00000008;
  
  core_trigger_cpp_CTrigger_FUN_005e1350(&this_ptr->base_trigger);
  *in_stack_00000008 = *in_stack_00000008 + 0xb;
  core_actor_cpp_drawTwoColumnPropertyLine_FUN_0040d1e0
            (in_stack_00000008,"</>","Prev/next waypoint on trail.");
  core_actor_cpp_drawTwoColumnPropertyLine_FUN_0040d1e0
            (in_stack_00000008,"CTRL+B","Add WayPoint BEFORE this waypoint.");
  core_actor_cpp_drawTwoColumnPropertyLine_FUN_0040d1e0
            (in_stack_00000008,"CTRL+A","Add WayPoint AFTER this waypoint.");
  core_actor_cpp_drawTwoColumnPropertyLine_FUN_0040d1e0
            (in_stack_00000008,"CTRL+I","Insert WayPoint into trail.");
  return;
}

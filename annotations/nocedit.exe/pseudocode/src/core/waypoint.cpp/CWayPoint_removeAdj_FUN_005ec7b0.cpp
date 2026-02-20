// Name: core_waypoint.cpp_CWayPoint_removeAdj_FUN_005ec7b0
// Address: 005ec7b0
// Address Range: [[005ec7b0, 005ec821]]
// Convention: __cdecl
// Signature: void __cdecl core_waypoint_cpp_CWayPoint_removeAdj_FUN_005ec7b0(CWayPoint *this_ptr,int index)

#include "nocturne.h"

void __cdecl core_waypoint_cpp_CWayPoint_removeAdj_FUN_005ec7b0(CWayPoint *this_ptr,int index)

{
  int iVar1;
  
  if ((index < 0) || (this_ptr->num_adjacent_waypoints <= index)) {
    g_CurrentFilename = "..\\core\\waypoint.cpp";
    g_CurrentLineNumber = 399;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CWayPoint::removeAdj - invalid index");
  }
  iVar1 = this_ptr->num_adjacent_waypoints + -1;
  this_ptr->num_adjacent_waypoints = iVar1;
  memmove
            (this_ptr->adjacency + index,this_ptr->adjacency + index + 1,(iVar1 - index) * 8);
  return;
}

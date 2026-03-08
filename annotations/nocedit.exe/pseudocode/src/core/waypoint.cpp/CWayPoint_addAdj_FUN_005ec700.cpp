// Name: core_waypoint.cpp_CWayPoint_addAdj_FUN_005ec700
// Address: 005ec700
// Address Range: [[005ec700, 005ec7a3]]
// Convention: __cdecl
// Signature: void __cdecl core_waypoint_cpp_CWayPoint_addAdj_FUN_005ec700(CWayPoint *this_ptr,CWayPoint *target)

#include "nocturne.h"

void __cdecl core_waypoint_cpp_CWayPoint_addAdj_FUN_005ec700(CWayPoint *this_ptr,CWayPoint *target)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  core_waypoint_cpp_CWayPoint_cleanupAdjacency_FUN_005ec830(this_ptr);
  core_waypoint_cpp_CWayPoint_removeAllAdjTo_FUN_005ec640(this_ptr,target);
  if (0x3b < this_ptr->num_adjacent_waypoints) {
    g_CurrentFilename = "..\\core\\waypoint.cpp";
    g_CurrentLineNumber = 0x188;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CWayPoint::addAdj - too many adjacent waypoints!");
  }
  this_ptr->adjacency[this_ptr->num_adjacent_waypoints].waypoint = target;
  fVar1 = (this_ptr->base).base.location.position.x - (target->base).base.location.position.x;
  fVar3 = (this_ptr->base).base.location.position.y - (target->base).base.location.position.y;
  fVar2 = (this_ptr->base).base.location.position.z - (target->base).base.location.position.z;
  this_ptr->adjacency[this_ptr->num_adjacent_waypoints].distance =
       SQRT(fVar2 * fVar2 + fVar3 * fVar3 + fVar1 * fVar1);
  this_ptr->num_adjacent_waypoints = this_ptr->num_adjacent_waypoints + 1;
  return;
}

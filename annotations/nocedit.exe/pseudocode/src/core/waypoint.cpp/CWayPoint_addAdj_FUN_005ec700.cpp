// Name: core_waypoint.cpp_CWayPoint_addAdj_FUN_005ec700
// Address: 005ec700
// Address Range: [[005ec700, 005ec7a3]]
// Convention: __cdecl
// Signature: void __cdecl core_waypoint_cpp_CWayPoint_addAdj_FUN_005ec700(CWayPoint *this_ptr)

#include "nocturne.h"

void __cdecl core_waypoint_cpp_CWayPoint_addAdj_FUN_005ec700(CWayPoint *this_ptr)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int in_stack_00000008;
  
  core_waypoint_cpp_CWayPoint_FUN_005ec830(this_ptr);
  core_waypoint_cpp_CWayPoint_FUN_005ec640(this_ptr);
  if (0x3b < this_ptr->num_adjacent_waypoints) {
    g_CurrentFilename = "..\\core\\waypoint.cpp";
    g_CurrentLineNumber = 0x188;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CWayPoint::addAdj - too many adjacent waypoints!");
  }
  *(int *)(this_ptr->unk + this_ptr->num_adjacent_waypoints * 8) = in_stack_00000008;
  fVar1 = (this_ptr->base).base.location.position.x - *(float *)(in_stack_00000008 + 0x20);
  fVar3 = (this_ptr->base).base.location.position.y - *(float *)(in_stack_00000008 + 0x24);
  fVar2 = (this_ptr->base).base.location.position.z - *(float *)(in_stack_00000008 + 0x28);
  *(float *)(this_ptr->unk + this_ptr->num_adjacent_waypoints * 8 + 4) =
       SQRT(fVar2 * fVar2 + fVar3 * fVar3 + fVar1 * fVar1);
  this_ptr->num_adjacent_waypoints = this_ptr->num_adjacent_waypoints + 1;
  return;
}

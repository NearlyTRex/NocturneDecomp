// Name: core_waypoint.cpp_CallWayPoint_removeAdj_FUN_005ec640
// Address: 005ec640
// Address Range: [[005ec640, 005ec689]]
// Convention: unknown
// Signature: undefined core_waypoint.cpp_CallWayPoint_removeAdj_FUN_005ec640()

#include "nocturne.h"

/* Signature: byte actors_other_waypoint.cpp_CallWayPoint_removeAdj(uint param_1,
   uint param_2) */

void core_waypoint_cpp_CallWayPoint_removeAdj_FUN_005ec640(void)

{
  int iVar1;
  int iVar2;
  int in_stack_00000004;
  int in_stack_00000008;
  
  iVar1 = 0;
  iVar2 = in_stack_00000004;
  if (0 < *(int *)(in_stack_00000004 + 0x370)) {
    do {
      while (in_stack_00000008 == *(int *)(iVar2 + 0x374)) {
        core_waypoint_cpp_CWayPoint_removeAdj_FUN_005ec7b0();
        if (*(int *)(in_stack_00000004 + 0x370) <= iVar1) {
          return;
        }
      }
      iVar1 = iVar1 + 1;
      iVar2 = iVar2 + 8;
    } while (iVar1 < *(int *)(in_stack_00000004 + 0x370));
  }
  return;
}

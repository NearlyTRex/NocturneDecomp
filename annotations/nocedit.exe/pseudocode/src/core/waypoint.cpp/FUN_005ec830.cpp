// Name: core_waypoint.cpp_FUN_005ec830
// Address: 005ec830
// Address Range: [[005ec830, 005ec8ce]]
// Convention: unknown
// Signature: undefined core_waypoint.cpp_FUN_005ec830()

#include "nocturne.h"

/* Signature: byte actors_other_waypoint.cpp_FUN_005ec830(uint param_1) */

void core_waypoint_cpp_FUN_005ec830(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int in_stack_00000004;
  uint local_14;
  
  local_14 = 0;
  iVar1 = in_stack_00000004;
  if (0 < *(int *)(in_stack_00000004 + 0x370)) {
    do {
      if ((*(int *)(iVar1 + 0x374) == 0) || (in_stack_00000004 == *(int *)(iVar1 + 0x374))) {
        core_waypoint_cpp_CWayPoint_removeAdj_FUN_005ec7b0();
      }
      else {
        iVar2 = local_14 + 1;
        if (iVar2 < *(int *)(in_stack_00000004 + 0x370)) {
          iVar3 = iVar2 * 8 + in_stack_00000004;
          do {
            if (*(int *)(iVar3 + 0x374) == *(int *)(iVar1 + 0x374)) {
              core_waypoint_cpp_CWayPoint_removeAdj_FUN_005ec7b0();
            }
            else {
              iVar2 = iVar2 + 1;
              iVar3 = iVar3 + 8;
            }
          } while (iVar2 < *(int *)(in_stack_00000004 + 0x370));
        }
        local_14 = local_14 + 1;
        iVar1 = iVar1 + 8;
      }
    } while (local_14 < *(int *)(in_stack_00000004 + 0x370));
  }
  return;
}

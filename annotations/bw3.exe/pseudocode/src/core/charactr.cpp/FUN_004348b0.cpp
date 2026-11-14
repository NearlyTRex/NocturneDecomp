// Name: core_charactr.cpp_FUN_004348b0
// Address: 004348b0
// Address Range: [[004348b0, 004349c4]]
// Convention: unknown
// Signature: int core_charactr_cpp_FUN_004348b0(int param_1,char *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int core_charactr_cpp_FUN_004348b0(int param_1,char *param_2)

{
  char *target_string;
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int local_1f64 [2002];
  int local_1c;
  int local_18;
  
  iVar7 = 0;
  local_1c = 0;
  iVar6 = 0;
  for (local_18 = 0; local_18 < g_CDemonSetPtr->waypoint_count; local_18 = local_18 + 1) {
    target_string = *(char **)((int)g_CDemonSetPtr->waypoints + iVar7);
    iVar5 = shape_edittool_cpp_wildcardStringMatch_FUN_00486a40(param_2,target_string,0);
    iVar4 = iVar6;
    if ((iVar5 != 0) &&
       (fVar1 = *(float *)(param_1 + 0x20) - *(float *)(target_string + 0x20),
       fVar3 = *(float *)(param_1 + 0x24) - *(float *)(target_string + 0x24),
       fVar2 = *(float *)(param_1 + 0x28) - *(float *)(target_string + 0x28),
       SQRT(fVar2 * fVar2 + fVar3 * fVar3 + fVar1 * fVar1) <= _DAT_005b892a)) {
      iVar4 = iVar6 + 4;
      local_1c = local_1c + 1;
      *(char **)((int)local_1f64 + iVar6) = target_string;
    }
    iVar7 = iVar7 + 4;
    iVar6 = iVar4;
  }
  if (0 < local_1c) {
    iVar6 = local_1c + -1;
    iVar7 = 0;
    do {
      iVar4 = core_actor_cpp_getRandomInt_FUN_0040cea0(0,iVar6);
      if (local_1f64[iVar4] != 0) {
        iVar5 = core_charactr_cpp_FUN_004349d0(param_1,local_1f64[iVar4]);
        if (iVar5 != 0) {
          return iVar5;
        }
        local_1f64[iVar4] = 0;
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < 10);
  }
  return 0;
}

// Name: core_charactr.cpp_CCharacter_pickRandomNamedWaypoint_FUN_00435380
// Address: 00435380
// Address Range: [[00435380, 00435494]]
// Convention: __cdecl
// Signature: CWayPoint * __cdecl core_charactr_cpp_CCharacter_pickRandomNamedWaypoint_FUN_00435380(CCharacter *this_ptr,char *name_pattern)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CWayPoint * __cdecl core_charactr_cpp_CCharacter_pickRandomNamedWaypoint_FUN_00435380(CCharacter *this_ptr,char *name_pattern)

{
  char *target_string;
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  CWayPoint *pCVar6;
  int iVar7;
  int iVar8;
  uint local_1f64 [2002];
  int local_1c;
  int local_18;
  
  iVar8 = 0;
  local_1c = 0;
  iVar7 = 0;
  for (local_18 = 0; local_18 < g_CDemonSetPtr->waypoint_count; local_18 = local_18 + 1) {
    target_string = *(char **)((int)g_CDemonSetPtr->waypoints + iVar8);
    iVar5 = shape_edittool_cpp_wildcardStringMatch_FUN_0049dea0(name_pattern,target_string,0);
    iVar4 = iVar7;
    if ((iVar5 != 0) &&
       (fVar1 = (this_ptr->base).location.position.x - *(float *)(target_string + 0x20),
       fVar3 = (this_ptr->base).location.position.y - *(float *)(target_string + 0x24),
       fVar2 = (this_ptr->base).location.position.z - *(float *)(target_string + 0x28),
       SQRT(fVar2 * fVar2 + fVar3 * fVar3 + fVar1 * fVar1) <= _DAT_005d5feb)) {
      iVar4 = iVar7 + 4;
      local_1c = local_1c + 1;
      *(char **)((int)local_1f64 + iVar7) = target_string;
    }
    iVar8 = iVar8 + 4;
    iVar7 = iVar4;
  }
  if (0 < local_1c) {
    iVar7 = local_1c + -1;
    iVar8 = 0;
    do {
      iVar4 = core_actor_cpp_getRandomInt_FUN_0040cc60(0,iVar7);
      if ((CWayPoint *)local_1f64[iVar4] != (CWayPoint *)0x0) {
        pCVar6 = core_charactr_cpp_CCharacter_findNearestReachableWaypoint_FUN_004354a0
                           (this_ptr,(CWayPoint *)local_1f64[iVar4]);
        if (pCVar6 != (CWayPoint *)0x0) {
          return pCVar6;
        }
        local_1f64[iVar4] = 0;
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 < 10);
  }
  return (CWayPoint *)0x0;
}

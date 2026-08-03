// Name: core_charactr.cpp_CCharacter_updateWanderToWaypoint_FUN_0042a1e0
// Address: 0042a1e0
// Address Range: [[0042a1e0, 0042a4fd]]
// Convention: __cdecl
// Signature: int __cdecl core_charactr_cpp_CCharacter_updateWanderToWaypoint_FUN_0042a1e0(CCharacter *this_ptr,float delta_time,char *pattern)

#include "nocturne.h"

int __cdecl core_charactr_cpp_CCharacter_updateWanderToWaypoint_FUN_0042a1e0(CCharacter *this_ptr,float delta_time,char *pattern)

{
  char *target_string;
  float fVar1;
  int iVar2;
  CWayPoint *pCVar3;
  CPathMap *path_map;
  int iVar4;
  int iVar5;
  CVector3f *direction;
  float fVar6;
  float fVar7;
  uint local_1f80 [2005];
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  CLocation *local_1c;
  float local_14;
  
  if ((pattern == (char *)0x0) || (*pattern == '\0')) {
    this_ptr->wander_nearest_waypoint = (CWayPoint *)0x0;
    this_ptr->wander_cooldown = 0.0;
    this_ptr->wander_target = (CWayPoint *)0x0;
    return 0;
  }
  fVar6 = this_ptr->wander_cooldown - delta_time;
  this_ptr->wander_cooldown = fVar6;
  if (0.0 < fVar6) goto LAB_0042a39c;
  pCVar3 = this_ptr->wander_target;
  if ((pCVar3 == (CWayPoint *)0x0) ||
     (fVar6 = (pCVar3->base).base.location.position.x - (this_ptr->base).location.position.x,
     fVar1 = (pCVar3->base).base.location.position.y - (this_ptr->base).location.position.y,
     fVar7 = (pCVar3->base).base.location.position.z - (this_ptr->base).location.position.z,
     (float)4 <= SQRT(fVar7 * fVar7 + fVar1 * fVar1 + fVar6 * fVar6))) {
    if (this_ptr->wander_nearest_waypoint == (CWayPoint *)0x0) goto LAB_0042a274;
    if (this_ptr->wander_target == (CWayPoint *)0x0) goto LAB_0042a27e;
    pCVar3 = core_waypoint_cpp_CWayPoint_findNearestReachable_FUN_00552680
                       ((CWayPoint *)&(this_ptr->base).location,this_ptr->wander_target);
    this_ptr->wander_nearest_waypoint = pCVar3;
  }
  else {
    this_ptr->wander_nearest_waypoint = (CWayPoint *)0x0;
LAB_0042a274:
    this_ptr->wander_target = (CWayPoint *)0x0;
LAB_0042a27e:
    this_ptr->wander_nearest_waypoint = (CWayPoint *)0x0;
    local_28 = 0;
    local_1c = &(this_ptr->base).location;
    local_24 = 0;
    iVar5 = 0;
    for (local_20 = 0; local_20 < g_CDemonSet_PTR_005be368->waypoint_count; local_20 = local_20 + 1)
    {
      target_string = *(char **)((int)g_CDemonSet_PTR_005be368->waypoints + local_24);
      iVar2 = shape_edittool_cpp_wildcardStringMatch_FUN_004775b0(pattern,target_string,0);
      iVar4 = iVar5;
      if ((iVar2 != 0) &&
         (fVar6 = (local_1c->position).x - *(float *)(target_string + 0x20),
         fVar1 = (local_1c->position).y - *(float *)(target_string + 0x24),
         fVar7 = (local_1c->position).z - *(float *)(target_string + 0x28),
         20.0f <= SQRT(fVar7 * fVar7 + fVar1 * fVar1 + fVar6 * fVar6))) {
        iVar4 = iVar5 + 4;
        local_28 = local_28 + 1;
        *(char **)((int)local_1f80 + iVar5) = target_string;
      }
      local_24 = local_24 + 4;
      iVar5 = iVar4;
    }
    if (0 < local_28) {
      local_2c = local_28 + -1;
      iVar5 = 0;
      do {
        while( true ) {
          iVar4 = core_actor_cpp_getRandomInt_FUN_0040de00(0,local_2c);
          if ((CWayPoint *)local_1f80[iVar4] != (CWayPoint *)0x0) break;
          iVar5 = iVar5 + 1;
          if (9 < iVar5) goto LAB_0042a369;
        }
        pCVar3 = core_waypoint_cpp_CWayPoint_findNearestReachable_FUN_00552680
                           ((CWayPoint *)&(this_ptr->base).location,(CWayPoint *)local_1f80[iVar4]);
        this_ptr->wander_nearest_waypoint = pCVar3;
        if (pCVar3 != (CWayPoint *)0x0) {
          this_ptr->wander_target = (CWayPoint *)local_1f80[iVar4];
          break;
        }
        local_1f80[iVar4] = 0;
        iVar5 = iVar5 + 1;
      } while (iVar5 < 10);
    }
  }
LAB_0042a369:
  if (this_ptr->wander_nearest_waypoint == (CWayPoint *)0x0) {
    fVar7 = 10.0;
    fVar6 = 4.0;
  }
  else {
    fVar7 = 2.0;
    fVar6 = 1.0;
  }
  local_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(fVar6,fVar7);
  this_ptr->wander_cooldown = local_14;
LAB_0042a39c:
  pCVar3 = this_ptr->wander_nearest_waypoint;
  if (pCVar3 == (CWayPoint *)0x0) {
    return 0;
  }
  fVar7 = 0.0;
  fVar6 = 0.0;
  direction = (CVector3f *)&DAT_02dd1184;
  path_map = (*((pCVar3->base).base.vtable._ub)->getPathMap)((CDemonActor *)pCVar3);
  iVar5 = core_charactr_cpp_CCharacter_walkToPoint_FUN_004247f0
                    (this_ptr,&(this_ptr->wander_nearest_waypoint->base).base.location.position,
                     path_map,direction,fVar6,fVar7);
  if (iVar5 == 0) {
    return 1;
  }
  if (iVar5 < 0) {
    this_ptr->wander_nearest_waypoint = (CWayPoint *)0x0;
    return 0;
  }
  return 0;
}

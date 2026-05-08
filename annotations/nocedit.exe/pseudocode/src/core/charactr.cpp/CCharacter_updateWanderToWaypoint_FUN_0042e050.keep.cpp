// Name: core_charactr.cpp_CCharacter_updateWanderToWaypoint_FUN_0042e050
// Address: 0042e050
// MANUAL RECONSTRUCTION
// Address Range: [[0042e050, 0042e36d]]
// Convention: __cdecl
// Signature: int __cdecl core_charactr_cpp_CCharacter_updateWanderToWaypoint_FUN_0042e050(CCharacter *this_ptr,float delta_time,char *pattern)

#include "nocturne.h"

int __cdecl core_charactr_cpp_CCharacter_updateWanderToWaypoint_FUN_0042e050(CCharacter *this_ptr,float delta_time,char *pattern)

{
  float fVar2;
  int iVar2;
  CWayPoint *pCVar4;
  int iVar6;
  CWayPoint *pCVar3;
  CPathMap *path_map;
  int iVar5;
  float fVar8;
  float fVar9;
  CWayPoint *local_1f80 [2005];
  int local_2c;
  int local_28;
  int local_20;
  CLocation *local_1c;
  float local_14;
  CWayPoint *waypoint;
  float fVar1;
  UVector3 *direction;
  float fVar6;
  float fVar7;
  
  if ((pattern == (char *)0x0) || (*pattern == '\0')) {
    this_ptr->wander_nearest_waypoint = (CWayPoint *)0x0;
    this_ptr->wander_cooldown = 0.0;
    this_ptr->wander_target = (CWayPoint *)0x0;
    return 0;
  }
  fVar8 = this_ptr->wander_cooldown - delta_time;
  this_ptr->wander_cooldown = fVar8;
  if (0.0 < fVar8) goto LAB_0042e20c;
  pCVar4 = this_ptr->wander_target;
  if ((pCVar4 == (CWayPoint *)0x0) ||
     (fVar8 = (pCVar4->base).base.location.position.x - (this_ptr->base).location.position.x,
     fVar1 = (pCVar4->base).base.location.position.y - (this_ptr->base).location.position.y,
     fVar9 = (pCVar4->base).base.location.position.z - (this_ptr->base).location.position.z,
     (float)4 <= SQRT(fVar9 * fVar9 + fVar1 * fVar1 + fVar8 * fVar8))) {
    if (this_ptr->wander_nearest_waypoint == (CWayPoint *)0x0) goto LAB_0042e0e4;
    if (this_ptr->wander_target == (CWayPoint *)0x0) goto LAB_0042e0ee;
    pCVar4 = core_waypoint_cpp_CWayPoint_findNearestReachable_FUN_005ec320
                       ((CWayPoint *)&(this_ptr->base).location,this_ptr->wander_target);
    this_ptr->wander_nearest_waypoint = pCVar4;
  }
  else {
    this_ptr->wander_nearest_waypoint = (CWayPoint *)0x0;
LAB_0042e0e4:
    this_ptr->wander_target = (CWayPoint *)0x0;
LAB_0042e0ee:
    this_ptr->wander_nearest_waypoint = (CWayPoint *)0x0;
    local_28 = 0;
    local_1c = &(this_ptr->base).location;
    for (local_20 = 0; local_20 < g_CDemonSetPtr->waypoint_count; local_20 = local_20 + 1) {
      waypoint = g_CDemonSetPtr->waypoints[local_20];
      iVar2 = shape_edittool_cpp_wildcardStringMatch_FUN_004a6e20(pattern,waypoint->base.base.actor_name,0);
      if ((iVar2 != 0) &&
         (fVar8 = (local_1c->position).x - (waypoint->base.base.location.position).x,
         fVar2 = (local_1c->position).y - (waypoint->base.base.location.position).y,
         fVar9 = (local_1c->position).z - (waypoint->base.base.location.position).z,
         20.0f <= SQRT(fVar9 * fVar9 + fVar2 * fVar2 + fVar8 * fVar8))) {
        local_1f80[local_28] = waypoint;
        local_28 = local_28 + 1;
      }
    }
    if (0 < local_28) {
      local_2c = local_28 + -1;
      iVar5 = 0;
      do {
        while( true ) {
          iVar6 = core_actor_cpp_getRandomInt_FUN_0040cc70(0,local_2c);
          if (local_1f80[iVar6] != (CWayPoint *)0x0) break;
          iVar5 = iVar5 + 1;
          if (9 < iVar5) goto LAB_0042e1d9;
        }
        pCVar3 = core_waypoint_cpp_CWayPoint_findNearestReachable_FUN_005ec320
                           ((CWayPoint *)&(this_ptr->base).location,local_1f80[iVar6]);
        this_ptr->wander_nearest_waypoint = pCVar3;
        if (pCVar3 != (CWayPoint *)0x0) {
          this_ptr->wander_target = local_1f80[iVar6];
          break;
        }
        local_1f80[iVar6] = (CWayPoint *)0x0;
        iVar5 = iVar5 + 1;
      } while (iVar5 < 10);
    }
  }
LAB_0042e1d9:
  if (this_ptr->wander_nearest_waypoint == (CWayPoint *)0x0) {
    fVar7 = 10.0;
    fVar6 = 4.0;
  }
  else {
    fVar7 = 2.0;
    fVar6 = 1.0;
  }
  local_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc10(fVar6,fVar7);
  this_ptr->wander_cooldown = local_14;
LAB_0042e20c:
  pCVar4 = this_ptr->wander_nearest_waypoint;
  if (pCVar4 == (CWayPoint *)0x0) {
    return 0;
  }
  fVar9 = 0.0;
  fVar8 = 0.0;
  direction = &g_ZeroVector;
  path_map = (*((pCVar4->base).base.vtable._ub)->getPathMap)((CDemonActor *)pCVar4);
  iVar6 = core_charactr_cpp_CCharacter_walkToPoint_FUN_004286e0
                    (this_ptr,&(this_ptr->wander_nearest_waypoint->base).base.location.position,
                     path_map,&direction->f,fVar8,fVar9);
  if (iVar6 == 0) {
    return 1;
  }
  if (iVar6 < 0) {
    this_ptr->wander_nearest_waypoint = (CWayPoint *)0x0;
    return 0;
  }
  return 0;
}

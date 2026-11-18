// Name: core_charactr.cpp_CCharacter_updateWanderToWaypoint_FUN_004333e0
// Address: 004333e0
// Address Range: [[004333e0, 00433571]]
// Convention: __cdecl
// Signature: int __cdecl core_charactr_cpp_CCharacter_updateWanderToWaypoint_FUN_004333e0(CCharacter *this_ptr,float delta_time,char *pattern)

#include "nocturne.h"

int __cdecl core_charactr_cpp_CCharacter_updateWanderToWaypoint_FUN_004333e0(CCharacter *this_ptr,float delta_time,char *pattern)

{
  float fVar1;
  CWayPoint *pCVar2;
  CPathMap *path_map;
  int iVar3;
  CVector3f *direction;
  float fVar4;
  float fVar5;
  
  if ((pattern == (char *)0x0) || (*pattern == '\0')) {
    this_ptr->wander_nearest_waypoint = (CWayPoint *)0x0;
    this_ptr->wander_cooldown = 0.0;
    this_ptr->wander_target = (CWayPoint *)0x0;
    return 0;
  }
  fVar4 = this_ptr->wander_cooldown - delta_time;
  this_ptr->wander_cooldown = fVar4;
  if (0.0 < fVar4) goto LAB_004334b3;
  pCVar2 = this_ptr->wander_target;
  if ((pCVar2 == (CWayPoint *)0x0) ||
     (fVar4 = (pCVar2->base).base.location.position.x - (this_ptr->base).location.position.x,
     fVar1 = (pCVar2->base).base.location.position.y - (this_ptr->base).location.position.y,
     fVar5 = (pCVar2->base).base.location.position.z - (this_ptr->base).location.position.z,
     (float)4 <= SQRT(fVar5 * fVar5 + fVar1 * fVar1 + fVar4 * fVar4))) {
    if (this_ptr->wander_nearest_waypoint == (CWayPoint *)0x0) goto LAB_00433466;
    if (this_ptr->wander_target == (CWayPoint *)0x0) goto LAB_00433470;
    pCVar2 = core_charactr_cpp_CCharacter_findNearestReachableWaypoint_FUN_004349d0
                       (this_ptr,this_ptr->wander_target);
  }
  else {
    this_ptr->wander_nearest_waypoint = (CWayPoint *)0x0;
LAB_00433466:
    this_ptr->wander_target = (CWayPoint *)0x0;
LAB_00433470:
    pCVar2 = core_charactr_cpp_CCharacter_pickRandomNamedWaypoint_FUN_004348b0(this_ptr,pattern);
    this_ptr->wander_target = pCVar2;
  }
  this_ptr->wander_nearest_waypoint = pCVar2;
  if (this_ptr->wander_nearest_waypoint == (CWayPoint *)0x0) {
    fVar5 = 10.0;
    fVar4 = 4.0;
  }
  else {
    fVar5 = 2.0;
    fVar4 = 1.0;
  }
  fVar4 = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(fVar4,fVar5);
  this_ptr->wander_cooldown = fVar4;
LAB_004334b3:
  pCVar2 = this_ptr->wander_nearest_waypoint;
  if (pCVar2 == (CWayPoint *)0x0) {
    return 0;
  }
  fVar5 = 0.0;
  fVar4 = 0.0;
  direction = &g_ZeroVector;
  path_map = (*((pCVar2->base).base.vtable._ub)->getPathMap)((CDemonActor *)pCVar2);
  iVar3 = core_charactr_cpp_CCharacter_walkToPoint_FUN_0042b9e0
                    (this_ptr,&(this_ptr->wander_nearest_waypoint->base).base.location.position,
                     path_map,direction,fVar4,fVar5);
  if (iVar3 != 0) {
    if (iVar3 < 0) {
      this_ptr->wander_nearest_waypoint = (CWayPoint *)0x0;
      return 0;
    }
    return 0;
  }
  return 1;
}

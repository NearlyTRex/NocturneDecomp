// Name: core_charactr.cpp_FUN_00433f10
// Address: 00433f10
// Address Range: [[00433f10, 004340a1]]
// Convention: unknown
// Signature: undefined4 core_charactr_cpp_FUN_00433f10(CCharacter *param_1,float param_2,char *param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint core_charactr_cpp_FUN_00433f10(CCharacter *param_1,float param_2,char *param_3)

{
  float fVar1;
  CWayPoint *pCVar2;
  CPathMap *path_map;
  int iVar3;
  CVector3f *direction;
  float fVar4;
  float fVar5;
  
  if ((param_3 == (char *)0x0) || (*param_3 == '\0')) {
    param_1->wander_nearest_waypoint = (CWayPoint *)0x0;
    param_1->wander_cooldown = 0.0;
    param_1->wander_target = (CWayPoint *)0x0;
    return 0;
  }
  param_2 = param_1->wander_cooldown - param_2;
  param_1->wander_cooldown = param_2;
  if (0.0 < param_2) goto LAB_00433fe3;
  pCVar2 = param_1->wander_target;
  if ((pCVar2 == (CWayPoint *)0x0) ||
     (fVar4 = (pCVar2->base).base.location.position.x - (param_1->base).location.position.x,
     fVar1 = (pCVar2->base).base.location.position.y - (param_1->base).location.position.y,
     fVar5 = (pCVar2->base).base.location.position.z - (param_1->base).location.position.z,
     (float)_DAT_005d5dff <= SQRT(fVar5 * fVar5 + fVar1 * fVar1 + fVar4 * fVar4))) {
    if (param_1->wander_nearest_waypoint == (CWayPoint *)0x0) goto LAB_00433f96;
    if (param_1->wander_target == (CWayPoint *)0x0) goto LAB_00433fa0;
    pCVar2 = (CWayPoint *)core_charactr_cpp_FUN_004354a0(param_1,param_1->wander_target);
  }
  else {
    param_1->wander_nearest_waypoint = (CWayPoint *)0x0;
LAB_00433f96:
    param_1->wander_target = (CWayPoint *)0x0;
LAB_00433fa0:
    pCVar2 = (CWayPoint *)core_charactr_cpp_FUN_00435380(param_1,param_3);
    param_1->wander_target = pCVar2;
  }
  param_1->wander_nearest_waypoint = pCVar2;
  if (param_1->wander_nearest_waypoint == (CWayPoint *)0x0) {
    fVar5 = 10.0;
    fVar4 = 4.0;
  }
  else {
    fVar5 = 2.0;
    fVar4 = 1.0;
  }
  fVar4 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00(fVar4,fVar5);
  param_1->wander_cooldown = fVar4;
LAB_00433fe3:
  pCVar2 = param_1->wander_nearest_waypoint;
  if (pCVar2 == (CWayPoint *)0x0) {
    return 0;
  }
  fVar5 = 0.0;
  fVar4 = 0.0;
  direction = (CVector3f *)&DAT_02c8af28;
  path_map = (*((pCVar2->base).base.vtable._ub)->getPathMap)((CDemonActor *)pCVar2);
  iVar3 = core_charactr_cpp_CCharacter_walkToPoint_FUN_0042ccf0
                    (param_1,&(param_1->wander_nearest_waypoint->base).base.location.position,
                     path_map,direction,fVar4,fVar5);
  if (iVar3 != 0) {
    if (iVar3 < 0) {
      param_1->wander_nearest_waypoint = (CWayPoint *)0x0;
      return 0;
    }
    return 0;
  }
  return 1;
}

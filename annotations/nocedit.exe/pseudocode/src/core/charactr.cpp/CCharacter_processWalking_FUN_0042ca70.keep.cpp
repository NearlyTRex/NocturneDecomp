// Name: core_charactr.cpp_CCharacter_processWalking_FUN_0042ca70
// Address: 0042ca70
// MANUAL RECONSTRUCTION
// Address Range: [[0042ca70, 0042cd45]]
// Convention: __cdecl
// Signature: int __cdecl core_charactr_cpp_CCharacter_processWalking_FUN_0042ca70(CCharacter *this_ptr,float delta_time)

#include "nocturne.h"

int __cdecl core_charactr_cpp_CCharacter_processWalking_FUN_0042ca70(CCharacter *this_ptr,float delta_time)

{
  CLocation *this_ptr_00;
  float fVar1;
  CDemonActor *pCVar6;
  CPathMap *path_map;
  int iVar4;
  CVector3f *pCVar5;
  CVector3f *pCVar7;
  float fVar8;
  float fVar9;
  CWayPoint *pCVar4;
  CWayPoint *actor_ptr;
  CVector3f CStack_48;
  CVector3f local_3c;
  CVector3f CStack_30;
  CDemonActor *pCVar2;
  CCharacter_full_vtable *pCVar3;
  UVector3 *direction;
  float fVar7;
  float fVar6;
  UOrientationVector *pUVar1;
  
  if ((this_ptr->walk_to_target == (CDemonActor *)0x0) && (this_ptr->door_target == (CDoor *)0x0)) {
    return 0;
  }
  if ((0.0 <= this_ptr->walk_timeout) &&
     (fVar1 = this_ptr->walk_timeout - delta_time, this_ptr->walk_timeout = fVar1, fVar1 <= 0.0)) {
    this_ptr->walk_timeout = 0.0;
    pCVar2 = this_ptr->walk_to_target;
    this_ptr->is_walking = 0;
    (this_ptr->base).location = pCVar2->location;
    pCVar6 = this_ptr->walk_to_target;
    pUVar1 = &(this_ptr->base).orient;
    if (pUVar1 != &pCVar6->orient) {
      *pUVar1 = pCVar6->orient;
    }
    if (this_ptr->door_target != (CDoor *)0x0) {
      (*(((this_ptr->base).vtable._uc)->_uc).clearDoorTarget)(this_ptr);
    }
    return 1;
  }
  this_ptr_00 = &(this_ptr->base).location;
  if (this_ptr->door_target == (CDoor *)0x0) {
    actor_ptr = (CWayPoint *)this_ptr->walk_to_target;
    if (((0.0 <= this_ptr->walk_min_distance) &&
        (pCVar4 = (CWayPoint *)
                  core_actor_cpp_castToClassHash_FUN_0040c790
                            ((CDemonActor *)actor_ptr,g_CWayPointClassInfo.name_hash),
        pCVar4 != (CWayPoint *)0x0)) &&
       (actor_ptr = core_waypoint_cpp_CWayPoint_findNearestReachable_FUN_005ec320
                              ((CWayPoint *)this_ptr_00,pCVar4), actor_ptr == (CWayPoint *)0x0)) {
      engine_console_cpp_CConsole_printf_FUN_00441890
                (g_CConsolePtr,"%s can't figure out next waypoint trying to reach %s\n",this_ptr->base.actor_name,this_ptr->walk_to_target->actor_name
                );
      return 1;
    }
    core_charactr_cpp_CCharacter_followActor_FUN_0042c5f0
              (this_ptr,(CDemonActor *)actor_ptr,this_ptr->walk_min_distance,
               this_ptr->walk_max_distance,&this_ptr->is_walking);
    return 1;
  }
  core_door_cpp_CDoor_getOpenStandPos_FUN_00480e20
            (this_ptr->door_target,&local_3c,&this_ptr->look_offset,&this_ptr_00->position);
  fVar7 = 0.0;
  fVar6 = 0.0;
  direction = &g_ZeroVector;
  path_map = (*((this_ptr->door_target->base).vtable._ub)->getPathMap)(&this_ptr->door_target->base)
  ;
  iVar4 = core_charactr_cpp_CCharacter_walkToPoint_FUN_004286e0
                    (this_ptr,&local_3c,path_map,&direction->f,fVar6,fVar7);
  if (iVar4 < 0) {
    this_ptr->is_walking = 3;
    return 1;
  }
  if (iVar4 < 1) {
    this_ptr->is_walking = 1;
    return 1;
  }
  pCVar5 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                     (&this_ptr->base,&CStack_30,&this_ptr->door_target->open_position);
  pCVar7 = core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(&CStack_48,pCVar5);
  fVar1 = pCVar7->y;
  this_ptr->turn_angle_accumulator = fVar1;
  if ((float)0.62831853069999999 <= fVar1) {
    this_ptr->is_walking = 1;
  }
  else {
    pCVar3 = (this_ptr->base).vtable._uc;
    this_ptr->is_walking = 0;
    (*(pCVar3->_uc).clearDoorTarget)(this_ptr);
  }
  fVar1 = this_ptr->turn_speed;
  fVar8 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70(this_ptr->turn_angle_accumulator);
  fVar9 = -fVar1;
  if ((fVar9 <= fVar8) && (fVar9 = fVar8, fVar1 < fVar8)) {
    fVar9 = fVar1;
  }
  this_ptr->turn_angle_accumulator = fVar9;
  return 1;
}

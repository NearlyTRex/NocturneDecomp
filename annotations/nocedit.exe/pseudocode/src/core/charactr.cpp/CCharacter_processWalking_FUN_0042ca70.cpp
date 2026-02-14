// Name: core_charactr.cpp_CCharacter_processWalking_FUN_0042ca70
// Address: 0042ca70
// Address Range: [[0042ca70, 0042cd45]]
// Convention: __cdecl
// Signature: int __cdecl core_charactr_cpp_CCharacter_processWalking_FUN_0042ca70(CCharacter *this_ptr,float delta_time)

#include "nocturne.h"

int __cdecl core_charactr_cpp_CCharacter_processWalking_FUN_0042ca70(CCharacter *this_ptr,float delta_time)

{
  UOrientationVector *pUVar1;
  CCharacter_full_vtable *pCVar2;
  CPathMap *path_map;
  int iVar3;
  CWayPoint *pCVar4;
  CDemonActor *pCVar5;
  CVector3f *pCVar6;
  float fVar7;
  float fVar8;
  CVector3f CStack_48;
  CVector3f local_3c;
  CVector3f CStack_30;
  float fStack_1c;
  float fStack_18;
  
  if ((this_ptr->walk_to_target == (CDemonActor *)0x0) && (this_ptr->door_target == (CDoor *)0x0)) {
    return 0;
  }
  if ((0.0 <= this_ptr->walk_timeout) &&
     (fVar7 = this_ptr->walk_timeout - delta_time, this_ptr->walk_timeout = fVar7, fVar7 <= 0.0)) {
    this_ptr->walk_timeout = 0.0;
    pCVar5 = this_ptr->walk_to_target;
    this_ptr->is_walking = 0;
    (this_ptr->base).location.position.x = (pCVar5->location).position.x;
    (this_ptr->base).location.position.y = (pCVar5->location).position.y;
    (this_ptr->base).location.position.z = (pCVar5->location).position.z;
    (this_ptr->base).location.area_id = (pCVar5->location).area_id;
    pCVar5 = this_ptr->walk_to_target;
    pUVar1 = &(this_ptr->base).orient;
    if (pUVar1 != &pCVar5->orient) {
      (pUVar1->vec).x = (pCVar5->orient).vec.x;
      (this_ptr->base).orient.vec.y = (pCVar5->orient).vec.y;
      (this_ptr->base).orient.vec.z = (pCVar5->orient).vec.z;
    }
    if (this_ptr->door_target != (CDoor *)0x0) {
      (*(((this_ptr->base).vtable._uc)->_uc).clearDoorTarget)(this_ptr);
    }
    return 1;
  }
  if (this_ptr->door_target == (CDoor *)0x0) {
    pCVar5 = this_ptr->walk_to_target;
    if (((0.0 <= this_ptr->walk_min_distance) &&
        (pCVar4 = (CWayPoint *)
                  core_actor_cpp_castToClassHash_FUN_0040c790(pCVar5,g_CWayPointClassInfo.name_hash)
        , pCVar4 != (CWayPoint *)0x0)) &&
       (pCVar5 = (CDemonActor *)
                 core_waypoint_cpp_CWayPoint_FUN_005ec320((CWayPoint *)&(this_ptr->base).location),
       pCVar5 == (CDemonActor *)0x0)) {
      engine_console_cpp_CConsole_printf_FUN_00441890
                (g_CConsolePtr,"%s can't figure out next waypoint trying to reach %s\n",this_ptr,this_ptr->walk_to_target
                );
      return 1;
    }
    core_charactr_cpp_CCharacter_followActor_FUN_0042c5f0
              (this_ptr,pCVar5,this_ptr->walk_min_distance,this_ptr->walk_max_distance,
               &this_ptr->is_walking);
    return 1;
  }
  core_door_cpp_CDoor_getOpenStandPos_FUN_00480e20(this_ptr->door_target);
  fVar8 = 0.0;
  fVar7 = 0.0;
  pCVar6 = &g_ZeroVector;
  path_map = (*((this_ptr->door_target->base).vtable._ub)->getPathMap)(&this_ptr->door_target->base)
  ;
  iVar3 = core_charactr_cpp_CCharacter_walkToPoint_FUN_004286e0
                    (this_ptr,&local_3c,path_map,pCVar6,fVar7,fVar8);
  if (iVar3 < 0) {
    this_ptr->is_walking = 3;
    return 1;
  }
  if (iVar3 < 1) {
    this_ptr->is_walking = 1;
    return 1;
  }
  pCVar6 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                     (&this_ptr->base,&CStack_30,(CVector3f *)this_ptr->door_target->unk3);
  pCVar6 = core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(&CStack_48,pCVar6);
  fVar7 = pCVar6->y;
  this_ptr->turn_angle_accumulator = fVar7;
  if ((float)0.62831853069999999 <= fVar7) {
    this_ptr->is_walking = 1;
  }
  else {
    pCVar2 = (this_ptr->base).vtable._uc;
    this_ptr->is_walking = 0;
    (*(pCVar2->_uc).clearDoorTarget)(this_ptr);
  }
  fStack_18 = this_ptr->turn_angle_accumulator;
  fStack_1c = this_ptr->turn_speed;
  fVar8 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70(fStack_18);
  fVar7 = -fStack_1c;
  if ((fVar7 <= fVar8) && (fVar7 = fVar8, fStack_1c < fVar8)) {
    fVar7 = fStack_1c;
  }
  this_ptr->turn_angle_accumulator = fVar7;
  return 1;
}

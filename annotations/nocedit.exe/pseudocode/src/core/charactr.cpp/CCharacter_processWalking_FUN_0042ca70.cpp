// Name: core_charactr.cpp_CCharacter_processWalking_FUN_0042ca70
// Address: 0042ca70
// Address Range: [[0042ca70, 0042cd45]]
// Convention: __cdecl
// Signature: int __cdecl core_charactr_cpp_CCharacter_processWalking_FUN_0042ca70(CCharacter *this_ptr,float delta_time)

#include "nocturne.h"

int __cdecl
core_charactr_cpp_CCharacter_processWalking_FUN_0042ca70(CCharacter *this_ptr,float delta_time)

{
  UOrientationVector *pUVar1;
  CCharacter_full_vtable *pCVar2;
  CPathMap *path_map;
  int iVar3;
  float fVar4;
  CDemonActor *pCVar5;
  CDemonActor *pCVar6;
  CVector3f *pCVar7;
  float fVar8;
  float in_stack_ffffffb8;
  CVector3f CStack_38;
  CVector3f aCStack_2c [2];
  float fStack_14;
  
  if ((this_ptr->walk_to_target == (CDemonActor *)0x0) && (this_ptr->door_target == (CDoor *)0x0)) {
    return 0;
  }
  if ((0.0 <= this_ptr->walk_timeout) &&
     (fVar8 = this_ptr->walk_timeout - delta_time, this_ptr->walk_timeout = fVar8, fVar8 <= 0.0)) {
    this_ptr->walk_timeout = 0.0;
    pCVar6 = this_ptr->walk_to_target;
    this_ptr->is_walking = 0;
    (this_ptr->base).location.position.x = (pCVar6->location).position.x;
    (this_ptr->base).location.position.y = (pCVar6->location).position.y;
    (this_ptr->base).location.position.z = (pCVar6->location).position.z;
    (this_ptr->base).location.area_id = (pCVar6->location).area_id;
    pCVar6 = this_ptr->walk_to_target;
    pUVar1 = &(this_ptr->base).orient;
    if (pUVar1 != &pCVar6->orient) {
      (pUVar1->vec).x = (pCVar6->orient).vec.x;
      (this_ptr->base).orient.vec.y = (pCVar6->orient).vec.y;
      (this_ptr->base).orient.vec.z = (pCVar6->orient).vec.z;
    }
    if (this_ptr->door_target != (CDoor *)0x0) {
      (*(((this_ptr->base).vtable._uc)->_uc).clearDoorTarget)(this_ptr);
    }
    return 1;
  }
  if (this_ptr->door_target == (CDoor *)0x0) {
    pCVar6 = this_ptr->walk_to_target;
    if (((0.0 <= this_ptr->walk_min_distance) &&
        (pCVar5 = core_actor_cpp_castToClassHash_FUN_0040c790(pCVar6,g_CWayPointClassInfo.name_hash)
        , pCVar5 != (CDemonActor *)0x0)) &&
       (pCVar6 = (CDemonActor *)
                 core_waypoint_cpp_CWayPoint_FUN_005ec320((CWayPoint *)&(this_ptr->base).location),
       pCVar6 == (CDemonActor *)0x0)) {
      engine_console_cpp_CConsole_printf_FUN_00441890
                (g_CConsolePtr,"%s can't figure out next waypoint trying to reach %s\n",this_ptr,this_ptr->walk_to_target
                );
      return 1;
    }
    core_charactr_cpp_CCharacter_followActor_FUN_0042c5f0
              (this_ptr,pCVar6,this_ptr->walk_min_distance,this_ptr->walk_max_distance,
               &this_ptr->is_walking);
    return 1;
  }
  core_door_cpp_CDoor_getOpenStandPos_FUN_00480e20(this_ptr->door_target);
  fVar8 = 0.0;
  pCVar7 = (CVector3f *)0x0;
  path_map = (*((this_ptr->door_target->base).vtable._ub)->getPathMap)(&this_ptr->door_target->base)
  ;
  iVar3 = core_charactr_cpp_CCharacter_walkToPoint_FUN_004286e0
                    (this_ptr,&CStack_38,path_map,pCVar7,fVar8,in_stack_ffffffb8);
  if (iVar3 < 0) {
    this_ptr->is_walking = 3;
    return 1;
  }
  if (iVar3 < 1) {
    this_ptr->is_walking = 1;
    return 1;
  }
  pCVar7 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                     (&this_ptr->base,aCStack_2c,(CVector3f *)this_ptr->door_target->unk3);
  pCVar7 = core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                     ((CVector3f *)&stack0xffffffbc,pCVar7);
  fVar8 = pCVar7->y;
  this_ptr->turn_angle_accumulator = fVar8;
  if ((float)0.62831853069999999 <= fVar8) {
    this_ptr->is_walking = 1;
  }
  else {
    pCVar2 = (this_ptr->base).vtable._uc;
    this_ptr->is_walking = 0;
    (*(pCVar2->_uc).clearDoorTarget)(this_ptr);
  }
  fStack_14 = this_ptr->turn_speed;
  fVar4 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70(this_ptr->turn_angle_accumulator);
  fVar8 = -fStack_14;
  if ((fVar8 <= fVar4) && (fVar8 = fVar4, fStack_14 < fVar4)) {
    fVar8 = fStack_14;
  }
  this_ptr->turn_angle_accumulator = fVar8;
  return 1;
}

// Name: core_charactr.cpp_FUN_00428c00
// Address: 00428c00
// Address Range: [[00428c00, 00428ed5]]
// Convention: __cdecl
// Signature: int __cdecl core_charactr_cpp_FUN_00428c00(CCharacter *this_ptr,float delta_time)

#include "nocturne.h"

int __cdecl core_charactr_cpp_FUN_00428c00(CCharacter *this_ptr,float delta_time)

{
  UOrientationVector *pUVar1;
  CLocation *this_ptr_00;
  CDemonActor *pCVar2;
  CCharacter_full_vtable *pCVar3;
  CPathMap *path_map;
  int iVar4;
  CWayPoint *start_waypoint;
  CWayPoint *actor_ptr;
  CVector3f *pCVar5;
  float fVar6;
  float fVar7;
  CVector3f CStack_48;
  CVector3f local_3c;
  CVector3f CStack_30;
  float fStack_1c;
  float fStack_18;
  
  if ((this_ptr->walk_to_target == (CDemonActor *)0x0) && (this_ptr->door_target == (CDoor *)0x0)) {
    return 0;
  }
  if ((0.0 <= this_ptr->walk_timeout) &&
     (fVar6 = this_ptr->walk_timeout - delta_time, this_ptr->walk_timeout = fVar6, fVar6 <= 0.0)) {
    this_ptr->walk_timeout = 0.0;
    pCVar2 = this_ptr->walk_to_target;
    this_ptr->is_walking = 0;
    (this_ptr->base).location.position.x = (pCVar2->location).position.x;
    (this_ptr->base).location.position.y = (pCVar2->location).position.y;
    (this_ptr->base).location.position.z = (pCVar2->location).position.z;
    (this_ptr->base).location.area_id = (pCVar2->location).area_id;
    pCVar2 = this_ptr->walk_to_target;
    pUVar1 = &(this_ptr->base).orient;
    if (pUVar1 != &pCVar2->orient) {
      (pUVar1->vec).x = (pCVar2->orient).vec.x;
      (this_ptr->base).orient.vec.y = (pCVar2->orient).vec.y;
      (this_ptr->base).orient.vec.z = (pCVar2->orient).vec.z;
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
        (start_waypoint =
              (CWayPoint *)
              core_actor_cpp_castToClassHash_FUN_0040d890
                        ((CDemonActor *)actor_ptr,g_CWayPointActorType_02ddf514.name_hash),
        start_waypoint != (CWayPoint *)0x0)) &&
       (actor_ptr = core_waypoint_cpp_CWayPoint_findNearestReachable_FUN_00552680
                              ((CWayPoint *)this_ptr_00,start_waypoint),
       actor_ptr == (CWayPoint *)0x0)) {
      engine_console_cpp_CConsole_printf_FUN_0043ac60
                (PTR_DAT_005ad350,"%s can't figure out next waypoint trying to reach %s\n",this_ptr,
                 this_ptr->walk_to_target);
      return 1;
    }
    core_charactr_cpp_CCharacter_followActor_FUN_00428780
              (this_ptr,(CDemonActor *)actor_ptr,this_ptr->walk_min_distance,
               this_ptr->walk_max_distance,&this_ptr->is_walking);
    return 1;
  }
  core_door_cpp_CDoor_getOpenStandPos_FUN_00456260
            (this_ptr->door_target,&local_3c,&this_ptr->look_offset,&this_ptr_00->position);
  fVar7 = 0.0;
  fVar6 = 0.0;
  pCVar5 = (CVector3f *)&DAT_02dd1184;
  path_map = (*((this_ptr->door_target->base).vtable._ub)->getPathMap)(&this_ptr->door_target->base)
  ;
  iVar4 = core_charactr_cpp_CCharacter_walkToPoint_FUN_004247f0
                    (this_ptr,&local_3c,path_map,pCVar5,fVar6,fVar7);
  if (iVar4 < 0) {
    this_ptr->is_walking = 3;
    return 1;
  }
  if (iVar4 < 1) {
    this_ptr->is_walking = 1;
    return 1;
  }
  pCVar5 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_0040a290
                     (&this_ptr->base,&CStack_30,&this_ptr->door_target->open_position);
  pCVar5 = core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0(&CStack_48,pCVar5);
  fVar6 = pCVar5->y;
  this_ptr->turn_angle_accumulator = fVar6;
  if ((float)0.62831853069999999 <= fVar6) {
    this_ptr->is_walking = 1;
  }
  else {
    pCVar3 = (this_ptr->base).vtable._uc;
    this_ptr->is_walking = 0;
    (*(pCVar3->_uc).clearDoorTarget)(this_ptr);
  }
  fStack_18 = this_ptr->turn_angle_accumulator;
  fStack_1c = this_ptr->turn_speed;
  fVar7 = core_actor_cpp_normalizeAngleToPi_FUN_0040df00(fStack_18);
  fVar6 = -fStack_1c;
  if ((fVar6 <= fVar7) && (fVar6 = fVar7, fStack_1c < fVar7)) {
    fVar6 = fStack_1c;
  }
  this_ptr->turn_angle_accumulator = fVar6;
  return 1;
}

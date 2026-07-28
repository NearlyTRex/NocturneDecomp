// Name: core_charactr.cpp_FUN_00428c00
// Address: 00428c00
// Address Range: [[00428c00, 00428ed5]]
// Convention: unknown
// Signature: undefined4 core_charactr_cpp_FUN_00428c00(CCharacter *param_1,float param_2)

#include "nocturne.h"

uint core_charactr_cpp_FUN_00428c00(CCharacter *param_1,float param_2)

{
  UOrientationVector *pUVar1;
  CLocation *this_ptr;
  CDemonActor *pCVar2;
  CCharacter_full_vtable *pCVar3;
  CPathMap *path_map;
  int iVar4;
  float fVar5;
  float fVar6;
  CWayPoint *start_waypoint;
  CWayPoint *actor_ptr;
  CVector3f *pCVar7;
  float fVar8;
  CVector3f *in_stack_ffffffb8;
  CVector3f *in_stack_ffffffbc;
  SDamageInfo *in_stack_ffffffc0;
  SDamageInfo *in_stack_ffffffc4;
  CVector3f *in_stack_ffffffc8;
  CVector3f aCStack_2c [2];
  
  if ((param_1->walk_to_target == (CDemonActor *)0x0) && (param_1->door_target == (CDoor *)0x0)) {
    return 0;
  }
  if ((0.0 <= param_1->walk_timeout) &&
     (param_2 = param_1->walk_timeout - param_2, param_1->walk_timeout = param_2, param_2 <= 0.0)) {
    param_1->walk_timeout = 0.0;
    pCVar2 = param_1->walk_to_target;
    param_1->is_walking = 0;
    (param_1->base).location.position.x = (pCVar2->location).position.x;
    (param_1->base).location.position.y = (pCVar2->location).position.y;
    (param_1->base).location.position.z = (pCVar2->location).position.z;
    (param_1->base).location.area_id = (pCVar2->location).area_id;
    pCVar2 = param_1->walk_to_target;
    pUVar1 = &(param_1->base).orient;
    if (pUVar1 != &pCVar2->orient) {
      (pUVar1->vec).x = (pCVar2->orient).vec.x;
      (param_1->base).orient.vec.y = (pCVar2->orient).vec.y;
      (param_1->base).orient.vec.z = (pCVar2->orient).vec.z;
    }
    if (param_1->door_target != (CDoor *)0x0) {
      (*(((param_1->base).vtable._uc)->_uc).testDamageLine)
                (param_1,in_stack_ffffffb8,in_stack_ffffffbc,in_stack_ffffffc0,
                 (CVector3f *)in_stack_ffffffc4);
    }
    return 1;
  }
  this_ptr = &(param_1->base).location;
  if (param_1->door_target == (CDoor *)0x0) {
    actor_ptr = (CWayPoint *)param_1->walk_to_target;
    if (((0.0 <= param_1->walk_min_distance) &&
        (start_waypoint =
              (CWayPoint *)
              core_actor_cpp_castToClassHash_FUN_0040d890
                        ((CDemonActor *)actor_ptr,g_CWayPointActorType_02ddf514.name_hash),
        start_waypoint != (CWayPoint *)0x0)) &&
       (actor_ptr = core_waypoint_cpp_CWayPoint_findNearestReachable_FUN_00552680
                              ((CWayPoint *)this_ptr,start_waypoint), actor_ptr == (CWayPoint *)0x0)
       ) {
      engine_console_cpp_CConsole_printf_FUN_0043ac60
                (PTR_DAT_005ad350,"%s can't figure out next waypoint trying to reach %s\n",param_1,param_1->walk_to_target
                );
      return 1;
    }
    core_charactr_cpp_CCharacter_followActor_FUN_00428780
              (param_1,(CDemonActor *)actor_ptr,param_1->walk_min_distance,
               param_1->walk_max_distance,&param_1->is_walking);
    return 1;
  }
  core_door_cpp_CDoor_getOpenStandPos_FUN_00456260
            (param_1->door_target,(CVector3f *)&stack0xffffffc4,&param_1->look_offset,
             &this_ptr->position);
  fVar8 = 0.0;
  pCVar7 = (CVector3f *)0x0;
  path_map = (*((param_1->door_target->base).vtable._ub)->getPathMap)(&param_1->door_target->base);
  iVar4 = core_charactr_cpp_CCharacter_walkToPoint_FUN_004247f0
                    (param_1,(CVector3f *)&stack0xffffffc8,path_map,pCVar7,fVar8,
                     (float)in_stack_ffffffb8);
  if (iVar4 < 0) {
    param_1->is_walking = 3;
    return 1;
  }
  if (iVar4 < 1) {
    param_1->is_walking = 1;
    return 1;
  }
  pCVar7 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_0040a290
                     (&param_1->base,aCStack_2c,&param_1->door_target->open_position);
  iVar4 = core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0(&stack0xffffffbc,pCVar7);
  fVar8 = *(float *)(iVar4 + 4);
  param_1->turn_angle_accumulator = fVar8;
  if ((float)0.62831853069999999 <= fVar8) {
    param_1->is_walking = 1;
  }
  else {
    pCVar3 = (param_1->base).vtable._uc;
    param_1->is_walking = 0;
    (*(pCVar3->_uc).testDamageLine)
              (param_1,in_stack_ffffffbc,(CVector3f *)in_stack_ffffffc0,in_stack_ffffffc4,
               in_stack_ffffffc8);
  }
  fVar8 = param_1->turn_speed;
  fVar5 = (float)core_actor_cpp_normalizeAngleToPi_FUN_0040df00();
  fVar6 = -fVar8;
  if ((fVar6 <= fVar5) && (fVar6 = fVar5, fVar8 < fVar5)) {
    fVar6 = fVar8;
  }
  param_1->turn_angle_accumulator = fVar6;
  return 1;
}

// Name: core_charactr.cpp_CCharacter_processWalking_FUN_00432240
// Address: 00432240
// Address Range: [[00432240, 00432546]]
// Convention: __cdecl
// Signature: int __cdecl core_charactr_cpp_CCharacter_processWalking_FUN_00432240(CCharacter *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

int __cdecl core_charactr_cpp_CCharacter_processWalking_FUN_00432240(CCharacter *this_ptr,float delta_time)

{
  UOrientationVector *pUVar1;
  CCharacter_full_vtable *pCVar2;
  CPathMap *path_map;
  int iVar3;
  CDemonActor *pCVar4;
  CDemonActor *pCVar5;
  byte bVar6;
  float afStackY_1054 [1012];
  CVector3f *direction;
  float fVar7;
  float fVar8;
  uint uStack_6c;
  uint uStack_60;
  float fStack_5c;
  uint uStack_54;
  float local_48;
  uint uStack_3c;
  CVector3f local_30;
  float fStack_1c;
  float fStack_18;
  
  bVar6 = 0;
  if ((this_ptr->walk_to_target == (CDemonActor *)0x0) && (this_ptr->door_target == (CDoor *)0x0)) {
    return 0;
  }
  if ((0.0 <= this_ptr->walk_timeout) &&
     (fVar7 = this_ptr->walk_timeout - delta_time, this_ptr->walk_timeout = fVar7, fVar7 <= 0.0)) {
    this_ptr->walk_timeout = 0.0;
    pCVar5 = this_ptr->walk_to_target;
    this_ptr->walk_state = WALK_STATE_IDLE;
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
    this_ptr->walk_to_target = (CDemonActor *)0x0;
    if (this_ptr->door_target != (CDoor *)0x0) {
      (*(((this_ptr->base).vtable._uc)->_uc).clearDoorTarget)(this_ptr);
    }
    return 1;
  }
  if (this_ptr->door_target == (CDoor *)0x0) {
    pCVar5 = this_ptr->walk_to_target;
    if ((((0.0 <= this_ptr->walk_min_distance) && (this_ptr->is_spectral == 0)) &&
        (pCVar4 = core_actor_cpp_castToClassHash_FUN_0040c600(pCVar5,g_CWayPointClassInfo.name_hash)
        , pCVar4 != (CDemonActor *)0x0)) &&
       (pCVar5 = (CDemonActor *)core_charactr_cpp_FUN_004354a0(this_ptr,pCVar4),
       pCVar5 == (CDemonActor *)0x0)) {
      engine_console_cpp_CConsole_printf_FUN_00445430
                (g_CConsolePtr,"pB%s can't figure out next waypoint trying to reach %s\n" + 2);
      return 1;
    }
    core_charactr_cpp_FUN_00431cc0
              (this_ptr,pCVar5,this_ptr->walk_min_distance,this_ptr->walk_max_distance,
               &this_ptr->walk_state);
    return 1;
  }
  core_door_cpp_FUN_00478860
            (this_ptr->door_target,&this_ptr->look_offset,&(this_ptr->base).location);
  fVar8 = 0.0;
  fVar7 = 0.0;
  local_30.x = local_48;
  *(uint *)((int)&local_30 + (uint)bVar6 * -8 + 4) =
       *(uint *)(&stack0xffffffbc + (uint)bVar6 * -8);
  *(uint *)((int)&local_30 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8) =
       *(uint *)(&stack0xffffffc0 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
  direction = (CVector3f *)&DAT_02c8af28;
  path_map = (*((this_ptr->door_target->base).vtable._ub)->getPathMap)(&this_ptr->door_target->base)
  ;
  iVar3 = core_charactr_cpp_CCharacter_walkToPoint_FUN_0042ccf0
                    (this_ptr,&local_30,path_map,direction,fVar7,fVar8);
  if (iVar3 < 0) {
    this_ptr->walk_state = WALK_STATE_NO_PATH;
    return 1;
  }
  if (iVar3 < 1) {
    this_ptr->walk_state = WALK_STATE_WALKING;
    return 1;
  }
  core_actor_cpp_FUN_00408bb0(this_ptr,&this_ptr->door_target->open_position);
  uStack_6c = uStack_54;
  *(uint *)((int)&stack0xffffff98 + (uint)bVar6 * 0xfffffffe * 4) =
       *(uint *)(&stack0xffffffb0 + (uint)bVar6 * -8);
  *(uint *)(&stack0xffffff9c + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
       *(uint *)(&stack0xffffffb4 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
  core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005a7520(&stack0xffffff94);
  uStack_60 = uStack_3c;
  *(uint *)((int)&stack0xffffffa4 + (uint)bVar6 * -8) =
       *(uint *)(&stack0xffffffc8 + (uint)bVar6 * -8);
  *(uint *)(&stack0xffffffa8 + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
       *(uint *)(&stack0xffffffcc + (uint)bVar6 * -8 + (uint)bVar6 * -8);
  this_ptr->turn_angle_accumulator = fStack_5c;
  if ((int)fStack_5c < 0x3f20d97c) {
    pCVar2 = (this_ptr->base).vtable._uc;
    this_ptr->walk_state = WALK_STATE_IDLE;
    (*(pCVar2->_uc).clearDoorTarget)(this_ptr);
  }
  else {
    this_ptr->walk_state = WALK_STATE_WALKING;
  }
  fStack_18 = this_ptr->turn_angle_accumulator;
  fStack_1c = this_ptr->turn_speed;
  fVar8 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd60(fStack_18);
  fVar7 = -fStack_1c;
  if ((fVar7 <= fVar8) && (fVar7 = fVar8, fStack_1c < fVar8)) {
    fVar7 = fStack_1c;
  }
  this_ptr->turn_angle_accumulator = fVar7;
  return 1;
}

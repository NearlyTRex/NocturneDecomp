// Name: core_charactr.cpp_CCharacter_processWalking_FUN_00431660
// Address: 00431660
// Address Range: [[00431660, 0043196b]]
// Convention: __cdecl
// Signature: int __cdecl core_charactr_cpp_CCharacter_processWalking_FUN_00431660(CCharacter *this_ptr,float delta_time)

#include "nocturne.h"

int __cdecl core_charactr_cpp_CCharacter_processWalking_FUN_00431660(CCharacter *this_ptr,float delta_time)

{
  UOrientationVector *pUVar1;
  CDemonActor *pCVar2;
  CCharacter_full_vtable *pCVar3;
  int iVar4;
  CPathMap *path_map;
  CWayPoint *target_waypoint;
  CWayPoint *actor_ptr;
  byte bVar5;
  float afStackY_1054 [1012];
  CVector3f *direction;
  float fVar6;
  float fVar7;
  CVector3f CStack_6c;
  float fStack_60;
  float afStack_5c [2];
  CVector3f CStack_54;
  CVector3f local_48;
  CVector3f CStack_3c;
  CVector3f local_30;
  float fStack_1c;
  float fStack_18;
  
  bVar5 = 0;
  if ((this_ptr->walk_to_target == (CDemonActor *)0x0) && (this_ptr->door_target == (CDoor *)0x0)) {
    iVar4 = 0;
  }
  else {
    if ((this_ptr->walk_timeout < 0.0) ||
       (fVar6 = this_ptr->walk_timeout - delta_time, this_ptr->walk_timeout = fVar6, 0.0 < fVar6)) {
      if (this_ptr->door_target != (CDoor *)0x0) {
        core_door_cpp_CDoor_getOpenStandPos_FUN_004650a0
                  (this_ptr->door_target,&this_ptr->look_offset,&(this_ptr->base).location.position,
                   &local_48);
        fVar7 = 0.0;
        fVar6 = 0.0;
        local_30.x = local_48.x;
        *(uint *)((int)&local_30 + (uint)bVar5 * -8 + 4) =
             *(uint *)((int)&local_48 + (uint)bVar5 * -8 + 4);
        *(uint *)((int)&local_30 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8) =
             *(uint *)((int)&local_48 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8);
        direction = (CVector3f *)&DAT_02cfd900;
        path_map = (*((this_ptr->door_target->base).vtable._ub)->getPathMap)
                             (&this_ptr->door_target->base);
        iVar4 = core_charactr_cpp_CCharacter_walkToPoint_FUN_0042b9e0
                          (this_ptr,&local_30,path_map,direction,fVar6,fVar7);
        if (iVar4 < 0) {
          this_ptr->walk_state = WALK_STATE_NO_PATH;
        }
        else {
          if (iVar4 < 1) {
            this_ptr->walk_state = WALK_STATE_WALKING;
            return 1;
          }
          core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408bf0
                    (&this_ptr->base,&this_ptr->door_target->open_position,&CStack_54);
          CStack_6c.x = CStack_54.x;
          *(uint *)((int)&CStack_6c + (uint)bVar5 * -8 + 4) =
               *(uint *)((int)&CStack_54 + (uint)bVar5 * -8 + 4);
          *(uint *)((int)&CStack_6c + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8) =
               *(uint *)((int)&CStack_54 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8);
          core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_00576250(&CStack_6c,&CStack_3c);
          fStack_60 = CStack_3c.x;
          afStack_5c[(uint)bVar5 * -2] = *(float *)((int)&CStack_3c + (uint)bVar5 * -8 + 4);
          afStack_5c[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
               *(float *)((int)&CStack_3c + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8);
          this_ptr->turn_angle_accumulator = afStack_5c[0];
          if ((int)afStack_5c[0] < 0x3f20d97c) {
            pCVar3 = (this_ptr->base).vtable._uc;
            this_ptr->walk_state = WALK_STATE_IDLE;
            (*(pCVar3->_uc).clearDoorTarget)(this_ptr);
          }
          else {
            this_ptr->walk_state = WALK_STATE_WALKING;
          }
          fStack_18 = this_ptr->turn_angle_accumulator;
          fStack_1c = this_ptr->turn_speed;
          fVar7 = core_actor_cpp_normalizeAngleToPi_FUN_0040cfa0(fStack_18);
          fVar6 = -fStack_1c;
          if ((fVar6 <= fVar7) && (fVar6 = fVar7, fStack_1c < fVar7)) {
            fVar6 = fStack_1c;
          }
          this_ptr->turn_angle_accumulator = fVar6;
        }
        return 1;
      }
      actor_ptr = (CWayPoint *)this_ptr->walk_to_target;
      if ((((0.0 <= this_ptr->walk_min_distance) && (this_ptr->is_spectral == 0)) &&
          (target_waypoint =
                (CWayPoint *)
                core_actor_cpp_castToClassHash_FUN_0040c840
                          ((CDemonActor *)actor_ptr,g_CWayPointClassInfo.name_hash),
          target_waypoint != (CWayPoint *)0x0)) &&
         (actor_ptr = core_charactr_cpp_CCharacter_findNearestReachableWaypoint_FUN_004349d0
                                (this_ptr,target_waypoint), actor_ptr == (CWayPoint *)0x0)) {
        engine_console_cpp_CConsole_printf_FUN_00441ff0
                  (g_CConsolePtr,"pB%s can't figure out next waypoint trying to reach %s\n" + 2);
        return 1;
      }
      core_charactr_cpp_CCharacter_followActor_FUN_004310e0
                (this_ptr,(CDemonActor *)actor_ptr,this_ptr->walk_min_distance,
                 this_ptr->walk_max_distance,(int *)&this_ptr->walk_state);
      return 1;
    }
    this_ptr->walk_state = WALK_STATE_IDLE;
    this_ptr->walk_timeout = 0.0;
    if (this_ptr->walk_immediate_pending == 0) {
      pCVar2 = this_ptr->walk_to_target;
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
    }
    this_ptr->walk_to_target = (CDemonActor *)0x0;
    if (this_ptr->door_target != (CDoor *)0x0) {
      (*(((this_ptr->base).vtable._uc)->_uc).clearDoorTarget)(this_ptr);
    }
    iVar4 = 1;
    this_ptr->walk_immediate_pending = 0;
  }
  return iVar4;
}

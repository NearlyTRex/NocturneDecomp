// Name: core_charactr.cpp_CCharacter_processWalking_FUN_004287f0
// Address: 004287f0
// Address Range: [[004287f0, 00428aa4]]
// Convention: __cdecl
// Signature: int __cdecl core_charactr_cpp_CCharacter_processWalking_FUN_004287f0(CCharacter *this_ptr,float delta_time)

#include "nocturne.h"

int __cdecl core_charactr_cpp_CCharacter_processWalking_FUN_004287f0(CCharacter *this_ptr,float delta_time)

{
  CCharacter_full_vtable *pCVar1;
  int iVar2;
  CPathMap *path_map;
  CWayPoint *target_waypoint;
  CWayPoint *actor_ptr;
  byte bVar3;
  float afStackY_1054 [1012];
  CVector3f *direction;
  float fVar4;
  float fVar5;
  CVector3f CStack_6c;
  float fStack_60;
  float afStack_5c [2];
  CVector3f CStack_54;
  CVector3f local_48;
  CVector3f CStack_3c;
  CVector3f local_30;
  float fStack_1c;
  float fStack_18;
  
  bVar3 = 0;
  if ((this_ptr->walk_to_target == (CDemonActor *)0x0) && (this_ptr->door_target == (CDoor *)0x0)) {
    iVar2 = 0;
  }
  else {
    if ((this_ptr->walk_timeout < 0.0) ||
       (fVar4 = this_ptr->walk_timeout - delta_time, this_ptr->walk_timeout = fVar4, 0.0 < fVar4)) {
      if (this_ptr->door_target == (CDoor *)0x0) {
        actor_ptr = (CWayPoint *)this_ptr->walk_to_target;
        if ((((0.0 <= this_ptr->walk_min_distance) && (this_ptr->is_spectral == 0)) &&
            (target_waypoint =
                  (CWayPoint *)
                  core_actor_cpp_castToClassHash_FUN_0040c8f0
                            ((CDemonActor *)actor_ptr,g_CWayPointClassInfo.name_hash),
            target_waypoint != (CWayPoint *)0x0)) &&
           (actor_ptr = core_charactr_cpp_CCharacter_findNearestReachableWaypoint_FUN_0042b420
                                  (this_ptr,target_waypoint), actor_ptr == (CWayPoint *)0x0)) {
          engine_console_cpp_CConsole_printf_FUN_00436710
                    (g_CConsolePtr,"%s can't figure out next waypoint trying to reach %s\n");
          return 1;
        }
        core_charactr_cpp_CCharacter_followActor_FUN_00428260
                  (this_ptr,(CDemonActor *)actor_ptr,this_ptr->walk_min_distance,
                   this_ptr->walk_max_distance,(int *)&this_ptr->walk_state);
        return 1;
      }
      core_door_cpp_CDoor_getOpenStandPos_FUN_00460350
                (this_ptr->door_target,&this_ptr->look_offset,&(this_ptr->base).location.position,
                 &local_48);
      fVar5 = 0.0;
      fVar4 = 0.0;
      local_30.x = local_48.x;
      *(uint *)((int)&local_30 + (uint)bVar3 * -8 + 4) =
           *(uint *)((int)&local_48 + (uint)bVar3 * -8 + 4);
      *(uint *)((int)&local_30 + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8) =
           *(uint *)((int)&local_48 + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8);
      direction = &g_CVector3f_0265370c;
      path_map = (*((this_ptr->door_target->base).vtable._ub)->getPathMap)
                           (&this_ptr->door_target->base);
      iVar2 = core_charactr_cpp_CCharacter_walkToPoint_FUN_00423000
                        (this_ptr,&local_30,path_map,direction,fVar4,fVar5);
      if (iVar2 < 0) {
        this_ptr->walk_state = WALK_STATE_NO_PATH;
        return 1;
      }
      if (iVar2 < 1) {
        this_ptr->walk_state = WALK_STATE_WALKING;
        return 1;
      }
      core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408de0
                (&this_ptr->base,&this_ptr->door_target->open_position,&CStack_3c);
      CStack_6c.x = CStack_3c.x;
      *(uint *)((int)&CStack_6c + (uint)bVar3 * -8 + 4) =
           *(uint *)((int)&CStack_3c + (uint)bVar3 * -8 + 4);
      *(uint *)((int)&CStack_6c + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8) =
           *(uint *)((int)&CStack_3c + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8);
      core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005838f0(&CStack_6c,&CStack_54);
      fStack_60 = CStack_54.x;
      afStack_5c[(uint)bVar3 * -2] = *(float *)((int)&CStack_54 + (uint)bVar3 * -8 + 4);
      afStack_5c[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1] =
           *(float *)((int)&CStack_54 + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8);
      this_ptr->turn_angle_accumulator = afStack_5c[0];
      if ((int)afStack_5c[0] < 0x3f20d97c) {
        pCVar1 = (this_ptr->base).vtable._uc;
        this_ptr->walk_state = WALK_STATE_IDLE;
        (*(pCVar1->_uc).clearDoorTarget)(this_ptr);
      }
      else {
        this_ptr->walk_state = WALK_STATE_WALKING;
      }
      fStack_18 = this_ptr->turn_angle_accumulator;
      fStack_1c = this_ptr->turn_speed;
      fVar5 = core_actor_cpp_normalizeAngleToPi_FUN_0040d0c0(fStack_18);
      fVar4 = -fStack_1c;
      if ((fVar4 <= fVar5) && (fVar4 = fVar5, fStack_1c < fVar5)) {
        fVar4 = fStack_1c;
      }
      this_ptr->turn_angle_accumulator = fVar4;
      return 1;
    }
    this_ptr->walk_state = WALK_STATE_IDLE;
    this_ptr->walk_to_target = (CDemonActor *)0x0;
    this_ptr->walk_timeout = 0.0;
    if (this_ptr->door_target != (CDoor *)0x0) {
      (*(((this_ptr->base).vtable._uc)->_uc).clearDoorTarget)(this_ptr);
    }
    iVar2 = 1;
  }
  return iVar2;
}

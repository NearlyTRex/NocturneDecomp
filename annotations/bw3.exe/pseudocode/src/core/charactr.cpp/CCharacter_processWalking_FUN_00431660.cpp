// Name: core_charactr.cpp_CCharacter_processWalking_FUN_00431660
// Address: 00431660
// Address Range: [[00431660, 0043196b]]
// Convention: __cdecl
// Signature: int __cdecl core_charactr_cpp_CCharacter_processWalking_FUN_00431660(CCharacter *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

int __cdecl core_charactr_cpp_CCharacter_processWalking_FUN_00431660(CCharacter *this_ptr,float delta_time)

{
  UOrientationVector *pUVar1;
  CCharacter_full_vtable *pCVar2;
  int iVar3;
  CPathMap *path_map;
  CDemonActor *pCVar4;
  byte bVar5;
  float afStackY_1054 [1012];
  CVector3f *direction;
  float fVar6;
  float fVar7;
  uint uStack_6c;
  uint uStack_60;
  float fStack_5c;
  uint uStack_54;
  float local_48;
  uint uStack_3c;
  CVector3f local_30;
  float fStack_1c;
  float fStack_18;
  
  bVar5 = 0;
  if ((this_ptr->walk_to_target == (CDemonActor *)0x0) && (this_ptr->door_target == (CDoor *)0x0)) {
    iVar3 = 0;
  }
  else {
    if ((this_ptr->walk_timeout < 0.0) ||
       (fVar6 = this_ptr->walk_timeout - delta_time, this_ptr->walk_timeout = fVar6, 0.0 < fVar6)) {
      if (this_ptr->door_target != (CDoor *)0x0) {
        core_door_cpp_FUN_004650a0
                  (this_ptr->door_target,&this_ptr->look_offset,&(this_ptr->base).location);
        fVar7 = 0.0;
        fVar6 = 0.0;
        local_30.x = local_48;
        *(uint *)((int)&local_30 + (uint)bVar5 * -8 + 4) =
             *(uint *)(&stack0xffffffbc + (uint)bVar5 * -8);
        *(uint *)((int)&local_30 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8) =
             *(uint *)(&stack0xffffffc0 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
        direction = (CVector3f *)&DAT_02cfd900;
        path_map = (*((this_ptr->door_target->base).vtable._ub)->getPathMap)
                             (&this_ptr->door_target->base);
        iVar3 = core_charactr_cpp_CCharacter_walkToPoint_FUN_0042b9e0
                          (this_ptr,&local_30,path_map,direction,fVar6,fVar7);
        if (iVar3 < 0) {
          this_ptr->walk_state = WALK_STATE_NO_PATH;
        }
        else {
          if (iVar3 < 1) {
            this_ptr->walk_state = WALK_STATE_WALKING;
            return 1;
          }
          core_actor_cpp_FUN_00408bf0(this_ptr,&this_ptr->door_target->open_position);
          uStack_6c = uStack_54;
          *(uint *)((int)&stack0xffffff98 + (uint)bVar5 * 0xfffffffe * 4) =
               *(uint *)(&stack0xffffffb0 + (uint)bVar5 * -8);
          *(uint *)(&stack0xffffff9c + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
               *(uint *)(&stack0xffffffb4 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
          core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_00576250(&stack0xffffff94);
          uStack_60 = uStack_3c;
          *(uint *)((int)&stack0xffffffa4 + (uint)bVar5 * -8) =
               *(uint *)(&stack0xffffffc8 + (uint)bVar5 * -8);
          *(uint *)(&stack0xffffffa8 + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
               *(uint *)(&stack0xffffffcc + (uint)bVar5 * -8 + (uint)bVar5 * -8);
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
          fVar7 = (float)core_actor_cpp_normalizeAngleToPi_FUN_0040cfa0(fStack_18);
          fVar6 = -fStack_1c;
          if ((fVar6 <= fVar7) && (fVar6 = fVar7, fStack_1c < fVar7)) {
            fVar6 = fStack_1c;
          }
          this_ptr->turn_angle_accumulator = fVar6;
        }
        return 1;
      }
      pCVar4 = this_ptr->walk_to_target;
      if ((((0.0 <= this_ptr->walk_min_distance) && (this_ptr->is_spectral == 0)) &&
          (iVar3 = core_actor_cpp_castToClassHash_FUN_0040c840
                             (pCVar4,g_CWayPointClassInfo.name_hash), iVar3 != 0)) &&
         (pCVar4 = (CDemonActor *)core_charactr_cpp_FUN_004349d0(this_ptr,iVar3),
         pCVar4 == (CDemonActor *)0x0)) {
        engine_console_cpp_FUN_00441ff0
                  (g_CConsolePtr,"pB%s can't figure out next waypoint trying to reach %s\n" + 2,this_ptr,
                   this_ptr->walk_to_target);
        return 1;
      }
      core_charactr_cpp_FUN_004310e0
                (this_ptr,pCVar4,this_ptr->walk_min_distance,this_ptr->walk_max_distance,
                 &this_ptr->walk_state);
      return 1;
    }
    this_ptr->walk_state = WALK_STATE_IDLE;
    this_ptr->walk_timeout = 0.0;
    if (this_ptr->walk_immediate_pending == 0) {
      pCVar4 = this_ptr->walk_to_target;
      (this_ptr->base).location.position.x = (pCVar4->location).position.x;
      (this_ptr->base).location.position.y = (pCVar4->location).position.y;
      (this_ptr->base).location.position.z = (pCVar4->location).position.z;
      (this_ptr->base).location.area_id = (pCVar4->location).area_id;
      pCVar4 = this_ptr->walk_to_target;
      pUVar1 = &(this_ptr->base).orient;
      if (pUVar1 != &pCVar4->orient) {
        (pUVar1->vec).x = (pCVar4->orient).vec.x;
        (this_ptr->base).orient.vec.y = (pCVar4->orient).vec.y;
        (this_ptr->base).orient.vec.z = (pCVar4->orient).vec.z;
      }
    }
    this_ptr->walk_to_target = (CDemonActor *)0x0;
    if (this_ptr->door_target != (CDoor *)0x0) {
      (*(((this_ptr->base).vtable._uc)->_uc).clearDoorTarget)(this_ptr);
    }
    iVar3 = 1;
    this_ptr->walk_immediate_pending = 0;
  }
  return iVar3;
}

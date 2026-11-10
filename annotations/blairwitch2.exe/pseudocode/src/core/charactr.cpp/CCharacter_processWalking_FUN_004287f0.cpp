// Name: core_charactr.cpp_CCharacter_processWalking_FUN_004287f0
// Address: 004287f0
// Address Range: [[004287f0, 00428aa4]]
// Convention: __cdecl
// Signature: int __cdecl core_charactr_cpp_CCharacter_processWalking_FUN_004287f0(CCharacter *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

int __cdecl core_charactr_cpp_CCharacter_processWalking_FUN_004287f0(CCharacter *this_ptr,float delta_time)

{
  CCharacter_full_vtable *pCVar1;
  int iVar2;
  CPathMap *path_map;
  CDemonActor *pCVar3;
  byte bVar4;
  int aiStackY_1054 [1012];
  CVector3f *direction;
  float fVar5;
  float fVar6;
  uint uStack_6c;
  uint uStack_60;
  int iStack_5c;
  uint uStack_54;
  float local_48;
  uint auStack_44 [5];
  CVector3f local_30;
  float fStack_1c;
  uint uStack_18;
  
  bVar4 = 0;
  if ((this_ptr->walk_to_target == (CDemonActor *)0x0) && (this_ptr->door_target == (CDoor *)0x0)) {
    iVar2 = 0;
  }
  else {
    if ((this_ptr->walk_timeout < 0.0) ||
       (fVar5 = this_ptr->walk_timeout - delta_time, this_ptr->walk_timeout = fVar5, 0.0 < fVar5)) {
      if (this_ptr->door_target == (CDoor *)0x0) {
        pCVar3 = this_ptr->walk_to_target;
        if ((((0.0 <= this_ptr->walk_min_distance) && (*(int *)&this_ptr->field_0x2814 == 0)) &&
            (iVar2 = core_actor_cpp_castToClassHash_FUN_0040c8f0
                               (pCVar3,g_CWayPointClassInfo.name_hash), iVar2 != 0)) &&
           (pCVar3 = (CDemonActor *)core_charactr_cpp_FUN_0042b420(this_ptr,iVar2),
           pCVar3 == (CDemonActor *)0x0)) {
          engine_console_cpp_FUN_00436710
                    (g_CConsolePtr,"@%s can't figure out next waypoint trying to reach %s\n" + 1,this_ptr,
                     this_ptr->walk_to_target);
          return 1;
        }
        core_charactr_cpp_FUN_00428260
                  (this_ptr,pCVar3,this_ptr->walk_min_distance,this_ptr->walk_max_distance,
                   &this_ptr->walk_state);
        return 1;
      }
      core_door_cpp_FUN_00460350
                (this_ptr->door_target,&this_ptr->look_offset,&(this_ptr->base).field_0x20);
      fVar6 = 0.0;
      fVar5 = 0.0;
      local_30.x = local_48;
      *(uint *)((int)&local_30 + (uint)bVar4 * -8 + 4) = auStack_44[(uint)bVar4 * 0xfffffffe];
      *(uint *)((int)&local_30 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8) =
           auStack_44[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
      direction = (CVector3f *)&DAT_0265370c;
      path_map = (*((this_ptr->door_target->base).vtable._ub)->getPathMap)
                           (&this_ptr->door_target->base);
      iVar2 = core_charactr_cpp_CCharacter_walkToPoint_FUN_00423000
                        (this_ptr,&local_30,path_map,direction,fVar5,fVar6);
      if (iVar2 < 0) {
        this_ptr->walk_state = WALK_STATE_NO_PATH;
        return 1;
      }
      if (iVar2 < 1) {
        this_ptr->walk_state = WALK_STATE_WALKING;
        return 1;
      }
      core_actor_cpp_FUN_00408de0(this_ptr,&this_ptr->door_target->open_position);
      uStack_6c = auStack_44[2];
      *(uint *)((int)&stack0xffffff98 + (uint)bVar4 * 0xfffffffe * 4) =
           auStack_44[(uint)bVar4 * -2 + 3];
      auStack_44[(uint)bVar4 * 0xfffffffe + (uint)bVar4 * 0xfffffffe + 0xfffffff8] =
           auStack_44[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4];
      core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005838f0(&stack0xffffff94);
      uStack_60 = uStack_54;
      auStack_44[(uint)bVar4 * -2 + -6] = *(uint *)(&stack0xffffffb0 + (uint)bVar4 * -8);
      auStack_44[(uint)bVar4 * 0xfffffffe + (uint)bVar4 * 0xfffffffe + 0xfffffffb] =
           *(uint *)(&stack0xffffffb4 + (uint)bVar4 * -8 + (uint)bVar4 * -8);
      *(int *)&this_ptr->field_0x2578 = iStack_5c;
      if (iStack_5c < 0x3f20d97c) {
        pCVar1 = (this_ptr->base).vtable._uc;
        this_ptr->walk_state = WALK_STATE_IDLE;
        (*(pCVar1->_uc).clearDoorTarget)(this_ptr);
      }
      else {
        this_ptr->walk_state = WALK_STATE_WALKING;
      }
      uStack_18 = *(uint *)&this_ptr->field_0x2578;
      fStack_1c = *(float *)&this_ptr->field_0x2598;
      fVar6 = (float)core_actor_cpp_normalizeAngleToPi_FUN_0040d0c0(uStack_18);
      fVar5 = -fStack_1c;
      if ((fVar5 <= fVar6) && (fVar5 = fVar6, fStack_1c < fVar6)) {
        fVar5 = fStack_1c;
      }
      *(float *)&this_ptr->field_0x2578 = fVar5;
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

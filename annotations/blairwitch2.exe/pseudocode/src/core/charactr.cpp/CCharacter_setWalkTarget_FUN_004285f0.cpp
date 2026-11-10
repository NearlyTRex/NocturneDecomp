// Name: core_charactr.cpp_CCharacter_setWalkTarget_FUN_004285f0
// Address: 004285f0
// Address Range: [[004285f0, 0042874d]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_CCharacter_setWalkTarget_FUN_004285f0(CCharacter *this_ptr,CDemonActor *target,float min_distance,float max_distance)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_charactr_cpp_CCharacter_setWalkTarget_FUN_004285f0(CCharacter *this_ptr,CDemonActor *target,float min_distance,float max_distance)

{
  float fVar1;
  float fVar2;
  float fVar3;
  CMotionList *this_ptr_00;
  int iVar4;
  CCharacter_full_vtable *pCVar5;
  char *state_name;
  CDemonActor *error_on_not_found;
  float local_18;
  
  if (target == (CDemonActor *)0x0) {
    if (((this_ptr->walk_state != WALK_STATE_IDLE) &&
        (this_ptr->walk_to_target != (CDemonActor *)0x0)) &&
       ((this_ptr->model).field_0x2260 != '\0')) {
      state_name = "?STAND" + 1;
      error_on_not_found = target;
      this_ptr_00 = core_motion_cpp_CMotionController_getMotionList_FUN_00503860
                              ((CMotionController *)&this_ptr->model);
      iVar4 = core_motion_cpp_CMotionList_findStateIndex_FUN_00502fa0
                        (this_ptr_00,state_name,(int)error_on_not_found);
      if (-1 < iVar4) {
        core_motion_cpp_CMotionController_setDesiredStateByName_FUN_005036b0
                  ((CMotionController *)&this_ptr->model,"STAND",1);
      }
    }
    local_18 = -1.0;
    pCVar5 = (this_ptr->base).vtable._uc;
    this_ptr->walk_state = WALK_STATE_IDLE;
  }
  else {
    this_ptr->walk_state = WALK_STATE_WALKING;
    iVar4 = core_actor_cpp_isOfClass_FUN_0040c840(target,"CCharacter");
    if (iVar4 == 0) {
      fVar1 = *(float *)&(this_ptr->base).field_0x20 - *(float *)&target->field_0x20;
      fVar3 = *(float *)&(this_ptr->base).field_0x24 - *(float *)&target->field_0x24;
      fVar2 = *(float *)&(this_ptr->base).field_0x28 - *(float *)&target->field_0x28;
      local_18 = SQRT(fVar2 * fVar2 + fVar3 * fVar3 + fVar1 * fVar1) * (float)_DAT_005cced6;
      if (_DAT_005ccede <= local_18) {
        if (_DAT_005ccee2 < local_18) {
          local_18 = 60.0;
        }
      }
      else {
        local_18 = 5.0;
      }
      iVar4 = (CBasicEnemy *)core_actor_cpp_castToClassHash_FUN_0040c8f0(this_ptr,g_CBasicEnemyClassInfo.name_hash)
      ;
      if (iVar4 != 0) {
        local_18 = local_18 * _DAT_005ccee6;
      }
      pCVar5 = (this_ptr->base).vtable._uc;
    }
    else {
      local_18 = -1.0;
      pCVar5 = (this_ptr->base).vtable._uc;
    }
  }
  (*(pCVar5->_uc).setWalkTimeout)(this_ptr,local_18);
  this_ptr->walk_to_target = target;
  this_ptr->walk_min_distance = min_distance;
  this_ptr->walk_max_distance = max_distance;
  return;
}

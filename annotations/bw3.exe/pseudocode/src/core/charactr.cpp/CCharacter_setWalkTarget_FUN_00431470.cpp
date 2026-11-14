// Name: core_charactr.cpp_CCharacter_setWalkTarget_FUN_00431470
// Address: 00431470
// Address Range: [[00431470, 004315bd]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_CCharacter_setWalkTarget_FUN_00431470(CCharacter *this_ptr,CDemonActor *target,float min_distance,float max_distance)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_charactr_cpp_CCharacter_setWalkTarget_FUN_00431470(CCharacter *this_ptr,CDemonActor *target,float min_distance,float max_distance)

{
  CCharacter_full_vtable *pCVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  CMotionList *this_ptr_00;
  int iVar5;
  char *state_name;
  CDemonActor *error_on_not_found;
  float local_10;
  
  if (target == (CDemonActor *)0x0) {
    if (((this_ptr->walk_state != WALK_STATE_IDLE) &&
        (this_ptr->walk_to_target != (CDemonActor *)0x0)) &&
       ((this_ptr->model).model_name[0] != '\0')) {
      state_name = "?STAND" + 1;
      error_on_not_found = target;
      this_ptr_00 = core_motion_cpp_CMotionController_getMotionList_FUN_004fc310
                              (&(this_ptr->model).base);
      iVar5 = core_motion_cpp_CMotionList_findStateIndex_FUN_004fba50
                        (this_ptr_00,state_name,(int)error_on_not_found);
      if (-1 < iVar5) {
        core_motion_cpp_CMotionController_setDesiredStateByName_FUN_004fc160
                  (&(this_ptr->model).base,"STAND",1);
      }
    }
    pCVar1 = (this_ptr->base).vtable._uc;
    this_ptr->walk_state = WALK_STATE_IDLE;
    (*(pCVar1->_uc).setWalkTimeout)(this_ptr,-1.0);
  }
  else {
    this_ptr->walk_state = WALK_STATE_WALKING;
    iVar5 = core_actor_cpp_isOfClass_FUN_0040c790(target,"CCharacter");
    if (iVar5 == 0) {
      fVar2 = (this_ptr->base).location.position.x - (target->location).position.x;
      fVar4 = (this_ptr->base).location.position.y - (target->location).position.y;
      fVar3 = (this_ptr->base).location.position.z - (target->location).position.z;
      local_10 = SQRT(fVar3 * fVar3 + fVar4 * fVar4 + fVar2 * fVar2) * (float)_DAT_005b84ae;
      if (_DAT_005b84b6 <= local_10) {
        if (_DAT_005b84ba < local_10) {
          local_10 = 60.0;
        }
      }
      else {
        local_10 = 5.0;
      }
      (*(((this_ptr->base).vtable._uc)->_uc).setWalkTimeout)(this_ptr,local_10);
    }
    else {
      (*(((this_ptr->base).vtable._uc)->_uc).setWalkTimeout)(this_ptr,-1.0);
    }
  }
  this_ptr->walk_to_target = target;
  this_ptr->walk_min_distance = min_distance;
  this_ptr->walk_max_distance = max_distance;
  return;
}

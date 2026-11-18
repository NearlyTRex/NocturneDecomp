// Name: core_basicene.cpp_CBasicEnemy_processAlertState_FUN_0059ec10
// Address: 0059ec10
// Address Range: [[0059ec10, 0059ed47]]
// Convention: __cdecl
// Signature: void __cdecl core_basicene_cpp_CBasicEnemy_processAlertState_FUN_0059ec10(CBasicEnemy *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void __cdecl core_basicene_cpp_CBasicEnemy_processAlertState_FUN_0059ec10(CBasicEnemy *this_ptr,float delta_time)

{
  CVector3f *pCVar1;
  float fVar2;
  CEnemy_full_vtable *pCVar3;
  CCharacter *this_ptr_00;
  EDeathState EVar4;
  int iVar5;
  uint *puVar6;
  byte bVar7;
  float afStackY_1004 [1012];
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  
  bVar7 = 0;
  pCVar3 = (this_ptr->base).base.base.vtable._ue;
  (this_ptr->base).base.follow_leader = (CCharacter *)0x0;
  (*(pCVar3->_ue).updateVictim)(&this_ptr->base,delta_time);
  this_ptr_00 = (this_ptr->base).victim;
  if (this_ptr_00 != (CCharacter *)0x0) {
    EVar4 = (*(((this_ptr_00->base).vtable._uc)->_uc).getDeathState)(this_ptr_00);
    if ((EVar4 == DEATH_STATE_ALIVE) || ((this_ptr->base).script_victim == (CCharacter *)0x0)) {
      fVar2 = this_ptr->mad_timer;
      (this_ptr->base).is_in_combat = 1;
      (this_ptr->base).victim_search_timer = fVar2;
      core_muzzle_cpp_SStateMachine_setNextState_FUN_0059d8e0
                (&this_ptr->state_machine,"Chasing");
    }
    else {
      (this_ptr->base).script_victim = (CCharacter *)0x0;
      (this_ptr->base).victim = (CCharacter *)0x0;
    }
    return;
  }
  puVar6 = (uint *)((int)this_ptr + (uint)bVar7 * -8 + 0x2580);
  fStack_1c = (this_ptr->base).base.position_delta.x;
  (&stack0xffffffe8)[(uint)bVar7 * 0xfffffffe] = (float)*puVar6;
  *(uint *)((int)&stack0xffffffec + (uint)bVar7 * -8 + (uint)bVar7 * -8) =
       puVar6[(uint)bVar7 * -2 + 1];
  fStack_10 = (this_ptr->base).base.turn_angle_accumulator;
  iVar5 = core_charactr_cpp_CCharacter_walkToPoint_FUN_00423000
                    ((CCharacter *)this_ptr,&(this_ptr->initial_location).position,(CPathMap *)0x0,
                     &this_ptr->walk_direction,(this_ptr->walk_direction).z,0.17453292);
  if (iVar5 != 0) {
    pCVar1 = &(this_ptr->base).base.position_delta;
    if (pCVar1 != (CVector3f *)&stack0xffffffe4) {
      pCVar1->x = fStack_1c;
      (this_ptr->base).base.position_delta.y = fStack_18;
      (this_ptr->base).base.position_delta.z = fStack_14;
    }
    iVar5 = this_ptr->idle_motion;
    (this_ptr->base).base.turn_angle_accumulator = fStack_10;
    core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
              (&(this_ptr->base).base.model.base,iVar5,1);
    return;
  }
  core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
            (&(this_ptr->base).base.model.base,this_ptr->walk_motion,1);
  return;
}

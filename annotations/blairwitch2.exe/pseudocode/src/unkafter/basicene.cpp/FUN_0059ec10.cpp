// Name: unkafter_basicene.cpp_FUN_0059ec10
// Address: 0059ec10
// Address Range: [[0059ec10, 0059ed47]]
// Convention: unknown
// Signature: void unkafter_basicene_cpp_FUN_0059ec10(CEnemy *param_1,float param_2)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void unkafter_basicene_cpp_FUN_0059ec10(CEnemy *param_1,float param_2)

{
  CVector3f *pCVar1;
  float fVar2;
  CEnemy_full_vtable *pCVar3;
  CCharacter *this_ptr;
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
  pCVar3 = (param_1->base).base.vtable._ue;
  (param_1->base).follow_leader = (CCharacter *)0x0;
  (*(pCVar3->_ue).updateVictim)(param_1,param_2);
  this_ptr = param_1->victim;
  if (this_ptr != (CCharacter *)0x0) {
    EVar4 = (*(((this_ptr->base).vtable._uc)->_uc).getDeathState)(this_ptr);
    if ((EVar4 == DEATH_STATE_ALIVE) || (param_1->script_victim == (CCharacter *)0x0)) {
      fVar2 = param_1[1].base.model.rest_bone_scales[0x2e];
      param_1->is_in_combat = 1;
      param_1->victim_search_timer = fVar2;
      unkaddr_0059d350_cpp_FUN_0059d8e0(param_1 + 1,"Chasing");
    }
    else {
      param_1->script_victim = (CCharacter *)0x0;
      param_1->victim = (CCharacter *)0x0;
    }
    return;
  }
  puVar6 = (uint *)((int)param_1 + (uint)bVar7 * -8 + 0x2580);
  fStack_1c = (param_1->base).position_delta.x;
  (&stack0xffffffe8)[(uint)bVar7 * 0xfffffffe] = (float)*puVar6;
  *(uint *)((int)&stack0xffffffec + (uint)bVar7 * -8 + (uint)bVar7 * -8) =
       puVar6[(uint)bVar7 * -2 + 1];
  fStack_10 = (param_1->base).turn_angle_accumulator;
  iVar5 = core_charactr_cpp_CCharacter_walkToPoint_FUN_00423000
                    (&param_1->base,(CVector3f *)(param_1[1].base.model.rest_bone_scales + 0x28),
                     (CPathMap *)0x0,(CVector3f *)(param_1[1].base.model.rest_bone_scales + 0x59),
                     param_1[1].base.model.rest_bone_scales[0x5b],0.17453292);
  if (iVar5 != 0) {
    pCVar1 = &(param_1->base).position_delta;
    if (pCVar1 != (CVector3f *)&stack0xffffffe4) {
      pCVar1->x = fStack_1c;
      (param_1->base).position_delta.y = fStack_18;
      (param_1->base).position_delta.z = fStack_14;
    }
    fVar2 = param_1[1].base.model.rest_bone_scales[0x31];
    (param_1->base).turn_angle_accumulator = fStack_10;
    core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
              (&(param_1->base).model.base,(int)fVar2,1);
    return;
  }
  core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
            (&(param_1->base).model.base,(int)param_1[1].base.model.rest_bone_scales[0x32],1);
  return;
}

// Name: unkafter_basicene.cpp_FUN_0059ec10
// Address: 0059ec10
// Address Range: [[0059ec10, 0059ed47]]
// Convention: unknown
// Signature: void unkafter_basicene_cpp_FUN_0059ec10(CEnemy *param_1,float param_2)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void unkafter_basicene_cpp_FUN_0059ec10(CEnemy *param_1,float param_2)

{
  byte *puVar1;
  float fVar2;
  CEnemy_full_vtable *pCVar3;
  CCharacter *this_ptr;
  EDeathState EVar4;
  int iVar5;
  uint *puVar6;
  byte bVar7;
  uint auStackY_1004 [1012];
  uint uStack_1c;
  uint uStack_18;
  uint uStack_14;
  uint uStack_10;
  
  bVar7 = 0;
  pCVar3 = (param_1->base).base.vtable._ue;
  *(uint *)&(param_1->base).field_0x342c = 0;
  (*(pCVar3->_ue).updateVictim)(param_1,param_2);
  this_ptr = param_1->victim;
  if (this_ptr != (CCharacter *)0x0) {
    EVar4 = (*(((this_ptr->base).vtable._uc)->_uc).getDeathState)(this_ptr);
    if ((EVar4 == DEATH_STATE_ALIVE) || (param_1->script_victim == (CCharacter *)0x0)) {
      fVar2 = *(float *)&param_1[1].base.model.field_0x5cc;
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
  uStack_1c = *(uint *)&(param_1->base).field_0x257c;
  (&stack0xffffffe8)[(uint)bVar7 * 0xfffffffe] = *puVar6;
  *(uint *)((int)&stack0xffffffec + (uint)bVar7 * -8 + (uint)bVar7 * -8) =
       puVar6[(uint)bVar7 * -2 + 1];
  uStack_10 = *(uint *)&(param_1->base).field_0x2578;
  iVar5 = core_charactr_cpp_CCharacter_walkToPoint_FUN_00423000
                    (&param_1->base,(CVector3f *)&param_1[1].base.model.field_0x5b4,(CPathMap *)0x0,
                     (CVector3f *)&param_1[1].base.model.field_0x678,
                     *(float *)&param_1[1].base.model.field_0x680,0.17453292);
  if (iVar5 != 0) {
    puVar1 = &(param_1->base).field_0x257c;
    if ((uint *)puVar1 != &stack0xffffffe4) {
      *(uint *)puVar1 = uStack_1c;
      *(uint *)&(param_1->base).field_0x2580 = uStack_18;
      *(uint *)&(param_1->base).field_0x2584 = uStack_14;
    }
    iVar5 = *(int *)&param_1[1].base.model.field_0x5d8;
    *(uint *)&(param_1->base).field_0x2578 = uStack_10;
    core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
              ((CMotionController *)&(param_1->base).model,iVar5,1);
    return;
  }
  core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
            ((CMotionController *)&(param_1->base).model,*(int *)&param_1[1].base.model.field_0x5dc,
             1);
  return;
}

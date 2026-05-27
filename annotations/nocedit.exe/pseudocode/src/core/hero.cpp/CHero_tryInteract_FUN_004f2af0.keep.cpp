// Name: core_hero.cpp_CHero_tryInteract_FUN_004f2af0
// Address: 004f2af0
// MANUAL RECONSTRUCTION
// Address Range: [[004f2af0, 004f2c33]]
// Convention: __cdecl
// Signature: int __cdecl core_hero_cpp_CHero_tryInteract_FUN_004f2af0(CHero *this_ptr)

#include "nocturne.h"

int __cdecl core_hero_cpp_CHero_tryInteract_FUN_004f2af0(CHero *this_ptr)

{
  CBoundingBox3D *pCVar1;
  int iVar5;
  float fVar6;
  int iVar3;
  CDemonActor *iVar4;
  CBoundingBox3D local_64;
  CVector3f CStack_4c;
  CVector3f CStack_40;
  float fStack_1c;
  CDemonActor *iVar1;
  
  pCVar1 = (*((this_ptr->base).base.vtable._ub)->getBoundingBox)((CDemonActor *)this_ptr,&local_64);
  CStack_40.y = ((pCVar1->min).y + (pCVar1->max).y) * 0.5f;
  CStack_40.x = 0.0;
  CStack_40.z = 1.5;
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
            ((CDemonActor *)this_ptr,&CStack_4c,&CStack_40);
  fStack_1c = 1e+30;
  iVar4 = (CDemonActor *)0x0;
  for (iVar3 = 0; iVar3 < g_CDemonSetPtr->actor_count; iVar3 = iVar3 + 1) {
    iVar1 = g_CDemonSetPtr->actors[iVar3];
    fVar6 = (*((iVar1->vtable)._ub)->evaluateTriggerCondition)
                      (iVar1,(CDemonActor *)this_ptr,&CStack_4c);
    if ((0.0 <= fVar6) && (fVar6 < fStack_1c)) {
      iVar4 = g_CDemonSetPtr->actors[iVar3];
      fStack_1c = fVar6;
    }
  }
  if (iVar4 != (CDemonActor *)0x0) {
    iVar5 = (*((iVar4->vtable)._ub)->processActionButton)(iVar4);
    if (iVar5 != 0) {
      (this_ptr->player_input).action_state.fire = 0;
    }
    return 1;
  }
  return 0;
}

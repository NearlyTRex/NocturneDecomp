// Name: core_hero.cpp_CHero_tryInteract_FUN_004f2af0
// Address: 004f2af0
// Address Range: [[004f2af0, 004f2c33]]
// Convention: __cdecl
// Signature: int __cdecl core_hero_cpp_CHero_tryInteract_FUN_004f2af0(CHero *this_ptr)

#include "nocturne.h"

int __cdecl core_hero_cpp_CHero_tryInteract_FUN_004f2af0(CHero *this_ptr)

{
  CBoundingBox3D *pCVar1;
  int iVar5;
  float fVar6;
  int iVar2;
  int iVar3;
  CDemonActor *iVar4;
  CBoundingBox3D local_64;
  CVector3f CStack_4c;
  CVector3f CStack_40;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  CDemonActor *iVar1;
  
  pCVar1 = (*((this_ptr->base).base.vtable._ub)->getBoundingBox)((CDemonActor *)this_ptr,&local_64);
  CStack_40.y = ((pCVar1->min).y + (pCVar1->max).y) * 0.5f;
  CStack_40.x = 0.0;
  CStack_40.z = 1.5;
  iVar2 = 0;
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
            ((CDemonActor *)this_ptr,&CStack_4c,&CStack_40);
  fStack_1c = 1e+30;
  iVar4 = (CDemonActor *)0x0;
  for (iVar3 = 0; iVar3 < g_CDemonSetPtr->actor_count; iVar3 = iVar3 + 1) {
    iVar1 = *(CDemonActor **)((int)g_CDemonSetPtr->actors + iVar2);
    fVar6 = (*((iVar1->vtable)._ub)->evaluateTriggerCondition)
                      (iVar1,(CDemonActor *)this_ptr,&CStack_4c);
    if ((0.0 <= fVar6) && (fVar6 < fStack_1c)) {
      iVar4 = *(CDemonActor **)((int)g_CDemonSetPtr->actors + iVar2);
      fStack_1c = fVar6;
    }
    iVar2 = iVar2 + 4;
  }
  if (iVar4 != (CDemonActor *)0x0) {
    iVar5 = (*((iVar4->vtable)._ub)->processActionButton)(iVar4);
    if (iVar5 != 0) {
      (this_ptr->player_control).action_bindings.fire_key = 0;
    }
    return 1;
  }
  return 0;
}

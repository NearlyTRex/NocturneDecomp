// Name: core_npc.cpp_FUN_004eeea0
// Address: 004eeea0
// Address Range: [[004eeea0, 004eef7c]]
// Convention: unknown
// Signature: void core_npc_cpp_FUN_004eeea0(CCharacter *param_1,SDamageInfo *param_2)

#include "nocturne.h"

void core_npc_cpp_FUN_004eeea0(CCharacter *param_1,SDamageInfo *param_2)

{
  CDeformableModelInstance *this_ptr;
  CDemonActor_vtable *pCVar1;
  float fVar2;
  CDemonActorType *pCVar3;
  int iVar4;
  
  pCVar3 = (*((param_1->base).vtable._ub)->getActorType)(&param_1->base);
  if (pCVar3 == &g_CNPCActorType_01d46820) {
    fVar2 = param_1->hit_points - param_2->damage_amount;
    this_ptr = &param_1->model;
    param_1->hit_points = fVar2;
    if (fVar2 <= 0.0) {
      pCVar1 = (param_1->base).vtable._ub;
      param_1->hit_points = 0.0;
      (*pCVar1->spawnFlies)(&param_1->base,0x32,25.0);
      core_charactr_cpp_CCharacter_dropAllCarriedObjects_FUN_004291f0(param_1);
      core_npc_cpp_CNPC_setRandomMotionVariant_FUN_004eedc0((CNPC *)this_ptr,"DIE");
    }
    else if ((0.0 < param_2->damage_amount) && (param_1->grabbed_by == (CDemonActor *)0x0)) {
      iVar4 = core_npc_cpp_CNPC_setRandomMotionVariant_FUN_004eedc0
                        ((CNPC *)this_ptr,"HURT");
      if (iVar4 == 0) {
        iVar4 = core_npc_cpp_CNPC_setRandomMotionVariant_FUN_004eedc0
                          ((CNPC *)this_ptr,"DAMAGE");
        if (iVar4 == 0) {
          core_npc_cpp_CNPC_setRandomMotionVariant_FUN_004eedc0((CNPC *)this_ptr,"SHOT");
          core_charactr_cpp_CCharacter_processDamage_FUN_00428510(param_1,param_2);
          return;
        }
      }
    }
  }
  core_charactr_cpp_CCharacter_processDamage_FUN_00428510(param_1,param_2);
  return;
}

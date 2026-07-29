// Name: core_npc.cpp_FUN_004eeea0
// Address: 004eeea0
// Address Range: [[004eeea0, 004eef7c]]
// Convention: __cdecl
// Signature: void __cdecl core_npc_cpp_FUN_004eeea0(CNPC *this_ptr,SDamageInfo *damage_info)

#include "nocturne.h"

void __cdecl core_npc_cpp_FUN_004eeea0(CNPC *this_ptr,SDamageInfo *damage_info)

{
  CDeformableModelInstance *this_ptr_00;
  CDemonActor_vtable *pCVar1;
  float fVar2;
  CDemonActorType *pCVar3;
  int iVar4;
  
  pCVar3 = (*((this_ptr->base).base.vtable._ub)->getActorType)((CDemonActor *)this_ptr);
  if (pCVar3 == &g_CNPCActorType_01d46820) {
    fVar2 = (this_ptr->base).hit_points - damage_info->damage_amount;
    this_ptr_00 = &(this_ptr->base).model;
    (this_ptr->base).hit_points = fVar2;
    if (fVar2 <= 0.0) {
      pCVar1 = (this_ptr->base).base.vtable._ub;
      (this_ptr->base).hit_points = 0.0;
      (*pCVar1->spawnFlies)((CDemonActor *)this_ptr,0x32,25.0);
      core_charactr_cpp_CCharacter_dropAllCarriedObjects_FUN_004291f0(&this_ptr->base);
      core_npc_cpp_CNPC_setRandomMotionVariant_FUN_004eedc0((CNPC *)this_ptr_00,"DIE");
    }
    else if ((0.0 < damage_info->damage_amount) &&
            ((this_ptr->base).grabbed_by == (CDemonActor *)0x0)) {
      iVar4 = core_npc_cpp_CNPC_setRandomMotionVariant_FUN_004eedc0
                        ((CNPC *)this_ptr_00,"HURT");
      if (iVar4 == 0) {
        iVar4 = core_npc_cpp_CNPC_setRandomMotionVariant_FUN_004eedc0
                          ((CNPC *)this_ptr_00,"DAMAGE");
        if (iVar4 == 0) {
          core_npc_cpp_CNPC_setRandomMotionVariant_FUN_004eedc0((CNPC *)this_ptr_00,"SHOT")
          ;
          core_charactr_cpp_CCharacter_processDamage_FUN_00428510(&this_ptr->base,damage_info);
          return;
        }
      }
    }
  }
  core_charactr_cpp_CCharacter_processDamage_FUN_00428510(&this_ptr->base,damage_info);
  return;
}

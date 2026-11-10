// Name: core_npc.cpp_CNPC_processDamage_FUN_00531da0
// Address: 00531da0
// Address Range: [[00531da0, 00531e7c]]
// Convention: __cdecl
// Signature: void __cdecl core_npc_cpp_CNPC_processDamage_FUN_00531da0(CNPC *this_ptr,SDamageInfo *damage_info)

#include "nocturne.h"

void __cdecl core_npc_cpp_CNPC_processDamage_FUN_00531da0(CNPC *this_ptr,SDamageInfo *damage_info)

{
  CDeformableModelInstance *this_ptr_00;
  CDemonActor_vtable *pCVar1;
  float fVar2;
  CDemonActorType *pCVar3;
  int iVar4;
  
  pCVar3 = (*((this_ptr->base).base.vtable._ub)->getActorType)((CDemonActor *)this_ptr);
  if (pCVar3 == &g_CNPCClassInfo) {
    fVar2 = (this_ptr->base).hit_points - *(float *)(damage_info + 4);
    this_ptr_00 = &(this_ptr->base).model;
    (this_ptr->base).hit_points = fVar2;
    if (fVar2 <= 0.0) {
      pCVar1 = (this_ptr->base).base.vtable._ub;
      (this_ptr->base).hit_points = 0.0;
      (*pCVar1->spawnFlies)((CDemonActor *)this_ptr,0x32,25.0);
      core_charactr_cpp_CCharacter_dropAllCarriedObjects_FUN_004328c0(&this_ptr->base);
      core_npc_cpp_CNPC_setRandomMotionVariant_FUN_00531cc0((CNPC *)this_ptr_00,&DAT_005ec7dc);
    }
    else if ((0.0 < *(float *)(damage_info + 4)) &&
            ((this_ptr->base).grabbed_by == (CDemonActor *)0x0)) {
      iVar4 = core_npc_cpp_CNPC_setRandomMotionVariant_FUN_00531cc0
                        ((CNPC *)this_ptr_00,&DAT_005ec7e0);
      if (iVar4 == 0) {
        iVar4 = core_npc_cpp_CNPC_setRandomMotionVariant_FUN_00531cc0
                          ((CNPC *)this_ptr_00,"DAMAGE");
        if (iVar4 == 0) {
          core_npc_cpp_CNPC_setRandomMotionVariant_FUN_00531cc0((CNPC *)this_ptr_00,&DAT_005ec7ec);
          core_charactr_cpp_CCharacter_processDamage_FUN_004319e0(&this_ptr->base,damage_info);
          return;
        }
      }
    }
  }
  core_charactr_cpp_CCharacter_processDamage_FUN_004319e0(&this_ptr->base,damage_info);
  return;
}

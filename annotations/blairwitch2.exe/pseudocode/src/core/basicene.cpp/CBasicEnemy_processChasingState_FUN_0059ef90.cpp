// Name: core_basicene.cpp_CBasicEnemy_processChasingState_FUN_0059ef90
// Address: 0059ef90
// Address Range: [[0059ef90, 0059f0d3]]
// Convention: __cdecl
// Signature: void __cdecl core_basicene_cpp_CBasicEnemy_processChasingState_FUN_0059ef90(CBasicEnemy *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void __cdecl core_basicene_cpp_CBasicEnemy_processChasingState_FUN_0059ef90(CBasicEnemy *this_ptr,float delta_time)

{
  CCharacter *pCVar1;
  CDemonActor *pCVar2;
  CPathMap *path_map;
  int iVar3;
  uint uVar4;
  CVector3f *direction;
  float fVar5;
  float fVar6;
  
  if ((this_ptr->base).is_in_combat != 0) {
    (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time);
  }
  pCVar2 = (*(this_ptr->base).base.base.vtable._ub[1].getCarrier)((CDemonActor *)this_ptr);
  if (pCVar2 != (CDemonActor *)0x0) {
    if (((this_ptr->base).is_in_combat == 0) &&
       (pCVar1 = (this_ptr->base).victim,
       fVar5 = (pCVar1->base).location.position.x - (this_ptr->base).base.base.location.position.x,
       fVar6 = (pCVar1->base).location.position.z - (this_ptr->base).base.base.location.position.z,
       this_ptr->giveup_distance <= SQRT(fVar6 * fVar6 + fVar5 * fVar5))) {
      (this_ptr->base).victim = (CCharacter *)0x0;
      uVar4 = core_muzzle_cpp_FUN_0059db90(&this_ptr->state_machine);
      core_muzzle_cpp_FUN_0059d8e0(&this_ptr->state_machine,uVar4);
      return;
    }
    fVar6 = 0.17453292;
    direction = &this_ptr->walk_direction;
    fVar5 = this_ptr->attack_range;
    pCVar1 = (this_ptr->base).victim;
    path_map = (*((pCVar1->base).vtable._ub)->getPathMap)(&pCVar1->base);
    iVar3 = core_charactr_cpp_CCharacter_walkToPoint_FUN_00423000
                      ((CCharacter *)this_ptr,&(((this_ptr->base).victim)->base).location.position,
                       path_map,direction,fVar5,fVar6);
    if (iVar3 != 0) {
      core_muzzle_cpp_FUN_0059d880(&this_ptr->state_machine,"ChaseComplete");
      return;
    }
    pCVar1 = (this_ptr->base).victim;
    fVar5 = (this_ptr->base).base.base.location.position.x - (pCVar1->base).location.position.x;
    fVar6 = (this_ptr->base).base.base.location.position.z - (pCVar1->base).location.position.z;
    iVar3 = this_ptr->walk_motion;
    if (this_ptr->run_distance < SQRT(fVar6 * fVar6 + fVar5 * fVar5)) {
      iVar3 = this_ptr->run_motion;
    }
    if (-1 < iVar3) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                (&(this_ptr->base).base.model.base,iVar3,1);
      return;
    }
  }
  return;
}

// Name: core_basicene.cpp_CBasicEnemy_startBurn_FUN_005a0270
// Address: 005a0270
// Address Range: [[005a0270, 005a0378]]
// Convention: __cdecl
// Signature: void __cdecl core_basicene_cpp_CBasicEnemy_startBurn_FUN_005a0270(CBasicEnemy *this_ptr,CVector3f *direction,float strength)

#include "nocturne.h"

void __cdecl core_basicene_cpp_CBasicEnemy_startBurn_FUN_005a0270(CBasicEnemy *this_ptr,CVector3f *direction,float strength)

{
  SStateMachine *pSVar1;
  CVector3f *pCVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  uint uVar6;
  
  if (this_ptr->can_burn == 0) {
    return;
  }
  pSVar1 = &this_ptr->state_machine;
  iVar5 = core_muzzle_cpp_FUN_0059daa0(pSVar1,&DAT_005efb55);
  if (iVar5 == 0) {
    uVar6 = core_muzzle_cpp_FUN_0059db70(pSVar1);
    core_muzzle_cpp_FUN_0059d7f0(pSVar1,"BurnComplete",uVar6);
  }
  core_muzzle_cpp_FUN_0059d8e0(&this_ptr->state_machine,&DAT_005efb67);
  this_ptr->burn_timer = strength;
  if (&this_ptr->burn_direction != direction) {
    (this_ptr->burn_direction).x = direction->x;
    (this_ptr->burn_direction).y = direction->y;
    (this_ptr->burn_direction).z = direction->z;
  }
  pCVar2 = &this_ptr->burn_direction;
  (this_ptr->burn_direction).y = 0.0;
  fVar3 = (this_ptr->burn_direction).y;
  fVar4 = (this_ptr->burn_direction).z;
  fVar3 = SQRT(fVar4 * fVar4 + pCVar2->x * pCVar2->x + fVar3 * fVar3);
  if (0.0 < fVar3) {
    fVar3 = 1.0 / fVar3;
    pCVar2->x = pCVar2->x * fVar3;
    (this_ptr->burn_direction).y = (this_ptr->burn_direction).y * fVar3;
    (this_ptr->burn_direction).z = (this_ptr->burn_direction).z * fVar3;
    return;
  }
  (this_ptr->burn_direction).z = 0.0;
  (this_ptr->burn_direction).y = (this_ptr->burn_direction).z;
  pCVar2->x = (this_ptr->burn_direction).y;
  return;
}

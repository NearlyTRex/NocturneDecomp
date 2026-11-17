// Name: core_basicene.cpp_CBasicEnemy_startBurn_FUN_005a0270
// Address: 005a0270
// Address Range: [[005a0270, 005a0378]]
// Convention: __cdecl
// Signature: void __cdecl core_basicene_cpp_CBasicEnemy_startBurn_FUN_005a0270(CBasicEnemy *this_ptr,CVector3f *direction,float strength)

#include "nocturne.h"

void __cdecl core_basicene_cpp_CBasicEnemy_startBurn_FUN_005a0270(CBasicEnemy *this_ptr,CVector3f *direction,float strength)

{
  SStateMachine *this_ptr_00;
  CVector3f *pCVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  char *state_name;
  
  if (this_ptr->can_burn == 0) {
    return;
  }
  this_ptr_00 = &this_ptr->state_machine;
  iVar4 = core_muzzle_cpp_SStateMachine_isState_FUN_0059daa0(this_ptr_00,"Burn");
  if (iVar4 == 0) {
    state_name = core_muzzle_cpp_SStateMachine_getStateName_FUN_0059db70(this_ptr_00);
    core_muzzle_cpp_SStateMachine_setRefState_FUN_0059d7f0
              (this_ptr_00,"BurnComplete",state_name);
  }
  core_muzzle_cpp_SStateMachine_setNextState_FUN_0059d8e0(&this_ptr->state_machine,"Burn");
  this_ptr->burn_timer = strength;
  if (&this_ptr->burn_direction != direction) {
    (this_ptr->burn_direction).x = direction->x;
    (this_ptr->burn_direction).y = direction->y;
    (this_ptr->burn_direction).z = direction->z;
  }
  pCVar1 = &this_ptr->burn_direction;
  (this_ptr->burn_direction).y = 0.0;
  fVar2 = (this_ptr->burn_direction).y;
  fVar3 = (this_ptr->burn_direction).z;
  fVar2 = SQRT(fVar3 * fVar3 + pCVar1->x * pCVar1->x + fVar2 * fVar2);
  if (0.0 < fVar2) {
    fVar2 = 1.0 / fVar2;
    pCVar1->x = pCVar1->x * fVar2;
    (this_ptr->burn_direction).y = (this_ptr->burn_direction).y * fVar2;
    (this_ptr->burn_direction).z = (this_ptr->burn_direction).z * fVar2;
    return;
  }
  (this_ptr->burn_direction).z = 0.0;
  (this_ptr->burn_direction).y = (this_ptr->burn_direction).z;
  pCVar1->x = (this_ptr->burn_direction).y;
  return;
}

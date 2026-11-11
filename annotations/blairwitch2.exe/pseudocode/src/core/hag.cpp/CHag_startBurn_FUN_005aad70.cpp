// Name: core_hag.cpp_CHag_startBurn_FUN_005aad70
// Address: 005aad70
// Address Range: [[005aad70, 005aae75]]
// Convention: __cdecl
// Signature: void __cdecl core_hag_cpp_CHag_startBurn_FUN_005aad70(CHag *this_ptr,CVector3f *direction,float strength)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_hag_cpp_CHag_startBurn_FUN_005aad70(CHag *this_ptr,CVector3f *direction,float strength)

{
  SStateMachine *pSVar1;
  CVector3f *pCVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  uint uVar7;
  
  core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
            (&(this_ptr->base).base.base.model.base,8,1);
  pSVar1 = &(this_ptr->base).state_machine;
  iVar6 = unkaddr_0059d350_cpp_FUN_0059daa0(pSVar1,&DAT_005f0c0e);
  if (iVar6 == 0) {
    uVar7 = unkaddr_0059d350_cpp_FUN_0059db70(pSVar1);
    unkaddr_0059d350_cpp_FUN_0059d7f0(pSVar1,"BurnComplete",uVar7);
  }
  unkaddr_0059d350_cpp_FUN_0059d8e0(&(this_ptr->base).state_machine,&DAT_005f0c20);
  pCVar2 = &(this_ptr->base).burn_direction;
  (this_ptr->base).burn_timer = strength * _DAT_005f0c26;
  if (pCVar2 != direction) {
    pCVar2->x = direction->x;
    (this_ptr->base).burn_direction.y = direction->y;
    (this_ptr->base).burn_direction.z = direction->z;
  }
  pCVar2 = &(this_ptr->base).burn_direction;
  (this_ptr->base).burn_direction.y = 0.0;
  fVar3 = (this_ptr->base).burn_direction.y;
  fVar4 = (this_ptr->base).burn_direction.z;
  fVar3 = SQRT(fVar4 * fVar4 + pCVar2->x * pCVar2->x + fVar3 * fVar3);
  if (0.0 < fVar3) {
    fVar3 = 1.0 / fVar3;
    fVar4 = (this_ptr->base).burn_direction.y;
    fVar5 = (this_ptr->base).burn_direction.z;
    pCVar2->x = pCVar2->x * fVar3;
    (this_ptr->base).burn_direction.y = fVar4 * fVar3;
    (this_ptr->base).burn_direction.z = fVar5 * fVar3;
    return;
  }
  (this_ptr->base).burn_direction.z = 0.0;
  (this_ptr->base).burn_direction.y = (this_ptr->base).burn_direction.z;
  pCVar2->x = (this_ptr->base).burn_direction.y;
  return;
}

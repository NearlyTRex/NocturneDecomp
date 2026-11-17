// Name: core_hand.cpp_CHand_renderTransparent_FUN_005aa4a0
// Address: 005aa4a0
// Address Range: [[005aa4a0, 005aa59e]]
// Convention: __cdecl
// Signature: int __cdecl core_hand_cpp_CHand_renderTransparent_FUN_005aa4a0(CHand *this_ptr)

#include "nocturne.h"

int __cdecl core_hand_cpp_CHand_renderTransparent_FUN_005aa4a0(CHand *this_ptr)

{
  CDeformableModelInstance *pCVar1;
  SMotion *pSVar2;
  int iVar3;
  float fVar4;
  char *pcVar5;
  
  pCVar1 = &(this_ptr->base).base.base.model;
  (this_ptr->base).fade_val = 1.0;
  pSVar2 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_005035c0(&pCVar1->base);
  if ((pSVar2->state_index == 0) ||
     (pSVar2 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_005035c0(&pCVar1->base),
     pSVar2->state_index == 6)) {
    (this_ptr->base).fade_val = 0.0;
  }
  pcVar5 = "rise";
  pCVar1 = &(this_ptr->base).base.base.model;
  pSVar2 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_005035c0(&pCVar1->base);
  iVar3 = _strcmp(pSVar2->motion_name,pcVar5);
  if (iVar3 == 0) {
    fVar4 = core_motion_cpp_CMotionController_frameToMarkerPosition_FUN_00503e60(&pCVar1->base);
    (this_ptr->base).fade_val = fVar4;
  }
  pcVar5 = "sleep";
  pCVar1 = &(this_ptr->base).base.base.model;
  pSVar2 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_005035c0(&pCVar1->base);
  iVar3 = _strcmp(pSVar2->motion_name,pcVar5);
  if (iVar3 != 0) {
    pcVar5 = "die";
    pSVar2 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_005035c0(&pCVar1->base);
    iVar3 = _strcmp(pSVar2->motion_name,pcVar5);
    if (iVar3 != 0) goto LAB_005aa54b;
  }
  fVar4 = core_motion_cpp_CMotionController_frameToMarkerPosition_FUN_00503e60
                    (&(this_ptr->base).base.base.model.base);
  (this_ptr->base).fade_val = 1.0 - fVar4;
LAB_005aa54b:
  iVar3 = core_basicene_cpp_CBasicEnemy_renderTransparent_FUN_0059f980(&this_ptr->base);
  return (uint)(iVar3 != 0);
}

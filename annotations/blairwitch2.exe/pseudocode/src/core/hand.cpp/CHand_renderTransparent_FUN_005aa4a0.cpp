// Name: core_hand.cpp_CHand_renderTransparent_FUN_005aa4a0
// Address: 005aa4a0
// Address Range: [[005aa4a0, 005aa59e]]
// Convention: __cdecl
// Signature: int __cdecl core_hand_cpp_CHand_renderTransparent_FUN_005aa4a0(CHand *this_ptr)

#include "nocturne.h"

int __cdecl core_hand_cpp_CHand_renderTransparent_FUN_005aa4a0(CHand *this_ptr)

{
  CDeformableModelInstance *pCVar1;
  int iVar2;
  char *pcVar3;
  float fVar4;
  char *pcVar5;
  
  pCVar1 = &(this_ptr->base).base.base.model;
  (this_ptr->base).fade_val = 1.0;
  iVar2 = core_motion_cpp_FUN_005035c0(pCVar1);
  if ((*(int *)(iVar2 + 0x24) == 0) ||
     (iVar2 = core_motion_cpp_FUN_005035c0(pCVar1), *(int *)(iVar2 + 0x24) == 6)) {
    (this_ptr->base).fade_val = 0.0;
  }
  pcVar5 = &DAT_005f0adf;
  pCVar1 = &(this_ptr->base).base.base.model;
  pcVar3 = (char *)core_motion_cpp_FUN_005035c0(pCVar1);
  iVar2 = _strcmp(pcVar3,pcVar5);
  if (iVar2 == 0) {
    fVar4 = core_motion_cpp_FUN_00503e60(&pCVar1->base);
    (this_ptr->base).fade_val = fVar4;
  }
  pcVar5 = "sleep";
  pCVar1 = &(this_ptr->base).base.base.model;
  pcVar3 = (char *)core_motion_cpp_FUN_005035c0(pCVar1);
  iVar2 = _strcmp(pcVar3,pcVar5);
  if (iVar2 != 0) {
    pcVar5 = &DAT_005f0aea;
    pcVar3 = (char *)core_motion_cpp_FUN_005035c0(pCVar1);
    iVar2 = _strcmp(pcVar3,pcVar5);
    if (iVar2 != 0) goto LAB_005aa54b;
  }
  fVar4 = core_motion_cpp_FUN_00503e60(&(this_ptr->base).base.base.model.base);
  (this_ptr->base).fade_val = 1.0 - fVar4;
LAB_005aa54b:
  iVar2 = core_basicene_cpp_CBasicEnemy_renderTransparent_FUN_0059f980(&this_ptr->base);
  return (uint)(iVar2 != 0);
}

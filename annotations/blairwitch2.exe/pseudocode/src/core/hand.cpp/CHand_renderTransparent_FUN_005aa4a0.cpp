// Name: core_hand.cpp_CHand_renderTransparent_FUN_005aa4a0
// Address: 005aa4a0
// Address Range: [[005aa4a0, 005aa59e]]
// Convention: __cdecl
// Signature: int __cdecl core_hand_cpp_CHand_renderTransparent_FUN_005aa4a0(CHand *this_ptr)

#include "nocturne.h"

int __cdecl core_hand_cpp_CHand_renderTransparent_FUN_005aa4a0(CHand *this_ptr)

{
  int iVar1;
  char *pcVar2;
  float fVar3;
  char *pcVar4;
  
  *(uint *)&this_ptr->field_0x113c4 = 0x3f800000;
  iVar1 = core_motion_cpp_FUN_005035c0(&this_ptr->field_0x2b4);
  if ((*(int *)(iVar1 + 0x24) == 0) ||
     (iVar1 = core_motion_cpp_FUN_005035c0(&this_ptr->field_0x2b4), *(int *)(iVar1 + 0x24) == 6)) {
    *(uint *)&this_ptr->field_0x113c4 = 0;
  }
  pcVar4 = &DAT_005f0adf;
  pcVar2 = (char *)core_motion_cpp_FUN_005035c0(&this_ptr->field_0x2b4);
  iVar1 = _strcmp(pcVar2,pcVar4);
  if (iVar1 == 0) {
    fVar3 = core_motion_cpp_FUN_00503e60((CMotionController *)&this_ptr->field_0x2b4);
    *(float *)&this_ptr->field_0x113c4 = fVar3;
  }
  pcVar4 = "sleep";
  pcVar2 = (char *)core_motion_cpp_FUN_005035c0(&this_ptr->field_0x2b4);
  iVar1 = _strcmp(pcVar2,pcVar4);
  if (iVar1 != 0) {
    pcVar4 = &DAT_005f0aea;
    pcVar2 = (char *)core_motion_cpp_FUN_005035c0(&this_ptr->field_0x2b4);
    iVar1 = _strcmp(pcVar2,pcVar4);
    if (iVar1 != 0) goto LAB_005aa54b;
  }
  fVar3 = core_motion_cpp_FUN_00503e60((CMotionController *)&this_ptr->field_0x2b4);
  *(float *)&this_ptr->field_0x113c4 = 1.0 - fVar3;
LAB_005aa54b:
  iVar1 = core_basicene_cpp_CBasicEnemy_renderTransparent_FUN_0059f980((CBasicEnemy *)this_ptr);
  return (uint)(iVar1 != 0);
}

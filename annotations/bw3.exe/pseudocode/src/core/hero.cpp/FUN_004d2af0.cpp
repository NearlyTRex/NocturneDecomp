// Name: core_hero.cpp_FUN_004d2af0
// Address: 004d2af0
// Address Range: [[004d2af0, 004d2c18]]
// Convention: unknown
// Signature: undefined4 core_hero_cpp_FUN_004d2af0(int param_1,int param_2,int param_3)

#include "nocturne.h"

uint core_hero_cpp_FUN_004d2af0(int param_1,int param_2,int param_3)

{
  SMotion *pSVar1;
  CMotionList *pCVar2;
  int iVar3;
  CMotionController *this_ptr;
  byte bVar4;
  float afStackY_1010 [1014];
  char *pcVar5;
  uint local_28;
  uint local_1c;
  float local_14;
  
  bVar4 = 0;
  if (param_2 == 0) {
    return 0;
  }
  engine_console_cpp_FUN_00441ff0(g_CConsolePtr,"CHero::startGettingGrabbed by %s, type %d\n",param_2,param_3)
  ;
  this_ptr = (CMotionController *)(param_1 + 0x158);
  pSVar1 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070(this_ptr);
  engine_console_cpp_FUN_00441ff0(g_CConsolePtr,"  current motion is %s\n",pSVar1);
  if (param_3 == 0) {
    pcVar5 = "GETGRABBED";
    iVar3 = param_3;
    pCVar2 = core_motion_cpp_CMotionController_getMotionList_FUN_004fc310(this_ptr);
    iVar3 = core_motion_cpp_CMotionList_findStateIndex_FUN_004fba50(pCVar2,pcVar5,iVar3);
    if (iVar3 < 0) {
      return 0;
    }
    pcVar5 = "GETGRABBED_FRONT";
    iVar3 = param_3;
    pCVar2 = core_motion_cpp_CMotionController_getMotionList_FUN_004fc310(this_ptr);
    iVar3 = core_motion_cpp_CMotionList_findStateIndex_FUN_004fba50(pCVar2,pcVar5,iVar3);
    if (iVar3 < 0) {
      pcVar5 = "GETGRABBED";
    }
    else {
      core_actor_cpp_FUN_00408bf0(param_1,param_2 + 0x20);
      local_1c = local_28;
      *(uint *)(&stack0xffffffe8 + (uint)bVar4 * -8) =
           *(uint *)(&stack0xffffffdc + (uint)bVar4 * -8);
      *(uint *)((int)&stack0xffffffec + (uint)bVar4 * -8 + (uint)bVar4 * -8) =
           *(uint *)(&stack0xffffffe0 + (uint)bVar4 * -8 + (uint)bVar4 * -8);
      if (local_14 <= 0.0) {
        pcVar5 = "GETGRABBED_BACK";
      }
      else {
        pcVar5 = "GETGRABBED_FRONT";
      }
    }
    core_motion_cpp_CMotionController_setDesiredStateByName_FUN_004fc160(this_ptr,pcVar5,1);
  }
  engine_console_cpp_FUN_00441ff0(g_CConsolePtr,"  We are grabbed\n");
  *(int *)(param_1 + 0x26fc) = param_2;
  *(int *)(param_1 + 0x2700) = param_3;
  return 1;
}

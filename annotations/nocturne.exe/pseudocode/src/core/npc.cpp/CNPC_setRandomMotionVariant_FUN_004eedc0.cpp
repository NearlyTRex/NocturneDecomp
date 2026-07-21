// Name: core_npc.cpp_CNPC_setRandomMotionVariant_FUN_004eedc0
// Address: 004eedc0
// Address Range: [[004eedc0, 004eee98]]
// Convention: __cdecl
// Signature: undefined4 __cdecl core_npc_cpp_CNPC_setRandomMotionVariant_FUN_004eedc0(undefined4 param_1,char *param_2)

#include "nocturne.h"

uint __cdecl core_npc_cpp_CNPC_setRandomMotionVariant_FUN_004eedc0(uint param_1,char *param_2)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  char *pcVar6;
  char local_d8 [200];
  
  iVar5 = 0;
  uVar2 = core_motion_cpp_CMotionController_getMotionList_FUN_004e1890(param_1);
  pcVar6 = local_d8;
  while( true ) {
    _sprintf(local_d8,"%s_%d",param_2,iVar5 + 1);
    iVar3 = core_motion_cpp_CMotionList_findStateIndex_FUN_004e10a0(uVar2,local_d8,0);
    if (iVar3 < 0) break;
    iVar5 = iVar5 + 1;
  }
  if (iVar5 == 0) {
    do {
      cVar1 = *param_2;
      *pcVar6 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = param_2[1];
      param_2 = param_2 + 2;
      pcVar6[1] = cVar1;
      pcVar6 = pcVar6 + 2;
    } while (cVar1 != '\0');
  }
  else {
    uVar4 = core_actor_cpp_getRandomInt_FUN_0040de00(1,iVar5);
    _sprintf(local_d8,"%s_%d",param_2,uVar4);
  }
  iVar5 = core_motion_cpp_CMotionList_findStateIndex_FUN_004e10a0(uVar2,local_d8,0);
  if (-1 < iVar5) {
    core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(param_1,iVar5,1);
    return 1;
  }
  return 0;
}

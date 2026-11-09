// Name: core_shadowsc.cpp_FUN_00561330
// Address: 00561330
// Address Range: [[00561330, 00561454]]
// Convention: unknown
// Signature: void core_shadowsc_cpp_FUN_00561330(int param_1,int param_2)

#include "nocturne.h"

void core_shadowsc_cpp_FUN_00561330(int param_1,int param_2)

{
  int iVar1;
  float fVar2;
  SMotion *pSVar3;
  
  if (*(int *)(param_1 + 0xc28c) == 0) {
    iVar1 = *(int *)(param_2 + 0x30);
    if (((((iVar1 == 100) || (iVar1 == 0x65)) || (iVar1 == 0x66)) ||
        ((iVar1 == 0x67 || (iVar1 == 0x68)))) ||
       ((iVar1 == 0x69 || ((iVar1 == 0x6a || (iVar1 == 0x6b)))))) {
      core_event_cpp_CEventList_executeCommands_FUN_004a1b70
                (0x01C51D80,"ShotShadowWithLead");
      *(uint *)(param_2 + 4) = 0;
      return;
    }
    if (iVar1 == 0x6c) {
      core_actor_cpp_FUN_00408b40(param_1,param_2 + 0x1c);
    }
    fVar2 = *(float *)(param_1 + 0x2538) - *(float *)(param_2 + 4);
    *(float *)(param_1 + 0x2538) = fVar2;
    if (0.0 < fVar2) {
      core_shadowsc_cpp_FUN_00561060(param_1);
      core_enemy_cpp_FUN_004a0f00(param_1,param_2);
      return;
    }
    *(uint *)(param_1 + 0x2538) = 0;
    pSVar3 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770
                       ((CMotionController *)(param_1 + 0x158));
    if ((*(int *)(pSVar3 + 0x24) != 7) && (*(int *)(pSVar3 + 0x24) != 6)) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                ((CMotionController *)(param_1 + 0x158),6,1);
      core_shadowsc_cpp_FUN_005610a0(param_1);
    }
    core_enemy_cpp_FUN_004a0f00(param_1,param_2);
  }
  return;
}

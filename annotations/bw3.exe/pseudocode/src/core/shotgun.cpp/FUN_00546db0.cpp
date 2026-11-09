// Name: core_shotgun.cpp_FUN_00546db0
// Address: 00546db0
// Address Range: [[00546db0, 00546ec7]]
// Convention: unknown
// Signature: void core_shotgun_cpp_FUN_00546db0(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_shotgun_cpp_FUN_00546db0(int param_1,int param_2)

{
  int iVar1;
  SMotion *pSVar2;
  float fVar3;
  
  iVar1 = *(int *)(param_2 + 0x30);
  if (((((iVar1 != 100) && (iVar1 != 0x65)) && (iVar1 != 0x66)) &&
      ((iVar1 != 0x67 && (iVar1 != 0x68)))) &&
     ((iVar1 != 0x69 && ((iVar1 != 0x6a && (iVar1 != 0x6b)))))) {
    if (iVar1 == 0x6c) {
      fVar3 = (float)core_actor_cpp_FUN_0040ce40(0x41700000,0x41f00000);
      *(float *)(param_2 + 4) = fVar3 * (float)_DAT_005d152e * *(float *)(param_2 + 4);
      core_actor_cpp_FUN_00408b80(param_1,param_2 + 0x1c);
    }
    fVar3 = *(float *)(param_1 + 0x2538) - *(float *)(param_2 + 4);
    *(float *)(param_1 + 0x2538) = fVar3;
    if (fVar3 <= 0.0) {
      *(uint *)(param_1 + 0x2538) = 0;
      pSVar2 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070
                         ((CMotionController *)(param_1 + 0x158));
      if ((*(int *)(pSVar2 + 0x24) != 7) && (*(int *)(pSVar2 + 0x24) != 6)) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                  ((CMotionController *)(param_1 + 0x158),6,1);
      }
    }
    core_enemy_cpp_FUN_00489b80(param_1,param_2);
    return;
  }
  core_event_cpp_CEventList_executeCommands_FUN_0048c150(0x01C6E360,"ShotShadowWithLead")
  ;
  *(uint *)(param_2 + 4) = 0;
  return;
}

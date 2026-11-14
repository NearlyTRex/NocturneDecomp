// Name: core_helldog.cpp_FUN_005ac2f0
// Address: 005ac2f0
// Address Range: [[005ac2f0, 005ac51e]]
// Convention: unknown
// Signature: void core_helldog_cpp_FUN_005ac2f0(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_helldog_cpp_FUN_005ac2f0(int param_1,float param_2)

{
  float fVar1;
  float fVar2;
  SMotion *pSVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  CDemonActor *pCStack_14;
  
  pSVar3 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_005035c0
                     ((CMotionController *)(param_1 + 0x2b4));
  if (pSVar3->state_index == 1) {
    *(uint *)(param_1 + 0x1134c) = 0x3f99999a;
  }
  else {
    *(uint *)(param_1 + 0x1134c) = 0x40000000;
  }
  iVar4 = core_muzzle_cpp_FUN_0059daa0(param_1 + 0x10af8,"?ChaseFood" + 1);
  if (iVar4 == 0) {
    pSVar3 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_005035c0
                       ((CMotionController *)(param_1 + 0x2b4));
    if ((pSVar3->state_index == 0) ||
       (pSVar3 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_005035c0
                           ((CMotionController *)(param_1 + 0x2b4)), pSVar3->state_index == 8)) {
      if (*(char *)(param_1 + 0x11741) == '\0') {
        sound_sndmain_cpp_killSfx_FUN_00551050(*(uint *)(param_1 + 0x11848));
      }
      else {
        fVar1 = *(float *)(param_1 + 0x11840) - param_2;
        *(float *)(param_1 + 0x11840) = fVar1;
        if (fVar1 <= 0.0) {
          *(uint *)(param_1 + 0x11840) = *(uint *)(param_1 + 0x11844);
          uVar5 = (**(code **)(*(int *)(param_1 + 0x2b0) + 0x34))(param_1,param_1 + 0x11741);
          *(uint *)(param_1 + 0x11848) = uVar5;
        }
      }
    }
    iVar4 = core_muzzle_cpp_FUN_0059daa0(param_1 + 0x10af8,"Death");
    if ((iVar4 == 0) &&
       (iVar4 = core_muzzle_cpp_FUN_0059daa0(param_1 + 0x10af8,"Animation"), iVar4 == 0)) {
      (**(code **)(*(int *)(param_1 + 0x2b0) + 0x17c))(param_1);
    }
    iVar4 = core_muzzle_cpp_FUN_0059daa0(param_1 + 0x10af8,"Death");
    if ((iVar4 == 0) &&
       (param_2 = *(float *)(param_1 + 0x11860) - param_2, *(float *)(param_1 + 0x11860) = param_2,
       param_2 <= 0.0)) {
      *(uint *)(param_1 + 0x11860) = 0x3f800000;
      iVar6 = 0;
      for (iVar4 = 0; iVar4 < g_CDemonSetPtr->actor_count; iVar4 = iVar4 + 1) {
        pCStack_14 = core_actor_cpp_castToClassHash_FUN_0040c8f0
                               (*(CDemonActor **)((int)g_CDemonSetPtr->actors + iVar6),
                                g_CBoxActorClassInfo.name_hash);
        if (pCStack_14 != (CDemonActor *)0x0) {
          _strcmp(pCStack_14[1].create_event,"meat1.kfm");
        }
        iVar6 = iVar6 + 4;
      }
      if ((pCStack_14 != (CDemonActor *)0x0) &&
         (fVar1 = *(float *)(param_1 + 0x20) - (pCStack_14->location).position.x,
         fVar2 = *(float *)(param_1 + 0x28) - (pCStack_14->location).position.z,
         SQRT(fVar2 * fVar2 + fVar1 * fVar1) <= _DAT_00600c54)) {
        iVar4 = param_1 + 0x10af8;
        *(uint *)(param_1 + 0x11868) = *(uint *)(param_1 + 0x11864);
        *(CDemonActor **)(param_1 + 0x1185c) = pCStack_14;
        uVar5 = core_muzzle_cpp_FUN_0059db70(iVar4);
        core_muzzle_cpp_FUN_0059d7f0(iVar4,"ChaseFoodComplete",uVar5);
        core_muzzle_cpp_FUN_0059d8e0(iVar4,"ChaseFood");
        return;
      }
    }
  }
  return;
}

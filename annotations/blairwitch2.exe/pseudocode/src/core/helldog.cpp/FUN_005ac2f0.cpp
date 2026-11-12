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
  int iVar3;
  uint uVar4;
  int iVar5;
  int iStack_14;
  
  iVar3 = core_motion_cpp_FUN_005035c0(param_1 + 0x2b4);
  if (*(int *)(iVar3 + 0x24) == 1) {
    *(uint *)(param_1 + 0x1134c) = 0x3f99999a;
  }
  else {
    *(uint *)(param_1 + 0x1134c) = 0x40000000;
  }
  iVar3 = core_muzzle_cpp_FUN_0059daa0(param_1 + 0x10af8,"?ChaseFood" + 1);
  if (iVar3 == 0) {
    iVar3 = core_motion_cpp_FUN_005035c0(param_1 + 0x2b4);
    if ((*(int *)(iVar3 + 0x24) == 0) ||
       (iVar3 = core_motion_cpp_FUN_005035c0(param_1 + 0x2b4), *(int *)(iVar3 + 0x24) == 8)) {
      if (*(char *)(param_1 + 0x11741) == '\0') {
        sound_sndmain_cpp_killSfx_FUN_00551050(*(uint *)(param_1 + 0x11848));
      }
      else {
        fVar1 = *(float *)(param_1 + 0x11840) - param_2;
        *(float *)(param_1 + 0x11840) = fVar1;
        if (fVar1 <= 0.0) {
          *(uint *)(param_1 + 0x11840) = *(uint *)(param_1 + 0x11844);
          uVar4 = (**(code **)(*(int *)(param_1 + 0x2b0) + 0x34))(param_1,param_1 + 0x11741);
          *(uint *)(param_1 + 0x11848) = uVar4;
        }
      }
    }
    iVar3 = core_muzzle_cpp_FUN_0059daa0(param_1 + 0x10af8,"Death");
    if ((iVar3 == 0) &&
       (iVar3 = core_muzzle_cpp_FUN_0059daa0(param_1 + 0x10af8,"Animation"), iVar3 == 0)) {
      (**(code **)(*(int *)(param_1 + 0x2b0) + 0x17c))(param_1);
    }
    iVar3 = core_muzzle_cpp_FUN_0059daa0(param_1 + 0x10af8,"Death");
    if ((iVar3 == 0) &&
       (param_2 = *(float *)(param_1 + 0x11860) - param_2, *(float *)(param_1 + 0x11860) = param_2,
       param_2 <= 0.0)) {
      *(uint *)(param_1 + 0x11860) = 0x3f800000;
      iVar5 = 0;
      for (iVar3 = 0; iVar3 < g_CDemonSetPtr->actor_count; iVar3 = iVar3 + 1) {
        iStack_14 = core_actor_cpp_castToClassHash_FUN_0040c8f0
                              (*(uint *)((int)g_CDemonSetPtr->actors + iVar5),
                               g_CBoxActorClassInfo.name_hash);
        if (iStack_14 != 0) {
          _strcmp((char *)(iStack_14 + 0x32c),"meat1.kfm");
        }
        iVar5 = iVar5 + 4;
      }
      if ((iStack_14 != 0) &&
         (fVar1 = *(float *)(param_1 + 0x20) - *(float *)(iStack_14 + 0x20),
         fVar2 = *(float *)(param_1 + 0x28) - *(float *)(iStack_14 + 0x28),
         SQRT(fVar2 * fVar2 + fVar1 * fVar1) <= _DAT_00600c54)) {
        iVar3 = param_1 + 0x10af8;
        *(uint *)(param_1 + 0x11868) = *(uint *)(param_1 + 0x11864);
        *(int *)(param_1 + 0x1185c) = iStack_14;
        uVar4 = core_muzzle_cpp_FUN_0059db70(iVar3);
        core_muzzle_cpp_FUN_0059d7f0(iVar3,"ChaseFoodComplete",uVar4);
        core_muzzle_cpp_FUN_0059d8e0(iVar3,"ChaseFood");
        return;
      }
    }
  }
  return;
}

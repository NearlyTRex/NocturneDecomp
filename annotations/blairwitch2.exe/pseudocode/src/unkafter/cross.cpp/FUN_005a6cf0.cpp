// Name: unkafter_cross.cpp_FUN_005a6cf0
// Address: 005a6cf0
// Address Range: [[005a6cf0, 005a6ec5]]
// Convention: unknown
// Signature: void unkafter_cross_cpp_FUN_005a6cf0(CDemonActor *param_1)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void unkafter_cross_cpp_FUN_005a6cf0(CDemonActor *param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  CDemonActor *pCVar5;
  uint uVar6;
  byte bVar7;
  float afStackY_1028 [1014];
  char *sound_name;
  float fStack_40;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  int local_1c;
  int local_18;
  
  bVar7 = 0;
  if (param_1[3].location.position.y <= 0.0) {
    param_1[3].location.position.y = 1.0;
    param_1[3].location.position.x = 0.0;
    fVar1 = *(float *)(param_1[3].actor_name + 0xc);
    param_1[3].actor_name[0x10] = '\0';
    param_1[3].actor_name[0x11] = '\0';
    param_1[3].actor_name[0x12] = '\0';
    param_1[3].actor_name[0x13] = '\0';
    *(float *)(param_1[3].actor_name + 0x1c) = fVar1;
    if (fVar1 < (float)_DAT_005f074d) {
      sound_name = "$@crosssmall.wav" + 2;
    }
    else {
      sound_name = "crossfull.wav";
    }
    core_sound_cpp_CSound_playActorSound_FUN_0055ae50
              (0x0264B290,param_1,sound_name,&(param_1->location).position);
    local_1c = 0;
    for (local_18 = 0; local_18 < g_CDemonSetPtr->actor_count; local_18 = local_18 + 1) {
      iVar3 = core_actor_cpp_castToClassHash_FUN_0040c8f0
                        (*(uint *)((int)g_CDemonSetPtr->actors + local_1c),
                         g_CBasicEnemyClassInfo.name_hash);
      if ((iVar3 != 0) && (*(int *)(iVar3 + 0x11348) != 0)) {
        iVar4 = (**(code **)(*(int *)(iVar3 + 0x2b0) + 0x114))(iVar3);
        if ((iVar4 == 0) &&
           (fVar1 = (param_1->location).position.x - *(float *)(iVar3 + 0x20),
           fVar2 = (param_1->location).position.z - *(float *)(iVar3 + 0x28),
           SQRT(fVar2 * fVar2 + fVar1 * fVar1) <
           *(float *)(param_1[3].actor_name + 0x1c) * (float)_DAT_005f0755)) {
          fStack_34 = *(float *)(iVar3 + 0x20) - (param_1->location).position.x;
          fStack_30 = *(float *)(iVar3 + 0x24) - (param_1->location).position.y;
          fStack_2c = *(float *)(iVar3 + 0x28) - (param_1->location).position.z;
          fStack_40 = fStack_34;
          *(uint *)((int)&stack0xffffffc4 + (uint)bVar7 * 0xfffffffe * 4) =
               *(uint *)((int)&stack0xffffffd0 + (uint)bVar7 * -8);
          *(uint *)(&stack0xffffffc8 + (uint)bVar7 * -8 + (uint)bVar7 * -8) =
               *(uint *)((int)&stack0xffffffd4 + (uint)bVar7 * -8 + (uint)bVar7 * -8);
          (**(code **)(*(int *)(iVar3 + 0x2b0) + 0x16c))
                    (iVar3,&stack0xffffffc0,
                     *(float *)(param_1[3].actor_name + 0x1c) * (float)_DAT_005f075d);
          pCVar5 = (*((param_1->vtable)._ub)->getCarrier)(param_1);
          uVar6 = core_actor_cpp_castToClassHash_FUN_0040c8f0(pCVar5);
          *(uint *)(iVar3 + 0x10a78) = uVar6;
        }
      }
      local_1c = local_1c + 4;
    }
  }
  return;
}

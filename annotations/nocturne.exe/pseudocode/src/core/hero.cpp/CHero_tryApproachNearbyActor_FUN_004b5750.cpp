// Name: core_hero.cpp_CHero_tryApproachNearbyActor_FUN_004b5750
// Address: 004b5750
// Address Range: [[004b5750, 004b5916]]
// Convention: __cdecl
// Signature: undefined4 __cdecl core_hero_cpp_CHero_tryApproachNearbyActor_FUN_004b5750(int param_1)

#include "nocturne.h"

uint __cdecl core_hero_cpp_CHero_tryApproachNearbyActor_FUN_004b5750(int param_1)

{
  float *pfVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  int iStack_80;
  int iStack_7c;
  uint uStack_78;
  float local_60 [3];
  float afStack_54 [2];
  float fStack_4c;
  int iStack_48;
  int iStack_44;
  uint uStack_40;
  byte local_3c [12];
  byte local_30 [16];
  int local_20;
  int local_1c;
  float local_14;
  
  iVar3 = core_charactr_cpp_CCharacter_isCarryingAnything_FUN_004294f0(param_1);
  if (iVar3 == 0) {
    if (*(int *)(param_1 + 0x1fa18) != 0) {
      return 1;
    }
    pfVar1 = (float *)(param_1 + 0x20);
    local_1c = 0;
    for (local_20 = 0; local_20 < *(int *)(0x01E57284 + 0x14cd6c); local_20 = local_20 + 1) {
      iVar3 = *(int *)(0x01E57284 + local_1c + 0x14cd70);
      local_60[0] = *(float *)(iVar3 + 0x20) - *pfVar1;
      local_60[2] = *(float *)(iVar3 + 0x28) - *(float *)(param_1 + 0x28);
      if (((ABS(*(float *)(iVar3 + 0x24) - *(float *)(param_1 + 0x24)) <= (float)10) &&
          (local_60[1] = 0.0,
          SQRT(local_60[2] * local_60[2] + local_60[0] * local_60[0]) <= (float)10)) &&
         (iVar3 != param_1)) {
        iVar4 = core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0(local_30,local_60);
        local_14 = (float)core_actor_cpp_normalizeAngleToPi_FUN_0040df00
                                    (*(float *)(iVar4 + 4) - *(float *)(param_1 + 0x34));
        if (((ABS(local_14) <= (float)1.04719755116667) &&
            (iVar4 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_0040a290
                               (iVar3,local_3c,pfVar1), *(float *)(iVar4 + 8) <= 0.0)) &&
           (((**(code **)(*(int *)(iVar3 + 0x14c) + 0x90))(iVar3,&iStack_80), iStack_80 != 0 &&
            (iStack_7c == 0)))) {
          uStack_40 = uStack_78;
          iStack_48 = iStack_7c;
          iStack_44 = iStack_7c;
          core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240(iVar3,afStack_54,&iStack_48);
          fVar2 = fStack_4c - *(float *)(param_1 + 0x28);
          if ((SQRT(fVar2 * fVar2 + (afStack_54[0] - *pfVar1) * (afStack_54[0] - *pfVar1)) <=
               (float)5) &&
             (iVar4 = (**(code **)(*(int *)(iVar3 + 0x14c) + 0x94))(iVar3,param_1), iVar4 != 0)) {
            *(int *)(param_1 + 0x1fa18) = iVar3;
            return 1;
          }
        }
      }
      local_1c = local_1c + 4;
    }
  }
  return 0;
}

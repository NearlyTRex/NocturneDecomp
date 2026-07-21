// Name: core_dynamite.cpp_CDynamite_process_FUN_0046edc0
// Address: 0046edc0
// Address Range: [[0046edc0, 0046ef2a]]
// Convention: unknown
// Signature: void core_dynamite_cpp_CDynamite_process_FUN_0046edc0(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_dynamite_cpp_CDynamite_process_FUN_0046edc0(int param_1,float param_2)

{
  float fVar1;
  uint uVar2;
  int iVar3;
  float *pfVar4;
  byte auStack_60 [24];
  byte local_48 [24];
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  byte auStack_18 [12];
  
  core_weapon_cpp_CWeapon_process_FUN_00554030(param_1,param_2);
  if (0.0 <= *(float *)(param_1 + 0x570)) {
    fVar1 = *(float *)(param_1 + 0x570) - param_2;
    *(float *)(param_1 + 0x570) = fVar1;
    uVar2 = 0x02DC9450;
    if (fVar1 < 0.0) {
      *(uint *)(param_1 + 0x570) = 0;
      core_sound_cpp_CSound_killSound_FUN_0052ebb0(uVar2,*(uint *)(param_1 + 0x580));
      *(uint *)(param_1 + 0x580) = 0;
    }
    else {
      iVar3 = core_actor_cpp_randomChance_FUN_0040dea0
                        ((param_2 * (float)_DAT_0057e4ee * fVar1) / _DAT_0059c91c);
      if (iVar3 != 0) {
        pfVar4 = (float *)(**(code **)(*(int *)(param_1 + 0x14c) + 0x14))(param_1,local_48);
        fStack_24 = *pfVar4 + pfVar4[3];
        fStack_20 = pfVar4[1] + pfVar4[4];
        fStack_30 = fStack_24 * _DAT_0057e4f6;
        fStack_1c = pfVar4[2] + pfVar4[5];
        fStack_2c = fStack_20 * _DAT_0057e4f6;
        fStack_28 = fStack_1c * _DAT_0057e4f6;
        iVar3 = (**(code **)(*(int *)(param_1 + 0x14c) + 0x14))(param_1,auStack_60);
        fStack_28 = *(float *)(iVar3 + 0x14);
        pfVar4 = (float *)core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
                                    (param_1,auStack_18,&fStack_30);
        if (&fStack_30 != pfVar4) {
          fStack_30 = *pfVar4;
          fStack_2c = pfVar4[1];
          fStack_28 = pfVar4[2];
        }
        core_fire_cpp_CFireEffect_createSpark_FUN_0048ae90
                  (0x01C08D04,&fStack_30,0,0x4000,0x10000,0,0xffff);
        return;
      }
    }
  }
  return;
}

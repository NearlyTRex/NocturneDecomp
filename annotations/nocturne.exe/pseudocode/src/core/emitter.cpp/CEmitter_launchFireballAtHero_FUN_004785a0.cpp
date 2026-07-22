// Name: core_emitter.cpp_CEmitter_launchFireballAtHero_FUN_004785a0
// Address: 004785a0
// Address Range: [[004785a0, 00478763]]
// Convention: __cdecl
// Signature: void __cdecl core_emitter_cpp_CEmitter_launchFireballAtHero_FUN_004785a0(int param_1)

#include "nocturne.h"

void __cdecl core_emitter_cpp_CEmitter_launchFireballAtHero_FUN_004785a0(int param_1)

{
  float fVar1;
  int iVar2;
  unkbyte10 Var3;
  float10 fVar4;
  float10 fVar5;
  unkbyte10 Var6;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  double local_40;
  float fStack_1c;
  float local_18;
  float local_10;
  
  iVar2 = core_hero_cpp_closestHeroToPoint_FUN_004b4500((float *)(param_1 + 0x20));
  local_60 = *(float *)(iVar2 + 0x20) - *(float *)(param_1 + 0x20);
  local_5c = *(float *)(iVar2 + 0x24) - *(float *)(param_1 + 0x24);
  local_58 = *(float *)(iVar2 + 0x28) - *(float *)(param_1 + 0x28);
  if (&local_6c != &local_60) {
    local_6c = local_60;
    local_68 = local_5c;
    local_64 = local_58;
  }
  local_68 = local_68 + 5.3567960152785439e-315._0_4_;
  local_10 = (float)core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(0xc1000000,0x41000000);
  local_6c = local_10 + local_6c;
  local_10 = (float)core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(0xc1000000,0x41000000);
  Var3 = fsin((float10)-1.30899693895833);
  fVar4 = (float10)fptan((float10)1.30899693895833);
  fVar5 = (float10)local_10 + (float10)local_64;
  local_64 = (float)fVar5;
  Var6 = atan2((float10)local_6c);
  fVar1 = SQRT(local_70 * local_70 + local_68 * local_68);
  fVar7 = (float10)fcos(Var3);
  fVar8 = (float10)fsin(Var6);
  fVar9 = (float10)fcos(Var6);
  local_40 = (double)fVar1;
  fStack_1c = fVar1 * (float)32 * fVar1;
  fVar5 = fVar7 * (float10)2.0f * fVar7 * (fVar5 * (float10)fVar1 - (float10)local_6c);
  local_48 = (float)-fVar4;
  local_4c = (float)(fVar8 * fVar7);
  local_44 = (float)(fVar9 * fVar7);
  if ((float10)0 < fVar5) {
    local_18 = SQRT(fStack_1c / (float)fVar5);
    local_58 = local_4c * local_18;
    local_54 = local_48 * local_18;
    local_50 = local_44 * local_18;
    if (&local_4c != &local_58) {
      local_4c = local_58;
      local_48 = local_54;
      local_44 = local_50;
    }
    core_fire_cpp_CFireEffect_createFireball_FUN_0048b270(0x01C08D04,param_1 + 0x20,&local_4c,0,0)
    ;
  }
  return;
}

// Name: core_emitter.cpp_CEmitter_launchFireballAtHero_FUN_0049f0e0
// Address: 0049f0e0
// Address Range: [[0049f0e0, 0049f2d3]]
// Convention: __cdecl
// Signature: void __cdecl core_emitter_cpp_CEmitter_launchFireballAtHero_FUN_0049f0e0(CEmitter *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_emitter_cpp_CEmitter_launchFireballAtHero_FUN_0049f0e0(CEmitter *this_ptr)

{
  float fVar1;
  CHero *pCVar2;
  byte bVar3;
  unkbyte10 Var4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  float afStackY_1074 [1012];
  float local_90;
  CVector3f local_8c;
  float local_80;
  float local_7c [4];
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  CVector3f local_50;
  double local_44;
  float local_20;
  float local_1c;
  float local_18;
  
  bVar3 = 0;
  pCVar2 = core_hero_cpp_closestHeroToPoint_FUN_004ea640((CLocation *)&this_ptr->field_0x20);
  local_80 = *(float *)(pCVar2 + 0x20) - *(float *)&this_ptr->field_0x20;
  local_7c[0] = *(float *)(pCVar2 + 0x24) - *(float *)&this_ptr->field_0x24;
  local_7c[1] = *(float *)(pCVar2 + 0x28) - *(float *)&this_ptr->field_0x28;
  local_68 = local_80;
  local_7c[(uint)bVar3 * -2 + 6] = local_7c[(uint)bVar3 * -2];
  local_7c[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 7] =
       local_7c[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1];
  if (local_7c + 8 != local_7c + 5) {
    local_5c = local_68;
    local_58 = local_64;
    local_54 = local_60;
  }
  local_58 = local_58 + _DAT_005dc947;
  local_18 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00(-8.0,8.0);
  local_5c = local_18 + local_5c;
  local_18 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00(-8.0,8.0);
  Var4 = fsin((float10)_DAT_005dc94f);
  fVar5 = (float10)fptan((float10)_DAT_005dc95f);
  fVar6 = (float10)local_18 + (float10)local_54;
  local_54 = (float)fVar6;
  fVar7 = (float10)local_5c;
  atan2();
  fVar1 = SQRT(local_5c * local_5c + local_54 * local_54);
  fVar8 = (float10)fcos(Var4);
  fVar9 = (float10)fsin(fVar7);
  fVar7 = (float10)fcos(fVar7);
  local_44 = (double)fVar1;
  local_20 = fVar1 * (float)_DAT_005dc957 * fVar1;
  fVar6 = fVar8 * (float10)_DAT_005dc967 * fVar8 * (fVar6 * (float10)fVar1 - (float10)local_58);
  local_50.y = (float)-fVar5;
  local_90 = (float)fVar6;
  local_50.x = (float)(fVar9 * fVar8);
  local_50.z = (float)(fVar7 * fVar8);
  if ((float10)0 < fVar6) {
    local_1c = SQRT(local_20 / local_90);
    local_7c[2] = (float)(fVar9 * fVar8) * local_1c;
    local_7c[3] = (float)-fVar5 * local_1c;
    local_6c = (float)(fVar7 * fVar8) * local_1c;
    local_8c.x = local_7c[2];
    *(float *)((int)&local_8c + (uint)bVar3 * -8 + 4) = local_7c[(uint)bVar3 * -2 + 3];
    *(float *)((int)&local_8c + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8) =
         local_7c[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 4];
    if (&local_50 != &local_8c) {
      local_50.x = local_8c.x;
      local_50.y = local_8c.y;
      local_50.z = local_8c.z;
    }
    core_fire_cpp_CFireEffect_createFireball_FUN_004b5e00
              (0x01C57074,(CVector3f *)&this_ptr->field_0x20,&local_50,0,0);
  }
  return;
}

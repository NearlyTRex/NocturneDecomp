// Name: core_emitter.cpp_CEmitter_launchFireballAtHero_FUN_00486a80
// Address: 00486a80
// Address Range: [[00486a80, 00486c73]]
// Convention: __cdecl
// Signature: void __cdecl core_emitter_cpp_CEmitter_launchFireballAtHero_FUN_00486a80(CEmitter *this_ptr)

#include "nocturne.h"

void __cdecl core_emitter_cpp_CEmitter_launchFireballAtHero_FUN_00486a80(CEmitter *this_ptr)

{
  float fVar1;
  CHero *pCVar2;
  CLocation *location;
  byte bVar3;
  unkbyte10 Var4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  float afStackY_1078 [1012];
  CVector3f local_90;
  float local_80;
  float local_7c [5];
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  CVector3f local_54;
  double local_48;
  float fStack_24;
  float local_20;
  float local_18;
  
  bVar3 = 0;
  location = &(this_ptr->base).location;
  pCVar2 = core_hero_cpp_closestHeroToPoint_FUN_004ce050(location);
  local_80 = (pCVar2->base).base.location.position.x - (location->position).x;
  local_7c[0] = (pCVar2->base).base.location.position.y - (this_ptr->base).location.position.y;
  local_7c[1] = (pCVar2->base).base.location.position.z - (this_ptr->base).location.position.z;
  local_68 = local_80;
  local_7c[(uint)bVar3 * -2 + 6] = local_7c[(uint)bVar3 * -2];
  local_7c[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 7] =
       local_7c[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1];
  if (local_7c + 8 != local_7c + 5) {
    local_5c = local_68;
    local_58 = local_64;
    local_54.x = local_60;
  }
  local_58 = local_58 + 5.0f;
  local_18 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(-8.0,8.0);
  local_5c = local_18 + local_5c;
  local_18 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(-8.0,8.0);
  Var4 = fsin((float10)-1.30899693895833);
  fVar5 = (float10)fptan((float10)1.30899693895833);
  fVar6 = (float10)local_18 + (float10)local_54.x;
  local_54.x = (float)fVar6;
  fVar7 = atan2((float10)local_5c,fVar6);
  fVar1 = SQRT(local_60 * local_60 + local_58 * local_58);
  fVar8 = (float10)fcos(Var4);
  fVar9 = (float10)fsin(fVar7);
  fVar7 = (float10)fcos(fVar7);
  local_48 = (double)fVar1;
  fStack_24 = fVar1 * (float)32 * fVar1;
  fVar6 = fVar8 * (float10)2.0f * fVar8 * (fVar6 * (float10)fVar1 - (float10)local_5c);
  local_54.y = (float)-fVar5;
  local_54.x = (float)(fVar9 * fVar8);
  local_54.z = (float)(fVar7 * fVar8);
  if ((float10)0 < fVar6) {
    local_20 = SQRT(fStack_24 / (float)fVar6);
    local_7c[1] = (float)(fVar9 * fVar8) * local_20;
    local_7c[2] = (float)-fVar5 * local_20;
    local_7c[3] = (float)(fVar7 * fVar8) * local_20;
    local_90.x = local_7c[1];
    *(float *)((int)&local_90 + (uint)bVar3 * -8 + 4) = local_7c[(uint)bVar3 * -2 + 2];
    *(float *)((int)&local_90 + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8) =
         local_7c[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 3];
    if (&local_54 != &local_90) {
      local_54.x = local_90.x;
      local_54.y = local_90.y;
      local_54.z = local_90.z;
    }
    core_fire_cpp_CFireEffect_createFireball_FUN_0049d500
              (g_CFireEffectPtr,&(this_ptr->base).location.position,&local_54,0,0);
  }
  return;
}

// Name: core_emitter.cpp_CEmitter_launchFireballAtHero_FUN_004785a0
// Address: 004785a0
// Address Range: [[004785a0, 00478763]]
// Convention: __cdecl
// Signature: void __cdecl core_emitter_cpp_CEmitter_launchFireballAtHero_FUN_004785a0(CEmitter *this_ptr)

#include "nocturne.h"

void __cdecl core_emitter_cpp_CEmitter_launchFireballAtHero_FUN_004785a0(CEmitter *this_ptr)

{
  float fVar1;
  CHero *pCVar2;
  CLocation *location;
  unkbyte10 Var3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  CVector3f local_58;
  CVector3f local_4c;
  double local_40;
  float fStack_1c;
  float local_18;
  float local_10;
  
  location = &(this_ptr->base).location;
  pCVar2 = core_hero_cpp_closestHeroToPoint_FUN_004b4500(location);
  local_60 = (pCVar2->base).base.location.position.x - (location->position).x;
  local_5c = (pCVar2->base).base.location.position.y - (this_ptr->base).location.position.y;
  local_58.x = (pCVar2->base).base.location.position.z - (this_ptr->base).location.position.z;
  if (&local_6c != &local_60) {
    local_6c = local_60;
    local_68 = local_5c;
    local_64 = local_58.x;
  }
  local_68 = local_68 + 5.3567960152785439e-315._0_4_;
  local_10 = core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(-8.0,8.0);
  local_6c = local_10 + local_6c;
  local_10 = core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(-8.0,8.0);
  Var3 = fsin((float10)-1.30899693895833);
  fVar4 = (float10)fptan((float10)1.30899693895833);
  fVar5 = (float10)local_10 + (float10)local_64;
  local_64 = (float)fVar5;
  fVar6 = atan2((float10)local_6c,fVar5);
  fVar1 = SQRT(local_70 * local_70 + local_68 * local_68);
  fVar7 = (float10)fcos(Var3);
  fVar8 = (float10)fsin(fVar6);
  fVar6 = (float10)fcos(fVar6);
  local_40 = (double)fVar1;
  fStack_1c = fVar1 * (float)32 * fVar1;
  fVar5 = fVar7 * (float10)2.0f * fVar7 * (fVar5 * (float10)fVar1 - (float10)local_6c);
  local_4c.y = (float)-fVar4;
  local_4c.x = (float)(fVar8 * fVar7);
  local_4c.z = (float)(fVar6 * fVar7);
  if ((float10)0 < fVar5) {
    local_18 = SQRT(fStack_1c / (float)fVar5);
    local_58.x = local_4c.x * local_18;
    local_58.y = local_4c.y * local_18;
    local_58.z = local_4c.z * local_18;
    if (&local_4c != &local_58) {
      local_4c.x = local_58.x;
      local_4c.y = local_58.y;
      local_4c.z = local_58.z;
    }
    core_fire_cpp_CFireEffect_createFireball_FUN_0048b270
              (0x01C08D04,&(this_ptr->base).location.position,&local_4c,0,0);
  }
  return;
}

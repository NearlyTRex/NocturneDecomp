// Name: core_emitter.cpp_CEmitter_launchFireballAtHero_FUN_004a7e80
// Address: 004a7e80
// Address Range: [[004a7e80, 004a7ef6]]
// Convention: __cdecl
// Signature: void __cdecl core_emitter_cpp_CEmitter_launchFireballAtHero_FUN_004a7e80(CEmitter *this_ptr)

#include "nocturne.h"

/* WARNING: Inlined function: crt_math.c_atan2_FUN_006013b1 */

void __cdecl core_emitter_cpp_CEmitter_launchFireballAtHero_FUN_004a7e80(CEmitter *this_ptr)

{
  CHero *iVar2;
  float fVar2;
  CLocation *location;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar9;
  float10 fVar8;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  CVector3f local_54;
  CVector3f local_48;
  double dStack_3c;
  float local_18;
  float local_14;
  float local_10;
  float fVar1;
  
  location = &(this_ptr->base).location;
  iVar2 = core_hero_cpp_closestHeroToPoint_FUN_004f2170(location);
  local_60 = (iVar2->base).base.location.position.x - (location->position).x;
  local_5c = (iVar2->base).base.location.position.y - (this_ptr->base).location.position.y;
  local_58 = (iVar2->base).base.location.position.z - (this_ptr->base).location.position.z;
  if (&local_6c != &local_60) {
    local_6c = local_60;
    local_68 = local_5c;
    local_64 = local_58;
  }
  local_68 = local_68 + 5.0f;
  fVar2 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc10(-8.0,8.0);
  local_6c = fVar2 + local_6c;
  fVar2 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc10(-8.0,8.0);
  fVar3 = (float10)fsin((float10)-1.30899693895833);
  fVar4 = (float10)fptan((float10)1.30899693895833);
  fVar8 = (float10)local_64;
  local_64 = (float)((float10)fVar2 + fVar8);
  fVar9 = (float10)fpatan((float10)local_6c,(float10)fVar2 + fVar8);
  fVar2 = SQRT(local_6c * local_6c + local_64 * local_64);
  fVar5 = (float10)fcos((float10)-1.30899693895833);
  fVar6 = (float10)fsin(fVar9);
  fVar7 = (float10)fcos(fVar9);
  fVar8 = fVar5 * (float10)2.0f * fVar5 * (fVar4 * (float10)fVar2 - (float10)local_68);
  local_48.y = (float)-fVar3;
  local_48.x = (float)(fVar6 * fVar5);
  local_48.z = (float)(fVar7 * fVar5);
  if ((float10)0 < fVar8) {
    fVar2 = SQRT((fVar2 * (float)32 * fVar2) / (float)fVar8);
    local_54.x = local_48.x * fVar2;
    local_54.y = local_48.y * fVar2;
    local_54.z = local_48.z * fVar2;
    if (&local_48 != &local_54) {
      local_48.x = local_54.x;
      local_48.y = local_54.y;
      local_48.z = local_54.z;
    }
    core_fire_cpp_CFireEffect_createFireball_FUN_004c7db0
              (g_CFireEffectPtr,&(this_ptr->base).location.position,&local_48,0,0);
  }
  return;
}

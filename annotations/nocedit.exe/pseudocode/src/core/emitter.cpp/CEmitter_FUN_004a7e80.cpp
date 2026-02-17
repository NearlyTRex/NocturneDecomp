// Name: core_emitter.cpp_CEmitter_FUN_004a7e80
// Address: 004a7e80
// Address Range: [[004a7e80, 004a7ef6]]
// Convention: __cdecl
// Signature: void __cdecl core_emitter_cpp_CEmitter_FUN_004a7e80(CEmitter *this_ptr)

#include "nocturne.h"

/* WARNING: Inlined function: crt_math.c_atan2_FUN_006013b1 */

void __cdecl core_emitter_cpp_CEmitter_FUN_004a7e80(CEmitter *this_ptr)

{
  float fVar1;
  int iVar2;
  CLocation *location;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  unkbyte10 Var8;
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
  float local_40;
  double dStack_3c;
  float local_18;
  float local_14;
  float local_10;
  
  location = &(this_ptr->base).location;
  iVar2 = core_hero_cpp_closestHeroToPoint_FUN_004f2170(location);
  local_60 = *(float *)(iVar2 + 0x20) - (location->position).x;
  local_5c = *(float *)(iVar2 + 0x24) - (this_ptr->base).location.position.y;
  local_58 = *(float *)(iVar2 + 0x28) - (this_ptr->base).location.position.z;
  if (&local_6c != &local_60) {
    local_6c = local_60;
    local_68 = local_5c;
    local_64 = local_58;
  }
  local_68 = local_68 + 5.0f;
  local_10 = core_actor_cpp_getRandomFloat_FUN_0040cc10(-8.0,8.0);
  local_6c = local_10 + local_6c;
  local_10 = core_actor_cpp_getRandomFloat_FUN_0040cc10(-8.0,8.0);
  fVar3 = (float10)fsin((float10)-1.30899693895833);
  fVar4 = (float10)fptan((float10)1.30899693895833);
  fVar5 = (float10)local_64;
  local_64 = (float)((float10)local_10 + fVar5);
  Var8 = fpatan((float10)local_6c,(float10)local_10 + fVar5);
  fVar1 = SQRT(local_6c * local_6c + local_64 * local_64);
  fVar5 = (float10)fcos((float10)-1.30899693895833);
  fVar6 = (float10)fsin(Var8);
  fVar7 = (float10)fcos(Var8);
  dStack_3c = (double)fVar1;
  local_18 = fVar1 * (float)32 * fVar1;
  fVar4 = fVar5 * (float10)2.0f * fVar5 * (fVar4 * (float10)fVar1 - (float10)local_68);
  local_44 = (float)-fVar3;
  local_48 = (float)(fVar6 * fVar5);
  local_40 = (float)(fVar7 * fVar5);
  if ((float10)0 < fVar4) {
    local_14 = SQRT(local_18 / (float)fVar4);
    local_54 = local_48 * local_14;
    local_50 = local_44 * local_14;
    local_4c = local_40 * local_14;
    if (&local_48 != &local_54) {
      local_48 = local_54;
      local_44 = local_50;
      local_40 = local_4c;
    }
    core_fire_cpp_CFireEffect_FUN_004c7db0(g_CFireEffectPtr);
  }
  return;
}

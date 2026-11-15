// Name: core_emitter.cpp_CEmitter_launchFireballAtHero_FUN_00487c80
// Address: 00487c80
// Address Range: [[00487c80, 00487e73]]
// Convention: __cdecl
// Signature: void __cdecl core_emitter_cpp_CEmitter_launchFireballAtHero_FUN_00487c80(CEmitter *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_emitter_cpp_CEmitter_launchFireballAtHero_FUN_00487c80(CEmitter *this_ptr)

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
  float afStackY_1074 [1012];
  CVector3f CStack_8c;
  uint uStack_80;
  float afStack_7c [4];
  float fStack_6c;
  uint uStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  CVector3f CStack_50;
  double dStack_44;
  float fStack_20;
  float fStack_1c;
  float fStack_14;
  
  bVar3 = 0;
  location = &(this_ptr->base).location;
  pCVar2 = core_hero_cpp_closestHeroToPoint_FUN_004d22c0(location);
  afStack_7c[0] = (pCVar2->base).base.location.position.x - (location->position).x;
  afStack_7c[1] = (pCVar2->base).base.location.position.y - (this_ptr->base).location.position.y;
  afStack_7c[2] = (pCVar2->base).base.location.position.z - (this_ptr->base).location.position.z;
  uStack_68 = uStack_80;
  afStack_7c[(uint)bVar3 * -2 + 6] = afStack_7c[(uint)bVar3 * -2];
  afStack_7c[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 7] =
       afStack_7c[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1];
  if (afStack_7c + 9 != afStack_7c + 6) {
    fStack_58 = fStack_64;
    fStack_54 = fStack_60;
    CStack_50.x = fStack_5c;
  }
  fStack_54 = fStack_54 + _DAT_005bda04;
  fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(-8.0,8.0);
  fStack_58 = fStack_14 + fStack_58;
  fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(-8.0,8.0);
  Var4 = fsin((float10)_DAT_005bda0c);
  fVar5 = (float10)fptan((float10)_DAT_005bda1c);
  fVar6 = (float10)fStack_14 + (float10)CStack_50.x;
  CStack_50.x = (float)fVar6;
  fVar7 = atan2((float10)fStack_58,fVar6);
  fVar1 = SQRT(fStack_5c * fStack_5c + fStack_54 * fStack_54);
  fVar8 = (float10)fcos(Var4);
  fVar9 = (float10)fsin(fVar7);
  fVar7 = (float10)fcos(fVar7);
  dStack_44 = (double)fVar1;
  fStack_20 = fVar1 * (float)_DAT_005bda14 * fVar1;
  fVar6 = fVar8 * (float10)_DAT_005bda24 * fVar8 * (fVar6 * (float10)fVar1 - (float10)fStack_58);
  CStack_50.y = (float)-fVar5;
  CStack_50.x = (float)(fVar9 * fVar8);
  CStack_50.z = (float)(fVar7 * fVar8);
  if ((float10)0 < fVar6) {
    fStack_1c = SQRT(fStack_20 / (float)fVar6);
    afStack_7c[2] = (float)(fVar9 * fVar8) * fStack_1c;
    afStack_7c[3] = (float)-fVar5 * fStack_1c;
    fStack_6c = (float)(fVar7 * fVar8) * fStack_1c;
    CStack_8c.x = afStack_7c[2];
    *(float *)((int)&CStack_8c + (uint)bVar3 * -8 + 4) = afStack_7c[(uint)bVar3 * -2 + 3];
    *(float *)((int)&CStack_8c + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8) =
         afStack_7c[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 4];
    if (&CStack_50 != &CStack_8c) {
      CStack_50.x = CStack_8c.x;
      CStack_50.y = CStack_8c.y;
      CStack_50.z = CStack_8c.z;
    }
    core_fire_cpp_CFireEffect_createFireball_FUN_004a2830
              (0x01C73654,&(this_ptr->base).location.position,&CStack_50,0,0);
  }
  return;
}

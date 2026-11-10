// Name: core_emitter.cpp_FUN_00487c80
// Address: 00487c80
// Address Range: [[00487c80, 00487e73]]
// Convention: unknown
// Signature: void core_emitter_cpp_FUN_00487c80(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_emitter_cpp_FUN_00487c80(int param_1)

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
  float afStackY_1070 [1012];
  float fStack_8c;
  CVector3f CStack_88;
  float afStack_7c [4];
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  CVector3f CStack_4c;
  double dStack_40;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  bVar3 = 0;
  pCVar2 = core_hero_cpp_closestHeroToPoint_FUN_004d22c0((CLocation *)(param_1 + 0x20));
  afStack_7c[0] = *(float *)(pCVar2 + 0x20) - (((CLocation *)(param_1 + 0x20))->position).x;
  afStack_7c[1] = *(float *)(pCVar2 + 0x24) - *(float *)(param_1 + 0x24);
  afStack_7c[2] = *(float *)(pCVar2 + 0x28) - *(float *)(param_1 + 0x28);
  fStack_68 = CStack_88.z;
  afStack_7c[(uint)bVar3 * -2 + 6] = afStack_7c[(uint)bVar3 * -2];
  afStack_7c[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 7] =
       afStack_7c[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1];
  if (afStack_7c + 9 != afStack_7c + 6) {
    fStack_58 = fStack_64;
    fStack_54 = fStack_60;
    fStack_50 = fStack_5c;
  }
  fStack_54 = fStack_54 + _DAT_005bda04;
  fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(-8.0,8.0);
  fStack_58 = fStack_14 + fStack_58;
  fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(-8.0,8.0);
  Var4 = fsin((float10)_DAT_005bda0c);
  fVar5 = (float10)fptan((float10)_DAT_005bda1c);
  fVar6 = (float10)fStack_14 + (float10)fStack_50;
  fStack_50 = (float)fVar6;
  fVar7 = (float10)fStack_58;
  atan2();
  fVar1 = SQRT(fStack_58 * fStack_58 + fStack_50 * fStack_50);
  fVar8 = (float10)fcos(Var4);
  fVar9 = (float10)fsin(fVar7);
  fVar7 = (float10)fcos(fVar7);
  dStack_40 = (double)fVar1;
  fStack_1c = fVar1 * (float)_DAT_005bda14 * fVar1;
  fVar6 = fVar8 * (float10)_DAT_005bda24 * fVar8 * (fVar6 * (float10)fVar1 - (float10)fStack_54);
  CStack_4c.y = (float)-fVar5;
  fStack_8c = (float)fVar6;
  CStack_4c.x = (float)(fVar9 * fVar8);
  CStack_4c.z = (float)(fVar7 * fVar8);
  if ((float10)0 < fVar6) {
    fStack_18 = SQRT(fStack_1c / fStack_8c);
    afStack_7c[3] = (float)(fVar9 * fVar8) * fStack_18;
    fStack_6c = (float)-fVar5 * fStack_18;
    fStack_68 = (float)(fVar7 * fVar8) * fStack_18;
    CStack_88.x = afStack_7c[3];
    afStack_7c[(uint)bVar3 * -2 + -2] = afStack_7c[(uint)bVar3 * -2 + 4];
    afStack_7c[(uint)bVar3 * -2 + (uint)bVar3 * -2 + -1] =
         afStack_7c[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 5];
    if (&CStack_4c != &CStack_88) {
      CStack_4c.x = CStack_88.x;
      CStack_4c.y = CStack_88.y;
      CStack_4c.z = CStack_88.z;
    }
    core_fire_cpp_CFireEffect_createFireball_FUN_004a2830
              (0x01C73654,(CVector3f *)(param_1 + 0x20),&CStack_4c,0,0);
  }
  return;
}

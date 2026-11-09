// Name: core_emitter.cpp_FUN_00487c80
// Address: 00487c80
// Address Range: [[00487c80, 00487e73]]
// Convention: unknown
// Signature: void core_emitter_cpp_FUN_00487c80(int param_1)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
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
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  byte auStack_4c [8];
  float fStack_44;
  double dStack_40;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  bVar3 = 0;
  pCVar2 = core_hero_cpp_FUN_004d22c0((CLocation *)(param_1 + 0x20));
  fStack_7c = *(float *)(pCVar2 + 0x20) - *(float *)(param_1 + 0x20);
  fStack_78 = *(float *)(pCVar2 + 0x24) - *(float *)(param_1 + 0x24);
  fStack_74 = *(float *)(pCVar2 + 0x28) - *(float *)(param_1 + 0x28);
  fStack_68 = fStack_80;
  (&stack0xffffff9c)[(uint)bVar3 * 0xfffffffe] =
       (float)*(uint *)((int)&stack0xffffff84 + (uint)bVar3 * -8);
  *(uint *)((int)&stack0xffffffa0 + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
       *(uint *)((int)&stack0xffffff88 + (uint)bVar3 * -8 + (uint)bVar3 * -8);
  if (&stack0xffffffa8 != &stack0xffffff9c) {
    fStack_58 = fStack_64;
    fStack_54 = fStack_60;
    fStack_50 = fStack_5c;
  }
  fStack_54 = fStack_54 + _DAT_005bda04;
  fStack_14 = (float)core_actor_cpp_FUN_0040ce40(0xc1000000,0x41000000);
  fStack_58 = fStack_14 + fStack_58;
  fStack_14 = (float)core_actor_cpp_FUN_0040ce40(0xc1000000,0x41000000);
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
  auStack_4c._4_4_ = (float)-fVar5;
  fStack_8c = (float)fVar6;
  auStack_4c._0_4_ = (float)(fVar9 * fVar8);
  fStack_44 = (float)(fVar7 * fVar8);
  if ((float10)0 < fVar6) {
    fStack_18 = SQRT(fStack_1c / fStack_8c);
    fStack_70 = (float)(fVar9 * fVar8) * fStack_18;
    fStack_6c = (float)-fVar5 * fStack_18;
    fStack_68 = (float)(fVar7 * fVar8) * fStack_18;
    fStack_88 = fStack_70;
    (&stack0xffffff7c)[(uint)bVar3 * 0xfffffffe] =
         (float)*(uint *)(auStack_4c + (uint)bVar3 * -8 + -0x20);
    *(uint *)((int)&stack0xffffff80 + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
         *(uint *)(auStack_4c + (uint)bVar3 * -8 + (uint)bVar3 * -8 + -0x1c);
    if ((float *)auStack_4c != &stack0xffffff78) {
      auStack_4c._0_4_ = fStack_88;
      auStack_4c._4_4_ = fStack_84;
      fStack_44 = fStack_80;
    }
    core_fire_cpp_FUN_004a2830
              (0x01C73654,(CVector3f *)(param_1 + 0x20),(CVector3f *)auStack_4c,0,0);
  }
  return;
}

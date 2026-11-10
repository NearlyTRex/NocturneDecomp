// Name: core_charactr.cpp_FUN_00430c90
// Address: 00430c90
// Address Range: [[00430c90, 00430d88]]
// Convention: unknown
// Signature: void core_charactr_cpp_FUN_00430c90(CCharacter *param_1,undefined4 param_2,undefined4 param_3,CVector3f *param_4,float param_5)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_charactr_cpp_FUN_00430c90(CCharacter *param_1,uint param_2,uint param_3,CVector3f *param_4,float param_5)

{
  int iVar1;
  float unaff_ESI;
  uint *puVar2;
  float unaff_EDI;
  uint *puVar3;
  byte bVar4;
  float afStackY_1034 [1001];
  CFireEffect *this_ptr;
  CVector3f *position;
  float scale;
  CBoundingBox3D *in_stack_ffffff7c;
  float gore_multiplier;
  float *pfVar5;
  float radius;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  CVector3f CStack_40;
  float fStack_34;
  float afStack_30 [4];
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  
  bVar4 = 0;
  (*((param_1->base).vtable._ub)->getBoundingBox)(&param_1->base,in_stack_ffffff7c);
  puVar2 = (uint *)&stack0xffffff84;
  puVar3 = (uint *)&stack0xffffff94;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
    puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
  }
  afStack_30[2] = fStack_64 + fStack_58;
  afStack_30[3] = fStack_60 + fStack_54;
  fStack_20 = fStack_5c + fStack_50;
  fStack_10 = fStack_64 + fStack_58;
  *(float *)(&stack0xfffffff4 + (uint)bVar4 * -8) = afStack_30[(uint)bVar4 * -2 + 3];
  *(float *)(&stack0xfffffff8 + (uint)bVar4 * -8 + (uint)bVar4 * -8) =
       afStack_30[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4];
  pfVar5 = &stack0xffffffb4;
  fStack_1c = fStack_10 * _DAT_005d5a53;
  fStack_18 = unaff_EDI * _DAT_005d5a53;
  fStack_14 = unaff_ESI * _DAT_005d5a53;
  fStack_4c = fStack_10 * _DAT_005d5a53;
  *(float *)((int)&stack0xffffffb8 + (uint)bVar4 * 0xfffffffe * 4) =
       afStack_30[(uint)bVar4 * -2 + 6];
  *(float *)((int)&stack0xffffffb8 + ((uint)bVar4 * -2 + (uint)bVar4 * -2 + 1) * 4) =
       afStack_30[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 7];
  core_actor_cpp_FUN_00408b40(param_1,pfVar5);
  radius = 4.0;
  gore_multiplier = 1500.0;
  position = &CStack_40;
  scale = 2.0;
  CStack_40.x = fStack_34;
  *(float *)((int)&CStack_40 + (uint)bVar4 * -8 + 4) = afStack_30[(uint)bVar4 * -2];
  this_ptr = 0x01C57074;
  *(float *)((int)&CStack_40 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8) =
       afStack_30[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
  core_fire_cpp_CFireEffect_createExplosion_FUN_004b6c60
            (this_ptr,position,scale,gore_multiplier,radius);
  core_charactr_cpp_CCharacter_dismember_FUN_00430d90(param_1,param_4,param_5,0);
  return;
}

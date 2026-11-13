// Name: core_charactr.cpp_FUN_0042ffe0
// Address: 0042ffe0
// Address Range: [[0042ffe0, 004300da]]
// Convention: unknown
// Signature: void core_charactr_cpp_FUN_0042ffe0(int param_1,undefined4 param_2,undefined4 param_3)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_charactr_cpp_FUN_0042ffe0(int param_1,uint param_2,uint param_3)

{
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  byte bVar4;
  float afStackY_103c [1000];
  CFireEffect *this_ptr;
  CVector3f *position;
  float scale;
  float gore_multiplier;
  float radius;
  float *pfVar5;
  float local_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  CVector3f CStack_48;
  float fStack_3c;
  float afStack_38 [4];
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  
  bVar4 = 0;
  (**(code **)(*(int *)(param_1 + 0x154) + 0x1c))(param_1);
  puVar2 = (uint *)&stack0xffffff7c;
  puVar3 = &stack0xffffff94;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
    puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
  }
  afStack_38[2] = local_6c + fStack_60;
  afStack_38[3] = fStack_68 + fStack_5c;
  fStack_28 = fStack_64 + fStack_58;
  fStack_18 = local_6c + fStack_60;
  afStack_38[(uint)bVar4 * -2 + 9] = afStack_38[(uint)bVar4 * -2 + 3];
  afStack_38[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 10] =
       afStack_38[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4];
  pfVar5 = &stack0xffffffac;
  fStack_24 = fStack_18 * _DAT_005b839a;
  fStack_20 = fStack_14 * _DAT_005b839a;
  fStack_1c = fStack_10 * _DAT_005b839a;
  fStack_54 = fStack_18 * _DAT_005b839a;
  *(float *)((int)&stack0xffffffb0 + (uint)bVar4 * 0xfffffffe * 4) =
       afStack_38[(uint)bVar4 * -2 + 6];
  afStack_38[(uint)bVar4 * -2 + (uint)bVar4 * -2 + -5] =
       afStack_38[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 7];
  core_actor_cpp_FUN_00408b80(param_1,pfVar5);
  iVar1 = 0;
  radius = 4.0;
  gore_multiplier = 1500.0;
  position = &CStack_48;
  scale = 2.0;
  CStack_48.x = fStack_3c;
  *(float *)((int)&CStack_48 + (uint)bVar4 * -8 + 4) = afStack_38[(uint)bVar4 * -2];
  this_ptr = 0x01C73654;
  *(float *)((int)&CStack_48 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8) =
       afStack_38[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
  core_fire_cpp_CFireEffect_createExplosion_FUN_004a36e0
            (this_ptr,position,scale,gore_multiplier,radius,iVar1);
  core_charactr_cpp_FUN_004300e0(param_1,param_2,param_3,1);
  return;
}

// Name: core_charactr.cpp_FUN_00430c90
// Address: 00430c90
// Address Range: [[00430c90, 00430d88]]
// Convention: unknown
// Signature: void core_charactr_cpp_FUN_00430c90(CCharacter *param_1,CVector3f *param_2,float param_3)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_charactr_cpp_FUN_00430c90(CCharacter *param_1,CVector3f *param_2,float param_3)

{
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  byte bVar4;
  float afStackY_103c [1001];
  CFireEffect *this_ptr;
  CVector3f *position;
  float scale;
  float gore_multiplier;
  float *pfVar5;
  float radius;
  float local_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  CVector3f CStack_48;
  CVector3f CStack_3c;
  float fStack_30;
  float afStack_2c [4];
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  
  bVar4 = 0;
  (**(code **)(*(int *)&param_1->field_0x154 + 0x1c))(param_1);
  puVar2 = (uint *)&stack0xffffff7c;
  puVar3 = &stack0xffffff94;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
    puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
  }
  fStack_30 = local_6c + fStack_60;
  afStack_2c[0] = fStack_68 + fStack_5c;
  afStack_2c[1] = fStack_64 + fStack_58;
  fStack_18 = local_6c + fStack_60;
  afStack_2c[(uint)bVar4 * -2 + 6] = afStack_2c[(uint)bVar4 * -2];
  afStack_2c[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 7] =
       afStack_2c[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
  pfVar5 = &stack0xffffffac;
  afStack_2c[2] = fStack_18 * _DAT_005d5a53;
  afStack_2c[3] = fStack_14 * _DAT_005d5a53;
  fStack_1c = fStack_10 * _DAT_005d5a53;
  fStack_54 = fStack_18 * _DAT_005d5a53;
  *(float *)((int)&stack0xffffffb0 + (uint)bVar4 * 0xfffffffe * 4) =
       afStack_2c[(uint)bVar4 * -2 + 3];
  afStack_2c[(uint)bVar4 * -2 + (uint)bVar4 * -2 + -8] =
       afStack_2c[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4];
  core_actor_cpp_FUN_00408b40(param_1,pfVar5);
  radius = 4.0;
  gore_multiplier = 1500.0;
  position = &CStack_48;
  scale = 2.0;
  CStack_48._0_4_ = CStack_3c._0_4_;
  *(uint *)((int)&CStack_48 + (uint)bVar4 * -8 + 4) =
       *(uint *)((int)&CStack_3c + (uint)bVar4 * -8 + 4);
  this_ptr = 0x01C57074;
  *(uint *)((int)&CStack_48 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8) =
       *(uint *)((int)&CStack_3c + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
  core_fire_cpp_CFireEffect_createExplosion_FUN_004b6c60
            (this_ptr,position,scale,gore_multiplier,radius);
  core_charactr_cpp_CCharacter_dismember_FUN_00430d90(param_1,param_2,param_3,0);
  return;
}

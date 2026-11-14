// Name: core_prye.cpp_CPrye_canReachPickup_FUN_005267c0
// Address: 005267c0
// Address Range: [[005267c0, 00526ce8]]
// Convention: __cdecl
// Signature: int __cdecl core_prye_cpp_CPrye_canReachPickup_FUN_005267c0(CPrye *this_ptr,CDemonActor *item,int pickup_type,float *best_distance)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_prye_cpp_CPrye_canReachPickup_FUN_005267c0(CPrye *this_ptr,CDemonActor *item,int pickup_type,float *best_distance)

{
  float fVar1;
  int iVar2;
  uint *puVar3;
  int iVar4;
  uint *puVar5;
  byte bVar6;
  float afStackY_1108 [1002];
  CBoundingBox3D *in_stack_fffffea8;
  float fStack_150;
  float fStack_14c;
  float fStack_148;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  uint uStack_120;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  float fStack_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float fStack_f8;
  float fStack_f4;
  uint uStack_f0;
  float fStack_ec;
  float fStack_d8;
  float afStack_d4 [3];
  uint uStack_c8;
  uint uStack_c4;
  uint uStack_c0;
  uint uStack_bc;
  uint uStack_b8;
  uint uStack_b4;
  uint uStack_b0;
  uint uStack_ac;
  uint uStack_a8;
  uint uStack_a4;
  uint uStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  uint auStack_8c [3];
  uint uStack_80;
  uint uStack_7c;
  uint uStack_78;
  float fStack_6c;
  float afStack_68 [4];
  float fStack_58;
  float fStack_54;
  uint uStack_48;
  uint uStack_3c;
  uint uStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  
  bVar6 = 0;
  iVar4 = 0;
  for (iVar2 = 0; iVar2 < *(int *)(0x01D81080 + 0x1018); iVar2 = iVar2 + 1) {
    if (item == *(CDemonActor **)(iVar4 + 0x101c + 0x01D81080)) {
      return 0;
    }
    iVar4 = iVar4 + 4;
  }
  switch(pickup_type) {
  case 1:
    if ((this_ptr->base).base.carry_hands[0].carry_actor != (CDemonActor *)0x0) {
      return 0;
    }
    core_actor_cpp_FUN_00408bf0(item,&(this_ptr->base).base.base.location);
    fStack_2c = fStack_ec;
    *(uint *)((int)afStack_68 + ((uint)bVar6 * -2 + 0x10) * 4) =
         *(uint *)(&stack0xfffffee4 + ((uint)bVar6 * -2 + 0xd) * 4);
    *(uint *)((int)afStack_68 + ((uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x11) * 4) =
         *(uint *)(&stack0xfffffee4 + ((uint)bVar6 * -2 + (uint)bVar6 * -2 + 0xe) * 4);
    fStack_20 = SQRT(fStack_24 * fStack_24 + fStack_2c * fStack_2c + fStack_28 * fStack_28);
    if (fStack_20 <= 0.0) {
      fStack_28 = 0.0;
      fStack_2c = 0.0;
      fStack_24 = 0.0;
    }
    else {
      fVar1 = 1.0 / fStack_20;
      fStack_2c = fStack_2c * fVar1;
      fStack_28 = fStack_28 * fVar1;
      fStack_24 = fStack_24 * fVar1;
    }
    if (0.0 < fStack_24) {
      return 0;
    }
    uStack_ac = 0x40400000;
    uStack_a8 = 0x40000000;
    uStack_b0 = 0;
    if (&uStack_a4 != &uStack_b0) {
      fStack_9c = 2.0;
      uStack_a4 = 0;
      uStack_a0 = 0x40400000;
    }
    break;
  case 2:
    if ((this_ptr->base).base.carry_hands[1].carry_actor != (CDemonActor *)0x0) {
      return 0;
    }
    uStack_b8 = 0x40400000;
    uStack_b4 = 0x40000000;
    uStack_bc = 0;
    if (&uStack_a4 != &uStack_bc) {
      fStack_9c = 2.0;
      uStack_a0 = 0x40400000;
      uStack_a4 = 0;
    }
    break;
  case 3:
  case 4:
    if ((this_ptr->base).base.carry_hands[1].carry_actor != (CDemonActor *)0x0) {
      return 0;
    }
    if ((item != (CDemonActor *)0x0) &&
       (iVar2 = (*((item->vtable)._ub)->canPickup)(item,(CDemonActor *)this_ptr), iVar2 == 4)) {
      core_actor_cpp_FUN_00408bf0();
      uStack_3c = uStack_f0;
      *(uint *)((int)afStack_68 + ((uint)bVar6 * -2 + 0xc) * 4) =
           *(uint *)(&stack0xfffffee4 + ((uint)bVar6 * -2 + 0xc) * 4);
      *(uint *)((int)afStack_68 + ((uint)bVar6 * -2 + (uint)bVar6 * -2 + 0xd) * 4) =
           *(uint *)(&stack0xfffffee4 + ((uint)bVar6 * -2 + (uint)bVar6 * -2 + 0xd) * 4);
      in_stack_fffffea8 = (CBoundingBox3D *)0x526b17;
      core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_00576250();
      uStack_30 = uStack_120;
      *(uint *)((int)afStack_68 + ((uint)bVar6 * -2 + 0xf) * 4) =
           *(uint *)(&stack0xfffffee4 + (uint)bVar6 * -8);
      *(uint *)((int)afStack_68 + ((uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x10) * 4) =
           *(uint *)(&stack0xfffffee4 + ((uint)bVar6 * -2 + (uint)bVar6 * -2 + 1) * 4);
      if ((float)_DAT_005cd98f < ABS(fStack_2c)) {
        return 0;
      }
    }
    uStack_80 = 0;
    uStack_7c = 0x40400000;
    uStack_78 = 0x40000000;
    if (&uStack_a4 != &uStack_80) {
      uStack_a0 = 0x40400000;
      fStack_9c = 2.0;
      uStack_a4 = 0;
    }
    break;
  case 5:
    uStack_c4 = 0;
    uStack_c0 = 0;
    uStack_c8 = 0;
    if (&uStack_a4 != &uStack_c8) {
      uStack_a0 = 0;
      fStack_9c = 0.0;
      uStack_a4 = 0;
    }
    break;
  default:
    goto switchD_00526cc8_default;
  }
  afStack_d4[1] = 0.0;
  afStack_d4[2] = 0.0;
  afStack_d4[0] = 0.0;
  if ((float *)&uStack_a4 != afStack_d4) {
    uStack_a0 = 0;
    fStack_9c = 0.0;
    uStack_a4 = 0;
  }
  (*((item->vtable)._ub)->getBoundingBox)(item,in_stack_fffffea8);
  puVar3 = (uint *)&stack0xfffffec8;
  puVar5 = (uint *)&stack0xfffffea8;
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar5 = *puVar3;
    puVar3 = puVar3 + (uint)bVar6 * -2 + 1;
    puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
  }
  fStack_6c = fStack_150 + fStack_144;
  afStack_68[0] = fStack_14c + fStack_140;
  afStack_68[1] = fStack_148 + fStack_13c;
  fStack_108 = fStack_150 + fStack_144;
  *(uint *)(&stack0xfffffee4 + ((uint)bVar6 * -2 + 6) * 4) =
       *(uint *)((int)afStack_68 + (uint)bVar6 * 0xfffffff8);
  *(uint *)(&stack0xfffffee4 + ((uint)bVar6 * -2 + (uint)bVar6 * -2 + 7) * 4) =
       *(uint *)((int)afStack_68 + ((uint)bVar6 * -2 + (uint)bVar6 * -2 + 1) * 4);
  fStack_114 = fStack_108 * _DAT_005cd997;
  fStack_110 = fStack_104 * _DAT_005cd997;
  fStack_10c = fStack_100 * _DAT_005cd997;
  fStack_90 = fStack_108 * _DAT_005cd997;
  *(uint *)((int)auStack_8c + (uint)bVar6 * 0xfffffff8) =
       *(uint *)(&stack0xfffffee4 + ((uint)bVar6 * -2 + 3) * 4);
  *(uint *)((int)auStack_8c + ((uint)bVar6 * -2 + (uint)bVar6 * -2 + 1) * 4) =
       *(uint *)(&stack0xfffffee4 + ((uint)bVar6 * -2 + (uint)bVar6 * -2 + 4) * 4);
  core_actor_cpp_FUN_00408b80();
  auStack_8c[2] = uStack_48;
  *(uint *)((int)auStack_8c + ((uint)bVar6 * -2 + 3) * 4) =
       *(uint *)((int)afStack_68 + ((uint)bVar6 * -2 + 9) * 4);
  *(uint *)((int)auStack_8c + ((uint)bVar6 * -2 + (uint)bVar6 * -2 + 4) * 4) =
       *(uint *)((int)afStack_68 + ((uint)bVar6 * -2 + (uint)bVar6 * -2 + 10) * 4);
  core_actor_cpp_FUN_00408bf0();
  afStack_68[2] = fStack_54;
  *(uint *)((int)afStack_68 + ((uint)bVar6 * -2 + 3) * 4) =
       *(uint *)((int)afStack_68 + ((uint)bVar6 * -2 + 6) * 4);
  *(uint *)((int)afStack_68 + ((uint)bVar6 * -2 + (uint)bVar6 * -2 + 4) * 4) =
       *(uint *)((int)afStack_68 + ((uint)bVar6 * -2 + (uint)bVar6 * -2 + 7) * 4);
  fStack_fc = afStack_68[2] - fStack_9c;
  fStack_f8 = afStack_68[3] - fStack_98;
  fStack_f4 = fStack_58 - fStack_94;
  fStack_d8 = afStack_68[2] - fStack_9c;
  *(uint *)((int)afStack_d4 + (uint)bVar6 * 0xfffffff8) =
       *(uint *)(&stack0xfffffee4 + ((uint)bVar6 * -2 + 9) * 4);
  *(uint *)((int)afStack_d4 + ((uint)bVar6 * -2 + (uint)bVar6 * -2 + 1) * 4) =
       *(uint *)(&stack0xfffffee4 + ((uint)bVar6 * -2 + (uint)bVar6 * -2 + 10) * 4);
  if ((ABS(afStack_d4[0]) <= (float)_DAT_005cd99f) &&
     (((fVar1 = SQRT(fStack_d8 * fStack_d8 + afStack_d4[1] * afStack_d4[1]), pickup_type == 5 ||
       (fVar1 <= _DAT_005cd9a7)) && (0.0 <= afStack_d4[1])))) {
    if (*best_distance < fVar1) {
      return 0;
    }
    *best_distance = fVar1;
    return 1;
  }
switchD_00526cc8_default:
  return 0;
}

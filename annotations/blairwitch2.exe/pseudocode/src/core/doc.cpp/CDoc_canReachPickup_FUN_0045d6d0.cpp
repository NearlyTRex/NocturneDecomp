// Name: core_doc.cpp_CDoc_canReachPickup_FUN_0045d6d0
// Address: 0045d6d0
// Address Range: [[0045d6d0, 0045db32]]
// Convention: __cdecl
// Signature: int __cdecl core_doc_cpp_CDoc_canReachPickup_FUN_0045d6d0(CDoc *this_ptr,CDemonActor *item,int pickup_type,float *best_distance)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_doc_cpp_CDoc_canReachPickup_FUN_0045d6d0(CDoc *this_ptr,CDemonActor *item,int pickup_type,float *best_distance)

{
  float fVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  byte bVar5;
  float afStackY_10ec [1001];
  CBoundingBox3D *in_stack_fffffec0;
  float *pfVar6;
  float fStack_11c;
  float fStack_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  float fStack_108;
  float fStack_104;
  uint uStack_f8;
  float fStack_f4;
  uint uStack_f0;
  uint uStack_ec;
  float fStack_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  uint uStack_b8;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  uint uStack_a4;
  float fStack_a0;
  uint uStack_9c;
  uint uStack_98;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  uint uStack_80;
  float fStack_74;
  uint uStack_70;
  uint uStack_6c;
  uint uStack_68;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  
  bVar5 = 0;
  switch(pickup_type) {
  case 1:
    if ((this_ptr->base).base.carry_hands[0].carry_actor != (CDemonActor *)0x0) {
      return 0;
    }
    core_actor_cpp_FUN_00408de0(item,&(this_ptr->base).base.base.location);
    fStack_34 = fStack_c4;
    (&stack0xffffffcc)[(uint)bVar5 * -2 + 1] = (&stack0xffffff3c)[(uint)bVar5 * -2 + 1];
    (&stack0xffffffcc)[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 2] =
         (&stack0xffffff3c)[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 2];
    fStack_1c = SQRT(fStack_2c * fStack_2c + fStack_34 * fStack_34 + fStack_30 * fStack_30);
    if (fStack_1c <= 0.0) {
      fStack_30 = 0.0;
      fStack_34 = 0.0;
      fStack_2c = 0.0;
    }
    else {
      fVar1 = 1.0 / fStack_1c;
      fStack_34 = fStack_34 * fVar1;
      fStack_30 = fStack_30 * fVar1;
      fStack_2c = fStack_2c * fVar1;
    }
    if (0.0 < fStack_2c) {
      return 0;
    }
    fStack_f4 = 0.0;
    uStack_f0 = 0x40400000;
    uStack_ec = 0x40000000;
    if (&stack0xffffff60 != &stack0xffffff0c) {
      uStack_9c = 0x40400000;
      uStack_98 = 0x40000000;
      fStack_a0 = 0.0;
    }
    break;
  case 2:
    if ((this_ptr->base).base.carry_hands[1].carry_actor != (CDemonActor *)0x0) {
      return 0;
    }
    fStack_a8 = 3.0;
    uStack_a4 = 0x40000000;
    fStack_ac = 0.0;
    if (&stack0xffffff60 != &stack0xffffff54) {
      uStack_9c = 0x40400000;
      uStack_98 = 0x40000000;
      fStack_a0 = 0.0;
    }
    break;
  case 3:
  case 4:
    if ((this_ptr->base).base.carry_hands[1].carry_actor != (CDemonActor *)0x0) {
      return 0;
    }
    if ((item != (CDemonActor *)0x0) &&
       (iVar2 = (*((item->vtable)._ub)->canPickup)(item,(CDemonActor *)this_ptr), iVar2 == 4)) {
      core_actor_cpp_FUN_00408de0(item,&(this_ptr->base).base.base.location);
      fStack_38 = fStack_74;
      (&stack0xffffffcc)[(uint)bVar5 * 0xfffffffe] =
           (float)(&stack0xffffff90)[(uint)bVar5 * 0xfffffffe];
      (&stack0xffffffcc)[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
           (float)(&stack0xffffff90)[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
      if (1.0 < ABS(fStack_38)) {
        return 0;
      }
      in_stack_fffffec0 = (CBoundingBox3D *)0x45d9dc;
      core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005838f0(&stack0xffffffc8);
      uStack_f8 = uStack_80;
      (&stack0xffffff0c)[(uint)bVar5 * 0xfffffffe] = (&stack0xffffff78)[(uint)bVar5 * -2 + 3];
      (&stack0xffffff0c)[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
           (&stack0xffffff78)[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4];
      if ((float)_DAT_005d0807 < ABS(fStack_f4)) {
        return 0;
      }
    }
    uStack_70 = 0;
    uStack_68 = 0x40000000;
    uStack_6c = 0x40400000;
    if (&stack0xffffff60 != (float *)&stack0xffffff90) {
      uStack_9c = 0x40400000;
      uStack_98 = 0x40000000;
      fStack_a0 = 0.0;
    }
    break;
  default:
    goto switchD_0045d6eb_default;
  }
  core_actor_cpp_FUN_00408d70(this_ptr,&stack0xffffff60);
  uStack_b8 = fStack_4c;
  (&stack0xffffff3c)[(uint)bVar5 * -2 + 4] = (&stack0xffffffa8)[(uint)bVar5 * -2 + 4];
  (&stack0xffffff3c)[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 5] =
       (&stack0xffffffa8)[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 5];
  (*((item->vtable)._ub)->getBoundingBox)(item,in_stack_fffffec0);
  puVar3 = (uint *)&stack0xfffffecc;
  puVar4 = (uint *)&stack0xfffffedc;
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
    puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
  }
  fStack_50 = fStack_11c + fStack_110;
  fStack_4c = fStack_118 + fStack_10c;
  fStack_48 = fStack_114 + fStack_108;
  fStack_5c = fStack_11c + fStack_110;
  (&stack0xffffffa8)[(uint)bVar5 * 0xfffffffe] = (&stack0xffffffa8)[(uint)bVar5 * -2 + 3];
  (&stack0xffffffa8)[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
       (&stack0xffffffa8)[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4];
  pfVar6 = &stack0xffffff38;
  fStack_8c = fStack_5c * _DAT_005d080f;
  fStack_88 = fStack_58 * _DAT_005d080f;
  fStack_84 = fStack_54 * _DAT_005d080f;
  fStack_c8 = fStack_5c * _DAT_005d080f;
  (&stack0xffffff3c)[(uint)bVar5 * 0xfffffffe] = (&stack0xffffff78)[(uint)bVar5 * 0xfffffffe];
  (&stack0xffffff3c)[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
       (&stack0xffffff78)[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
  core_actor_cpp_FUN_00408d70(item,pfVar6);
  fStack_20 = fStack_104;
  (&stack0xffffffe8)[(uint)bVar5 * -2 + -1] =
       (float)*(uint *)(&stack0xffffff00 + (uint)bVar5 * -8);
  (&stack0xffffffe8)[(uint)bVar5 * -2 + (uint)bVar5 * -2] =
       (float)*(uint *)(&stack0xffffff04 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
  fStack_d4 = fStack_20 - fStack_b0;
  fStack_d0 = fStack_1c - fStack_ac;
  fStack_cc = fStack_18 - fStack_a8;
  fStack_e0 = fStack_20 - fStack_b0;
  (&stack0xffffff24)[(uint)bVar5 * 0xfffffffe] = (&stack0xffffff24)[(uint)bVar5 * -2 + 3];
  (&stack0xffffff24)[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
       (&stack0xffffff24)[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4];
  if ((ABS(fStack_dc) <= (float)_DAT_005d0817) &&
     (fVar1 = SQRT(fStack_e0 * fStack_e0 + fStack_d8 * fStack_d8), fVar1 <= (float)_DAT_005d081f)) {
    if (*best_distance < fVar1) {
      return 0;
    }
    *best_distance = fVar1;
    return 1;
  }
switchD_0045d6eb_default:
  return 0;
}

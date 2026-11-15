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
  CVector3f *input_local_point;
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
  byte auStack_f0 [8];
  float afStack_e8 [4];
  float fStack_d8;
  float afStack_d4 [7];
  uint uStack_b8;
  uint uStack_b4;
  float afStack_b0 [7];
  float fStack_94;
  CVector3f CStack_90;
  CVector3f CStack_84;
  uint uStack_78;
  float fStack_6c;
  float afStack_68 [4];
  float fStack_58;
  CVector3f CStack_54;
  CVector3f CStack_48;
  float fStack_3c;
  float afStack_38 [10];
  
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
    core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408bf0
              (item,&(this_ptr->base).base.base.location.position,(CVector3f *)(auStack_f0 + 4));
    afStack_38[3] = (float)auStack_f0._4_4_;
    afStack_38[(uint)bVar6 * -2 + 4] = afStack_e8[(uint)bVar6 * -2];
    afStack_38[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 5] =
         afStack_e8[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
    afStack_38[6] =
         SQRT(afStack_38[5] * afStack_38[5] +
              afStack_38[3] * afStack_38[3] + afStack_38[4] * afStack_38[4]);
    if (afStack_38[6] <= 0.0) {
      afStack_38[4] = 0.0;
      afStack_38[3] = 0.0;
      afStack_38[5] = 0.0;
    }
    else {
      fVar1 = 1.0 / afStack_38[6];
      afStack_38[3] = afStack_38[3] * fVar1;
      afStack_38[4] = afStack_38[4] * fVar1;
      afStack_38[5] = afStack_38[5] * fVar1;
    }
    if (0.0 < afStack_38[5]) {
      return 0;
    }
    afStack_b0[1] = 3.0;
    afStack_b0[2] = 2.0;
    afStack_b0[0] = 0.0;
    if (afStack_b0 + 3 != afStack_b0) {
      afStack_b0[5] = 2.0;
      afStack_b0[3] = 0.0;
      afStack_b0[4] = 3.0;
    }
    break;
  case 2:
    if ((this_ptr->base).base.carry_hands[1].carry_actor != (CDemonActor *)0x0) {
      return 0;
    }
    uStack_b8 = 0x40400000;
    uStack_b4 = 0x40000000;
    afStack_d4[6] = 0.0;
    if (afStack_b0 + 3 != afStack_d4 + 6) {
      afStack_b0[5] = 2.0;
      afStack_b0[4] = 3.0;
      afStack_b0[3] = 0.0;
    }
    break;
  case 3:
  case 4:
    if ((this_ptr->base).base.carry_hands[1].carry_actor != (CDemonActor *)0x0) {
      return 0;
    }
    if ((item != (CDemonActor *)0x0) &&
       (iVar2 = (*((item->vtable)._ub)->canPickup)(item,(CDemonActor *)this_ptr), iVar2 == 4)) {
      core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408bf0
                (item,&(this_ptr->base).base.base.location.position,(CVector3f *)auStack_f0);
      fStack_3c = (float)auStack_f0._0_4_;
      afStack_38[(uint)bVar6 * -2] = afStack_e8[(uint)bVar6 * -2 + -1];
      afStack_38[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
           afStack_e8[(uint)bVar6 * -2 + (uint)bVar6 * -2];
      in_stack_fffffea8 = (CBoundingBox3D *)0x526b17;
      core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_00576250();
      afStack_38[2] = (float)uStack_120;
      afStack_38[(uint)bVar6 * -2 + 3] = *(float *)(&stack0xfffffee4 + (uint)bVar6 * -8);
      afStack_38[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4] =
           *(float *)(&stack0xfffffee8 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
      if ((float)_DAT_005cd98f < ABS(afStack_38[3])) {
        return 0;
      }
    }
    CStack_84.y = 0.0;
    CStack_84.z = 3.0;
    uStack_78 = 0x40000000;
    if (afStack_b0 + 3 != &CStack_84.y) {
      afStack_b0[4] = 3.0;
      afStack_b0[5] = 2.0;
      afStack_b0[3] = 0.0;
    }
    break;
  case 5:
    afStack_d4[4] = 0.0;
    afStack_d4[5] = 0.0;
    afStack_d4[3] = 0.0;
    if (afStack_b0 + 3 != afStack_d4 + 3) {
      afStack_b0[4] = 0.0;
      afStack_b0[5] = 0.0;
      afStack_b0[3] = 0.0;
    }
    break;
  default:
    goto switchD_00526cc8_default;
  }
  afStack_d4[1] = 0.0;
  afStack_d4[2] = 0.0;
  afStack_d4[0] = 0.0;
  if (afStack_b0 + 3 != afStack_d4) {
    afStack_b0[4] = 0.0;
    afStack_b0[5] = 0.0;
    afStack_b0[3] = 0.0;
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
  *(float *)((int)&stack0xfffffefc + (uint)bVar6 * -8) = afStack_68[(uint)bVar6 * -2];
  *(float *)((int)&stack0xffffff00 + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
       afStack_68[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
  input_local_point = &CStack_90;
  fStack_114 = fStack_108 * _DAT_005cd997;
  fStack_110 = fStack_104 * _DAT_005cd997;
  fStack_10c = fStack_100 * _DAT_005cd997;
  CStack_90.x = fStack_108 * _DAT_005cd997;
  *(uint *)((int)&CStack_90 + (uint)bVar6 * -8 + 4) =
       *(uint *)((int)&stack0xfffffef0 + (uint)bVar6 * -8);
  *(uint *)((int)&CStack_90 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8) =
       *(uint *)((int)&stack0xfffffef4 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b80(item,input_local_point,&CStack_48);
  CStack_84.x = CStack_48.x;
  *(uint *)((int)&CStack_84 + (uint)bVar6 * -8 + 4) =
       *(uint *)((int)&CStack_48 + (uint)bVar6 * -8 + 4);
  *(uint *)((int)&CStack_84 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8) =
       *(uint *)((int)&CStack_48 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
  core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408bf0
            ((CDemonActor *)this_ptr,&CStack_84,&CStack_54);
  afStack_68[2] = CStack_54.x;
  afStack_68[(uint)bVar6 * -2 + 3] = *(float *)((int)&CStack_54 + (uint)bVar6 * -8 + 4);
  afStack_68[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4] =
       *(float *)((int)&CStack_54 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
  fStack_fc = afStack_68[2] - afStack_b0[5];
  fStack_f8 = afStack_68[3] - afStack_b0[6];
  fStack_f4 = fStack_58 - fStack_94;
  fStack_d8 = afStack_68[2] - afStack_b0[5];
  afStack_d4[(uint)bVar6 * -2] = *(float *)((int)&stack0xffffff08 + (uint)bVar6 * -8);
  afStack_d4[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
       *(float *)((int)&stack0xffffff0c + (uint)bVar6 * -8 + (uint)bVar6 * -8);
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

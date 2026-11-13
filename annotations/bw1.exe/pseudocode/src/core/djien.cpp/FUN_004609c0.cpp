// Name: core_djien.cpp_FUN_004609c0
// Address: 004609c0
// Address Range: [[004609c0, 00460ca5]]
// Convention: unknown
// Signature: void core_djien_cpp_FUN_004609c0(CEnemy *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_djien_cpp_FUN_004609c0(CEnemy *param_1)

{
  CDeformableModelInstance *this_ptr;
  float fVar1;
  int iVar2;
  uint uVar3;
  byte bVar4;
  float afStackY_1104 [999];
  float *pfVar5;
  SDamageInfo *this_ptr_00;
  SDamageInfo SStack_158;
  float fStack_11c;
  float afStack_118 [5];
  float afStack_104 [3];
  float afStack_f8 [3];
  CVector3f CStack_ec;
  CVector3f CStack_e0;
  float fStack_d4;
  float afStack_d0 [2];
  CVector3f CStack_c8;
  float fStack_bc;
  float afStack_b8 [4];
  float fStack_a8;
  float fStack_a4;
  CVector3f aCStack_98 [2];
  CVector3f aCStack_80 [2];
  CVector3f CStack_68;
  float fStack_5c;
  float afStack_58 [4];
  float fStack_48;
  float fStack_44;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  bVar4 = 0;
  this_ptr = &(param_1->base).model;
  core_skeleton_cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_00569130
            (this_ptr,*(int *)(param_1[1].base.base.actor_name + 8),aCStack_98);
  pfVar5 = &fStack_11c;
  fStack_11c = aCStack_98[0].x;
  afStack_118[(uint)bVar4 * -2] = *(float *)((int)aCStack_98 + (uint)bVar4 * -8 + 4);
  afStack_118[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
       *(float *)((int)aCStack_98 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
  core_actor_cpp_FUN_00408b40(param_1,pfVar5);
  core_skeleton_cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_00569130
            (this_ptr,*(int *)(param_1[1].base.base.actor_name + 0x10),aCStack_80);
  pfVar5 = afStack_118 + 2;
  afStack_118[2] = aCStack_80[0].x;
  afStack_118[(uint)bVar4 * -2 + 3] = *(float *)((int)aCStack_80 + (uint)bVar4 * -8 + 4);
  afStack_118[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4] =
       *(float *)((int)aCStack_80 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
  core_actor_cpp_FUN_00408b40(param_1,pfVar5);
  core_skeleton_cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_00569130
            (this_ptr,*(int *)(param_1[1].base.base.actor_name + 0xc),&CStack_68);
  pfVar5 = afStack_118 + 5;
  afStack_104[0] = CStack_68.x;
  afStack_118[(uint)bVar4 * -2 + 6] = *(float *)((int)&CStack_68 + (uint)bVar4 * -8 + 4);
  afStack_118[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 7] =
       *(float *)((int)&CStack_68 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
  core_actor_cpp_FUN_00408b40(param_1,pfVar5);
  fStack_5c = fStack_a4;
  afStack_58[(uint)bVar4 * -2] = afStack_b8[(uint)bVar4 * -2 + 6];
  afStack_58[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
       afStack_b8[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 7];
  core_skeleton_cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_00569130
            (this_ptr,*(int *)(param_1[1].base.base.actor_name + 0x14),&CStack_c8);
  pfVar5 = afStack_118 + 8;
  afStack_f8[0] = CStack_c8.x;
  afStack_118[(uint)bVar4 * -2 + 9] = *(float *)((int)&CStack_c8 + (uint)bVar4 * -8 + 4);
  afStack_118[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 10] =
       *(float *)((int)&CStack_c8 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
  core_actor_cpp_FUN_00408b40(param_1,pfVar5);
  fVar1 = fStack_5c;
  this_ptr_00 = &SStack_158;
  afStack_58[2] = fStack_44;
  afStack_58[(uint)bVar4 * -2 + 3] = afStack_58[(uint)bVar4 * -2 + 6];
  afStack_58[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4] =
       afStack_58[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 7];
  afStack_b8[2] = fVar1 + afStack_58[2];
  afStack_b8[3] = afStack_58[0] + afStack_58[3];
  fStack_a8 = afStack_58[1] + fStack_48;
  fStack_d4 = fVar1 + afStack_58[2];
  afStack_d0[(uint)bVar4 * -2] = afStack_b8[(uint)bVar4 * -2 + 3];
  afStack_d0[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
       afStack_b8[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4];
  fStack_2c = afStack_b8[2];
  fStack_20 = fStack_d4 * _DAT_005d8d8c;
  fStack_1c = afStack_d0[0] * _DAT_005d8d8c;
  fStack_18 = afStack_d0[1] * _DAT_005d8d8c;
  fStack_28 = afStack_b8[3];
  CStack_ec.x = fStack_d4 * _DAT_005d8d8c;
  *(float *)((int)&CStack_ec + (uint)bVar4 * -8 + 4) = afStack_58[(uint)bVar4 * -2 + 0xf];
  *(float *)((int)&CStack_ec + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8) =
       afStack_58[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x10];
  fStack_24 = fStack_a8;
  fStack_bc = fStack_2c;
  afStack_b8[(uint)bVar4 * -2] = afStack_58[(uint)bVar4 * -2 + 0xc];
  afStack_b8[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
       afStack_58[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0xd];
  fStack_38 = fStack_bc * _DAT_005d8d8c;
  fStack_34 = afStack_b8[0] * _DAT_005d8d8c;
  fStack_30 = afStack_b8[1] * _DAT_005d8d8c;
  CStack_e0.x = fStack_bc * _DAT_005d8d8c;
  *(float *)((int)&CStack_e0 + (uint)bVar4 * -8 + 4) = afStack_58[(uint)bVar4 * -2 + 9];
  *(float *)((int)&CStack_e0 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8) =
       afStack_58[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 10];
  core_charactr_cpp_SDamageInfo_ctor_FUN_0042c010(this_ptr_00);
  SStack_158.damage_amount = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00(8.0,12.0);
  SStack_158.attacker = (CDemonActor *)param_1;
  SStack_158.wielder = (CDemonActor *)param_1;
  fStack_14 = SStack_158.damage_amount;
  core_enemy_cpp_CEnemy_testAttackRadius_FUN_004a0770(param_1,&CStack_e0,3.0,&SStack_158);
  core_enemy_cpp_CEnemy_testAttackRadius_FUN_004a0770(param_1,&CStack_ec,3.0,&SStack_158);
  iVar2 = core_sound_cpp_CSound_isSoundPlaying_FUN_0057d9c0
                    (0x02C82A60,param_1[1].base.base.runtime_state);
  if (iVar2 != 0) {
    return;
  }
  uVar3 = (*((param_1->base).base.vtable._ub)->playSound)
                    ((CDemonActor *)param_1,"?stick-stump?.wav" + 1);
  param_1[1].base.base.runtime_state = uVar3;
  return;
}

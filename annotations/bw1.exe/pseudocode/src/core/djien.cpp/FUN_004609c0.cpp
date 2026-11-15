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
  CVector3f *pCVar5;
  SDamageInfo *this_ptr_00;
  SDamageInfo SStack_158;
  CVector3f CStack_11c;
  CVector3f CStack_110;
  CVector3f CStack_104;
  CVector3f CStack_f8;
  CVector3f CStack_ec;
  CVector3f CStack_e0;
  float fStack_d4;
  float afStack_d0 [2];
  CVector3f CStack_c8;
  float fStack_bc;
  float afStack_b8 [4];
  float fStack_a8;
  CVector3f CStack_a4;
  CVector3f CStack_98;
  CVector3f CStack_8c;
  CVector3f CStack_80;
  CVector3f CStack_74;
  CVector3f CStack_68;
  float fStack_5c;
  float afStack_58 [4];
  float fStack_48;
  CVector3f CStack_44;
  float fStack_38;
  float afStack_34 [4];
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  bVar4 = 0;
  this_ptr = &(param_1->base).model;
  core_skeleton_cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_00569130
            (this_ptr,*(int *)(param_1[1].base.base.actor_name + 8),&CStack_98);
  pCVar5 = &CStack_11c;
  CStack_11c.x = CStack_98.x;
  *(uint *)((int)&CStack_11c + (uint)bVar4 * -8 + 4) =
       *(uint *)((int)&CStack_98 + (uint)bVar4 * -8 + 4);
  *(uint *)((int)&CStack_11c + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8) =
       *(uint *)((int)&CStack_98 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b40
            ((CDemonActor *)param_1,pCVar5,&CStack_8c);
  core_skeleton_cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_00569130
            (this_ptr,*(int *)(param_1[1].base.base.actor_name + 0x10),&CStack_80);
  pCVar5 = &CStack_110;
  CStack_110.x = CStack_80.x;
  *(uint *)((int)&CStack_110 + (uint)bVar4 * -8 + 4) =
       *(uint *)((int)&CStack_80 + (uint)bVar4 * -8 + 4);
  *(uint *)((int)&CStack_110 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8) =
       *(uint *)((int)&CStack_80 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b40
            ((CDemonActor *)param_1,pCVar5,&CStack_74);
  core_skeleton_cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_00569130
            (this_ptr,*(int *)(param_1[1].base.base.actor_name + 0xc),&CStack_68);
  pCVar5 = &CStack_104;
  CStack_104.x = CStack_68.x;
  *(uint *)((int)&CStack_104 + (uint)bVar4 * -8 + 4) =
       *(uint *)((int)&CStack_68 + (uint)bVar4 * -8 + 4);
  *(uint *)((int)&CStack_104 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8) =
       *(uint *)((int)&CStack_68 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b40
            ((CDemonActor *)param_1,pCVar5,&CStack_a4);
  fStack_5c = CStack_a4.x;
  afStack_58[(uint)bVar4 * -2] = *(float *)((int)&CStack_a4 + (uint)bVar4 * -8 + 4);
  afStack_58[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
       *(float *)((int)&CStack_a4 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
  core_skeleton_cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_00569130
            (this_ptr,*(int *)(param_1[1].base.base.actor_name + 0x14),&CStack_c8);
  pCVar5 = &CStack_f8;
  CStack_f8.x = CStack_c8.x;
  *(uint *)((int)&CStack_f8 + (uint)bVar4 * -8 + 4) =
       *(uint *)((int)&CStack_c8 + (uint)bVar4 * -8 + 4);
  *(uint *)((int)&CStack_f8 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8) =
       *(uint *)((int)&CStack_c8 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b40
            ((CDemonActor *)param_1,pCVar5,&CStack_44);
  fVar1 = fStack_5c;
  this_ptr_00 = &SStack_158;
  afStack_58[2] = CStack_44.x;
  afStack_58[(uint)bVar4 * -2 + 3] = *(float *)((int)&CStack_44 + (uint)bVar4 * -8 + 4);
  afStack_58[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4] =
       *(float *)((int)&CStack_44 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
  afStack_b8[2] = fVar1 + afStack_58[2];
  afStack_b8[3] = afStack_58[0] + afStack_58[3];
  fStack_a8 = afStack_58[1] + fStack_48;
  fStack_d4 = fVar1 + afStack_58[2];
  afStack_d0[(uint)bVar4 * -2] = afStack_b8[(uint)bVar4 * -2 + 3];
  afStack_d0[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
       afStack_b8[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4];
  afStack_34[2] = afStack_b8[2];
  fStack_20 = fStack_d4 * _DAT_005d8d8c;
  fStack_1c = afStack_d0[0] * _DAT_005d8d8c;
  fStack_18 = afStack_d0[1] * _DAT_005d8d8c;
  afStack_34[3] = afStack_b8[3];
  CStack_ec.x = fStack_d4 * _DAT_005d8d8c;
  *(float *)((int)&CStack_ec + (uint)bVar4 * -8 + 4) = afStack_34[(uint)bVar4 * -2 + 6];
  *(float *)((int)&CStack_ec + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8) =
       afStack_34[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 7];
  fStack_24 = fStack_a8;
  fStack_bc = afStack_34[2];
  afStack_b8[(uint)bVar4 * -2] = afStack_34[(uint)bVar4 * -2 + 3];
  afStack_b8[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
       afStack_34[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4];
  fStack_38 = fStack_bc * _DAT_005d8d8c;
  afStack_34[0] = afStack_b8[0] * _DAT_005d8d8c;
  afStack_34[1] = afStack_b8[1] * _DAT_005d8d8c;
  CStack_e0.x = fStack_bc * _DAT_005d8d8c;
  *(float *)((int)&CStack_e0 + (uint)bVar4 * -8 + 4) = afStack_34[(uint)bVar4 * -2];
  *(float *)((int)&CStack_e0 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8) =
       afStack_34[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
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

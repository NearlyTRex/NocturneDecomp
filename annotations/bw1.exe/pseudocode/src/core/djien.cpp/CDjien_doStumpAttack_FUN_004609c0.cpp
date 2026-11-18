// Name: core_djien.cpp_CDjien_doStumpAttack_FUN_004609c0
// Address: 004609c0
// Address Range: [[004609c0, 00460ca5]]
// Convention: __cdecl
// Signature: void __cdecl core_djien_cpp_CDjien_doStumpAttack_FUN_004609c0(CDjien *this_ptr)

#include "nocturne.h"

void __cdecl core_djien_cpp_CDjien_doStumpAttack_FUN_004609c0(CDjien *this_ptr)

{
  CDeformableModelInstance *this_ptr_00;
  float fVar1;
  int iVar2;
  uint uVar3;
  byte bVar4;
  float afStackY_1104 [999];
  CVector3f *pCVar5;
  SDamageInfo *this_ptr_01;
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
  this_ptr_00 = &(this_ptr->base).base.model;
  core_skeleton_cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_00569130
            (this_ptr_00,this_ptr->bone_indices[2],&CStack_98);
  pCVar5 = &CStack_11c;
  CStack_11c.x = CStack_98.x;
  *(uint *)((int)&CStack_11c + (uint)bVar4 * -8 + 4) =
       *(uint *)((int)&CStack_98 + (uint)bVar4 * -8 + 4);
  *(uint *)((int)&CStack_11c + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8) =
       *(uint *)((int)&CStack_98 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b40
            ((CDemonActor *)this_ptr,pCVar5,&CStack_8c);
  core_skeleton_cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_00569130
            (this_ptr_00,this_ptr->bone_indices[4],&CStack_80);
  pCVar5 = &CStack_110;
  CStack_110.x = CStack_80.x;
  *(uint *)((int)&CStack_110 + (uint)bVar4 * -8 + 4) =
       *(uint *)((int)&CStack_80 + (uint)bVar4 * -8 + 4);
  *(uint *)((int)&CStack_110 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8) =
       *(uint *)((int)&CStack_80 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b40
            ((CDemonActor *)this_ptr,pCVar5,&CStack_74);
  core_skeleton_cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_00569130
            (this_ptr_00,this_ptr->bone_indices[3],&CStack_68);
  pCVar5 = &CStack_104;
  CStack_104.x = CStack_68.x;
  *(uint *)((int)&CStack_104 + (uint)bVar4 * -8 + 4) =
       *(uint *)((int)&CStack_68 + (uint)bVar4 * -8 + 4);
  *(uint *)((int)&CStack_104 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8) =
       *(uint *)((int)&CStack_68 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b40
            ((CDemonActor *)this_ptr,pCVar5,&CStack_a4);
  fStack_5c = CStack_a4.x;
  afStack_58[(uint)bVar4 * -2] = *(float *)((int)&CStack_a4 + (uint)bVar4 * -8 + 4);
  afStack_58[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
       *(float *)((int)&CStack_a4 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
  core_skeleton_cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_00569130
            (this_ptr_00,this_ptr->bone_indices[5],&CStack_c8);
  pCVar5 = &CStack_f8;
  CStack_f8.x = CStack_c8.x;
  *(uint *)((int)&CStack_f8 + (uint)bVar4 * -8 + 4) =
       *(uint *)((int)&CStack_c8 + (uint)bVar4 * -8 + 4);
  *(uint *)((int)&CStack_f8 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8) =
       *(uint *)((int)&CStack_c8 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b40
            ((CDemonActor *)this_ptr,pCVar5,&CStack_44);
  fVar1 = fStack_5c;
  this_ptr_01 = &SStack_158;
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
  fStack_20 = fStack_d4 * 0.5f;
  fStack_1c = afStack_d0[0] * 0.5f;
  fStack_18 = afStack_d0[1] * 0.5f;
  afStack_34[3] = afStack_b8[3];
  CStack_ec.x = fStack_d4 * 0.5f;
  *(float *)((int)&CStack_ec + (uint)bVar4 * -8 + 4) = afStack_34[(uint)bVar4 * -2 + 6];
  *(float *)((int)&CStack_ec + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8) =
       afStack_34[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 7];
  fStack_24 = fStack_a8;
  fStack_bc = afStack_34[2];
  afStack_b8[(uint)bVar4 * -2] = afStack_34[(uint)bVar4 * -2 + 3];
  afStack_b8[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
       afStack_34[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4];
  fStack_38 = fStack_bc * 0.5f;
  afStack_34[0] = afStack_b8[0] * 0.5f;
  afStack_34[1] = afStack_b8[1] * 0.5f;
  CStack_e0.x = fStack_bc * 0.5f;
  *(float *)((int)&CStack_e0 + (uint)bVar4 * -8 + 4) = afStack_34[(uint)bVar4 * -2];
  *(float *)((int)&CStack_e0 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8) =
       afStack_34[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
  core_charactr_cpp_SDamageInfo_ctor_FUN_0042c010(this_ptr_01);
  SStack_158.damage_amount = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00(8.0,12.0);
  SStack_158.attacker = (CDemonActor *)this_ptr;
  SStack_158.wielder = (CDemonActor *)this_ptr;
  fStack_14 = SStack_158.damage_amount;
  core_enemy_cpp_CEnemy_testAttackRadius_FUN_004a0770(&this_ptr->base,&CStack_e0,3.0,&SStack_158);
  core_enemy_cpp_CEnemy_testAttackRadius_FUN_004a0770(&this_ptr->base,&CStack_ec,3.0,&SStack_158);
  iVar2 = core_sound_cpp_CSound_isSoundPlaying_FUN_0057d9c0
                    (g_CSound_PTR_006236b8,this_ptr->sfx_handle);
  if (iVar2 != 0) {
    return;
  }
  uVar3 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                    ((CDemonActor *)this_ptr,"stick-stump?.wav");
  this_ptr->sfx_handle = uVar3;
  return;
}

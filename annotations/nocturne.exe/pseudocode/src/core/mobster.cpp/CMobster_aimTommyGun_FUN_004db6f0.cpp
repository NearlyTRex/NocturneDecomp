// Name: core_mobster.cpp_CMobster_aimTommyGun_FUN_004db6f0
// Address: 004db6f0
// Address Range: [[004db6f0, 004dba4d]]
// Convention: __cdecl
// Signature: void __cdecl core_mobster_cpp_CMobster_aimTommyGun_FUN_004db6f0(CMobster *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_mobster_cpp_CMobster_aimTommyGun_FUN_004db6f0(CMobster *this_ptr,float delta_time)

{
  CCharacter *pCVar1;
  int iVar2;
  CDemonActor *pCVar3;
  CVector3f *pCVar4;
  uint *puVar5;
  uint *puVar6;
  float *pfVar7;
  byte bVar8;
  float afStackY_185c [1519];
  uint uVar9;
  float fVar10;
  code *blend_callback;
  float local_88;
  float local_84;
  CQuaternion4f local_80;
  float local_70;
  float afStack_6c [3];
  CQuaternion4f local_60;
  CVector3f local_50;
  CVector3f local_44;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_20;
  float local_1c;
  CDeformableModelInstance *local_18;
  
  bVar8 = 0;
  if ((this_ptr->base).base.carry_hands[1].carry_actor == (CDemonActor *)0x0) {
    this_ptr->firing_blend = 0.0;
  }
  else {
    pCVar1 = (this_ptr->base).victim;
    if (pCVar1 != (CCharacter *)0x0) {
      iVar2 = core_enemy_cpp_CEnemy_canSeeTarget_FUN_00479ab0(&this_ptr->base,&pCVar1->base);
      if ((iVar2 == 0) && (this_ptr->hold_pos_flag == 0)) {
        this_ptr->firing_blend = 0.0;
        return;
      }
      pCVar3 = core_actor_cpp_castToClassHash_FUN_0040d890
                         ((this_ptr->base).base.carry_hands[1].carry_actor,
                          g_CWeaponActorType_02ddf970.name_hash);
      if (pCVar3 == (CDemonActor *)0x0) {
        PTR_01cc4800 = "..\\core\\mobster.cpp";
        INT_01cc4804 = 0x323;
        core_main_c_FUN_004c8440("CMobster::aimTommyGun - I'm not carrying one!");
      }
      local_88 = 0.7853982;
      if (this_ptr->vehicle != (CDemonActor *)0x0) {
        local_88 = 1.5707964;
      }
      pCVar4 = core_xform_cpp_transformVector3x4_FUN_0055a8b0
                         (&local_50,(CVector3f *)&DAT_02dd1184,
                          (this_ptr->base).base.model.bone_transform.bone_world_matrices +
                          _DAT_01ccdbb0);
      pCVar4 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
                         ((CDemonActor *)this_ptr,&local_44,pCVar4);
      pCVar1 = (this_ptr->base).victim;
      local_38 = (pCVar1->base).location.position.x - pCVar4->x;
      local_34 = (pCVar1->base).location.position.y - pCVar4->y;
      local_30 = (pCVar1->base).location.position.z - pCVar4->z;
      pCVar3 = core_actor_cpp_castToClassHash_FUN_0040d890
                         (&((this_ptr->base).victim)->base,g_CHeroActorType_01cae0ec.name_hash);
      fVar10 = 3.0f;
      if (pCVar3 != (CDemonActor *)0x0) {
        fVar10 = 5.3464347077054713e-315._0_4_;
      }
      local_34 = local_34 + fVar10;
      core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0(&local_2c,&local_38);
      local_18 = (CDeformableModelInstance *)
                 core_actor_cpp_normalizeAngleToPi_FUN_0040df00
                           (local_28 - (this_ptr->base).base.base.orient.vec.y);
      local_84 = SQRT(local_30 * local_30 + local_38 * local_38 + local_34 * local_34);
      if ((local_88 <= ABS((float)local_18)) || (local_84 <= (float)2)) {
        fVar10 = this_ptr->firing_blend - delta_time;
        this_ptr->firing_blend = fVar10;
        if (fVar10 < 0.0) {
          this_ptr->firing_blend = 0.0;
        }
      }
      else {
        fVar10 = this_ptr->firing_blend + delta_time;
        this_ptr->firing_blend = fVar10;
        if (1.0 < fVar10) {
          this_ptr->firing_blend = 1.0;
        }
      }
      local_1c = -local_88;
      if (local_2c < local_1c) {
        local_2c = local_1c;
      }
      if (local_88 < local_2c) {
        local_2c = local_88;
      }
      local_20 = -local_88;
      local_28 = (float)local_18;
      if ((float)local_18 < local_20) {
        local_28 = local_20;
      }
      if (local_88 < local_28) {
        local_28 = local_88;
      }
      if ((this_ptr->base).base.carry_hands[0].carry_actor == (CDemonActor *)0x0) {
        fVar10 = this_ptr->firing_blend;
        uVar9 = 2;
      }
      else {
        fVar10 = this_ptr->firing_blend;
        uVar9 = 6;
      }
      core_skeleton_cpp_CDeformableModelInstance_blendMotion_FUN_0051c3d0
                (&(this_ptr->base).base.model,uVar9,0x40c00000,fVar10,_DAT_01ccdbd0,
                 core_skeleton_cpp_FUN_0051b650);
      core_xform_cpp_quaternionFromAngleX_FUN_0055d4a0(local_2c,&local_60);
      local_80.w = local_60.w;
      puVar6 = (uint *)((int)&local_80 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8);
      puVar5 = (uint *)((int)&local_60 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8);
      *(uint *)((int)&local_80 + (uint)bVar8 * -8 + 4) =
           *(uint *)((int)&local_60 + (uint)bVar8 * -8 + 4);
      *puVar6 = *puVar5;
      puVar6[(uint)bVar8 * -2 + 1] = puVar5[(uint)bVar8 * -2 + 1];
      local_18 = &(this_ptr->base).base.model;
      core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0051d7a0
                (local_18,&local_80,this_ptr->firing_blend,_DAT_01ccdbd0,
                 core_skeleton_cpp_FUN_0051b650);
      core_xform_cpp_quaternionFromAngleY_FUN_0055d4e0(local_28);
      blend_callback = core_skeleton_cpp_FUN_0051b650;
      local_80.w = local_70;
      pfVar7 = (float *)((int)&local_80 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8);
      *(float *)((int)&local_80 + (uint)bVar8 * -8 + 4) = afStack_6c[(uint)bVar8 * -2];
      iVar2 = _DAT_01ccdbd0;
      *pfVar7 = afStack_6c[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1];
      pfVar7[(uint)bVar8 * -2 + 1] =
           (afStack_6c + (uint)bVar8 * -2 + (uint)bVar8 * -2 + 1)[(uint)bVar8 * -2 + 1];
      core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0051d7a0
                (local_18,&local_80,this_ptr->firing_blend,iVar2,blend_callback);
      return;
    }
    this_ptr->firing_blend = 0.0;
  }
  return;
}

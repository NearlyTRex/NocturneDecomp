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
  byte bVar7;
  float afStackY_185c [1519];
  float fVar8;
  code *blend_callback;
  float local_88;
  float local_84;
  CQuaternion4f local_80;
  CQuaternion4f local_70;
  CQuaternion4f local_60;
  CVector3f local_50;
  CVector3f local_44;
  CVector3f local_38;
  CVector3f local_2c;
  float local_20;
  float local_1c;
  CDeformableModelInstance *local_18;
  
  bVar7 = 0;
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
        g_CurrentFilename = "..\\core\\mobster.cpp";
        g_CurrentLineNumber = 803;
        core_main_c_displayErrorAndQuit_FUN_004c8440("CMobster::aimTommyGun - I'm not carrying one!");
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
      local_38.x = (pCVar1->base).location.position.x - pCVar4->x;
      local_38.y = (pCVar1->base).location.position.y - pCVar4->y;
      local_38.z = (pCVar1->base).location.position.z - pCVar4->z;
      pCVar3 = core_actor_cpp_castToClassHash_FUN_0040d890
                         (&((this_ptr->base).victim)->base,g_CHeroActorType_01cae0ec.name_hash);
      fVar8 = 3.0f;
      if (pCVar3 != (CDemonActor *)0x0) {
        fVar8 = 5.3464347077054713e-315._0_4_;
      }
      local_38.y = local_38.y + fVar8;
      core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0(&local_2c,&local_38);
      local_18 = (CDeformableModelInstance *)
                 core_actor_cpp_normalizeAngleToPi_FUN_0040df00
                           (local_2c.y - (this_ptr->base).base.base.orient.vec.y);
      local_84 = SQRT(local_38.z * local_38.z + local_38.x * local_38.x + local_38.y * local_38.y);
      if ((local_88 <= ABS((float)local_18)) || (local_84 <= (float)2)) {
        fVar8 = this_ptr->firing_blend - delta_time;
        this_ptr->firing_blend = fVar8;
        if (fVar8 < 0.0) {
          this_ptr->firing_blend = 0.0;
        }
      }
      else {
        fVar8 = this_ptr->firing_blend + delta_time;
        this_ptr->firing_blend = fVar8;
        if (1.0 < fVar8) {
          this_ptr->firing_blend = 1.0;
        }
      }
      local_1c = -local_88;
      if (local_2c.x < local_1c) {
        local_2c.x = local_1c;
      }
      if (local_88 < local_2c.x) {
        local_2c.x = local_88;
      }
      local_20 = -local_88;
      local_2c.y = (float)local_18;
      if ((float)local_18 < local_20) {
        local_2c.y = local_20;
      }
      if (local_88 < local_2c.y) {
        local_2c.y = local_88;
      }
      if ((this_ptr->base).base.carry_hands[0].carry_actor == (CDemonActor *)0x0) {
        fVar8 = this_ptr->firing_blend;
        iVar2 = 2;
      }
      else {
        fVar8 = this_ptr->firing_blend;
        iVar2 = 6;
      }
      core_skeleton_cpp_CDeformableModelInstance_blendMotion_FUN_0051c3d0
                (&(this_ptr->base).base.model,iVar2,6.0,fVar8,_DAT_01ccdbd0,
                 core_skeleton_cpp_motionBlendWeightFunc_FUN_0051b650);
      core_xform_cpp_quaternionFromAngleX_FUN_0055d4a0(local_2c.x,&local_60);
      local_80.w = local_60.w;
      puVar6 = (uint *)((int)&local_80 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
      puVar5 = (uint *)((int)&local_60 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
      *(uint *)((int)&local_80 + (uint)bVar7 * -8 + 4) =
           *(uint *)((int)&local_60 + (uint)bVar7 * -8 + 4);
      *puVar6 = *puVar5;
      puVar6[(uint)bVar7 * -2 + 1] = puVar5[(uint)bVar7 * -2 + 1];
      local_18 = &(this_ptr->base).base.model;
      core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0051d7a0
                (local_18,&local_80,this_ptr->firing_blend,_DAT_01ccdbd0,
                 core_skeleton_cpp_motionBlendWeightFunc_FUN_0051b650);
      core_xform_cpp_quaternionFromAngleY_FUN_0055d4e0(local_2c.y,&local_70);
      blend_callback = core_skeleton_cpp_motionBlendWeightFunc_FUN_0051b650;
      local_80.w = local_70.w;
      puVar6 = (uint *)((int)&local_80 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
      puVar5 = (uint *)((int)&local_70 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
      *(uint *)((int)&local_80 + (uint)bVar7 * -8 + 4) =
           *(uint *)((int)&local_70 + (uint)bVar7 * -8 + 4);
      iVar2 = _DAT_01ccdbd0;
      *puVar6 = *puVar5;
      puVar6[(uint)bVar7 * -2 + 1] = puVar5[(uint)bVar7 * -2 + 1];
      core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0051d7a0
                (local_18,&local_80,this_ptr->firing_blend,iVar2,blend_callback);
      return;
    }
    this_ptr->firing_blend = 0.0;
  }
  return;
}

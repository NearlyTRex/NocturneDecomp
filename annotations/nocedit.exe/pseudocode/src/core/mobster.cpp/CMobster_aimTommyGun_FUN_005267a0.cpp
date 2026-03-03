// Name: core_mobster.cpp_CMobster_aimTommyGun_FUN_005267a0
// Address: 005267a0
// Address Range: [[005267a0, 00526afd]]
// Convention: __cdecl
// Signature: void __cdecl core_mobster_cpp_CMobster_aimTommyGun_FUN_005267a0(CMobster *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void __cdecl core_mobster_cpp_CMobster_aimTommyGun_FUN_005267a0(CMobster *this_ptr,float delta_time)

{
  CCharacter *pCVar1;
  int iVar2;
  CWeapon *pCVar2;
  CVector3f *pCVar3;
  CHero *pCVar4;
  uint *puVar4;
  uint *puVar5;
  byte bVar6;
  float afStackY_185c [1519];
  float fVar7;
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
  CDeformableModel_MotionBlendWeightFunc *blend_callback;
  
  bVar6 = 0;
  if ((this_ptr->base).base.carry_hands[1].carry_actor == (CDemonActor *)0x0) {
    this_ptr->firing_blend = 0.0;
  }
  else {
    pCVar1 = (this_ptr->base).victim;
    if (pCVar1 != (CCharacter *)0x0) {
      iVar2 = core_enemy_cpp_CEnemy_FUN_004a9a50(&this_ptr->base,&pCVar1->base);
      if ((iVar2 == 0) && (this_ptr->hold_pos_flag == 0)) {
        this_ptr->firing_blend = 0.0;
        return;
      }
      pCVar2 = (CWeapon *)
               core_actor_cpp_castToClassHash_FUN_0040c790
                         ((this_ptr->base).base.carry_hands[1].carry_actor,
                          g_CWeaponClassInfo.name_hash);
      if (pCVar2 == (CWeapon *)0x0) {
        g_CurrentFilename = "..\\core\\mobster.cpp";
        g_CurrentLineNumber = 0x323;
        core_main_c_displayErrorAndQuit_FUN_00506f10("CMobster::aimTommyGun - I'm not carrying one!");
      }
      local_88 = 0.7853982;
      if (this_ptr->vehicle != (CDemonActor *)0x0) {
        local_88 = 1.5707964;
      }
      pCVar3 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                         (&local_50,&g_ZeroVector.f,
                          (this_ptr->base).base.model.bone_transform.bone_world_matrices +
                          INT_02f37ed0);
      pCVar3 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                         ((CDemonActor *)this_ptr,&local_44,pCVar3);
      pCVar1 = (this_ptr->base).victim;
      local_38.x = (pCVar1->base).location.position.x - pCVar3->x;
      local_38.y = (pCVar1->base).location.position.y - pCVar3->y;
      local_38.z = (pCVar1->base).location.position.z - pCVar3->z;
      pCVar4 = (CHero *)core_actor_cpp_castToClassHash_FUN_0040c790
                                  (&((this_ptr->base).victim)->base,g_CHeroClassInfo.name_hash);
      fVar7 = 3.0f;
      if (pCVar4 != (CHero *)0x0) {
        fVar7 = 4.0f;
      }
      local_38.y = local_38.y + fVar7;
      core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(&local_2c,&local_38);
      local_18 = (CDeformableModelInstance *)
                 core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                           (local_2c.y - (this_ptr->base).base.base.orient.vec.y);
      local_84 = SQRT(local_38.z * local_38.z + local_38.x * local_38.x + local_38.y * local_38.y);
      if ((local_88 <= ABS((float)local_18)) || (local_84 <= (float)2)) {
        fVar7 = this_ptr->firing_blend - delta_time;
        this_ptr->firing_blend = fVar7;
        if (fVar7 < 0.0) {
          this_ptr->firing_blend = 0.0;
        }
      }
      else {
        fVar7 = this_ptr->firing_blend + delta_time;
        this_ptr->firing_blend = fVar7;
        if (1.0 < fVar7) {
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
        fVar7 = this_ptr->firing_blend;
        iVar2 = 2;
      }
      else {
        fVar7 = this_ptr->firing_blend;
        iVar2 = 6;
      }
      core_skeleton_cpp_CDeformableModelInstance_blendMotion_FUN_0059eb50
                (&(this_ptr->base).base.model,iVar2,6.0,fVar7,INT_02f37ef0,
                 core_skeleton_cpp_defaultBlendWeight_FUN_0059ddb0);
      core_xform_cpp_quaternionFromAngleX_FUN_005f79b0(local_2c.x,&local_60);
      local_80.w = local_60.w;
      puVar5 = (uint *)((int)&local_80 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
      puVar4 = (uint *)((int)&local_60 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
      *(uint *)((int)&local_80 + (uint)bVar6 * -8 + 4) =
           *(uint *)((int)&local_60 + (uint)bVar6 * -8 + 4);
      *puVar5 = *puVar4;
      puVar5[(uint)bVar6 * -2 + 1] = puVar4[(uint)bVar6 * -2 + 1];
      local_18 = &(this_ptr->base).base.model;
      core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0059ff20
                (local_18,&local_80,this_ptr->firing_blend,INT_02f37ef0,
                 core_skeleton_cpp_defaultBlendWeight_FUN_0059ddb0);
      core_xform_cpp_quaternionFromAngleY_FUN_005f79f0(local_2c.y,&local_70);
      blend_callback = core_skeleton_cpp_defaultBlendWeight_FUN_0059ddb0;
      local_80.w = local_70.w;
      puVar5 = (uint *)((int)&local_80 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
      puVar4 = (uint *)((int)&local_70 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
      *(uint *)((int)&local_80 + (uint)bVar6 * -8 + 4) =
           *(uint *)((int)&local_70 + (uint)bVar6 * -8 + 4);
      iVar2 = INT_02f37ef0;
      *puVar5 = *puVar4;
      puVar5[(uint)bVar6 * -2 + 1] = puVar4[(uint)bVar6 * -2 + 1];
      core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0059ff20
                (local_18,&local_80,this_ptr->firing_blend,iVar2,blend_callback);
      return;
    }
    this_ptr->firing_blend = 0.0;
  }
  return;
}

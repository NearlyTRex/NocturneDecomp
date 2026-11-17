// Name: core_zombiepriest.cpp_CZombiePriest_aimTommyGun_FUN_0058e8d0
// Address: 0058e8d0
// Address Range: [[0058e8d0, 0058ec91]]
// Convention: __cdecl
// Signature: void __cdecl core_zombiepriest_cpp_CZombiePriest_aimTommyGun_FUN_0058e8d0(CZombiePriest *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void __cdecl core_zombiepriest_cpp_CZombiePriest_aimTommyGun_FUN_0058e8d0(CZombiePriest *this_ptr,float delta_time)

{
  CCharacter *pCVar1;
  int iVar2;
  CDemonActor *pCVar3;
  uint *puVar4;
  uint *puVar5;
  byte bVar6;
  float afStackY_188c [1519];
  float fVar7;
  CVector3f *input_local_point;
  code *pcVar8;
  float local_b8;
  float local_b4;
  CQuaternion4f local_b0;
  CQuaternion4f local_a0;
  CQuaternion4f local_90;
  float local_80;
  float local_7c [2];
  CVector3f local_74;
  CVector3f local_68;
  CVector3f local_5c;
  float local_50;
  float local_4c [2];
  CVector3f local_44;
  float local_38;
  float local_34 [2];
  CVector3f local_2c;
  float local_20;
  float local_1c;
  CDeformableModelInstance *local_18;
  
  bVar6 = 0;
  if ((this_ptr->base).base.carry_hands[0].carry_actor == (CDemonActor *)0x0) {
    this_ptr->firing_blend = 0.0;
  }
  else {
    pCVar1 = (this_ptr->base).victim;
    if (pCVar1 != (CCharacter *)0x0) {
      iVar2 = core_enemy_cpp_CEnemy_canSeeTarget_FUN_00489600(&this_ptr->base,&pCVar1->base);
      if ((iVar2 == 0) && (this_ptr->hold_pos_flag == 0)) {
        this_ptr->firing_blend = 0.0;
        return;
      }
      pCVar3 = core_actor_cpp_castToClassHash_FUN_0040c840
                         ((this_ptr->base).base.carry_hands[0].carry_actor,
                          g_CWeaponClassInfo.name_hash);
      if (pCVar3 == (CDemonActor *)0x0) {
        g_CHAR_PTR_01d71de0 = "..\\core\\zombiepriest.cpp";
        g_INT_01d71de4 = 0x2aa;
        core_main_c_displayErrorAndQuit_FUN_004e4330("CZombiePriest::Aim Burning Cross - I'm not carrying one!");
      }
      local_b4 = 0.7853982;
      core_xform_cpp_transformVector3x4_FUN_00583260
                (&g_CVector3f_02cfd900,
                 (this_ptr->base).base.model.bone_transform.bone_model_matrices + g_INT_02d24978,
                 &local_68);
      input_local_point = &local_5c;
      local_5c.x = local_68.x;
      *(uint *)((int)&local_5c + (uint)bVar6 * -8 + 4) =
           *(uint *)((int)&local_68 + (uint)bVar6 * -8 + 4);
      *(uint *)((int)&local_5c + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8) =
           *(uint *)((int)&local_68 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
      core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b80
                ((CDemonActor *)this_ptr,input_local_point,&local_2c);
      local_50 = local_2c.x;
      local_4c[(uint)bVar6 * -2] = *(float *)((int)&local_2c + (uint)bVar6 * -8 + 4);
      local_4c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
           *(float *)((int)&local_2c + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
      pCVar1 = (this_ptr->base).victim;
      local_38 = (pCVar1->base).location.position.x - local_50;
      local_34[0] = (pCVar1->base).location.position.y - local_4c[0];
      local_34[1] = (pCVar1->base).location.position.z - local_4c[1];
      local_44.x = local_38;
      *(float *)((int)&local_44 + (uint)bVar6 * -8 + 4) = local_34[(uint)bVar6 * -2];
      *(float *)((int)&local_44 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8) =
           local_34[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
      pCVar3 = core_actor_cpp_castToClassHash_FUN_0040c840
                         (&((this_ptr->base).victim)->base,g_CHeroClassInfo.name_hash);
      fVar7 = 3.0f;
      if (pCVar3 != (CDemonActor *)0x0) {
        fVar7 = 4.0f;
      }
      local_44.y = local_44.y + fVar7;
      core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_00576250(&local_44,&local_74);
      local_80 = local_74.x;
      local_7c[(uint)bVar6 * -2] = *(float *)((int)&local_74 + (uint)bVar6 * -8 + 4);
      local_7c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
           *(float *)((int)&local_74 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
      local_18 = (CDeformableModelInstance *)
                 core_actor_cpp_normalizeAngleToPi_FUN_0040cfa0
                           (local_7c[0] - (this_ptr->base).base.base.orient.vec.y);
      local_b8 = SQRT(local_44.z * local_44.z + local_44.x * local_44.x + local_44.y * local_44.y);
      if ((local_b4 <= ABS((float)local_18)) || (local_b8 <= (float)2)) {
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
      local_1c = -local_b4;
      if (local_80 < local_1c) {
        local_80 = local_1c;
      }
      if (local_b4 < local_80) {
        local_80 = local_b4;
      }
      local_20 = -local_b4;
      local_7c[0] = (float)local_18;
      if ((float)local_18 < local_20) {
        local_7c[0] = local_20;
      }
      if (local_b4 < local_7c[0]) {
        local_7c[0] = local_b4;
      }
      if ((this_ptr->base).base.carry_hands[1].carry_actor == (CDemonActor *)0x0) {
        fVar7 = this_ptr->firing_blend;
        iVar2 = 2;
      }
      else {
        fVar7 = this_ptr->firing_blend;
        iVar2 = 6;
      }
      core_skeleton_cpp_CDeformableModelInstance_blendMotion_FUN_0054cc90
                (&(this_ptr->base).base.model,iVar2,6.0,fVar7,g_INT_02d24998,
                 core_skeleton_cpp_blendWeightCallback_FUN_0054bef0);
      core_xform_cpp_quaternionFromAngleX_FUN_00585cd0(local_80,&local_90);
      pcVar8 = core_skeleton_cpp_blendWeightCallback_FUN_0054bef0;
      local_a0.w = local_90.w;
      puVar5 = (uint *)((int)&local_a0 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
      puVar4 = (uint *)((int)&local_90 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
      *(uint *)((int)&local_a0 + (uint)bVar6 * -8 + 4) =
           *(uint *)((int)&local_90 + (uint)bVar6 * -8 + 4);
      iVar2 = g_INT_02d24998;
      *puVar5 = *puVar4;
      puVar5[(uint)bVar6 * -2 + 1] = puVar4[(uint)bVar6 * -2 + 1];
      local_18 = &(this_ptr->base).base.model;
      core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0054e170
                (local_18,&local_a0,this_ptr->firing_blend,iVar2,pcVar8);
      core_xform_cpp_quaternionFromAngleY_FUN_00585d10
                (local_7c[0] + (float)-0.20000000000000001,&local_b0);
      pcVar8 = core_skeleton_cpp_blendWeightCallback_FUN_0054bef0;
      local_a0.w = local_b0.w;
      puVar5 = (uint *)((int)&local_a0 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
      puVar4 = (uint *)((int)&local_b0 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
      *(uint *)((int)&local_a0 + (uint)bVar6 * -8 + 4) =
           *(uint *)((int)&local_b0 + (uint)bVar6 * -8 + 4);
      iVar2 = g_INT_02d24998;
      *puVar5 = *puVar4;
      puVar5[(uint)bVar6 * -2 + 1] = puVar4[(uint)bVar6 * -2 + 1];
      core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0054e170
                (local_18,&local_a0,this_ptr->firing_blend,iVar2,pcVar8);
      return;
    }
    this_ptr->firing_blend = 0.0;
  }
  return;
}

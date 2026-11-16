// Name: core_mobster.cpp_CMobster_aimTommyGun_FUN_004fef30
// Address: 004fef30
// Address Range: [[004fef30, 004ff2f6]]
// Convention: __cdecl
// Signature: void __cdecl core_mobster_cpp_CMobster_aimTommyGun_FUN_004fef30(CMobster *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_mobster_cpp_CMobster_aimTommyGun_FUN_004fef30(CMobster *this_ptr,float delta_time)

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
  code *blend_callback;
  float local_b8;
  float local_b4;
  CQuaternion4f local_b0;
  CQuaternion4f local_a0;
  CQuaternion4f local_90;
  float local_80;
  float local_7c [5];
  CVector3f local_68;
  CVector3f local_5c;
  float local_50;
  float local_4c [2];
  CVector3f local_44;
  CVector3f local_38;
  CVector3f local_2c;
  float local_20;
  float local_1c;
  CDeformableModelInstance *local_18;
  
  bVar6 = 0;
  if ((this_ptr->base).base.carry_hands[1].carry_actor == (CDemonActor *)0x0) {
    this_ptr->firing_blend = 0.0;
  }
  else {
    pCVar1 = (this_ptr->base).victim;
    if (pCVar1 != (CCharacter *)0x0) {
      iVar2 = core_enemy_cpp_CEnemy_canSeeTarget_FUN_00488320(&this_ptr->base,&pCVar1->base);
      if ((iVar2 == 0) && (this_ptr->hold_pos_flag == 0)) {
        this_ptr->firing_blend = 0.0;
        return;
      }
      pCVar3 = core_actor_cpp_castToClassHash_FUN_0040c8f0
                         ((this_ptr->base).base.carry_hands[1].carry_actor,
                          g_CWeaponClassInfo.name_hash);
      if (pCVar3 == (CDemonActor *)0x0) {
        _DAT_01d046a0 = "..\\core\\mobster.cpp";
        _DAT_01d046a4 = 0x323;
        core_main_c_displayErrorAndQuit_FUN_004e4500("CMobster::aimTommyGun - I'm not carrying one!");
      }
      local_b4 = 0.7853982;
      if (this_ptr->vehicle != (CDemonActor *)0x0) {
        local_b4 = 1.5707964;
      }
      core_xform_cpp_transformVector3x4_FUN_00591530
                ((CVector3f *)&DAT_0265370c,
                 (this_ptr->base).base.model.bone_transform.bone_model_matrices + _DAT_01d1c718,
                 &local_44);
      input_local_point = &local_68;
      local_68.x = local_44.x;
      *(uint *)((int)&local_68 + (uint)bVar6 * -8 + 4) =
           *(uint *)((int)&local_44 + (uint)bVar6 * -8 + 4);
      *(uint *)((int)&local_68 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8) =
           *(uint *)((int)&local_44 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
      core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408d70
                ((CDemonActor *)this_ptr,input_local_point,&local_2c);
      local_80 = local_2c.x;
      local_7c[(uint)bVar6 * -2] = *(float *)((int)&local_2c + (uint)bVar6 * -8 + 4);
      local_7c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
           *(float *)((int)&local_2c + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
      pCVar1 = (this_ptr->base).victim;
      local_50 = (pCVar1->base).location.position.x - local_80;
      local_4c[0] = (pCVar1->base).location.position.y - local_7c[0];
      local_4c[1] = (pCVar1->base).location.position.z - local_7c[1];
      local_5c.x = local_50;
      *(float *)((int)&local_5c + (uint)bVar6 * -8 + 4) = local_4c[(uint)bVar6 * -2];
      *(float *)((int)&local_5c + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8) =
           local_4c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
      pCVar3 = core_actor_cpp_castToClassHash_FUN_0040c8f0
                         (&((this_ptr->base).victim)->base,g_CHeroClassInfo.name_hash);
      fVar7 = _DAT_005dee11;
      if (pCVar3 != (CDemonActor *)0x0) {
        fVar7 = _DAT_005dee15;
      }
      local_5c.y = local_5c.y + fVar7;
      core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005838f0(&local_5c,&local_38);
      local_7c[2] = local_38.x;
      local_7c[(uint)bVar6 * -2 + 3] = *(float *)((int)&local_38 + (uint)bVar6 * -8 + 4);
      local_7c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4] =
           *(float *)((int)&local_38 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
      local_18 = (CDeformableModelInstance *)
                 core_actor_cpp_normalizeAngleToPi_FUN_0040d0c0
                           (local_7c[3] - (this_ptr->base).base.base.orient.vec.y);
      local_b8 = SQRT(local_5c.z * local_5c.z + local_5c.x * local_5c.x + local_5c.y * local_5c.y);
      if ((local_b4 <= ABS((float)local_18)) || (local_b8 <= (float)_DAT_005dee1d)) {
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
      if (local_7c[2] < local_1c) {
        local_7c[2] = local_1c;
      }
      if (local_b4 < local_7c[2]) {
        local_7c[2] = local_b4;
      }
      local_20 = -local_b4;
      local_7c[3] = (float)local_18;
      if ((float)local_18 < local_20) {
        local_7c[3] = local_20;
      }
      if (local_b4 < local_7c[3]) {
        local_7c[3] = local_b4;
      }
      if ((this_ptr->base).base.carry_hands[0].carry_actor == (CDemonActor *)0x0) {
        fVar7 = this_ptr->firing_blend;
        iVar2 = 2;
      }
      else {
        fVar7 = this_ptr->firing_blend;
        iVar2 = 6;
      }
      core_skeleton_cpp_CDeformableModelInstance_blendMotion_FUN_00545a60
                (&(this_ptr->base).base.model,iVar2,6.0,fVar7,_DAT_01d1c738,
                 core_skeleton_cpp_blendWeightCallback_FUN_00544cc0);
      core_xform_cpp_quaternionFromAngleX_FUN_00593fa0(local_7c[2],&local_a0);
      local_b0.w = local_a0.w;
      puVar5 = (uint *)((int)&local_b0 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
      puVar4 = (uint *)((int)&local_a0 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
      *(uint *)((int)&local_b0 + (uint)bVar6 * -8 + 4) =
           *(uint *)((int)&local_a0 + (uint)bVar6 * -8 + 4);
      *puVar5 = *puVar4;
      puVar5[(uint)bVar6 * -2 + 1] = puVar4[(uint)bVar6 * -2 + 1];
      local_18 = &(this_ptr->base).base.model;
      core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_00546f40
                (local_18,&local_b0,this_ptr->firing_blend,_DAT_01d1c738,
                 core_skeleton_cpp_blendWeightCallback_FUN_00544cc0);
      core_xform_cpp_quaternionFromAngleY_FUN_00593fe0(local_7c[3],&local_90);
      blend_callback = core_skeleton_cpp_blendWeightCallback_FUN_00544cc0;
      local_b0.w = local_90.w;
      puVar5 = (uint *)((int)&local_b0 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
      puVar4 = (uint *)((int)&local_90 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
      *(uint *)((int)&local_b0 + (uint)bVar6 * -8 + 4) =
           *(uint *)((int)&local_90 + (uint)bVar6 * -8 + 4);
      iVar2 = _DAT_01d1c738;
      *puVar5 = *puVar4;
      puVar5[(uint)bVar6 * -2 + 1] = puVar4[(uint)bVar6 * -2 + 1];
      core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_00546f40
                (local_18,&local_b0,this_ptr->firing_blend,iVar2,blend_callback);
      return;
    }
    this_ptr->firing_blend = 0.0;
  }
  return;
}

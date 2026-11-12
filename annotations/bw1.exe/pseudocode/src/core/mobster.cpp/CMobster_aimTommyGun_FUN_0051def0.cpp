// Name: core_mobster.cpp_CMobster_aimTommyGun_FUN_0051def0
// Address: 0051def0
// Address Range: [[0051def0, 0051e2b6]]
// Convention: __cdecl
// Signature: void __cdecl core_mobster_cpp_CMobster_aimTommyGun_FUN_0051def0(CMobster *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_mobster_cpp_CMobster_aimTommyGun_FUN_0051def0(CMobster *this_ptr,float delta_time)

{
  CCharacter *pCVar1;
  int iVar2;
  CDemonActor *pCVar3;
  byte bVar4;
  float afStackY_188c [1519];
  uint uVar5;
  float fVar6;
  float *pfVar7;
  code *blend_callback;
  float local_b8;
  float local_b4;
  CQuaternion4f local_b0;
  float local_a0;
  float afStack_9c [7];
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_68 [3];
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  uint local_44;
  float local_38;
  float local_2c;
  float local_20;
  float local_1c;
  CDeformableModelInstance *local_18;
  
  bVar4 = 0;
  if ((this_ptr->base).base.carry_hands[1].carry_actor == (CDemonActor *)0x0) {
    this_ptr->firing_blend = 0.0;
  }
  else {
    pCVar1 = (this_ptr->base).victim;
    if (pCVar1 != (CCharacter *)0x0) {
      iVar2 = core_enemy_cpp_FUN_004a0980(this_ptr,pCVar1);
      if ((iVar2 == 0) && (this_ptr->hold_pos_flag == 0)) {
        this_ptr->firing_blend = 0.0;
        return;
      }
      pCVar3 = core_actor_cpp_castToClassHash_FUN_0040c600
                         ((this_ptr->base).base.carry_hands[1].carry_actor,
                          g_CWeaponClassInfo.name_hash);
      if (pCVar3 == (CDemonActor *)0x0) {
        _DAT_01d1d400 = "..\\core\\mobster.cpp";
        _DAT_01d1d404 = 0x323;
        core_main_c_FUN_005030e0("CMobster::aimTommyGun - I'm not carrying one!");
      }
      local_b4 = 0.7853982;
      if (this_ptr->vehicle != (CDemonActor *)0x0) {
        local_b4 = 1.5707964;
      }
      core_xform_cpp_FUN_005b5080
                (&DAT_02c8af28,
                 (this_ptr->base).base.model.bone_transform.bone_model_matrices + _DAT_01d33c08);
      pfVar7 = afStack_9c + 0xd;
      local_68[0] = (float)local_44;
      afStack_9c[(uint)bVar4 * -2 + 0xe] = afStack_9c[(uint)bVar4 * -2 + 0x17];
      afStack_9c[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0xf] =
           afStack_9c[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x18];
      core_actor_cpp_FUN_00408b40(this_ptr,pfVar7);
      local_80 = local_2c;
      afStack_9c[(uint)bVar4 * -2 + 8] = afStack_9c[(uint)bVar4 * -2 + 0x1d];
      afStack_9c[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 9] =
           afStack_9c[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x1e];
      pCVar1 = (this_ptr->base).victim;
      local_50 = (pCVar1->base).location.position.x - local_80;
      local_4c = (pCVar1->base).location.position.y - local_7c;
      local_48 = (pCVar1->base).location.position.z - local_78;
      local_5c = local_50;
      afStack_9c[(uint)bVar4 * -2 + 0x11] = afStack_9c[(uint)bVar4 * -2 + 0x14];
      afStack_9c[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x12] =
           afStack_9c[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x15];
      pCVar3 = core_actor_cpp_castToClassHash_FUN_0040c600
                         (&((this_ptr->base).victim)->base,g_CHeroClassInfo.name_hash);
      fVar6 = _DAT_005e9e5e;
      if (pCVar3 != (CDemonActor *)0x0) {
        fVar6 = _DAT_005e9e62;
      }
      local_58 = local_58 + fVar6;
      core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005a7520(afStack_9c + 0x10);
      local_74 = local_38;
      afStack_9c[(uint)bVar4 * -2 + 0xb] = afStack_9c[(uint)bVar4 * -2 + 0x1a];
      afStack_9c[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0xc] =
           afStack_9c[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x1b];
      local_18 = (CDeformableModelInstance *)
                 core_actor_cpp_normalizeAngleToPi_FUN_0040cd60
                           (local_70 - (this_ptr->base).base.base.orient.vec.y);
      local_b8 = SQRT(local_54 * local_54 + local_5c * local_5c + local_58 * local_58);
      if ((local_b4 <= ABS((float)local_18)) || (local_b8 <= (float)_DAT_005e9e6a)) {
        fVar6 = this_ptr->firing_blend - delta_time;
        this_ptr->firing_blend = fVar6;
        if (fVar6 < 0.0) {
          this_ptr->firing_blend = 0.0;
        }
      }
      else {
        fVar6 = this_ptr->firing_blend + delta_time;
        this_ptr->firing_blend = fVar6;
        if (1.0 < fVar6) {
          this_ptr->firing_blend = 1.0;
        }
      }
      local_1c = -local_b4;
      if (local_74 < local_1c) {
        local_74 = local_1c;
      }
      if (local_b4 < local_74) {
        local_74 = local_b4;
      }
      local_20 = -local_b4;
      local_70 = (float)local_18;
      if ((float)local_18 < local_20) {
        local_70 = local_20;
      }
      if (local_b4 < local_70) {
        local_70 = local_b4;
      }
      if ((this_ptr->base).base.carry_hands[0].carry_actor == (CDemonActor *)0x0) {
        fVar6 = this_ptr->firing_blend;
        uVar5 = 2;
      }
      else {
        fVar6 = this_ptr->firing_blend;
        uVar5 = 6;
      }
      core_skeleton_cpp_FUN_00568100
                (&(this_ptr->base).base.model,uVar5,0x40c00000,fVar6,_DAT_01d33c28,
                 core_skeleton_cpp_FUN_00567360);
      core_xform_cpp_quaternionFromAngleX_FUN_005b7af0(local_74);
      local_b0.w = local_a0;
      pfVar7 = (float *)((int)&local_b0 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
      *(float *)((int)&local_b0 + (uint)bVar4 * -8 + 4) = afStack_9c[(uint)bVar4 * -2];
      *pfVar7 = afStack_9c[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
      pfVar7[(uint)bVar4 * -2 + 1] =
           (afStack_9c + (uint)bVar4 * -2 + (uint)bVar4 * -2 + 1)[(uint)bVar4 * -2 + 1];
      local_18 = &(this_ptr->base).base.model;
      core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_005695e0
                (local_18,&local_b0,this_ptr->firing_blend,_DAT_01d33c28,
                 core_skeleton_cpp_FUN_00567360);
      core_xform_cpp_quaternionFromAngleY_FUN_005b7b30(local_70);
      blend_callback = core_skeleton_cpp_FUN_00567360;
      local_b0.w = afStack_9c[3];
      pfVar7 = (float *)((int)&local_b0 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
      *(float *)((int)&local_b0 + (uint)bVar4 * -8 + 4) = afStack_9c[(uint)bVar4 * -2 + 4];
      iVar2 = _DAT_01d33c28;
      *pfVar7 = afStack_9c[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 5];
      pfVar7[(uint)bVar4 * -2 + 1] =
           (afStack_9c + (uint)bVar4 * -2 + (uint)bVar4 * -2 + 5)[(uint)bVar4 * -2 + 1];
      core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_005695e0
                (local_18,&local_b0,this_ptr->firing_blend,iVar2,blend_callback);
      return;
    }
    this_ptr->firing_blend = 0.0;
  }
  return;
}

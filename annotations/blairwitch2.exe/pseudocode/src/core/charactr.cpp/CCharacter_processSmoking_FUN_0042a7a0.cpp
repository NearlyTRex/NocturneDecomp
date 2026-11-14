// Name: core_charactr.cpp_CCharacter_processSmoking_FUN_0042a7a0
// Address: 0042a7a0
// Address Range: [[0042a7a0, 0042a9f6]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_CCharacter_processSmoking_FUN_0042a7a0(CCharacter *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_charactr_cpp_CCharacter_processSmoking_FUN_0042a7a0(CCharacter *this_ptr,float delta_time)

{
  CSkeleton *pCVar1;
  int iVar2;
  byte bVar3;
  float afStackY_1094 [1013];
  CFireEffect *this_ptr_00;
  CVector3f *position;
  float fVar4;
  CVector3f *pCVar5;
  CDemonSet *this_ptr_01;
  CDeformableModelInstance *this_ptr_02;
  uint *puVar6;
  uint local_ac;
  int local_a0 [3];
  uint local_94;
  float afStack_90 [5];
  CVector3f local_7c;
  float local_70;
  float afStack_6c [2];
  CVector3f local_64;
  float local_58;
  float afStack_54 [5];
  CVector3f local_40;
  uint local_34;
  uint local_30;
  uint local_2c;
  float local_28;
  float afStack_24 [5];
  
  bVar3 = 0;
  if (((this_ptr->was_rendered_opaque != 0) &&
      ((this_ptr->is_spectral != 0 || (this_ptr->was_rendered_opaque != 0)))) &&
     (((g_CDemonSetPtr->active_fog).temperature < (float)_DAT_005cd266 ||
      (iVar2 = core_actor_cpp_isOfClass_FUN_0040c840(&this_ptr->base,"?CZombieDog" + 1),
      iVar2 != 0)))) {
    if ((this_ptr->smoke_occluded == 0) &&
       (fVar4 = this_ptr->smoke_emit_timer - delta_time, this_ptr->smoke_emit_timer = fVar4,
       fVar4 < 0.0)) {
      this_ptr->smoke_emit_timer = this_ptr->smoke_emit_timer + _DAT_005cd26e;
      local_a0[1] = 0xbf000000;
      local_a0[2] = 0x3f800000;
      local_a0[0] = this_ptr->smoke_occluded;
      core_actor_cpp_FUN_00408cf0(this_ptr,local_a0);
      this_ptr_02 = &this_ptr->model;
      local_64.x = local_28;
      *(float *)((int)&local_64 + (uint)bVar3 * -8 + 4) = afStack_24[(uint)bVar3 * -2];
      *(float *)((int)&local_64 + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8) =
           afStack_24[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1];
      pCVar1 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890(this_ptr_02);
      iVar2 = core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(pCVar1,"Bip01 head",0);
      if (iVar2 != -1) {
        local_30 = 0x3e4ccccd;
        local_2c = 0x3f000000;
        local_34 = 0;
        core_xform_cpp_FUN_00591530
                  (&local_34,(this_ptr->model).bone_transform.bone_model_matrices + iVar2);
        iVar2 = (int)&local_94;
        local_94 = afStack_24[2];
        afStack_90[(uint)bVar3 * -2] = afStack_24[(uint)bVar3 * -2 + 3];
        afStack_6c[(uint)bVar3 * -2 + (uint)bVar3 * -2 + -8] =
             afStack_24[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 4];
        core_actor_cpp_FUN_00408d70(this_ptr,iVar2);
        iVar2 = 0x8000;
        pCVar5 = &local_64;
        fVar4 = 0.5;
        position = &local_40;
        local_40.x = local_58;
        *(float *)((int)&local_40 + (uint)bVar3 * -8 + 4) = afStack_54[(uint)bVar3 * -2];
        this_ptr_00 = 0x01C3DEB4;
        *(float *)((int)&local_40 + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8) =
             afStack_54[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1];
        core_fire_cpp_CFireEffect_createSmokeParticle_FUN_0049d230
                  (this_ptr_00,position,fVar4,pCVar5,iVar2);
      }
    }
    fVar4 = this_ptr->smoke_check_timer - delta_time;
    this_ptr->smoke_check_timer = fVar4;
    if (fVar4 < 0.0) {
      this_ptr->smoke_check_timer = this_ptr->smoke_check_timer + _DAT_005cd272;
      pCVar1 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890
                         (&this_ptr->model);
      iVar2 = core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(pCVar1,"Bip01 head",0);
      if (iVar2 != -1) {
        afStack_54[2] = 0.0;
        afStack_54[4] = 0.5;
        afStack_54[3] = 0.2;
        core_xform_cpp_FUN_00591530
                  (afStack_54 + 2,(this_ptr->model).bone_transform.bone_model_matrices + iVar2);
        puVar6 = &stack0xffffff54;
        local_ac = afStack_90[2];
        *(float *)((int)&stack0xffffff58 + (uint)bVar3 * 0xfffffffe * 4) =
             afStack_90[(uint)bVar3 * -2 + 3];
        afStack_90[(uint)bVar3 * 0xfffffffe + (uint)bVar3 * 0xfffffffe + 0xfffffffb] =
             afStack_90[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 4];
        core_actor_cpp_FUN_00408d70(this_ptr,puVar6);
        pCVar5 = &local_7c;
        local_7c.x = local_70;
        *(float *)((int)&local_7c + (uint)bVar3 * -8 + 4) = afStack_6c[(uint)bVar3 * -2];
        this_ptr_01 = g_CDemonSetPtr;
        *(float *)((int)&local_7c + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8) =
             afStack_6c[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1];
        iVar2 = core_setcolid_cpp_CDemonSet_isPointInWater_FUN_00538180(this_ptr_01,pCVar5);
        if (iVar2 == 0) {
          this_ptr->smoke_occluded = (uint)(this_ptr->smoke_occluded == 0);
          return;
        }
      }
    }
  }
  return;
}

// Name: core_charactr.cpp_CCharacter_processSmoking_FUN_0042a7a0
// Address: 0042a7a0
// Address Range: [[0042a7a0, 0042a9f6]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_CCharacter_processSmoking_FUN_0042a7a0(CCharacter *this_ptr,float delta_time)

#include "nocturne.h"

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
  CVector3f local_ac;
  CVector3f local_a0;
  CVector3f local_94;
  CVector3f local_88;
  CVector3f local_7c;
  CVector3f local_70;
  CVector3f local_64;
  CVector3f local_58;
  CVector3f local_4c;
  CVector3f local_40;
  CVector3f local_34;
  CVector3f local_28;
  CVector3f local_1c;
  
  bVar3 = 0;
  if (((this_ptr->was_rendered_opaque != 0) &&
      ((this_ptr->is_spectral != 0 || (this_ptr->was_rendered_opaque != 0)))) &&
     (((g_CDemonSetPtr->active_fog).temperature < (float)32 ||
      (iVar2 = core_actor_cpp_isOfClass_FUN_0040c840(&this_ptr->base,"CZombieDog"),
      iVar2 != 0)))) {
    if (((float)this_ptr->smoke_occluded == 0.0) &&
       (fVar4 = this_ptr->smoke_emit_timer - delta_time, this_ptr->smoke_emit_timer = fVar4,
       fVar4 < 0.0)) {
      this_ptr->smoke_emit_timer = this_ptr->smoke_emit_timer + 0.2f;
      local_a0.y = -0.5;
      local_a0.z = 1.0;
      local_a0.x = (float)this_ptr->smoke_occluded;
      core_actor_cpp_CDemonActor_transformVector_FUN_00408cf0(&this_ptr->base,&local_a0,&local_28);
      this_ptr_02 = &this_ptr->model;
      local_64.x = local_28.x;
      *(uint *)((int)&local_64 + (uint)bVar3 * -8 + 4) =
           *(uint *)((int)&local_28 + (uint)bVar3 * -8 + 4);
      *(uint *)((int)&local_64 + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8) =
           *(uint *)((int)&local_28 + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8);
      pCVar1 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890(this_ptr_02);
      iVar2 = core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(pCVar1,"Bip01 head",0);
      if (iVar2 != -1) {
        local_34.y = 0.2;
        local_34.z = 0.5;
        local_34.x = 0.0;
        core_xform_cpp_transformVector3x4_FUN_00591530
                  (&local_34,(this_ptr->model).bone_transform.bone_model_matrices + iVar2,&local_1c)
        ;
        pCVar5 = &local_94;
        local_94.x = local_1c.x;
        *(uint *)((int)&local_94 + (uint)bVar3 * -8 + 4) =
             *(uint *)((int)&local_1c + (uint)bVar3 * -8 + 4);
        *(uint *)((int)&local_94 + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8) =
             *(uint *)((int)&local_1c + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8);
        core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408d70(&this_ptr->base,pCVar5,&local_58);
        iVar2 = 0x8000;
        pCVar5 = &local_64;
        fVar4 = 0.5;
        position = &local_40;
        local_40.x = local_58.x;
        *(uint *)((int)&local_40 + (uint)bVar3 * -8 + 4) =
             *(uint *)((int)&local_58 + (uint)bVar3 * -8 + 4);
        this_ptr_00 = g_CFireEffectPtr;
        *(uint *)((int)&local_40 + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8) =
             *(uint *)((int)&local_58 + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8);
        core_fire_cpp_CFireEffect_createSmokeParticle_FUN_0049d230
                  (this_ptr_00,position,fVar4,pCVar5,iVar2);
      }
    }
    fVar4 = this_ptr->smoke_check_timer - delta_time;
    this_ptr->smoke_check_timer = fVar4;
    if (fVar4 < 0.0) {
      this_ptr->smoke_check_timer = this_ptr->smoke_check_timer + 1.5f;
      pCVar1 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890
                         (&this_ptr->model);
      iVar2 = core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(pCVar1,"Bip01 head",0);
      if (iVar2 != -1) {
        local_4c.x = 0.0;
        local_4c.z = 0.5;
        local_4c.y = 0.2;
        core_xform_cpp_transformVector3x4_FUN_00591530
                  (&local_4c,(this_ptr->model).bone_transform.bone_model_matrices + iVar2,&local_88)
        ;
        pCVar5 = &local_ac;
        local_ac.x = local_88.x;
        *(uint *)((int)&local_ac + (uint)bVar3 * -8 + 4) =
             *(uint *)((int)&local_88 + (uint)bVar3 * -8 + 4);
        *(uint *)((int)&local_ac + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8) =
             *(uint *)((int)&local_88 + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8);
        core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408d70(&this_ptr->base,pCVar5,&local_70);
        pCVar5 = &local_7c;
        local_7c.x = local_70.x;
        *(uint *)((int)&local_7c + (uint)bVar3 * -8 + 4) =
             *(uint *)((int)&local_70 + (uint)bVar3 * -8 + 4);
        this_ptr_01 = g_CDemonSetPtr;
        *(uint *)((int)&local_7c + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8) =
             *(uint *)((int)&local_70 + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8);
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

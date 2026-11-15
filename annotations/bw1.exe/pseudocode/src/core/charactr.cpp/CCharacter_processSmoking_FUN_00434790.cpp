// Name: core_charactr.cpp_CCharacter_processSmoking_FUN_00434790
// Address: 00434790
// Address Range: [[00434790, 00434a7f]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_CCharacter_processSmoking_FUN_00434790(CCharacter *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_charactr_cpp_CCharacter_processSmoking_FUN_00434790(CCharacter *this_ptr,float delta_time)

{
  float fVar1;
  CSkeleton *pCVar2;
  int iVar3;
  byte bVar4;
  float afStackY_108c [1010];
  CDemonSet *this_ptr_00;
  CVector3f *pCVar5;
  CDeformableModelInstance *this_ptr_01;
  CVector3f local_b0;
  CVector3f local_a4;
  CVector3f local_98;
  CVector3f local_8c;
  CVector3f local_80;
  CVector3f local_74;
  CVector3f local_68;
  CVector3f local_5c;
  CVector3f local_50;
  CVector3f local_44;
  CVector3f local_38;
  CVector3f local_2c;
  CVector3f local_20;
  
  bVar4 = 0;
  if ((this_ptr->was_rendered_opaque != 0) &&
     ((this_ptr->is_spectral != 0 || (this_ptr->was_rendered_opaque != 0)))) {
    if (this_ptr->is_spectral == 0) {
      if (((g_CDemonSetPtr->active_fog).temperature < (float)_DAT_005d5f1f) ||
         ((iVar3 = core_actor_cpp_isOfClass_FUN_0040c550(&this_ptr->base,"?CZombieDog" + 1),
          iVar3 != 0 && (this_ptr->is_spectral == 0)))) {
        if (((float)this_ptr->smoke_occluded == 0.0) &&
           (fVar1 = this_ptr->smoke_emit_timer - delta_time, this_ptr->smoke_emit_timer = fVar1,
           fVar1 < 0.0)) {
          this_ptr->smoke_emit_timer = this_ptr->smoke_emit_timer + _DAT_005d5f27;
          local_38.y = -0.5;
          local_38.z = 1.0;
          local_38.x = (float)this_ptr->smoke_occluded;
          core_actor_cpp_CDemonActor_transformVector_FUN_00408ac0
                    (&this_ptr->base,&local_38,&local_80);
          this_ptr_01 = &this_ptr->model;
          local_50.x = local_80.x;
          *(uint *)((int)&local_50 + (uint)bVar4 * -8 + 4) =
               *(uint *)((int)&local_80 + (uint)bVar4 * -8 + 4);
          *(uint *)((int)&local_50 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8) =
               *(uint *)((int)&local_80 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
          pCVar2 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30
                             (this_ptr_01);
          iVar3 = core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(pCVar2,"Bip01 head",0);
          if (iVar3 != -1) {
            local_b0.x = 0.0;
            local_b0.z = 0.5;
            local_b0.y = 0.2;
            core_xform_cpp_transformVector3x4_FUN_005b5080
                      (&local_b0,(this_ptr->model).bone_transform.bone_model_matrices + iVar3,
                       &local_74);
            pCVar5 = &local_98;
            local_98.x = local_74.x;
            *(uint *)((int)&local_98 + (uint)bVar4 * -8 + 4) =
                 *(uint *)((int)&local_74 + (uint)bVar4 * -8 + 4);
            *(uint *)((int)&local_98 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8) =
                 *(uint *)((int)&local_74 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
            core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b40
                      (&this_ptr->base,pCVar5,&local_5c);
            iVar3 = 0x8000;
            pCVar5 = &local_50;
            fVar1 = 0.5;
            local_2c.x = local_5c.x;
            *(uint *)((int)&local_2c + (uint)bVar4 * -8 + 4) =
                 *(uint *)((int)&local_5c + (uint)bVar4 * -8 + 4);
            *(uint *)((int)&local_2c + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8) =
                 *(uint *)((int)&local_5c + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
            core_fire_cpp_CFireEffect_createSmokeParticle_FUN_004b5b30
                      (0x01C57074,&local_2c,fVar1,pCVar5,iVar3);
          }
        }
        fVar1 = this_ptr->smoke_check_timer - delta_time;
        this_ptr->smoke_check_timer = fVar1;
        if (fVar1 < 0.0) {
          this_ptr->smoke_check_timer = this_ptr->smoke_check_timer + _DAT_005d5f2b;
          pCVar2 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30
                             (&this_ptr->model);
          iVar3 = core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(pCVar2,"Bip01 head",0);
          if (iVar3 != -1) {
            local_44.x = 0.0;
            local_44.y = 0.2;
            local_44.z = 0.5;
            core_xform_cpp_transformVector3x4_FUN_005b5080
                      (&local_44,(this_ptr->model).bone_transform.bone_model_matrices + iVar3,
                       &local_a4);
            pCVar5 = &local_20;
            local_20.x = local_a4.x;
            *(uint *)((int)&local_20 + (uint)bVar4 * -8 + 4) =
                 *(uint *)((int)&local_a4 + (uint)bVar4 * -8 + 4);
            *(uint *)((int)&local_20 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8) =
                 *(uint *)((int)&local_a4 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
            core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b40
                      (&this_ptr->base,pCVar5,&local_8c);
            pCVar5 = &local_68;
            local_68.x = local_8c.x;
            *(uint *)((int)&local_68 + (uint)bVar4 * -8 + 4) =
                 *(uint *)((int)&local_8c + (uint)bVar4 * -8 + 4);
            this_ptr_00 = g_CDemonSetPtr;
            *(uint *)((int)&local_68 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8) =
                 *(uint *)((int)&local_8c + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
            iVar3 = core_setcolid_cpp_CDemonSet_isPointInWater_FUN_005595a0(this_ptr_00,pCVar5);
            if (iVar3 == 0) {
              this_ptr->smoke_occluded = (uint)(this_ptr->smoke_occluded == 0);
              return;
            }
          }
        }
      }
    }
    else {
      fVar1 = this_ptr->smoke_check_timer - delta_time;
      this_ptr->smoke_check_timer = fVar1;
      if (fVar1 < 0.0) {
        if (this_ptr->smoke_occluded == 0) {
          fVar1 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00(5.0,8.0);
          fVar1 = fVar1 + this_ptr->smoke_check_timer;
        }
        else {
          fVar1 = this_ptr->smoke_check_timer + 1.0;
        }
        this_ptr->smoke_check_timer = fVar1;
        _DAT_007c6340 = 0;
        this_ptr->smoke_occluded = (uint)(this_ptr->smoke_occluded == 0);
      }
    }
  }
  return;
}

// Name: core_charactr.cpp_FUN_00433c60
// Address: 00433c60
// Address Range: [[00433c60, 00433fa2]]
// Convention: unknown
// Signature: void core_charactr_cpp_FUN_00433c60(CCharacter *param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_charactr_cpp_FUN_00433c60(CCharacter *param_1,float param_2)

{
  EDeathState EVar1;
  float fVar2;
  CSkeleton *pCVar3;
  int iVar4;
  uint uVar5;
  byte bVar6;
  float afStackY_108c [1010];
  CFireEffect *this_ptr;
  CVector3f *position;
  CDemonSet *this_ptr_00;
  CVector3f *pCVar7;
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
  
  bVar6 = 0;
  if ((param_1->was_rendered_opaque != 0) &&
     ((param_1->is_spectral != 0 ||
      (EVar1 = (*(((param_1->base).vtable._uc)->_uc).getDeathState)(param_1),
      EVar1 == DEATH_STATE_ALIVE)))) {
    if (param_1->is_spectral == 0) {
      if (((float)_DAT_005b8866 <= (g_CDemonSetPtr->active_fog).temperature) &&
         (iVar4 = core_actor_cpp_isOfClass_FUN_0040c790(&param_1->base,"?CZombieDog" + 1),
         iVar4 == 0)) {
        return;
      }
      if (((float)param_1->smoke_occluded == 0.0) &&
         (fVar2 = param_1->smoke_emit_timer - param_2, param_1->smoke_emit_timer = fVar2,
         fVar2 < 0.0)) {
        param_1->smoke_emit_timer = param_1->smoke_emit_timer + _DAT_005b886e;
        local_2c.y = -0.5;
        local_2c.z = 1.0;
        local_2c.x = (float)param_1->smoke_occluded;
        core_actor_cpp_CDemonActor_transformVector_FUN_00408b00(&param_1->base,&local_2c,&local_20);
        this_ptr_01 = &param_1->model;
        local_80.x = local_20.x;
        *(uint *)((int)&local_80 + (uint)bVar6 * -8 + 4) =
             *(uint *)((int)&local_20 + (uint)bVar6 * -8 + 4);
        *(uint *)((int)&local_80 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8) =
             *(uint *)((int)&local_20 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
        pCVar3 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0(this_ptr_01)
        ;
        iVar4 = core_skeleton_cpp_CSkeleton_findBone_FUN_00548090(pCVar3,"Bip01 head",0);
        if (iVar4 != -1) {
          local_b0.y = 0.2;
          local_b0.z = 0.5;
          local_b0.x = 0.0;
          core_xform_cpp_transformVector3x4_FUN_00583260
                    (&local_b0,(param_1->model).bone_transform.bone_model_matrices + iVar4,&local_74
                    );
          pCVar7 = &local_98;
          local_98.x = local_74.x;
          *(uint *)((int)&local_98 + (uint)bVar6 * -8 + 4) =
               *(uint *)((int)&local_74 + (uint)bVar6 * -8 + 4);
          *(uint *)((int)&local_98 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8) =
               *(uint *)((int)&local_74 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
          core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b80(&param_1->base,pCVar7,&local_5c)
          ;
          iVar4 = 0x411a;
          pCVar7 = &local_80;
          fVar2 = 0.5;
          position = &local_50;
          local_50.x = local_5c.x;
          *(uint *)((int)&local_50 + (uint)bVar6 * -8 + 4) =
               *(uint *)((int)&local_5c + (uint)bVar6 * -8 + 4);
          this_ptr = 0x01C73654;
          *(uint *)((int)&local_50 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8) =
               *(uint *)((int)&local_5c + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
          core_fire_cpp_CFireEffect_createSmokeParticle_FUN_004a2560
                    (this_ptr,position,fVar2,pCVar7,iVar4);
        }
      }
      param_2 = param_1->smoke_check_timer - param_2;
      param_1->smoke_check_timer = param_2;
      if (param_2 < 0.0) {
        param_1->smoke_check_timer = 1.5;
        pCVar3 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0
                           (&param_1->model);
        iVar4 = core_skeleton_cpp_CSkeleton_findBone_FUN_00548090(pCVar3,"Bip01 head",0);
        if (iVar4 != -1) {
          local_8c.x = 0.0;
          local_8c.z = 0.5;
          local_8c.y = 0.2;
          core_xform_cpp_transformVector3x4_FUN_00583260
                    (&local_8c,(param_1->model).bone_transform.bone_model_matrices + iVar4,&local_44
                    );
          pCVar7 = &local_68;
          local_68.x = local_44.x;
          *(uint *)((int)&local_68 + (uint)bVar6 * -8 + 4) =
               *(uint *)((int)&local_44 + (uint)bVar6 * -8 + 4);
          *(uint *)((int)&local_68 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8) =
               *(uint *)((int)&local_44 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
          core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b80(&param_1->base,pCVar7,&local_a4)
          ;
          pCVar7 = &local_38;
          local_38.x = local_a4.x;
          *(uint *)((int)&local_38 + (uint)bVar6 * -8 + 4) =
               *(uint *)((int)&local_a4 + (uint)bVar6 * -8 + 4);
          this_ptr_00 = g_CDemonSetPtr;
          *(uint *)((int)&local_38 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8) =
               *(uint *)((int)&local_a4 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
          iVar4 = core_setcolid_cpp_CDemonSet_isPointInWater_FUN_0053ef60(this_ptr_00,pCVar7);
          if (iVar4 == 0) {
            uVar5 = (uint)(param_1->smoke_occluded == 0);
            param_1->smoke_occluded = uVar5;
            if (uVar5 == 0) {
              fVar2 = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(1.0,1.5);
              param_1->smoke_check_timer = fVar2 + param_1->smoke_check_timer;
              return;
            }
            fVar2 = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(1.5,3.0);
            param_1->smoke_check_timer = fVar2 + param_1->smoke_check_timer;
            return;
          }
        }
      }
    }
    else {
      param_2 = param_1->smoke_check_timer - param_2;
      param_1->smoke_check_timer = param_2;
      if (param_2 < 0.0) {
        if (param_1->smoke_occluded == 0) {
          fVar2 = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(5.0,8.0);
          fVar2 = fVar2 + param_1->smoke_check_timer;
        }
        else {
          fVar2 = param_1->smoke_check_timer + 1.0;
        }
        param_1->smoke_check_timer = fVar2;
        param_1->smoke_occluded = (uint)(param_1->smoke_occluded == 0);
        _DAT_007e2cb0 = 0;
      }
    }
  }
  return;
}

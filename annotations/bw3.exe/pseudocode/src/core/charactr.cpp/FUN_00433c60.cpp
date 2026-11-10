// Name: core_charactr.cpp_FUN_00433c60
// Address: 00433c60
// Address Range: [[00433c60, 00433fa2]]
// Convention: unknown
// Signature: void core_charactr_cpp_FUN_00433c60(CCharacter *param_1,float param_2)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_charactr_cpp_FUN_00433c60(CCharacter *param_1,float param_2)

{
  EDeathState EVar1;
  float fVar2;
  CSkeleton *pCVar3;
  int iVar4;
  uint uVar5;
  byte bVar6;
  int aiStackY_108c [3];
  float afStackY_1080 [24];
  int aiStackY_1020 [983];
  CFireEffect *this_ptr;
  CVector3f *position;
  CDemonSet *this_ptr_00;
  CVector3f *pCVar7;
  float *pfVar8;
  CDeformableModelInstance *this_ptr_01;
  int *piVar9;
  uint local_b0;
  uint local_ac;
  uint local_a8;
  float local_a4;
  int aiStack_a0 [3];
  float afStack_94 [5];
  CVector3f local_80;
  uint local_74;
  float afStack_70 [5];
  float local_5c;
  CVector3f local_50;
  uint local_44;
  float afStack_40 [2];
  CVector3f local_38;
  int local_2c [3];
  float local_20;
  uint auStack_1c [3];
  
  bVar6 = 0;
  if ((param_1->was_rendered_opaque != 0) &&
     ((*(int *)&param_1->field_0x27a8 != 0 ||
      (EVar1 = (*(((param_1->base).vtable._uc)->_uc).getDeathState)(param_1),
      EVar1 == DEATH_STATE_ALIVE)))) {
    if (*(int *)&param_1->field_0x27a8 == 0) {
      if (((float)_DAT_005b8866 <= *(float *)&g_CDemonSetPtr->field_0x15ac84) &&
         (iVar4 = core_actor_cpp_isOfClass_FUN_0040c790(&param_1->base,"?CZombieDog" + 1),
         iVar4 == 0)) {
        return;
      }
      if ((param_1->smoke_occluded == 0) &&
         (fVar2 = param_1->smoke_emit_timer - param_2, param_1->smoke_emit_timer = fVar2,
         fVar2 < 0.0)) {
        param_1->smoke_emit_timer = param_1->smoke_emit_timer + _DAT_005b886e;
        local_2c[1] = 0xbf000000;
        local_2c[2] = 0x3f800000;
        local_2c[0] = param_1->smoke_occluded;
        core_actor_cpp_FUN_00408b00(param_1,local_2c);
        this_ptr_01 = &param_1->model;
        local_80.x = local_20;
        *(uint *)((int)&local_80 + (uint)bVar6 * -8 + 4) = auStack_1c[(uint)bVar6 * -2];
        *(uint *)((int)&local_80 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8) =
             auStack_1c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
        pCVar3 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0(this_ptr_01)
        ;
        iVar4 = core_skeleton_cpp_CSkeleton_findBone_FUN_00548090(pCVar3,"Bip01 head",0);
        if (iVar4 != -1) {
          local_ac = 0x3e4ccccd;
          local_a8 = 0x3f000000;
          local_b0 = 0;
          core_xform_cpp_FUN_00583260(&stack0xffffff50,&(param_1->model).field_0xe80 + iVar4 * 0x30)
          ;
          piVar9 = aiStack_a0 + 2;
          aiStack_a0[2] = local_74;
          afStack_94[(uint)bVar6 * -2] = afStack_70[(uint)bVar6 * -2];
          afStack_70[(uint)bVar6 * -2 + (uint)bVar6 * -2 + -8] =
               afStack_70[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
          core_actor_cpp_FUN_00408b80(param_1,piVar9);
          iVar4 = 0x411a;
          pCVar7 = &local_80;
          fVar2 = 0.5;
          position = &local_50;
          local_50.x = local_5c;
          *(float *)((int)&local_50 + (uint)bVar6 * -8 + 4) = afStack_70[(uint)bVar6 * -2 + 6];
          this_ptr = 0x01C73654;
          *(float *)((int)&local_50 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8) =
               afStack_70[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 7];
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
          afStack_94[2] = 0.0;
          afStack_94[4] = 0.5;
          afStack_94[3] = 0.2;
          core_xform_cpp_FUN_00583260(afStack_94 + 2,&(param_1->model).field_0xe80 + iVar4 * 0x30);
          pfVar8 = afStack_70 + 2;
          afStack_70[2] = (float)local_44;
          afStack_70[(uint)bVar6 * -2 + 3] = afStack_40[(uint)bVar6 * -2];
          afStack_70[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4] =
               afStack_40[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
          core_actor_cpp_FUN_00408b80(param_1,pfVar8);
          pCVar7 = &local_38;
          local_38.x = local_a4;
          local_2c[(uint)bVar6 * -2 + -2] = aiStack_a0[(uint)bVar6 * -2];
          this_ptr_00 = g_CDemonSetPtr;
          local_2c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + -1] =
               aiStack_a0[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
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

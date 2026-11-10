// Name: core_charactr.cpp_FUN_00434790
// Address: 00434790
// Address Range: [[00434790, 00434a7f]]
// Convention: unknown
// Signature: void core_charactr_cpp_FUN_00434790(CDemonActor *param_1,float param_2)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_charactr_cpp_FUN_00434790(CDemonActor *param_1,float param_2)

{
  float fVar1;
  CSkeleton *pCVar2;
  int iVar3;
  byte bVar4;
  float afStackY_108c [1010];
  CDemonSet *this_ptr;
  CVector3f *pCVar5;
  uint *puVar6;
  CDeformableModelInstance *this_ptr_00;
  uint local_b0;
  uint local_ac;
  uint local_a8;
  uint local_a4;
  uint local_98;
  float local_8c;
  float local_80;
  uint local_74;
  CVector3f local_68;
  float local_5c;
  float afStack_58 [2];
  CVector3f local_50;
  uint local_44;
  uint local_40;
  uint local_3c;
  int local_38 [3];
  CVector3f local_2c;
  uint local_20;
  uint auStack_1c [3];
  
  bVar4 = 0;
  if ((*(int *)(param_1[0x1d].create_event + 0x4c) != 0) &&
     ((*(int *)(param_1[0x1d].create_event + 0x38) != 0 ||
      (*(int *)(param_1[0x1d].create_event + 0x4c) != 0)))) {
    if (*(int *)(param_1[0x1d].create_event + 0x38) == 0) {
      if ((*(float *)&g_CDemonSetPtr->field_0x15ac84 < (float)_DAT_005d5f1f) ||
         ((iVar3 = core_actor_cpp_isOfClass_FUN_0040c550(param_1,"?CZombieDog" + 1),
          iVar3 != 0 && (*(int *)(param_1[0x1d].create_event + 0x38) == 0)))) {
        iVar3 = *(int *)(param_1[0x22].create_event + 0x3c);
        if ((iVar3 == 0) &&
           (fVar1 = *(float *)(param_1[0x22].create_event + 0x34) - param_2,
           *(float *)(param_1[0x22].create_event + 0x34) = fVar1, fVar1 < 0.0)) {
          *(float *)(param_1[0x22].create_event + 0x34) =
               *(float *)(param_1[0x22].create_event + 0x34) + _DAT_005d5f27;
          local_38[1] = 0xbf000000;
          local_38[2] = 0x3f800000;
          local_38[0] = iVar3;
          core_actor_cpp_FUN_00408ac0(param_1,local_38);
          this_ptr_00 = (CDeformableModelInstance *)(param_1 + 1);
          local_50.x = local_80;
          *(uint *)((int)&local_50 + (uint)bVar4 * -8 + 4) =
               *(uint *)(&stack0xffffff84 + (uint)bVar4 * -8);
          *(float *)((int)&local_50 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8) =
               afStack_58[(uint)bVar4 * -2 + (uint)bVar4 * -2 + -8];
          pCVar2 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30
                             (this_ptr_00);
          iVar3 = core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(pCVar2,"Bip01 head",0);
          if (iVar3 != -1) {
            local_b0 = 0;
            local_a8 = 0x3f000000;
            local_ac = 0x3e4ccccd;
            core_xform_cpp_FUN_005b5080
                      (&stack0xffffff50,param_1[0xb].footstep_sound_code + iVar3 * 0x30 + -0xc);
            puVar6 = &stack0xffffff68;
            local_98 = local_74;
            *(uint *)((int)&stack0xffffff6c + (uint)bVar4 * 0xfffffffe * 4) =
                 *(uint *)(&stack0xffffff90 + (uint)bVar4 * -8);
            *(uint *)(&stack0xffffff70 + (uint)bVar4 * -8 + (uint)bVar4 * -8) =
                 *(uint *)(&stack0xffffff94 + (uint)bVar4 * -8 + (uint)bVar4 * -8);
            core_actor_cpp_FUN_00408b40(param_1,puVar6);
            iVar3 = 0x8000;
            pCVar5 = &local_50;
            fVar1 = 0.5;
            local_2c.x = local_5c;
            *(float *)((int)&local_2c + (uint)bVar4 * -8 + 4) = afStack_58[(uint)bVar4 * -2];
            *(float *)((int)&local_2c + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8) =
                 afStack_58[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
            core_fire_cpp_CFireEffect_createSmokeParticle_FUN_004b5b30
                      (0x01C57074,&local_2c,fVar1,pCVar5,iVar3);
          }
        }
        param_2 = *(float *)(param_1[0x22].create_event + 0x38) - param_2;
        *(float *)(param_1[0x22].create_event + 0x38) = param_2;
        if (param_2 < 0.0) {
          *(float *)(param_1[0x22].create_event + 0x38) =
               *(float *)(param_1[0x22].create_event + 0x38) + _DAT_005d5f2b;
          pCVar2 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30
                             ((CDeformableModelInstance *)(param_1 + 1));
          iVar3 = core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(pCVar2,"Bip01 head",0);
          if (iVar3 != -1) {
            local_44 = 0;
            local_40 = 0x3e4ccccd;
            local_3c = 0x3f000000;
            core_xform_cpp_FUN_005b5080
                      (&local_44,param_1[0xb].footstep_sound_code + iVar3 * 0x30 + -0xc);
            puVar6 = &local_20;
            local_20 = local_a4;
            auStack_1c[(uint)bVar4 * -2] =
                 *(uint *)((int)&stack0xffffff60 + (uint)bVar4 * 0xfffffffe * 4);
            auStack_1c[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
                 *(uint *)(&stack0xffffff64 + (uint)bVar4 * -8 + (uint)bVar4 * -8);
            core_actor_cpp_FUN_00408b40(param_1,puVar6);
            pCVar5 = &local_68;
            local_68.x = local_8c;
            *(uint *)((int)&local_68 + (uint)bVar4 * -8 + 4) =
                 *(uint *)(&stack0xffffff78 + (uint)bVar4 * -8);
            this_ptr = g_CDemonSetPtr;
            *(uint *)((int)&local_68 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8) =
                 *(uint *)(&stack0xffffff7c + (uint)bVar4 * -8 + (uint)bVar4 * -8);
            iVar3 = core_setcolid_cpp_CDemonSet_isPointInWater_FUN_005595a0(this_ptr,pCVar5);
            if (iVar3 == 0) {
              *(uint *)(param_1[0x22].create_event + 0x3c) =
                   (uint)(*(int *)(param_1[0x22].create_event + 0x3c) == 0);
              return;
            }
          }
        }
      }
    }
    else {
      param_2 = *(float *)(param_1[0x22].create_event + 0x38) - param_2;
      *(float *)(param_1[0x22].create_event + 0x38) = param_2;
      if (param_2 < 0.0) {
        if (*(int *)(param_1[0x22].create_event + 0x3c) == 0) {
          fVar1 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00(5.0,8.0);
          fVar1 = fVar1 + *(float *)(param_1[0x22].create_event + 0x38);
        }
        else {
          fVar1 = *(float *)(param_1[0x22].create_event + 0x38) + 1.0;
        }
        *(float *)(param_1[0x22].create_event + 0x38) = fVar1;
        _DAT_007c6340 = 0;
        *(uint *)(param_1[0x22].create_event + 0x3c) =
             (uint)(*(int *)(param_1[0x22].create_event + 0x3c) == 0);
      }
    }
  }
  return;
}

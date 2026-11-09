// Name: core_charactr.cpp_FUN_0042a7a0
// Address: 0042a7a0
// Address Range: [[0042a7a0, 0042a9f6]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_FUN_0042a7a0(CCharacter *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_charactr_cpp_FUN_0042a7a0(CCharacter *this_ptr,float delta_time)

{
  CSkeleton *pCVar1;
  int iVar2;
  byte bVar3;
  int aiStackY_1094 [1013];
  CFireEffect *this_ptr_00;
  CVector3f *position;
  float fVar4;
  CVector3f *pCVar5;
  CDemonSet *this_ptr_01;
  CDeformableModelInstance *this_ptr_02;
  uint *puVar6;
  uint local_ac;
  int local_a0;
  uint local_9c;
  uint local_98;
  uint local_94;
  uint local_88;
  CVector3f local_7c;
  CVector3f local_70;
  CVector3f local_64;
  CVector3f local_58;
  uint local_4c;
  uint local_48;
  uint local_44;
  CVector3f local_40;
  uint local_34;
  uint local_30;
  uint local_2c;
  CVector3f local_28;
  uint local_1c;
  uint auStack_18 [2];
  
  bVar3 = 0;
  if (((*(int *)&this_ptr->field_0x2828 != 0) &&
      ((*(int *)&this_ptr->field_0x2814 != 0 || (*(int *)&this_ptr->field_0x2828 != 0)))) &&
     ((*(float *)&g_CDemonSetPtr->field_0x15ac84 < (float)_DAT_005cd266 ||
      (iVar2 = core_actor_cpp_FUN_0040c840((CDemonActor *)this_ptr,"?CZombieDog" + 1),
      iVar2 != 0)))) {
    if ((*(int *)&this_ptr->field_0x2ed0 == 0) &&
       (fVar4 = *(float *)&this_ptr->field_0x2ec8 - delta_time,
       *(float *)&this_ptr->field_0x2ec8 = fVar4, fVar4 < 0.0)) {
      *(float *)&this_ptr->field_0x2ec8 = *(float *)&this_ptr->field_0x2ec8 + _DAT_005cd26e;
      local_9c = 0xbf000000;
      local_98 = 0x3f800000;
      local_a0 = *(int *)&this_ptr->field_0x2ed0;
      core_actor_cpp_FUN_00408cf0(this_ptr,&stack0xffffff60);
      this_ptr_02 = (CDeformableModelInstance *)&this_ptr->field_0x2b4;
      local_64._0_4_ = local_28._0_4_;
      *(uint *)((int)&local_64 + (uint)bVar3 * -8 + 4) =
           *(uint *)((int)&local_28 + (uint)bVar3 * -8 + 4);
      *(uint *)((int)&local_64 + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8) =
           *(uint *)((int)&local_28 + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8);
      pCVar1 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890(this_ptr_02);
      iVar2 = core_skeleton_cpp_FUN_00540e80(pCVar1,"Bip01 head",0);
      if (iVar2 != -1) {
        local_30 = 0x3e4ccccd;
        local_2c = 0x3f000000;
        local_34 = 0;
        core_xform_cpp_FUN_00591530(&local_34,&this_ptr->field_0x1134 + iVar2 * 0x30);
        puVar6 = &stack0xffffff6c;
        local_94 = local_1c;
        *(uint *)((int)&stack0xffffff70 + (uint)bVar3 * 0xfffffffe * 4) =
             auStack_18[(uint)bVar3 * -2];
        *(uint *)(&stack0xffffff74 + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
             auStack_18[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1];
        core_actor_cpp_FUN_00408d70(this_ptr,puVar6);
        iVar2 = 0x8000;
        pCVar5 = &local_64;
        fVar4 = 0.5;
        position = &local_40;
        local_40._0_4_ = local_58._0_4_;
        *(uint *)((int)&local_40 + (uint)bVar3 * -8 + 4) =
             *(uint *)((int)&local_58 + (uint)bVar3 * -8 + 4);
        this_ptr_00 = 0x01C3DEB4;
        *(uint *)((int)&local_40 + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8) =
             *(uint *)((int)&local_58 + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8);
        core_fire_cpp_CFireEffect_createSmokeParticle_FUN_0049d230
                  (this_ptr_00,position,fVar4,pCVar5,iVar2);
      }
    }
    fVar4 = *(float *)&this_ptr->field_0x2ecc - delta_time;
    *(float *)&this_ptr->field_0x2ecc = fVar4;
    if (fVar4 < 0.0) {
      *(float *)&this_ptr->field_0x2ecc = *(float *)&this_ptr->field_0x2ecc + _DAT_005cd272;
      pCVar1 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890
                         ((CDeformableModelInstance *)&this_ptr->field_0x2b4);
      iVar2 = core_skeleton_cpp_FUN_00540e80(pCVar1,"Bip01 head",0);
      if (iVar2 != -1) {
        local_4c = 0;
        local_44 = 0x3f000000;
        local_48 = 0x3e4ccccd;
        core_xform_cpp_FUN_00591530(&local_4c,&this_ptr->field_0x1134 + iVar2 * 0x30);
        puVar6 = &stack0xffffff54;
        local_ac = local_88;
        *(uint *)((int)&stack0xffffff58 + (uint)bVar3 * 0xfffffffe * 4) =
             *(uint *)(&stack0xffffff7c + (uint)bVar3 * -8);
        *(uint *)(&stack0xffffff5c + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
             *(uint *)(&stack0xffffff80 + (uint)bVar3 * -8 + (uint)bVar3 * -8);
        core_actor_cpp_FUN_00408d70(this_ptr,puVar6);
        pCVar5 = &local_7c;
        local_7c._0_4_ = local_70._0_4_;
        *(uint *)((int)&local_7c + (uint)bVar3 * -8 + 4) =
             *(uint *)((int)&local_70 + (uint)bVar3 * -8 + 4);
        this_ptr_01 = g_CDemonSetPtr;
        *(uint *)((int)&local_7c + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8) =
             *(uint *)((int)&local_70 + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8);
        iVar2 = core_setcolid_cpp_FUN_00538180(this_ptr_01,pCVar5);
        if (iVar2 == 0) {
          *(uint *)&this_ptr->field_0x2ed0 = (uint)(*(int *)&this_ptr->field_0x2ed0 == 0);
          return;
        }
      }
    }
  }
  return;
}

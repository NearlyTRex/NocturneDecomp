// Name: core_charactr.cpp_CCharacter_processMotion_FUN_00434a80
// Address: 00434a80
// Address Range: [[00434a80, 00434c58]]
// Convention: __cdecl
// Signature: int __cdecl core_charactr_cpp_CCharacter_processMotion_FUN_00434a80(CCharacter *this_ptr,int bone_index)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

int __cdecl core_charactr_cpp_CCharacter_processMotion_FUN_00434a80(CCharacter *this_ptr,int bone_index)

{
  CDeformableModelInstance *this_ptr_00;
  CDemonActor_vtable *pCVar1;
  CSkeleton *pCVar2;
  uint uVar3;
  byte bVar4;
  float afStackY_1058 [1015];
  char *pcVar5;
  CVector3f *pCVar6;
  int iVar7;
  float fVar8;
  CVector3f local_70;
  CVector3f local_64;
  CVector3f local_58;
  CVector3f local_4c;
  CVector3f local_40;
  CVector3f local_34;
  CVector3f local_28;
  CVector3f local_1c;
  
  bVar4 = 0;
  this_ptr_00 = &this_ptr->model;
  if ((uint)bone_index < 7) {
    if ((bone_index == 1) && (this_ptr->is_on_ground != 0)) {
      iVar7 = 0;
      pcVar5 = "?Bip01 L Foot" + 1;
      pCVar2 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30(this_ptr_00);
      bone_index = core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(pCVar2,pcVar5,iVar7);
      if (-1 < bone_index) {
        fVar8 = 0.5;
        pCVar1 = (this_ptr->base).vtable._ub;
        core_skeleton_cpp_CDeformableModelInstance_getBoneModelPosition_FUN_00569040
                  (this_ptr_00,bone_index,&local_34);
        pCVar6 = &local_4c;
        local_4c.x = local_34.x;
        *(uint *)((int)&local_4c + (uint)bVar4 * -8 + 4) =
             *(uint *)((int)&local_34 + (uint)bVar4 * -8 + 4);
        *(uint *)((int)&local_4c + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8) =
             *(uint *)((int)&local_34 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
        uVar3 = (*pCVar1->processFootstepAtOffset)(&this_ptr->base,pCVar6,fVar8);
        return uVar3;
      }
    }
  }
  else if ((uint)bone_index < 8) {
    if (this_ptr->is_on_ground != 0) {
      iVar7 = 0;
      pcVar5 = "Bip01 R Foot";
      pCVar2 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30(this_ptr_00);
      bone_index = core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(pCVar2,pcVar5,iVar7);
      if (-1 < bone_index) {
        fVar8 = 0.5;
        pCVar1 = (this_ptr->base).vtable._ub;
        core_skeleton_cpp_CDeformableModelInstance_getBoneModelPosition_FUN_00569040
                  (this_ptr_00,bone_index,&local_70);
        pCVar6 = &local_1c;
        local_1c.x = local_70.x;
        *(uint *)((int)&local_1c + (uint)bVar4 * -8 + 4) =
             *(uint *)((int)&local_70 + (uint)bVar4 * -8 + 4);
        *(uint *)((int)&local_1c + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8) =
             *(uint *)((int)&local_70 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
        uVar3 = (*pCVar1->processFootstepAtOffset)(&this_ptr->base,pCVar6,fVar8);
        return uVar3;
      }
    }
  }
  else if (0x1e < (uint)bone_index) {
    if ((uint)bone_index < 0x20) {
      if (this_ptr->is_on_ground != 0) {
        iVar7 = 0;
        pcVar5 = "Bip01 L Foot";
        pCVar2 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30(this_ptr_00)
        ;
        bone_index = core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(pCVar2,pcVar5,iVar7);
        if (-1 < bone_index) {
          fVar8 = 0.7;
          pCVar1 = (this_ptr->base).vtable._ub;
          core_skeleton_cpp_CDeformableModelInstance_getBoneModelPosition_FUN_00569040
                    (this_ptr_00,bone_index,&local_40);
          pCVar6 = &local_58;
          local_58.x = local_40.x;
          *(uint *)((int)&local_58 + (uint)bVar4 * -8 + 4) =
               *(uint *)((int)&local_40 + (uint)bVar4 * -8 + 4);
          *(uint *)((int)&local_58 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8) =
               *(uint *)((int)&local_40 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
          uVar3 = (*pCVar1->processFootstepAtOffset)(&this_ptr->base,pCVar6,fVar8);
          return uVar3;
        }
      }
    }
    else {
      if (bone_index != 0x25) {
        return bone_index;
      }
      if (this_ptr->is_on_ground != 0) {
        iVar7 = 0;
        pcVar5 = "Bip01 R Foot";
        pCVar2 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30(this_ptr_00)
        ;
        bone_index = core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(pCVar2,pcVar5,iVar7);
        if (-1 < bone_index) {
          fVar8 = 0.7;
          pCVar1 = (this_ptr->base).vtable._ub;
          core_skeleton_cpp_CDeformableModelInstance_getBoneModelPosition_FUN_00569040
                    (this_ptr_00,bone_index,&local_64);
          pCVar6 = &local_28;
          local_28.x = local_64.x;
          *(uint *)((int)&local_28 + (uint)bVar4 * -8 + 4) =
               *(uint *)((int)&local_64 + (uint)bVar4 * -8 + 4);
          *(uint *)((int)&local_28 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8) =
               *(uint *)((int)&local_64 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
          uVar3 = (*pCVar1->processFootstepAtOffset)(&this_ptr->base,pCVar6,fVar8);
          return uVar3;
        }
      }
    }
  }
  return bone_index;
}

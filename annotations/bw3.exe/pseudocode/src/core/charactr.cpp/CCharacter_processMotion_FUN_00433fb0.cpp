// Name: core_charactr.cpp_CCharacter_processMotion_FUN_00433fb0
// Address: 00433fb0
// Address Range: [[00433fb0, 00434188]]
// Convention: __cdecl
// Signature: int __cdecl core_charactr_cpp_CCharacter_processMotion_FUN_00433fb0(CCharacter *this_ptr,int bone_index)

#include "nocturne.h"

int __cdecl core_charactr_cpp_CCharacter_processMotion_FUN_00433fb0(CCharacter *this_ptr,int bone_index)

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
  float local_70;
  float local_64;
  CVector3f local_58;
  CVector3f local_4c;
  float local_40;
  float afStack_3c [5];
  CVector3f local_28;
  CVector3f local_1c;
  
  bVar4 = 0;
  this_ptr_00 = &this_ptr->model;
  if ((uint)bone_index < 7) {
    if ((bone_index == 1) && (this_ptr->is_on_ground != 0)) {
      iVar7 = 0;
      pcVar5 = "L>Bip01 L Foot" + 2;
      pCVar2 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0(this_ptr_00);
      bone_index = core_skeleton_cpp_CSkeleton_findBone_FUN_00548090(pCVar2,pcVar5,iVar7);
      if (-1 < bone_index) {
        fVar8 = 1.0;
        pCVar1 = (this_ptr->base).vtable._ub;
        core_skeleton_cpp_FUN_0054dbd0(this_ptr_00,bone_index);
        pCVar6 = &local_4c;
        local_4c.x = afStack_3c[2];
        *(float *)((int)&local_4c + (uint)bVar4 * -8 + 4) = afStack_3c[(uint)bVar4 * -2 + 3];
        *(float *)((int)&local_4c + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8) =
             afStack_3c[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4];
        uVar3 = (*pCVar1->processFootstepAtOffset)(&this_ptr->base,pCVar6,fVar8);
        return uVar3;
      }
    }
  }
  else if ((uint)bone_index < 8) {
    if (this_ptr->is_on_ground != 0) {
      iVar7 = 0;
      pcVar5 = "Bip01 R Foot";
      pCVar2 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0(this_ptr_00);
      bone_index = core_skeleton_cpp_CSkeleton_findBone_FUN_00548090(pCVar2,pcVar5,iVar7);
      if (-1 < bone_index) {
        fVar8 = 1.0;
        pCVar1 = (this_ptr->base).vtable._ub;
        core_skeleton_cpp_FUN_0054dbd0(this_ptr_00,bone_index);
        pCVar6 = &local_1c;
        local_1c.x = local_70;
        *(uint *)((int)&local_1c + (uint)bVar4 * -8 + 4) =
             *(uint *)(&stack0xffffff94 + (uint)bVar4 * -8);
        *(uint *)((int)&local_1c + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8) =
             *(uint *)(&stack0xffffff98 + (uint)bVar4 * -8 + (uint)bVar4 * -8);
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
        pCVar2 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0(this_ptr_00)
        ;
        bone_index = core_skeleton_cpp_CSkeleton_findBone_FUN_00548090(pCVar2,pcVar5,iVar7);
        if (-1 < bone_index) {
          fVar8 = 1.7;
          pCVar1 = (this_ptr->base).vtable._ub;
          core_skeleton_cpp_FUN_0054dbd0(this_ptr_00,bone_index);
          pCVar6 = &local_58;
          local_58.x = local_40;
          *(float *)((int)&local_58 + (uint)bVar4 * -8 + 4) = afStack_3c[(uint)bVar4 * -2];
          *(float *)((int)&local_58 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8) =
               afStack_3c[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
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
        pCVar2 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0(this_ptr_00)
        ;
        bone_index = core_skeleton_cpp_CSkeleton_findBone_FUN_00548090(pCVar2,pcVar5,iVar7);
        if (-1 < bone_index) {
          fVar8 = 1.7;
          pCVar1 = (this_ptr->base).vtable._ub;
          core_skeleton_cpp_FUN_0054dbd0(this_ptr_00,bone_index);
          pCVar6 = &local_28;
          local_28.x = local_64;
          *(uint *)((int)&local_28 + (uint)bVar4 * -8 + 4) =
               *(uint *)(&stack0xffffffa0 + (uint)bVar4 * -8);
          *(uint *)((int)&local_28 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8) =
               *(uint *)(&stack0xffffffa4 + (uint)bVar4 * -8 + (uint)bVar4 * -8);
          uVar3 = (*pCVar1->processFootstepAtOffset)(&this_ptr->base,pCVar6,fVar8);
          return uVar3;
        }
      }
    }
  }
  return bone_index;
}

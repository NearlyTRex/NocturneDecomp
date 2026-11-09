// Name: core_charactr.cpp_CCharacter_processMotion_FUN_0042aa00
// Address: 0042aa00
// Address Range: [[0042aa00, 0042abd8]]
// Convention: __cdecl
// Signature: int __cdecl core_charactr_cpp_CCharacter_processMotion_FUN_0042aa00(CCharacter *this_ptr,int bone_index)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

int __cdecl core_charactr_cpp_CCharacter_processMotion_FUN_0042aa00(CCharacter *this_ptr,int bone_index)

{
  byte *this_ptr_00;
  CSkeleton *pCVar1;
  byte bVar2;
  uint auStackY_1058 [1015];
  char *pcVar3;
  uint *puVar4;
  int iVar5;
  uint local_70;
  uint local_64;
  uint local_58;
  uint local_4c;
  uint local_40;
  uint local_34;
  uint local_28;
  uint local_1c;
  
  bVar2 = 0;
  this_ptr_00 = &this_ptr->field_0x2b4;
  if ((uint)bone_index < 7) {
    if ((bone_index == 1) && (*(int *)&this_ptr->field_0x2570 != 0)) {
      iVar5 = 0;
      pcVar3 = "?Bip01 L Foot" + 1;
      pCVar1 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890
                         ((CDeformableModelInstance *)this_ptr_00);
      bone_index = core_skeleton_cpp_FUN_00540e80(pCVar1,pcVar3,iVar5);
      if (-1 < bone_index) {
        iVar5 = *(int *)&this_ptr->field_0x2b0;
        core_skeleton_cpp_FUN_005469a0(this_ptr_00,bone_index,0x3f800000);
        puVar4 = &stack0xffffffb4;
        local_4c = local_34;
        *(uint *)((int)&stack0xffffffb8 + (uint)bVar2 * 0xfffffffe * 4) =
             *(uint *)(&stack0xffffffd0 + (uint)bVar2 * -8);
        *(uint *)(&stack0xffffffbc + (uint)bVar2 * -8 + (uint)bVar2 * -8) =
             *(uint *)(&stack0xffffffd4 + (uint)bVar2 * -8 + (uint)bVar2 * -8);
        iVar5 = (**(code **)(iVar5 + 0x2c))(this_ptr,puVar4);
        return iVar5;
      }
    }
  }
  else if ((uint)bone_index < 8) {
    if (*(int *)&this_ptr->field_0x2570 != 0) {
      iVar5 = 0;
      pcVar3 = "Bip01 R Foot";
      pCVar1 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890
                         ((CDeformableModelInstance *)this_ptr_00);
      bone_index = core_skeleton_cpp_FUN_00540e80(pCVar1,pcVar3,iVar5);
      if (-1 < bone_index) {
        iVar5 = *(int *)&this_ptr->field_0x2b0;
        core_skeleton_cpp_FUN_005469a0(this_ptr_00,bone_index,0x3f800000);
        puVar4 = &stack0xffffffe4;
        local_1c = local_70;
        *(uint *)((int)&stack0xffffffe8 + (uint)bVar2 * 0xfffffffe * 4) =
             *(uint *)(&stack0xffffff94 + (uint)bVar2 * -8);
        *(uint *)(&stack0xffffffec + (uint)bVar2 * -8 + (uint)bVar2 * -8) =
             *(uint *)(&stack0xffffff98 + (uint)bVar2 * -8 + (uint)bVar2 * -8);
        iVar5 = (**(code **)(iVar5 + 0x2c))(this_ptr,puVar4);
        return iVar5;
      }
    }
  }
  else if (0x1e < (uint)bone_index) {
    if ((uint)bone_index < 0x20) {
      if (*(int *)&this_ptr->field_0x2570 != 0) {
        iVar5 = 0;
        pcVar3 = "Bip01 L Foot";
        pCVar1 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890
                           ((CDeformableModelInstance *)this_ptr_00);
        bone_index = core_skeleton_cpp_FUN_00540e80(pCVar1,pcVar3,iVar5);
        if (-1 < bone_index) {
          iVar5 = *(int *)&this_ptr->field_0x2b0;
          core_skeleton_cpp_FUN_005469a0(this_ptr_00,bone_index,0x3fd9999a);
          puVar4 = &stack0xffffffa8;
          local_58 = local_40;
          *(uint *)((int)&stack0xffffffac + (uint)bVar2 * 0xfffffffe * 4) =
               *(uint *)(&stack0xffffffc4 + (uint)bVar2 * -8);
          *(uint *)(&stack0xffffffb0 + (uint)bVar2 * -8 + (uint)bVar2 * -8) =
               *(uint *)(&stack0xffffffc8 + (uint)bVar2 * -8 + (uint)bVar2 * -8);
          iVar5 = (**(code **)(iVar5 + 0x2c))(this_ptr,puVar4);
          return iVar5;
        }
      }
    }
    else {
      if (bone_index != 0x25) {
        return bone_index;
      }
      if (*(int *)&this_ptr->field_0x2570 != 0) {
        iVar5 = 0;
        pcVar3 = "Bip01 R Foot";
        pCVar1 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890
                           ((CDeformableModelInstance *)this_ptr_00);
        bone_index = core_skeleton_cpp_FUN_00540e80(pCVar1,pcVar3,iVar5);
        if (-1 < bone_index) {
          iVar5 = *(int *)&this_ptr->field_0x2b0;
          core_skeleton_cpp_FUN_005469a0(this_ptr_00,bone_index,0x3fd9999a);
          puVar4 = &stack0xffffffd8;
          local_28 = local_64;
          *(uint *)((int)&stack0xffffffdc + (uint)bVar2 * 0xfffffffe * 4) =
               *(uint *)(&stack0xffffffa0 + (uint)bVar2 * -8);
          *(uint *)(&stack0xffffffe0 + (uint)bVar2 * -8 + (uint)bVar2 * -8) =
               *(uint *)(&stack0xffffffa4 + (uint)bVar2 * -8 + (uint)bVar2 * -8);
          iVar5 = (**(code **)(iVar5 + 0x2c))(this_ptr,puVar4);
          return iVar5;
        }
      }
    }
  }
  return bone_index;
}

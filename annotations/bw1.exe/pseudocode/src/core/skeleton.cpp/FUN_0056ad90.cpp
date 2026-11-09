// Name: core_skeleton.cpp_FUN_0056ad90
// Address: 0056ad90
// Address Range: [[0056ad90, 0056ae6c]]
// Convention: __cdecl
// Signature: void __cdecl core_skeleton_cpp_FUN_0056ad90(CDeformableModelInstance *this_ptr,SPose *bone_transform)

#include "nocturne.h"

void __cdecl core_skeleton_cpp_FUN_0056ad90(CDeformableModelInstance *this_ptr,SPose *bone_transform)

{
  int iVar1;
  CSkeleton *pCVar2;
  CDeformableModelInstance *pCVar3;
  int iVar4;
  int iVar5;
  CDeformableModelInstance *pCVar6;
  SPose *pSVar7;
  uint *puVar8;
  uint *puVar9;
  byte bVar10;
  SPose *local_14;
  SPose *local_10;
  CDeformableModelInstance *local_c;
  
  bVar10 = 0;
  if ((SPose *)&this_ptr->field_0x6a4 != bone_transform) {
    *(uint *)&this_ptr->field_0x6a4 = *(uint *)bone_transform;
    *(uint *)&this_ptr->field_0x6a8 = *(uint *)(bone_transform + 4);
    *(uint *)&this_ptr->field_0x6ac = *(uint *)(bone_transform + 8);
  }
  pCVar2 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30(this_ptr);
  iVar1 = *(int *)&pCVar2->field_0x1de78;
  iVar5 = 0;
  if (0 < iVar1) {
    local_10 = bone_transform;
    local_14 = bone_transform;
    local_c = this_ptr;
    pCVar3 = this_ptr;
    pCVar6 = this_ptr;
    do {
      puVar8 = (uint *)((int)pCVar6 + (uint)bVar10 * -8 + 0x6b4);
      pSVar7 = local_14 + (uint)bVar10 * -8 + 0x10;
      *(uint *)&pCVar6->field_0x6b0 = *(uint *)(local_14 + 0xc);
      puVar9 = puVar8 + (uint)bVar10 * -2 + 1;
      *puVar8 = *(uint *)pSVar7;
      *puVar9 = *(uint *)(pSVar7 + (uint)bVar10 * -8 + 4);
      puVar9[(uint)bVar10 * -2 + 1] =
           *(uint *)(pSVar7 + (uint)bVar10 * -8 + 4 + (uint)bVar10 * -8 + 4);
      *(uint *)&local_c->field_0xcf0 = *(uint *)(bone_transform + 0x64c);
      bone_transform = bone_transform + 4;
      pCVar6 = (CDeformableModelInstance *)&pCVar6->field_0x10;
      pSVar7 = local_10 + 0x7dc;
      puVar8 = (uint *)&pCVar3->field_0xe80;
      for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar8 = *(uint *)pSVar7;
        pSVar7 = pSVar7 + (uint)bVar10 * -8 + 4;
        puVar8 = puVar8 + (uint)bVar10 * -2 + 1;
      }
      iVar5 = iVar5 + 1;
      local_10 = local_10 + 0x30;
      local_c = (CDeformableModelInstance *)&local_c->field_0x4;
      local_14 = local_14 + 0x10;
      pCVar3 = (CDeformableModelInstance *)&pCVar3->field_0x30;
    } while (iVar5 < iVar1);
  }
  *(uint *)&this_ptr->field_0x2320 = 0xffffffff;
  return;
}

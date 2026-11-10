// Name: core_skeleton.cpp_CDeformableModelInstance_initializeFromModel_FUN_005474b0
// Address: 005474b0
// Address Range: [[005474b0, 0054761a]]
// Convention: __cdecl
// Signature: void __cdecl core_skeleton_cpp_CDeformableModelInstance_initializeFromModel_FUN_005474b0(CDeformableModelInstance *this_ptr,CDeformableModel *model_ptr)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void __cdecl core_skeleton_cpp_CDeformableModelInstance_initializeFromModel_FUN_005474b0(CDeformableModelInstance *this_ptr,CDeformableModel *model_ptr)

{
  CSkeleton *pCVar1;
  CVector3f *pCVar2;
  CVector3f *pCVar3;
  int iVar4;
  byte *puVar5;
  byte bVar6;
  int aiStackY_1018 [1016];
  float local_2c [3];
  int local_20;
  uint local_1c;
  int local_18;
  CDeformableModelInstance *local_14;
  
  bVar6 = 0;
  *(CDeformableModel **)&this_ptr->field_0x22b0 = model_ptr;
  pCVar1 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890(this_ptr);
  core_motion_cpp_FUN_005037d0(this_ptr,pCVar1);
  local_18 = pCVar1->bone_count;
  iVar4 = *(int *)&this_ptr->field_0x22b0;
  local_2c[0] = *(float *)(iVar4 + 0x1748) * *(float *)&this_ptr->field_0x54;
  local_2c[1] = *(float *)(iVar4 + 0x174c) * *(float *)&this_ptr->field_0x54;
  local_2c[2] = *(float *)(iVar4 + 0x1744) * *(float *)&this_ptr->field_0x54;
  local_2c[(uint)bVar6 * 0xfffffffe + 3] = local_2c[(uint)bVar6 * -2];
  local_2c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4] =
       local_2c[(uint)bVar6 * 0xfffffffe + (uint)bVar6 * 0xfffffffe + 1];
  if ((float *)&this_ptr->field_0x508 != local_2c + 2) {
    *(float *)&this_ptr->field_0x508 = local_2c[2];
    *(int *)&this_ptr->field_0x50c = local_20;
    *(uint *)&this_ptr->field_0x510 = local_1c;
  }
  iVar4 = 0;
  if (0 < local_18) {
    puVar5 = &this_ptr->field_0x54;
    local_14 = this_ptr;
    pCVar3 = (CVector3f *)&this_ptr->field_0x58;
    do {
      pCVar2 = core_skeleton_cpp_CDeformableModel_getVertexPoolPtr_FUN_00541620
                         (*(CDeformableModel **)&this_ptr->field_0x22b0,iVar4);
      if (pCVar3 != pCVar2) {
        pCVar3->x = pCVar2->x;
        pCVar3->y = pCVar2->y;
        pCVar3->z = pCVar2->z;
      }
      *(uint *)&local_14->field_0x514 = *(uint *)&this_ptr->field_0x54;
      if (*(int *)(pCVar1->bone_list + 0x20) < 0) {
        pCVar3->x = *(float *)puVar5 * pCVar3->x;
        pCVar3->y = *(float *)puVar5 * pCVar3->y;
        pCVar3->z = *(float *)puVar5 * pCVar3->z;
      }
      pCVar1 = (CSkeleton *)&pCVar1->field_0x24;
      pCVar3 = pCVar3 + 1;
      local_14 = (CDeformableModelInstance *)&local_14->field_0x4;
      iVar4 = iVar4 + 1;
    } while (iVar4 < local_18);
  }
  core_skeleton_cpp_CDeformableModelInstance_allocPointList_FUN_00544db0(this_ptr);
  core_skeleton_cpp_CDeformableModelInstance_computeBoundingBoxFromVertices_FUN_00547620(this_ptr);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_00544ee0(this_ptr);
  return;
}

// Name: core_skeleton.cpp_CDeformableModelInstance_initializeFromModel_FUN_00569b50
// Address: 00569b50
// Address Range: [[00569b50, 00569cba]]
// Convention: __cdecl
// Signature: void __cdecl core_skeleton_cpp_CDeformableModelInstance_initializeFromModel_FUN_00569b50(CDeformableModelInstance *this_ptr,CDeformableModel *model_ptr)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void __cdecl core_skeleton_cpp_CDeformableModelInstance_initializeFromModel_FUN_00569b50(CDeformableModelInstance *this_ptr,CDeformableModel *model_ptr)

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
  *(CDeformableModel **)&this_ptr->field_0x23a0 = model_ptr;
  pCVar1 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30(this_ptr);
  core_motion_cpp_FUN_00524970(this_ptr,pCVar1);
  local_18 = *(int *)&pCVar1->field_0x1de78;
  iVar4 = *(int *)&this_ptr->field_0x23a0;
  local_2c[0] = *(float *)(iVar4 + 0x2288) * *(float *)&this_ptr->field_0x54;
  local_2c[1] = *(float *)(iVar4 + 0x228c) * *(float *)&this_ptr->field_0x54;
  local_2c[2] = *(float *)(iVar4 + 0x2284) * *(float *)&this_ptr->field_0x54;
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
      pCVar2 = core_skeleton_cpp_FUN_00563c90(*(CDeformableModel **)&this_ptr->field_0x23a0,iVar4);
      if (pCVar3 != pCVar2) {
        *(float *)pCVar3 = *(float *)pCVar2;
        *(uint *)&pCVar3->field_0x4 = *(uint *)&pCVar2->field_0x4;
        *(uint *)&pCVar3->field_0x8 = *(uint *)&pCVar2->field_0x8;
      }
      *(uint *)&local_14->field_0x514 = *(uint *)&this_ptr->field_0x54;
      if (*(int *)&pCVar1->field_0x1de9c < 0) {
        *(float *)pCVar3 = *(float *)puVar5 * *(float *)pCVar3;
        *(float *)&pCVar3->field_0x4 = *(float *)puVar5 * *(float *)&pCVar3->field_0x4;
        *(float *)&pCVar3->field_0x8 = *(float *)puVar5 * *(float *)&pCVar3->field_0x8;
      }
      pCVar1 = (CSkeleton *)&pCVar1->field_0x24;
      pCVar3 = pCVar3 + 1;
      local_14 = (CDeformableModelInstance *)&local_14->field_0x4;
      iVar4 = iVar4 + 1;
    } while (iVar4 < local_18);
  }
  core_skeleton_cpp_CDeformableModelInstance_allocPointList_FUN_00567450(this_ptr);
  core_skeleton_cpp_CDeformableModelInstance_computeBoundingBoxFromVertices_FUN_00569cc0(this_ptr);
  core_skeleton_cpp_FUN_00567580(this_ptr);
  return;
}

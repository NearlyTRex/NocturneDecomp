// Name: core_skeleton.cpp_CDeformableModelInstance_resetToRestPose_FUN_00544e60
// Address: 00544e60
// Address Range: [[00544e60, 00544edd]]
// Convention: __cdecl
// Signature: void __cdecl core_skeleton_cpp_CDeformableModelInstance_resetToRestPose_FUN_00544e60(CDeformableModelInstance *this_ptr)

#include "nocturne.h"

void __cdecl core_skeleton_cpp_CDeformableModelInstance_resetToRestPose_FUN_00544e60(CDeformableModelInstance *this_ptr)

{
  CSkeleton *pCVar1;
  CDeformableModelInstance *pCVar2;
  int iVar3;
  byte *puVar4;
  
  iVar3 = 0;
  pCVar1 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890(this_ptr);
  if (0 < pCVar1->bone_count) {
    puVar4 = &this_ptr->field_0x6b0;
    pCVar2 = this_ptr;
    do {
      core_xform_cpp_setIdentityQuaternion_FUN_00593c40(puVar4);
      iVar3 = iVar3 + 1;
      *(uint *)&pCVar2->field_0xcf0 = *(uint *)&pCVar2->field_0x514;
      puVar4 = puVar4 + 0x10;
      pCVar2 = (CDeformableModelInstance *)&pCVar2->field_0x4;
    } while (iVar3 < pCVar1->bone_count);
  }
  *(uint *)&this_ptr->field_0x6ac = 0;
  *(uint *)&this_ptr->field_0x6a8 = *(uint *)&this_ptr->field_0x6ac;
  *(uint *)&this_ptr->field_0x6a4 = *(uint *)&this_ptr->field_0x6a8;
  return;
}

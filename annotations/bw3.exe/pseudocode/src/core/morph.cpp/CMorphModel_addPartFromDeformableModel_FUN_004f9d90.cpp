// Name: core_morph.cpp_CMorphModel_addPartFromDeformableModel_FUN_004f9d90
// Address: 004f9d90
// Address Range: [[004f9d90, 004f9deb]]
// Convention: __cdecl
// Signature: void __cdecl core_morph_cpp_CMorphModel_addPartFromDeformableModel_FUN_004f9d90(CMorphModel *this_ptr,CDeformableModelInstance *model_ptr)

#include "nocturne.h"

void __cdecl core_morph_cpp_CMorphModel_addPartFromDeformableModel_FUN_004f9d90(CMorphModel *this_ptr,CDeformableModelInstance *model_ptr)

{
  int iVar1;
  CDeformableModel *pCVar2;
  
  core_skeleton_cpp_FUN_0054e420(model_ptr,0);
  pCVar2 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_0054ea40(model_ptr);
  iVar1 = *(int *)&model_ptr->field_0x2320;
  core_morph_cpp_FUN_004f9c40
            (this_ptr,*(int *)(&pCVar2->field_0x2c + iVar1 * 4),
             *(CVector3i **)&model_ptr->field_0x2324,*(int *)(&pCVar2->field_0x54 + iVar1 * 4),
             *(SInputFace **)(&pCVar2->field_0x7c + iVar1 * 4),(STextureSet *)&pCVar2->field_0xc0,
             *(int **)(&pCVar2->field_0x90 + iVar1 * 4));
  return;
}

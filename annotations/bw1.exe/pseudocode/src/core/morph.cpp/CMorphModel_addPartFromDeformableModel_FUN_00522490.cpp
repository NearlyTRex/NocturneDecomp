// Name: core_morph.cpp_CMorphModel_addPartFromDeformableModel_FUN_00522490
// Address: 00522490
// Address Range: [[00522490, 005224eb]]
// Convention: __cdecl
// Signature: void __cdecl core_morph_cpp_CMorphModel_addPartFromDeformableModel_FUN_00522490(CMorphModel *this_ptr,CDeformableModelInstance *model_ptr)

#include "nocturne.h"

void __cdecl core_morph_cpp_CMorphModel_addPartFromDeformableModel_FUN_00522490(CMorphModel *this_ptr,CDeformableModelInstance *model_ptr)

{
  int iVar1;
  CDeformableModel *pCVar2;
  
  core_skeleton_cpp_FUN_00569890(model_ptr,0);
  pCVar2 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_00569eb0(model_ptr);
  iVar1 = *(int *)&model_ptr->field_0x2320;
  core_morph_cpp_FUN_00522340
            (this_ptr,*(int *)(&pCVar2->field_0x2c + iVar1 * 4),
             *(CVector3i **)&model_ptr->field_0x2324,*(int *)(&pCVar2->field_0x54 + iVar1 * 4),
             *(SInputFace **)(&pCVar2->field_0x7c + iVar1 * 4),(STextureSet *)&pCVar2->field_0xc0,
             *(int **)(&pCVar2->field_0x90 + iVar1 * 4));
  return;
}

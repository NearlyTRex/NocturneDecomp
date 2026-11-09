// Name: core_morph.cpp_CMorphModel_addPartFromDeformableModel_FUN_005b6350
// Address: 005b6350
// Address Range: [[005b6350, 005b63ab]]
// Convention: __cdecl
// Signature: void __cdecl core_morph_cpp_CMorphModel_addPartFromDeformableModel_FUN_005b6350(CMorphModel *this_ptr,CDeformableModelInstance *model_ptr)

#include "nocturne.h"

void __cdecl core_morph_cpp_CMorphModel_addPartFromDeformableModel_FUN_005b6350(CMorphModel *this_ptr,CDeformableModelInstance *model_ptr)

{
  int iVar1;
  CDeformableModel *pCVar2;
  
  core_skeleton_cpp_CDeformableModelInstance_skinVerticesForLOD_FUN_005471f0(model_ptr,0);
  pCVar2 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_00547810(model_ptr);
  iVar1 = *(int *)&model_ptr->field_0x2230;
  core_morph_cpp_CMorphModel_addPartFromVertexBuffer_FUN_005b6200
            (this_ptr,*(int *)(&pCVar2->field_0x2c + iVar1 * 4),
             *(CVector3i **)&model_ptr->field_0x2234,*(int *)(&pCVar2->field_0x54 + iVar1 * 4),
             *(SInputFace **)(&pCVar2->field_0x7c + iVar1 * 4),(STextureSet *)&pCVar2->field_0xc0,
             *(int **)(&pCVar2->field_0x90 + iVar1 * 4));
  return;
}

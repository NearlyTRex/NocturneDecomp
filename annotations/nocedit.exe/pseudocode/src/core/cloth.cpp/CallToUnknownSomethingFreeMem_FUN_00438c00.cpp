// Name: core_cloth.cpp_CallToUnknownSomethingFreeMem_FUN_00438c00
// Address: 00438c00
// Address Range: [[00438c00, 00438c41]]
// Convention: __cdecl
// Signature: void __cdecl core_cloth_cpp_CallToUnknownSomethingFreeMem_FUN_00438c00(void)

#include "nocturne.h"

void __cdecl core_cloth_cpp_CallToUnknownSomethingFreeMem_FUN_00438c00(void)

{
  SClothBone *pSVar1;
  SClothVertex *pSVar2;
  int in_stack_00000004;
  
  core_cloth_cpp_UnknownSomethingAndFreeMem_FUN_00438cb0();
  pSVar1 = core_cloth_cpp_freeClothBones_FUN_0043e4a0((SClothBone *)(in_stack_00000004 + 0x3ce90));
  pSVar2 = core_cloth_cpp_freeClothVertices_FUN_0043e480
                     ((SClothVertex *)(pSVar1[-0x52a].unk + 0x80));
  core_dmodel_cpp_CKeyFramedModel_dtor_FUN_00476d90((CKeyFramedModel *)(pSVar2[-0x4f].unk1 + 0xcc));
  return;
}

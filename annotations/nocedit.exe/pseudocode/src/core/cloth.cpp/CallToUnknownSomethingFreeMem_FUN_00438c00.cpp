// Name: core_cloth.cpp_CallToUnknownSomethingFreeMem_FUN_00438c00
// Address: 00438c00
// Address Range: [[00438c00, 00438c41]]
// Convention: unknown
// Signature: undefined core_cloth.cpp_CallToUnknownSomethingFreeMem_FUN_00438c00()

#include "nocturne.h"

void core_cloth_cpp_CallToUnknownSomethingFreeMem_FUN_00438c00(void)

{
  int extraout_EAX;
  int iVar1;
  int in_stack_00000004;
  
  core_cloth_cpp_UnknownSomethingAndFreeMem_FUN_00438cb0();
  core_cloth_cpp_freeClothBones_FUN_0043e4a0((SClothBone **)(in_stack_00000004 + 0x3ce90));
  iVar1 = core_cloth_cpp_freeClothVertices_FUN_0043e480((SClothVertex **)(extraout_EAX + -0x377b8));
  core_dmodel_cpp_CKeyFramedModel_dtor_FUN_00476d90((CKeyFramedModel *)(iVar1 + -0x56d8));
  return;
}

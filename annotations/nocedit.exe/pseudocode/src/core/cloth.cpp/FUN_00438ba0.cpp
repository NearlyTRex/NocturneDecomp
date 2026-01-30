// Name: core_cloth.cpp_FUN_00438ba0
// Address: 00438ba0
// Address Range: [[00438ba0, 00438bf7]]
// Convention: __cdecl
// Signature: int __cdecl core_cloth_cpp_FUN_00438ba0(void)

#include "nocturne.h"

int __cdecl core_cloth_cpp_FUN_00438ba0(void)

{
  CKeyFramedModel *pCVar1;
  void *pvVar2;
  CKeyFramedModel *in_stack_00000004;
  
  pCVar1 = core_dmodel_cpp_CKeyFramedModel_ctor_FUN_00476cf0(in_stack_00000004);
  pvVar2 = __arrinit(pCVar1 + 1,800,&g_SClothVertexTypeInfo);
  pvVar2 = __arrinit
                     ((void *)((int)pvVar2 + 0x377b8),0x32,&g_SClothBoneTypeInfo);
  *(uint *)((int)pvVar2 + 0x2fac) = 0;
  *(uint *)((int)pvVar2 + -4) = 0;
  *(uint *)((int)pvVar2 + -0xc) = 0;
  return (int)pvVar2 + -0x3ce90;
}

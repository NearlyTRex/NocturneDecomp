// Name: core_cloth.cpp_CCloth_ctor_FUN_00438ba0
// Address: 00438ba0
// Address Range: [[00438ba0, 00438bf7]]
// Convention: __cdecl
// Signature: CCloth * __cdecl core_cloth_cpp_CCloth_ctor_FUN_00438ba0(CCloth *this_ptr)

#include "nocturne.h"

CCloth * __cdecl core_cloth_cpp_CCloth_ctor_FUN_00438ba0(CCloth *this_ptr)

{
  CCloth *pCVar1;
  void *pvVar1;
  
  pCVar1 = (CCloth *)core_dmodel_cpp_CKeyFramedModel_ctor_FUN_00476cf0(&this_ptr->model);
  pvVar1 = __arrinit(pCVar1->vertices,800,&g_SClothVertexTypeInfo);
  pvVar1 = __arrinit
                     ((void *)((int)pvVar1 + 0x377b8),0x32,&g_SClothBoneTypeInfo);
  *(uint *)((int)pvVar1 + 0x2fac) = 0;
  *(uint *)((int)pvVar1 + -4) = 0;
  *(uint *)((int)pvVar1 + -0xc) = 0;
  return (CCloth *)((int)pvVar1 + -0x3ce90);
}

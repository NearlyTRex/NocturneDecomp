// Name: core_cloth.cpp_CCloth_ctor_FUN_005adda0
// Address: 005adda0
// Address Range: [[005adda0, 005addf7]]
// Convention: __cdecl
// Signature: CCloth * __cdecl core_cloth_cpp_CCloth_ctor_FUN_005adda0(CCloth *this_ptr)

#include "nocturne.h"

CCloth * __cdecl core_cloth_cpp_CCloth_ctor_FUN_005adda0(CCloth *this_ptr)

{
  CKeyFramedModel *pCVar1;
  void *pvVar2;
  
  pCVar1 = core_dmodel_cpp_CKeyFramedModel_ctor_FUN_0044dc10(&this_ptr->model);
  pvVar2 = __arrinit(pCVar1 + 1,800,&g_SClothVertexTypeInfo);
  pvVar2 = __arrinit
                     ((void *)((int)pvVar2 + 0x377b8),0x32,&g_SClothBoneTypeInfo);
  *(uint *)((int)pvVar2 + 0x2fac) = 0;
  *(uint *)((int)pvVar2 + -4) = 0;
  *(uint *)((int)pvVar2 + -0xc) = 0;
  return (CCloth *)((int)pvVar2 + -0x37b50);
}

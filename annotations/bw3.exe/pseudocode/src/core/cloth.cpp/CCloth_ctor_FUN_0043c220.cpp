// Name: core_cloth.cpp_CCloth_ctor_FUN_0043c220
// Address: 0043c220
// Address Range: [[0043c220, 0043c277]]
// Convention: __cdecl
// Signature: CCloth * __cdecl core_cloth_cpp_CCloth_ctor_FUN_0043c220(CCloth *this_ptr)

#include "nocturne.h"

CCloth * __cdecl core_cloth_cpp_CCloth_ctor_FUN_0043c220(CCloth *this_ptr)

{
  CKeyFramedModel *pCVar1;
  void *pvVar2;
  
  pCVar1 = core_dmodel_cpp_CKeyFramedModel_ctor_FUN_00460490(&this_ptr->model);
  pvVar2 = __arrinit(pCVar1 + 1,800,&g_SClothVertexTypeInfo);
  pvVar2 = __arrinit
                     ((void *)((int)pvVar2 + 0x377b8),0x32,&g_SClothBoneTypeInfo);
  *(uint *)((int)pvVar2 + 0x2fac) = 0;
  *(uint *)((int)pvVar2 + -4) = 0;
  *(uint *)((int)pvVar2 + -8) = 0;
  return (CCloth *)((int)pvVar2 + -0x37b50);
}

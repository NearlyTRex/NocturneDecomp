// Name: core_cloth.cpp_CCloth_ctor_FUN_0043e5c0
// Address: 0043e5c0
// Address Range: [[0043e5c0, 0043e617]]
// Convention: __cdecl
// Signature: CCloth * __cdecl core_cloth_cpp_CCloth_ctor_FUN_0043e5c0(CCloth *this_ptr)

#include "nocturne.h"

CCloth * __cdecl core_cloth_cpp_CCloth_ctor_FUN_0043e5c0(CCloth *this_ptr)

{
  CKeyFramedModel *pCVar1;
  int iVar2;
  
  pCVar1 = core_dmodel_cpp_CKeyFramedModel_ctor_FUN_004667e0((CKeyFramedModel *)this_ptr);
  iVar2 = __arrinit(pCVar1 + 1,800,&g_SClothVertexTypeInfo);
  iVar2 = __arrinit(iVar2 + 0x377b8,0x32,&g_SClothBoneTypeInfo);
  *(uint *)(iVar2 + 0x2fac) = 0;
  *(uint *)(iVar2 + -4) = 0;
  *(uint *)(iVar2 + -0xc) = 0;
  return (CCloth *)(iVar2 + -0x37b50);
}

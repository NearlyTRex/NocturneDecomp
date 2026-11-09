// Name: core_necklace.cpp_FUN_005adda0
// Address: 005adda0
// Address Range: [[005adda0, 005addf7]]
// Convention: unknown
// Signature: int core_necklace_cpp_FUN_005adda0(CKeyFramedModel *param_1)

#include "nocturne.h"

int core_necklace_cpp_FUN_005adda0(CKeyFramedModel *param_1)

{
  CKeyFramedModel *pCVar1;
  int iVar2;
  
  pCVar1 = core_dmodel_cpp_CKeyFramedModel_ctor_FUN_0044dc10(param_1);
  iVar2 = __arrinit(pCVar1 + 1,800,&g_SClothVertexTypeInfo);
  iVar2 = __arrinit(iVar2 + 0x377b8,0x32,&g_SClothBoneTypeInfo);
  *(uint *)(iVar2 + 0x2fac) = 0;
  *(uint *)(iVar2 + -4) = 0;
  *(uint *)(iVar2 + -0xc) = 0;
  return iVar2 + -0x37b50;
}

// Name: core_cloth.cpp_CCloth_dtor_FUN_00438c00
// Address: 00438c00
// Address Range: [[00438c00, 00438c41]]
// Convention: __cdecl
// Signature: CCloth * __cdecl core_cloth_cpp_CCloth_dtor_FUN_00438c00(CCloth *this_ptr,uint flags)

#include "nocturne.h"

CCloth * __cdecl core_cloth_cpp_CCloth_dtor_FUN_00438c00(CCloth *this_ptr,uint flags)

{
  SClothBone *pSVar1;
  SClothVertex *pSVar2;
  CCloth *pCVar3;
  
  core_cloth_cpp_CCloth_free_FUN_00438cb0(this_ptr);
  pSVar1 = core_cloth_cpp_SClothBone_arrdtor_FUN_0043e4a0(this_ptr->collide_bones,0);
  pSVar2 = core_cloth_cpp_SClothVertex_arrdtor_FUN_0043e480
                     ((SClothVertex *)&pSVar1[-0x52a].local_matrix.m[0].z,0);
  pCVar3 = (CCloth *)
           core_dmodel_cpp_CKeyFramedModel_dtor_FUN_00476d90
                     ((CKeyFramedModel *)&pSVar2[-0x4f].prev_position,1);
  return pCVar3;
}

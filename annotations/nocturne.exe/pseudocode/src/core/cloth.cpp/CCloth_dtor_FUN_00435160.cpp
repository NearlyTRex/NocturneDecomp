// Name: core_cloth.cpp_CCloth_dtor_FUN_00435160
// Address: 00435160
// Address Range: [[00435160, 004351a1]]
// Convention: __cdecl
// Signature: CCloth * __cdecl core_cloth_cpp_CCloth_dtor_FUN_00435160(CCloth *this_ptr,uint flags)

#include "nocturne.h"

CCloth * __cdecl core_cloth_cpp_CCloth_dtor_FUN_00435160(CCloth *this_ptr,uint flags)

{
  SClothBone *pSVar1;
  SClothVertex *pSVar2;
  CCloth *pCVar3;
  
  core_cloth_cpp_CCloth_FUN_00435210(this_ptr);
  pSVar1 = core_cloth_cpp_SClothBone_arrdtor50_FUN_00438a20(this_ptr->collide_bones,0);
  pSVar2 = core_cloth_cpp_SClothVertex_arrdtor800_FUN_00438a00
                     ((SClothVertex *)&pSVar1[-0x52a].local_matrix.m[0].z,0);
  pCVar3 = (CCloth *)
           core_dmodel_cpp_CKeyFramedModel_dtor_FUN_00452630
                     ((CKeyFramedModel *)&pSVar2[-4].collide_bone_index,1);
  return pCVar3;
}

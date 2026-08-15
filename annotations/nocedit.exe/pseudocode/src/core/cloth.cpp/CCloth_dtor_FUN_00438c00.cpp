// Name: core_cloth.cpp_CCloth_dtor_FUN_00438c00
// Address: 00438c00
// Address Range: [[00438c00, 00438c41]]
// Convention: __cdecl
// Signature: CCloth * __cdecl core_cloth_cpp_CCloth_dtor_FUN_00438c00(CCloth *this_ptr,uint flags)

#include "nocturne.h"

CCloth * __cdecl core_cloth_cpp_CCloth_dtor_FUN_00438c00(CCloth *this_ptr,uint flags)

{
  CCloth_ptr_249488 pSVar1;
  CCloth_ptr_22232 pSVar2;
  CCloth *pCVar1;
  
  core_cloth_cpp_CCloth_free_FUN_00438cb0(this_ptr);
  pSVar1 = (CCloth_ptr_249488)
           core_cloth_cpp_SClothBone_arrdtor50_FUN_0043e4a0(this_ptr->collide_bones,0);
  pSVar2 = (CCloth_ptr_22232)
           core_cloth_cpp_SClothVertex_arrdtor800_FUN_0043e480(ADJ(pSVar1)->vertices,0);
  pCVar1 = (CCloth *)core_dmodel_cpp_CKeyFramedModel_dtor_FUN_00476d90(&ADJ(pSVar2)->model,1);
  return pCVar1;
}

// Name: core_skeleton.cpp_CDeformableModel_dtor_FUN_0059a270
// Address: 0059a270
// Address Range: [[0059a270, 0059a2a5]]
// Convention: __cdecl
// Signature: CDeformableModel * __cdecl core_skeleton_cpp_CDeformableModel_dtor_FUN_0059a270(CDeformableModel *this_ptr,uint flags)

#include "nocturne.h"

CDeformableModel * __cdecl core_skeleton_cpp_CDeformableModel_dtor_FUN_0059a270(CDeformableModel *this_ptr,uint flags)

{
  CDeformableModel_ptr_33100 pCVar1;
  CDeformableModel_ptr_31888 pCVar2;
  
  core_skeleton_cpp_CDeformableModel_free_FUN_0059a2b0(this_ptr);
  pCVar1 = (CDeformableModel_ptr_33100)
           core_skeleton_cpp_CBoundingBox3D_arrdtor_FUN_005a2030
                     ((CBoundingBox3D *)&this_ptr->bbox_pool[0].max,0);
  pCVar2 = (CDeformableModel_ptr_31888)
           core_curtain_cpp_CVector3f_arrdtor_FUN_0044baf0(ADJ(pCVar1)->vertex_pool,0);
  return ADJ(pCVar2);
}

// Name: core_skeleton.cpp_CDeformableModel_dtor_FUN_0059a270
// Address: 0059a270
// Address Range: [[0059a270, 0059a2a5]]
// Convention: __cdecl
// Signature: CDeformableModel * __cdecl core_skeleton_cpp_CDeformableModel_dtor_FUN_0059a270(CDeformableModel *this_ptr,uint flags)

#include "nocturne.h"

CDeformableModel * __cdecl core_skeleton_cpp_CDeformableModel_dtor_FUN_0059a270(CDeformableModel *this_ptr,uint flags)

{
  CBoundingBox3D *pCVar1;
  CVector3f *pCVar2;
  
  core_skeleton_cpp_CDeformableModel_free_FUN_0059a2b0(this_ptr);
  pCVar1 = core_skeleton_cpp_CBoundingBox3D_arrdtor_FUN_005a2030
                     ((CBoundingBox3D *)&this_ptr->bbox_pool[0].max,0);
  pCVar2 = core_curtain_cpp_CVector3f_arrdtor_FUN_0044baf0(&pCVar1[-0x33].max,0);
  return (CDeformableModel *)&pCVar2[-0xa62].z;
}

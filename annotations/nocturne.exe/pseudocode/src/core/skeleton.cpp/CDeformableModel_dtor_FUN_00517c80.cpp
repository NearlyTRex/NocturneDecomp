// Name: core_skeleton.cpp_CDeformableModel_dtor_FUN_00517c80
// Address: 00517c80
// Address Range: [[00517c80, 00517cb5]]
// Convention: __cdecl
// Signature: CDeformableModel * __cdecl core_skeleton_cpp_CDeformableModel_dtor_FUN_00517c80(CDeformableModel *this_ptr,uint flags)

#include "nocturne.h"

CDeformableModel * __cdecl core_skeleton_cpp_CDeformableModel_dtor_FUN_00517c80(CDeformableModel *this_ptr,uint flags)

{
  CBoundingBox3D *pCVar1;
  CVector3f *pCVar2;
  
  core_skeleton_cpp_CDeformableModel_free_FUN_00517cc0(this_ptr);
  pCVar1 = core_skeleton_cpp_CBoundingBox3D_arrdtor100_FUN_0051f900
                     ((CBoundingBox3D *)&this_ptr->bbox_pool[0].max,0);
  pCVar2 = core_curtain_cpp_CVector3f_arrdtor100_FUN_0043f9a0(&pCVar1[-0x33].max,0);
  return (CDeformableModel *)&pCVar2[-0x1f2].z;
}

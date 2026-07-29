// Name: core_skeleton.cpp_CDeformableModel_dtor_FUN_00517c80
// Address: 00517c80
// Address Range: [[00517c80, 00517cb5]]
// Convention: unknown
// Signature: float * core_skeleton_cpp_CDeformableModel_dtor_FUN_00517c80(CDeformableModel *param_1)

#include "nocturne.h"

float * core_skeleton_cpp_CDeformableModel_dtor_FUN_00517c80(CDeformableModel *param_1)

{
  CBoundingBox3D *pCVar1;
  CVector3f *pCVar2;
  
  core_skeleton_cpp_CDeformableModel_free_FUN_00517cc0(param_1);
  pCVar1 = core_skeleton_cpp_FUN_0051f900
                     ((CBoundingBox3D *)
                      &param_1->texture_sets[1].textures[0x11].textures[0].base.count,0);
  pCVar2 = core_curtain_cpp_CVector3f_arrdtor_FUN_0043f9a0(&pCVar1[-0x33].max,0);
  return &pCVar2[-0x1f2].z;
}

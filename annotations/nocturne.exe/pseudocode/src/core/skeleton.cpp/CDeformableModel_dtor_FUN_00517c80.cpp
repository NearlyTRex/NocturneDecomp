// Name: core_skeleton.cpp_CDeformableModel_dtor_FUN_00517c80
// Address: 00517c80
// Address Range: [[00517c80, 00517cb5]]
// Convention: unknown
// Signature: int core_skeleton_cpp_CDeformableModel_dtor_FUN_00517c80(int param_1)

#include "nocturne.h"

int core_skeleton_cpp_CDeformableModel_dtor_FUN_00517c80(int param_1)

{
  int iVar1;
  
  core_skeleton_cpp_CDeformableModel_free_FUN_00517cc0(param_1);
  iVar1 = FUN_0051f900(param_1 + 0x1c0c,0);
  iVar1 = core_curtain_cpp_CVector3f_arrdtor_FUN_0043f9a0(iVar1 + -0x4bc,0);
  return iVar1 + -0x1750;
}

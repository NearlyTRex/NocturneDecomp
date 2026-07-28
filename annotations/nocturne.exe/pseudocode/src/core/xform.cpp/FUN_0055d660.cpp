// Name: core_xform.cpp_FUN_0055d660
// Address: 0055d660
// Address Range: [[0055d660, 0055d6a8]]
// Convention: unknown
// Signature: void core_xform_cpp_FUN_0055d660(CVector3f *param_1)

#include "nocturne.h"

void core_xform_cpp_FUN_0055d660(CVector3f *param_1)

{
  uint *unaff_ESI;
  float *pfVar1;
  byte bVar2;
  float afStackY_1804 [1512];
  CMatrix3x4f CStack_58;
  uint uStack_28;
  float afStack_24 [3];
  CVector3f CStack_18;
  
  bVar2 = 0;
  CStack_18.x = 0.0;
  CStack_18.y = 0.0;
  CStack_18.z = 0.0;
  core_xform_cpp_buildMatrixFromEulerAndPosition_FUN_0055ae80(&CStack_58,&CStack_18,param_1);
  core_xform_cpp_matrixToQuaternion_FUN_0055cf10(&CStack_58);
  pfVar1 = (float *)(unaff_ESI + (uint)bVar2 * -2 + 1);
  *unaff_ESI = uStack_28;
  *pfVar1 = afStack_24[(uint)bVar2 * -2];
  pfVar1[(uint)bVar2 * -2 + 1] = afStack_24[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 1];
  (pfVar1 + (uint)bVar2 * -2 + 1)[(uint)bVar2 * -2 + 1] =
       (afStack_24 + (uint)bVar2 * -2 + (uint)bVar2 * -2 + 1)[(uint)bVar2 * -2 + 1];
  return;
}

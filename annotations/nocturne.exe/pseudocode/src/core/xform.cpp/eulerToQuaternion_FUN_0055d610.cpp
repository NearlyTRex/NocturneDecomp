// Name: core_xform.cpp_eulerToQuaternion_FUN_0055d610
// Address: 0055d610
// Address Range: [[0055d610, 0055d658]]
// Convention: unknown
// Signature: void core_xform_cpp_eulerToQuaternion_FUN_0055d610(CVector3f *param_1)

#include "nocturne.h"

void core_xform_cpp_eulerToQuaternion_FUN_0055d610(CVector3f *param_1)

{
  uint *unaff_ESI;
  float *pfVar1;
  byte bVar2;
  float afStackY_1804 [1512];
  CMatrix3x4f local_58;
  uint local_28;
  float afStack_24 [3];
  CVector3f local_18;
  
  bVar2 = 0;
  local_18.x = 0.0;
  local_18.y = 0.0;
  local_18.z = 0.0;
  core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_0055afb0(&local_58,&local_18,param_1);
  core_xform_cpp_matrixToQuaternion_FUN_0055cf10(&local_58);
  pfVar1 = (float *)(unaff_ESI + (uint)bVar2 * -2 + 1);
  *unaff_ESI = local_28;
  *pfVar1 = afStack_24[(uint)bVar2 * -2];
  pfVar1[(uint)bVar2 * -2 + 1] = afStack_24[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 1];
  (pfVar1 + (uint)bVar2 * -2 + 1)[(uint)bVar2 * -2 + 1] =
       (afStack_24 + (uint)bVar2 * -2 + (uint)bVar2 * -2 + 1)[(uint)bVar2 * -2 + 1];
  return;
}

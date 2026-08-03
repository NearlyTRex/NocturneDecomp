// Name: core_xform.cpp_FUN_0055d660
// Address: 0055d660
// Address Range: [[0055d660, 0055d6a8]]
// Convention: unknown
// Signature: void core_xform_cpp_FUN_0055d660(CVector3f *param_1)

#include "nocturne.h"

void core_xform_cpp_FUN_0055d660(CVector3f *param_1)

{
  float *unaff_ESI;
  float *pfVar1;
  float *pfVar2;
  byte bVar3;
  float afStackY_1804 [1512];
  CMatrix3x4f CStack_58;
  CQuaternion4f CStack_28;
  CVector3f CStack_18;
  
  bVar3 = 0;
  CStack_18.x = 0.0;
  CStack_18.y = 0.0;
  CStack_18.z = 0.0;
  core_xform_cpp_buildMatrixFromEulerAndPosition_FUN_0055ae80(&CStack_58,&CStack_18,param_1);
  core_xform_cpp_matrixToQuaternion_FUN_0055cf10((CMatrix3x3f *)&CStack_58,&CStack_28);
  pfVar2 = unaff_ESI + (uint)bVar3 * -2 + 1;
  *unaff_ESI = CStack_28.w;
  pfVar1 = (float *)((int)&CStack_28 + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8);
  *pfVar2 = *(float *)((int)&CStack_28 + (uint)bVar3 * -8 + 4);
  pfVar2[(uint)bVar3 * -2 + 1] = *pfVar1;
  (pfVar2 + (uint)bVar3 * -2 + 1)[(uint)bVar3 * -2 + 1] = pfVar1[(uint)bVar3 * -2 + 1];
  return;
}

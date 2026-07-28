// Name: core_bride.cpp_FUN_00420eb0
// Address: 00420eb0
// Address Range: [[00420eb0, 00420f12]]
// Convention: unknown
// Signature: CVector3f * core_bride_cpp_FUN_00420eb0(int param_1,CVector3f *param_2)

#include "nocturne.h"

CVector3f * core_bride_cpp_FUN_00420eb0(int param_1,CVector3f *param_2)

{
  int iVar1;
  float *pfVar2;
  CMatrix3x4f *pCVar3;
  byte bVar4;
  CMatrix3x4f local_7c;
  float local_4c [12];
  CVector3f local_1c;
  
  bVar4 = 0;
  core_skeleton_cpp_CDeformableModelInstance_getBoneWorldMatrix_FUN_0051d0a0
            (param_1 + 0x150,DAT_00764b2c);
  pfVar2 = local_4c;
  pCVar3 = &local_7c;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    pCVar3->m[0].w = *pfVar2;
    pfVar2 = pfVar2 + (uint)bVar4 * -2 + 1;
    pCVar3 = (CMatrix3x4f *)((int)pCVar3 + ((uint)bVar4 * -2 + 1) * 4);
  }
  local_1c.y = 0.7;
  local_1c.x = 0.0;
  local_1c.z = 0.3;
  core_xform_cpp_transformVector3x4_FUN_0055a8b0(param_2,&local_1c,&local_7c);
  return param_2;
}

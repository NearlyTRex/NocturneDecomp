// Name: core_xform.cpp_quaternionToMatrix3x4_FUN_00585740
// Address: 00585740
// Address Range: [[00585740, 00585778]]
// Convention: unknown
// Signature: void core_xform_cpp_quaternionToMatrix3x4_FUN_00585740(CQuaternion4f *param_1)

#include "nocturne.h"

void core_xform_cpp_quaternionToMatrix3x4_FUN_00585740(CQuaternion4f *param_1)

{
  int iVar1;
  uint *unaff_ESI;
  CMatrix3x4f *pCVar2;
  byte bVar3;
  CMatrix3x4f local_38;
  
  bVar3 = 0;
  core_xform_cpp_quaternionToMatrix3x3_FUN_005855f0(&local_38,param_1);
  core_xform_cpp_clearTranslation_FUN_005837e0(&local_38);
  pCVar2 = &local_38;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *unaff_ESI = *(uint *)pCVar2;
    pCVar2 = (CMatrix3x4f *)((int)pCVar2 + ((uint)bVar3 * -2 + 1) * 4);
    unaff_ESI = unaff_ESI + (uint)bVar3 * -2 + 1;
  }
  return;
}

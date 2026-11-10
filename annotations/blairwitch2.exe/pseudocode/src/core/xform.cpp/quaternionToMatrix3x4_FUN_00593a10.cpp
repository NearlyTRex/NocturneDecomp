// Name: core_xform.cpp_quaternionToMatrix3x4_FUN_00593a10
// Address: 00593a10
// Address Range: [[00593a10, 00593a48]]
// Convention: unknown
// Signature: void core_xform_cpp_quaternionToMatrix3x4_FUN_00593a10(CQuaternion4f *param_1)

#include "nocturne.h"

void core_xform_cpp_quaternionToMatrix3x4_FUN_00593a10(CQuaternion4f *param_1)

{
  int iVar1;
  uint *unaff_ESI;
  CMatrix3x4f *pCVar2;
  byte bVar3;
  CMatrix3x4f local_38;
  
  bVar3 = 0;
  core_xform_cpp_FUN_005938c0(&local_38,param_1);
  core_xform_cpp_clearTranslation_FUN_00591ab0(&local_38);
  pCVar2 = &local_38;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *unaff_ESI = *(uint *)pCVar2;
    pCVar2 = (CMatrix3x4f *)((int)pCVar2 + ((uint)bVar3 * -2 + 1) * 4);
    unaff_ESI = unaff_ESI + (uint)bVar3 * -2 + 1;
  }
  return;
}

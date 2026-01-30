// Name: core_skeledit.cpp_FUN_0058ac80
// Address: 0058ac80
// Address Range: [[0058ac80, 0058ad2e]]
// Convention: __cdecl
// Signature: void __cdecl core_skeledit_cpp_FUN_0058ac80(void)

#include "nocturne.h"

void __cdecl core_skeledit_cpp_FUN_0058ac80(void)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  CMatrix3x4f *pCVar4;
  int *piVar5;
  CMatrix3x4f *pCVar6;
  byte bVar7;
  int *in_stack_00000004;
  CMatrix3x4f local_a4;
  CMatrix3x4f local_74;
  CMatrix3x4f local_44;
  int *local_14;
  
  bVar7 = 0;
  __STK(0xb0);
  iVar3 = 0;
  if (0 < *in_stack_00000004) {
    piVar2 = in_stack_00000004 + 1;
    local_14 = piVar2;
    do {
      if (piVar2[8] < 0) {
        iVar1 = 0xc;
        pCVar4 = (CMatrix3x4f *)(piVar2 + 0x15);
        piVar5 = piVar2 + 9;
      }
      else {
        core_xform_cpp_inverse_FUN_005f6210
                  ((CMatrix3x4f *)(local_14 + piVar2[8] * 0x21 + 0x15),&local_44);
        pCVar4 = &local_44;
        pCVar6 = &local_74;
        for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
          pCVar6->m[0].w = pCVar4->m[0].w;
          pCVar4 = (CMatrix3x4f *)((int)pCVar4 + ((uint)bVar7 * -2 + 1) * 4);
          pCVar6 = (CMatrix3x4f *)((int)pCVar6 + ((uint)bVar7 * -2 + 1) * 4);
        }
        core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10
                  ((CMatrix3x4f *)(piVar2 + 0x15),&local_74,&local_a4);
        iVar1 = 0xc;
        piVar5 = piVar2 + 9;
        pCVar4 = &local_a4;
      }
      for (; iVar1 != 0; iVar1 = iVar1 + -1) {
        *piVar5 = *(int *)pCVar4;
        pCVar4 = (CMatrix3x4f *)((int)pCVar4 + ((uint)bVar7 * -2 + 1) * 4);
        piVar5 = piVar5 + (uint)bVar7 * -2 + 1;
      }
      iVar3 = iVar3 + 1;
      piVar2 = piVar2 + 0x21;
    } while (iVar3 < *in_stack_00000004);
  }
  return;
}

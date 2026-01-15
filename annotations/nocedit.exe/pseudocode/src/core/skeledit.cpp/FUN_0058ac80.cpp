// Name: core_skeledit.cpp_FUN_0058ac80
// Address: 0058ac80
// Address Range: [[0058ac80, 0058ad2e]]
// Convention: unknown
// Signature: undefined core_skeledit.cpp_FUN_0058ac80()

#include "nocturne.h"

void core_skeledit_cpp_FUN_0058ac80(void)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  float *pfVar5;
  int *piVar6;
  CMatrix3x4f *pCVar7;
  byte bVar8;
  int *in_stack_00000004;
  CMatrix3x4f *in_stack_ffffff5c;
  CMatrix3x4f local_74;
  float local_44 [12];
  int *local_14;
  
  bVar8 = 0;
  crt_stack_c_stack_probe_FUN_005ff9f3(0xb0);
  iVar3 = 0;
  if (0 < *in_stack_00000004) {
    piVar2 = in_stack_00000004 + 1;
    local_14 = piVar2;
    do {
      if (piVar2[8] < 0) {
        iVar1 = 0xc;
        piVar4 = piVar2 + 0x15;
        piVar6 = piVar2 + 9;
      }
      else {
        core_xform_cpp_inverse_FUN_005f6210
                  ((CMatrix3x4f *)(local_14 + piVar2[8] * 0x21 + 0x15),in_stack_ffffff5c);
        pfVar5 = local_44;
        pCVar7 = &local_74;
        for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
          pCVar7->m[0].w = *pfVar5;
          pfVar5 = pfVar5 + (uint)bVar8 * -2 + 1;
          pCVar7 = (CMatrix3x4f *)((int)pCVar7 + ((uint)bVar8 * -2 + 1) * 4);
        }
        core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10
                  ((CMatrix3x4f *)(piVar2 + 0x15),&local_74,in_stack_ffffff5c);
        iVar1 = 0xc;
        piVar6 = piVar2 + 9;
        piVar4 = (int *)&stack0xffffff5c;
      }
      for (; iVar1 != 0; iVar1 = iVar1 + -1) {
        *piVar6 = *piVar4;
        piVar4 = piVar4 + (uint)bVar8 * -2 + 1;
        piVar6 = piVar6 + (uint)bVar8 * -2 + 1;
      }
      iVar3 = iVar3 + 1;
      piVar2 = piVar2 + 0x21;
    } while (iVar3 < *in_stack_00000004);
  }
  return;
}

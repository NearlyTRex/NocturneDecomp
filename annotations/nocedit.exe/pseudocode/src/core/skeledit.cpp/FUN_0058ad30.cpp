// Name: core_skeledit.cpp_FUN_0058ad30
// Address: 0058ad30
// Address Range: [[0058ad30, 0058adac]]
// Convention: unknown
// Signature: void core_skeledit_cpp_FUN_0058ad30(void)

#include "nocturne.h"

void core_skeledit_cpp_FUN_0058ad30(void)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  CMatrix3x4f *pCVar4;
  int *piVar5;
  byte bVar6;
  int *in_stack_00000004;
  CMatrix3x4f local_44;
  int *local_14;
  
  bVar6 = 0;
  crt_stack_c_stack_probe_FUN_005ff9f3(0x50);
  iVar3 = 0;
  if (0 < *in_stack_00000004) {
    piVar2 = in_stack_00000004 + 1;
    local_14 = piVar2;
    do {
      if (piVar2[8] < 0) {
        iVar1 = 0xc;
        pCVar4 = (CMatrix3x4f *)(piVar2 + 9);
        piVar5 = piVar2 + 0x15;
      }
      else {
        core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10
                  ((CMatrix3x4f *)(piVar2 + 9),(CMatrix3x4f *)(local_14 + piVar2[8] * 0x21 + 0x15),
                   &local_44);
        iVar1 = 0xc;
        piVar5 = piVar2 + 0x15;
        pCVar4 = &local_44;
      }
      for (; iVar1 != 0; iVar1 = iVar1 + -1) {
        *piVar5 = *(int *)pCVar4;
        pCVar4 = (CMatrix3x4f *)((int)pCVar4 + ((uint)bVar6 * -2 + 1) * 4);
        piVar5 = piVar5 + (uint)bVar6 * -2 + 1;
      }
      iVar3 = iVar3 + 1;
      piVar2 = piVar2 + 0x21;
    } while (iVar3 < *in_stack_00000004);
  }
  return;
}

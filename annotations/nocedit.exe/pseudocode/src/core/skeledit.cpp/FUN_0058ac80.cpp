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
  BADSPACEBASE *in_ESP;
  int iVar3;
  int *piVar4;
  uint *puVar5;
  int *piVar6;
  uint *puVar7;
  byte bVar8;
  int *in_stack_0000000c;
  CMatrix3x4f *in_stack_ffffff64;
  CMatrix3x4f *in_stack_ffffff68;
  int aiStack_94 [10];
  uint uStack_6c;
  CMatrix3x4f CStack_68;
  uint auStack_38 [11];
  int *piStack_c;
  
  bVar8 = 0;
  crt_stack_c_stack_probe_FUN_005ff9f3(0xb0);
  iVar3 = 0;
  if (0 < *in_stack_0000000c) {
    piVar2 = in_stack_0000000c + 1;
    piStack_c = piVar2;
    do {
      if (piVar2[8] < 0) {
        iVar1 = 0xc;
        piVar4 = piVar2 + 0x15;
        piVar6 = piVar2 + 9;
      }
      else {
        core_xform_cpp_inverse_FUN_005f6210
                  ((CMatrix3x4f *)(piStack_c + piVar2[8] * 0x21 + 0x15),in_stack_ffffff64);
        puVar5 = auStack_38;
        puVar7 = &uStack_6c;
        for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
          *puVar7 = *puVar5;
          puVar5 = puVar5 + (uint)bVar8 * -2 + 1;
          puVar7 = puVar7 + (uint)bVar8 * -2 + 1;
        }
        in_stack_ffffff64 = &CStack_68;
        core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10
                  ((CMatrix3x4f *)(piVar2 + 0x15),in_stack_ffffff64,in_stack_ffffff68);
        iVar1 = 0xc;
        piVar4 = aiStack_94;
        piVar6 = piVar2 + 9;
      }
      for (; iVar1 != 0; iVar1 = iVar1 + -1) {
        *piVar6 = *piVar4;
        piVar4 = piVar4 + (uint)bVar8 * -2 + 1;
        piVar6 = piVar6 + (uint)bVar8 * -2 + 1;
      }
      iVar3 = iVar3 + 1;
      piVar2 = piVar2 + 0x21;
    } while (iVar3 < *in_stack_0000000c);
  }
  return;
}

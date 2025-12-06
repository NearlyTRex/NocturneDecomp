// Name: core_skeledit.cpp_FUN_0058ad30
// Address: 0058ad30
// Address Range: [[0058ad30, 0058adac]]
// Convention: unknown
// Signature: undefined core_skeledit.cpp_FUN_0058ad30()

#include "nocturne.h"

void core_skeledit_cpp_FUN_0058ad30(void)

{
  int iVar1;
  int *piVar2;
  BADSPACEBASE *in_ESP;
  int iVar3;
  int *piVar4;
  int *piVar5;
  byte bVar6;
  int *in_stack_0000000c;
  CMatrix3x4f *in_stack_ffffffc4;
  int aiStack_38 [11];
  int *piStack_c;
  
  bVar6 = 0;
  crt_stack_c_stack_probe_FUN_005ff9f3(0x50);
  iVar3 = 0;
  if (0 < *in_stack_0000000c) {
    piVar2 = in_stack_0000000c + 1;
    piStack_c = piVar2;
    do {
      if (piVar2[8] < 0) {
        iVar1 = 0xc;
        piVar4 = piVar2 + 9;
        piVar5 = piVar2 + 0x15;
      }
      else {
        core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10
                  ((CMatrix3x4f *)(piVar2 + 9),(CMatrix3x4f *)(piStack_c + piVar2[8] * 0x21 + 0x15),
                   in_stack_ffffffc4);
        iVar1 = 0xc;
        piVar4 = aiStack_38;
        piVar5 = piVar2 + 0x15;
      }
      for (; iVar1 != 0; iVar1 = iVar1 + -1) {
        *piVar5 = *piVar4;
        piVar4 = piVar4 + (uint)bVar6 * -2 + 1;
        piVar5 = piVar5 + (uint)bVar6 * -2 + 1;
      }
      iVar3 = iVar3 + 1;
      piVar2 = piVar2 + 0x21;
    } while (iVar3 < *in_stack_0000000c);
  }
  return;
}

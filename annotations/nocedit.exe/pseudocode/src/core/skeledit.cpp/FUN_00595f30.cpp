// Name: core_skeledit.cpp_FUN_00595f30
// Address: 00595f30
// Address Range: [[00595f30, 00595fb7]]
// Convention: unknown
// Signature: void core_skeledit_cpp_FUN_00595f30(void)

#include "nocturne.h"

void core_skeledit_cpp_FUN_00595f30(void)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int in_stack_00000004;
  int *in_stack_00000008;
  int local_24 [6];
  
  crt_stack_c_stack_probe_FUN_005ff9f3(0x28);
  iVar5 = 0;
  if (0 < *in_stack_00000008) {
    piVar3 = in_stack_00000008 + 10;
    piVar4 = (int *)(in_stack_00000004 + 0x2937c);
    do {
      iVar1 = piVar3[7];
      iVar2 = piVar3[0xb];
      if (piVar4 != local_24) {
        *piVar4 = piVar3[3];
        piVar4[1] = iVar1;
        piVar4[2] = iVar2;
      }
      piVar4 = piVar4 + 3;
      iVar5 = iVar5 + 1;
      piVar3 = piVar3 + 0x21;
    } while (iVar5 < *in_stack_00000008);
  }
  return;
}

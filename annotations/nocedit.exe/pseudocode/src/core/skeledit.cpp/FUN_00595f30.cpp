// Name: core_skeledit.cpp_FUN_00595f30
// Address: 00595f30
// Address Range: [[00595f30, 00595fb7]]
// Convention: unknown
// Signature: undefined core_skeledit.cpp_FUN_00595f30()

#include "nocturne.h"

void core_skeledit_cpp_FUN_00595f30(void)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  BADSPACEBASE *in_ESP;
  int in_stack_0000000c;
  int *in_stack_00000010;
  int local_1c [5];
  uint uStackY_8;
  
  uStackY_8 = 0x595f3a;
  crt_stack_c_stack_probe_FUN_005ff9f3(0x28);
  iVar5 = 0;
  if (0 < *in_stack_00000010) {
    piVar3 = in_stack_00000010 + 10;
    piVar4 = (int *)(in_stack_0000000c + 0x2937c);
    do {
      iVar1 = piVar3[7];
      iVar2 = piVar3[0xb];
      if (piVar4 != local_1c) {
        *piVar4 = piVar3[3];
        piVar4[1] = iVar1;
        piVar4[2] = iVar2;
      }
      piVar4 = piVar4 + 3;
      iVar5 = iVar5 + 1;
      piVar3 = piVar3 + 0x21;
    } while (iVar5 < *in_stack_00000010);
  }
  return;
}

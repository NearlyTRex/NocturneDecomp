// Name: core_skeledit.cpp_FUN_0058f790
// Address: 0058f790
// Address Range: [[0058f790, 0058f80d]]
// Convention: unknown
// Signature: undefined core_skeledit.cpp_FUN_0058f790()

#include "nocturne.h"

ulonglong core_skeledit_cpp_FUN_0058f790(void)

{
  char cVar1;
  int *piVar2;
  undefined3 uVar3;
  int iVar4;
  char *pcVar5;
  int *piVar6;
  int *in_stack_00000004;
  
  piVar2 = (int *)crt_stack_c_stack_probe_FUN_005ff9f3(0x10);
  pcVar5 = "TheOnlyPart";
  piVar6 = in_stack_00000004 + 0x1c51;
  in_stack_00000004[0x1c50] = 1;
  do {
    cVar1 = *pcVar5;
    uVar3 = (undefined3)((uint)piVar2 >> 8);
    piVar2 = (int *)CONCAT31 /* combine 2-byte values */(uVar3,cVar1);
    *(char *)piVar6 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar5[1];
    piVar2 = (int *)CONCAT31 /* combine 2-byte values */(uVar3,cVar1);
    pcVar5 = pcVar5 + 2;
    *(char *)((int)piVar6 + 1) = cVar1;
    piVar6 = (int *)((int)piVar6 + 2);
  } while (cVar1 != '\0');
  iVar4 = 0;
  piVar6 = in_stack_00000004;
  if (0 < *in_stack_00000004) {
    do {
      piVar6[0x1c5e] = 0;
      piVar6[0x1c59] = piVar6[0x15];
      iVar4 = iVar4 + 1;
      piVar2 = piVar6 + 1;
      piVar6 = piVar2;
    } while (iVar4 < *in_stack_00000004);
  }
  in_stack_00000004[0x1c63] = 0;
  return CONCAT44 /* combine 2-byte values */(iVar4,piVar2);
}

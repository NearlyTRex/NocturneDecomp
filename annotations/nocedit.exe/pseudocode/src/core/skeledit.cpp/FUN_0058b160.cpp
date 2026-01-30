// Name: core_skeledit.cpp_FUN_0058b160
// Address: 0058b160
// Address Range: [[0058b160, 0058b1f3]]
// Convention: __cdecl
// Signature: void __cdecl core_skeledit_cpp_FUN_0058b160(void)

#include "nocturne.h"

void __cdecl core_skeledit_cpp_FUN_0058b160(void)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  char *pcVar4;
  int iVar5;
  int *piVar6;
  char *pcVar7;
  int *piVar8;
  int *in_stack_00000004;
  int in_stack_00000008;
  int local_10;
  
  __STK(0x14);
  iVar2 = *(int *)(in_stack_00000008 + 0x28558);
  iVar5 = 0;
  *in_stack_00000004 = iVar2;
  if (0 < iVar2) {
    pcVar7 = (char *)(in_stack_00000008 + 0x2855c);
    piVar8 = in_stack_00000004 + 1;
    local_10 = in_stack_00000008;
    piVar6 = in_stack_00000004;
    pcVar4 = pcVar7;
    piVar3 = piVar8;
LAB_0058b1a1:
    do {
      cVar1 = *pcVar7;
      *(char *)piVar8 = cVar1;
      if (cVar1 != '\0') {
        cVar1 = pcVar7[1];
        pcVar7 = pcVar7 + 2;
        *(char *)((int)piVar8 + 1) = cVar1;
        piVar8 = (int *)((int)piVar8 + 2);
        if (cVar1 != '\0') goto LAB_0058b1a1;
      }
      iVar5 = iVar5 + 1;
      piVar8 = piVar3 + 0x21;
      piVar6[9] = *(int *)(local_10 + 0x2857c);
      pcVar7 = pcVar4 + 0x24;
      local_10 = local_10 + 0x24;
      piVar6 = piVar6 + 0x21;
      pcVar4 = pcVar7;
      piVar3 = piVar8;
    } while (iVar5 < *in_stack_00000004);
  }
  return;
}

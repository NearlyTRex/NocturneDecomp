// Name: core_script.cpp_FUN_00562620
// Address: 00562620
// Address Range: [[00562620, 005626c4]]
// Convention: unknown
// Signature: undefined core_script.cpp_FUN_00562620()

#include "nocturne.h"

/* Signature: byte core_script.cpp_FUN_00562620(uint param_1, uint param_2) */

int core_script_cpp_FUN_00562620(void)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  char *pcVar7;
  int in_stack_00000004;
  int in_stack_00000008;
  
  uVar2 = 0xffffffff;
  pcVar5 = (char *)(in_stack_00000004 + 4);
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  uVar3 = 0xffffffff;
  pcVar5 = (char *)(in_stack_00000004 + 0x68);
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  iVar4 = ~uVar2 + (~uVar3 - 2);
  iVar6 = 0;
  if (0 < *(int *)(in_stack_00000004 + 0xcc)) {
    pcVar5 = (char *)(in_stack_00000004 + 0xd0);
    do {
      uVar2 = 0xffffffff;
      pcVar7 = pcVar5;
      do {
        if (uVar2 == 0) break;
        uVar2 = uVar2 - 1;
        cVar1 = *pcVar7;
        pcVar7 = pcVar7 + 1;
      } while (cVar1 != '\0');
      iVar4 = iVar4 + (~uVar2 - 1);
      if (in_stack_00000008 < iVar4) goto LAB_00562676;
      uVar2 = 0xffffffff;
      pcVar7 = pcVar5 + 100;
      do {
        if (uVar2 == 0) break;
        uVar2 = uVar2 - 1;
        cVar1 = *pcVar7;
        pcVar7 = pcVar7 + 1;
      } while (cVar1 != '\0');
      iVar4 = iVar4 + (~uVar2 - 1);
      if (in_stack_00000008 <= iVar4) {
        return iVar6;
      }
      iVar6 = iVar6 + 1;
      pcVar5 = pcVar5 + 0x328;
    } while (iVar6 < *(int *)(in_stack_00000004 + 0xcc));
  }
  if (iVar4 + 1 < in_stack_00000008) {
LAB_00562676:
    iVar4 = -1;
  }
  else {
    iVar4 = *(int *)(in_stack_00000004 + 0xcc) + -1;
  }
  return iVar4;
}

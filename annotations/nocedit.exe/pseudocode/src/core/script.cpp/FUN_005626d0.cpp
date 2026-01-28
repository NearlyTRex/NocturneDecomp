// Name: core_script.cpp_FUN_005626d0
// Address: 005626d0
// Address Range: [[005626d0, 00562758]]
// Convention: unknown
// Signature: int core_script_cpp_FUN_005626d0(void)

#include "nocturne.h"

int core_script_cpp_FUN_005626d0(void)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  char *pcVar7;
  int in_stack_00000004;
  int in_stack_00000008;
  
  uVar2 = 0xffffffff;
  pcVar6 = (char *)(in_stack_00000004 + 4);
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  uVar3 = 0xffffffff;
  pcVar6 = (char *)(in_stack_00000004 + 0x68);
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  iVar4 = ~uVar2 + (~uVar3 - 2);
  if (*(int *)(in_stack_00000004 + 0xcc) < in_stack_00000008) {
    in_stack_00000008 = *(int *)(in_stack_00000004 + 0xcc);
  }
  iVar5 = 0;
  if (0 < in_stack_00000008) {
    pcVar6 = (char *)(in_stack_00000004 + 0x134);
    do {
      uVar2 = 0xffffffff;
      pcVar7 = (char *)(iVar5 * 0x328 + in_stack_00000004 + 0xd0);
      do {
        if (uVar2 == 0) break;
        uVar2 = uVar2 - 1;
        cVar1 = *pcVar7;
        pcVar7 = pcVar7 + 1;
      } while (cVar1 != '\0');
      iVar5 = iVar5 + 1;
      uVar3 = 0xffffffff;
      pcVar7 = pcVar6;
      do {
        if (uVar3 == 0) break;
        uVar3 = uVar3 - 1;
        cVar1 = *pcVar7;
        pcVar7 = pcVar7 + 1;
      } while (cVar1 != '\0');
      pcVar6 = pcVar6 + 0x328;
      iVar4 = iVar4 + ~uVar2 + (~uVar3 - 2);
    } while (iVar5 < in_stack_00000008);
  }
  return iVar4;
}

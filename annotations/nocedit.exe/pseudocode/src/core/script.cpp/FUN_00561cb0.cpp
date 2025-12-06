// Name: core_script.cpp_FUN_00561cb0
// Address: 00561cb0
// Address Range: [[00561cb0, 00561da0]]
// Convention: unknown
// Signature: undefined core_script.cpp_FUN_00561cb0()

#include "nocturne.h"

/* Signature: byte core_script.cpp_FUN_00561cb0(uint param_1, uint param_2,
   uint param_3, uint param_4) */

uint core_script_cpp_FUN_00561cb0(void)

{
  int iVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  char *pcVar6;
  char *in_stack_00000004;
  int in_stack_00000008;
  int *in_stack_0000000c;
  int in_stack_00000010;
  
  uVar4 = 0xffffffff;
  pcVar6 = in_stack_00000004;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar2 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar2 != '\0');
  iVar5 = ~uVar4 - 1;
  iVar1 = *in_stack_0000000c;
  while ((iVar1 < in_stack_00000010 &&
         ((g_CharacterClassificationTable
           [(byte)(*(char *)(*in_stack_0000000c + in_stack_00000008) + 1)] & 2U) != 0))) {
    iVar1 = *in_stack_0000000c;
    *in_stack_0000000c = iVar1 + 1;
    in_stack_00000004[iVar5] = *(char *)(in_stack_00000008 + iVar1);
    iVar1 = *in_stack_0000000c;
    iVar5 = iVar5 + 1;
  }
  in_stack_00000004[iVar5] = '\0';
  iVar5 = 0;
  iVar1 = *in_stack_0000000c;
  iVar3 = 0;
  while ((iVar1 < in_stack_00000010 &&
         (((*(char *)(*in_stack_0000000c + in_stack_00000008) != ',' || (iVar5 != 0)) ||
          (*(int *)(in_stack_00000004 + 600) == 2))))) {
    if (*(char *)(*in_stack_0000000c + in_stack_00000008) == '(') {
      iVar5 = iVar5 + 1;
    }
    if (*(char *)(*in_stack_0000000c + in_stack_00000008) == ')') {
      if (iVar5 == 0) break;
      iVar5 = iVar5 + -1;
    }
    iVar1 = *in_stack_0000000c;
    *in_stack_0000000c = iVar1 + 1;
    in_stack_00000004[iVar3 + 100] = *(char *)(in_stack_00000008 + iVar1);
    iVar1 = *in_stack_0000000c;
    iVar3 = iVar3 + 1;
  }
  pcVar6 = in_stack_00000004 + iVar3;
  while ((0 < iVar3 && ((g_CharacterClassificationTable[(byte)(pcVar6[99] + 1)] & 2U) != 0))) {
    iVar3 = iVar3 + -1;
    pcVar6 = pcVar6 + -1;
    *in_stack_0000000c = *in_stack_0000000c + -1;
  }
  in_stack_00000004[iVar3 + 100] = '\0';
  return 1;
}

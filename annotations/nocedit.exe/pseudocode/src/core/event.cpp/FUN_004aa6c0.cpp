// Name: core_event.cpp_FUN_004aa6c0
// Address: 004aa6c0
// Address Range: [[004aa6c0, 004aa7cd]]
// Convention: unknown
// Signature: undefined core_event.cpp_FUN_004aa6c0()

#include "nocturne.h"

char * core_event_cpp_FUN_004aa6c0(void)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  uint uVar5;
  SIZE_T n;
  int iVar6;
  int *in_stack_00000004;
  char *in_stack_00000008;
  int in_stack_0000000c;
  
  pcVar3 = (char *)*in_stack_00000004;
  while ((g_CharacterClassificationTable[(byte)(*pcVar3 + 1)] & 2U) != 0) {
    pcVar3 = pcVar3 + 1;
  }
  *in_stack_00000004 = (int)pcVar3;
  if (*pcVar3 != '(') {
    return "No opening parenthesis";
  }
  iVar6 = 0;
  iVar4 = 0;
  if (0 < in_stack_0000000c) {
    do {
      iVar2 = *in_stack_00000004;
      pcVar3 = (char *)(iVar2 + 1);
      *in_stack_00000004 = (int)pcVar3;
      if (*pcVar3 == '\0') {
        return "Can't find closing parenthesis";
      }
      if (*pcVar3 == '(') {
        iVar6 = iVar6 + 1;
      }
      else if (*pcVar3 == ')') {
        if (iVar6 == 0) {
          *in_stack_00000004 = iVar2 + 2;
          in_stack_00000008[iVar4] = '\0';
          uVar5 = 0xffffffff;
          pcVar3 = in_stack_00000008;
          goto code_r0x004aa759;
        }
        iVar6 = iVar6 + -1;
      }
      pcVar3 = in_stack_00000008 + iVar4;
      iVar4 = iVar4 + 1;
      *pcVar3 = *(char *)*in_stack_00000004;
    } while (iVar4 < in_stack_0000000c);
  }
  return "Argument too long";
  while( true ) {
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
    if (cVar1 == '\0') break;
code_r0x004aa759:
    if (uVar5 == 0) break;
  }
  n = ~uVar5 - 1;
  if (0 < (int)n) {
    pcVar3 = in_stack_00000008 + n;
    do {
      if ((g_CharacterClassificationTable[(byte)(pcVar3[-1] + 1)] & 2U) == 0) break;
      n = n - 1;
      pcVar3 = pcVar3 + -1;
    } while (0 < (int)n);
  }
  in_stack_00000008[n] = '\0';
  while ((g_CharacterClassificationTable[(byte)(*in_stack_00000008 + 1)] & 2U) != 0) {
    crt_string_c_memmove_FUN_005fe5e0(in_stack_00000008,in_stack_00000008 + 1,n);
    n = n - 1;
  }
  pcVar3 = (char *)*in_stack_00000004;
  while ((g_CharacterClassificationTable[(byte)(*pcVar3 + 1)] & 2U) != 0) {
    pcVar3 = pcVar3 + 1;
  }
  *in_stack_00000004 = (int)pcVar3;
  return (char *)0x0;
}

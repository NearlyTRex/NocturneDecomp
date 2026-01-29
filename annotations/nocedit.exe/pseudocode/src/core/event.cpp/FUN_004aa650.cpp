// Name: core_event.cpp_FUN_004aa650
// Address: 004aa650
// Address Range: [[004aa650, 004aa6b4]]
// Convention: unknown
// Signature: void core_event_cpp_FUN_004aa650(void)

#include "nocturne.h"

void core_event_cpp_FUN_004aa650(void)

{
  char cVar1;
  char *pcVar2;
  uint uVar3;
  SIZE_T n;
  char *in_stack_00000004;
  
  uVar3 = 0xffffffff;
  pcVar2 = in_stack_00000004;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  n = ~uVar3 - 1;
  if (0 < (int)n) {
    pcVar2 = in_stack_00000004 + n;
    do {
      if ((g_CharacterClassificationTable[(byte)(pcVar2[-1] + 1)] & 2U) == 0) break;
      n = n - 1;
      pcVar2 = pcVar2 + -1;
    } while (0 < (int)n);
  }
  in_stack_00000004[n] = '\0';
  while ((g_CharacterClassificationTable[(byte)(*in_stack_00000004 + 1)] & 2U) != 0) {
    memmove(in_stack_00000004,in_stack_00000004 + 1,n);
    n = n - 1;
  }
  return;
}

// Name: core_event.cpp_FUN_004aa650
// Address: 004aa650
// Address Range: [[004aa650, 004aa6b4]]
// Convention: __cdecl
// Signature: void __cdecl core_event_cpp_FUN_004aa650(char *param_1)

#include "nocturne.h"

void __cdecl core_event_cpp_FUN_004aa650(char *param_1)

{
  char cVar1;
  char *pcVar2;
  uint uVar3;
  SIZE_T n;
  
  uVar3 = 0xffffffff;
  pcVar2 = param_1;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  n = ~uVar3 - 1;
  if (0 < (int)n) {
    pcVar2 = param_1 + n;
    do {
      if ((g_CharacterClassificationTable[(byte)(pcVar2[-1] + 1)] & 2) == 0) break;
      n = n - 1;
      pcVar2 = pcVar2 + -1;
    } while (0 < (int)n);
  }
  param_1[n] = '\0';
  while ((g_CharacterClassificationTable[(byte)(*param_1 + 1)] & 2) != 0) {
    memmove(param_1,param_1 + 1,n);
    n = n - 1;
  }
  return;
}

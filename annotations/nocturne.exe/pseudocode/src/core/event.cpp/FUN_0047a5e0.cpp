// Name: core_event.cpp_FUN_0047a5e0
// Address: 0047a5e0
// Address Range: [[0047a5e0, 0047a644]]
// Convention: unknown
// Signature: void core_event_cpp_FUN_0047a5e0(char *param_1)

#include "nocturne.h"

void core_event_cpp_FUN_0047a5e0(char *param_1)

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
      if (((&DAT_005c168c)[(byte)(pcVar2[-1] + 1)] & 2) == 0) break;
      n = n - 1;
      pcVar2 = pcVar2 + -1;
    } while (0 < (int)n);
  }
  param_1[n] = '\0';
  while (((&DAT_005c168c)[(byte)(*param_1 + 1)] & 2) != 0) {
    memmove(param_1,param_1 + 1,n);
    n = n - 1;
  }
  return;
}

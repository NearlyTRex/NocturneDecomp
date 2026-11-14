// Name: core_event.cpp_trimWhitespace_FUN_004a15c0
// Address: 004a15c0
// Address Range: [[004a15c0, 004a1624]]
// Convention: __cdecl
// Signature: void __cdecl core_event_cpp_trimWhitespace_FUN_004a15c0(char *str)

#include "nocturne.h"

void __cdecl core_event_cpp_trimWhitespace_FUN_004a15c0(char *str)

{
  char cVar1;
  char *pcVar2;
  uint uVar3;
  SIZE_T n;
  
  uVar3 = 0xffffffff;
  pcVar2 = str;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  n = ~uVar3 - 1;
  if (0 < (int)n) {
    pcVar2 = str + n;
    do {
      if (((&DAT_00626114)[(byte)(pcVar2[-1] + 1)] & 2) == 0) break;
      n = n - 1;
      pcVar2 = pcVar2 + -1;
    } while (0 < (int)n);
  }
  str[n] = '\0';
  while (((&DAT_00626114)[(byte)(*str + 1)] & 2) != 0) {
    memmove(str,str + 1,n);
    n = n - 1;
  }
  return;
}

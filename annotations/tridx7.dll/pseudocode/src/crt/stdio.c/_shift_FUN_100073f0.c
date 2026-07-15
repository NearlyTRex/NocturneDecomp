// Name: crt_stdio.c__shift_FUN_100073f0
// Address: 100073f0
// Address Range: [[100073f0, 1000741a]]
// Convention: __cdecl
// Signature: void __cdecl crt_stdio_c__shift_FUN_100073f0(char *str,int dist)

#include "nocturne.h"

void __cdecl _shift(char *str,int dist)

{
  char cVar1;
  uint uVar2;
  char *pcVar3;
  
  if (dist != 0) {
    uVar2 = 0xffffffff;
    pcVar3 = str;
    do {
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    memcpy(str + dist,str,~uVar2);
  }
  return;
}

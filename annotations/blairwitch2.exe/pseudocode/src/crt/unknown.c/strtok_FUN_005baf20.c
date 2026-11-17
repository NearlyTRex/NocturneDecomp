// Name: crt_unknown.c_strtok_FUN_005baf20
// Address: 005baf20
// Address Range: [[005baf20, 005baf7b]]
// Convention: __cdecl
// Signature: char * __cdecl crt_unknown_c_strtok_FUN_005baf20(char *str,char *delimiters)

#include "nocturne.h"

char * __cdecl strtok(char *str,char *delimiters)

{
  uint uVar1;
  char *pcVar2;
  byte local_24 [32];
  
  FUN_005c20d0(local_24,delimiters);
  pcVar2 = (char *)0x0;
  uVar1 = (uint)(byte)*str;
  if (uVar1 == 0) {
    return (char *)0x0;
  }
  do {
    if ((local_24[uVar1 >> 3] & *(byte *)((int)&g_DOUBLE_00601428 + (uVar1 & 7))) != 0) {
      return pcVar2;
    }
    pcVar2 = pcVar2 + 1;
    str = str + 1;
    uVar1 = (uint)(byte)*str;
  } while (uVar1 != 0);
  return pcVar2;
}

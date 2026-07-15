// Name: crt_env.c_copy_environ_FUN_10011610
// Address: 10011610
// Address Range: [[10011610, 1001167d]]
// Convention: __cdecl
// Signature: char ** __cdecl crt_env_c_copy_environ_FUN_10011610(char **oldenviron)

#include "nocturne.h"

char ** __cdecl copy_environ(char **oldenviron)

{
  char **ppcVar1;
  char *pcVar2;
  char **ppcVar3;
  
  ppcVar1 = (char **)0x0;
  if (oldenviron != (char **)0x0) {
    pcVar2 = *oldenviron;
    ppcVar3 = oldenviron;
    while (pcVar2 != (char *)0x0) {
      ppcVar3 = ppcVar3 + 1;
      ppcVar1 = (char **)((int)ppcVar1 + 1);
      pcVar2 = *ppcVar3;
    }
    ppcVar1 = (char **)malloc((int)ppcVar1 * 4 + 4);
    if (ppcVar1 == (char **)0x0) {
      _amsg_exit(9);
    }
    pcVar2 = *oldenviron;
    ppcVar3 = ppcVar1;
    while (pcVar2 != (char *)0x0) {
      pcVar2 = *oldenviron;
      oldenviron = oldenviron + 1;
      pcVar2 = _strdup(pcVar2);
      *ppcVar3 = pcVar2;
      ppcVar3 = ppcVar3 + 1;
      pcVar2 = *oldenviron;
    }
    *ppcVar3 = (char *)0x0;
  }
  return ppcVar1;
}

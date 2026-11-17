// Name: crt_env.c_getenv_FUN_005a5ec0
// Address: 005a5ec0
// Address Range: [[005a5ec0, 005a5f1a]]
// Convention: __cdecl
// Signature: char * __cdecl crt_env_c_getenv_FUN_005a5ec0(char *name)

#include "nocturne.h"

char * __cdecl getenv(char *name)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  char **ppcVar5;
  char *pcVar6;
  
  if ((g_CHAR_PTR_PTR_02d25924 != (char **)0x0) && (name != (char *)0x0)) {
    uVar3 = 0xffffffff;
    pcVar6 = name;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    iVar4 = ~uVar3 - 1;
    for (ppcVar5 = g_CHAR_PTR_PTR_02d25924; pcVar6 = *ppcVar5, pcVar6 != (char *)0x0;
        ppcVar5 = ppcVar5 + 1) {
      iVar2 = FUN_005acd10(pcVar6,name,iVar4);
      if ((iVar2 == 0) && (pcVar6[iVar4] == '=')) {
        return pcVar6 + ~uVar3;
      }
    }
  }
  return (char *)0x0;
}

// Name: crt_env.c_getenv_FUN_006013f0
// Address: 006013f0
// Address Range: [[006013f0, 0060144a]]
// Convention: __cdecl
// Signature: char * crt_env.c_getenv_FUN_006013f0(char * name)

#include "nocturne.h"

char * __cdecl crt_env_c_getenv_FUN_006013f0(char *name)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  SIZE_T count;
  char **ppcVar4;
  char *pcVar5;
  
  if ((g_EnvironmentBlock != (char **)0x0) && (name != (char *)0x0)) {
    uVar3 = 0xffffffff;
    pcVar5 = name;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    count = ~uVar3 - 1;
    for (ppcVar4 = g_EnvironmentBlock; pcVar5 = *ppcVar4, pcVar5 != (char *)0x0;
        ppcVar4 = ppcVar4 + 1) {
      iVar2 = crt_string_c_mbstrnicmp_FUN_00608e50(pcVar5,name,count);
      if ((iVar2 == 0) && (pcVar5[count] == '=')) {
        return pcVar5 + ~uVar3;
      }
    }
  }
  return (char *)0x0;
}

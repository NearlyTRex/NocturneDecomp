// Name: crt_environ.c_staticInit_FUN_0060c650
// Address: 0060c650
// Address Range: [[0060c650, 0060c738]]
// Convention: __cdecl
// Signature: void __cdecl crt_environ_c_staticInit_FUN_0060c650(void)

#include "nocturne.h"

void __cdecl staticInit(void)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char **ppcVar4;
  char *pcVar5;
  char *pcVar6;
  int iVar7;
  ulong count;
  
  pcVar5 = g_EnvironmentStrings;
  if (g_EnvironmentBlock == (char **)0x0) {
    iVar7 = 0;
    cVar1 = *g_EnvironmentStrings;
    pcVar3 = g_EnvironmentStrings;
    while (cVar1 != '\0') {
      do {
        cVar1 = *pcVar3;
        pcVar3 = pcVar3 + 1;
      } while (cVar1 != '\0');
      iVar7 = iVar7 + 1;
      cVar1 = *pcVar3;
    }
    iVar2 = (int)pcVar3 - (int)g_EnvironmentStrings;
    if (iVar2 == 0) {
      iVar2 = 1;
    }
    pcVar3 = (char *)FUN_0060c640(iVar2);
    if (pcVar3 != (char *)0x0) {
      INT_03f9c150 = (int)pcVar3;
      ppcVar4 = (char **)FUN_0060c640(iVar7 * 5 + 4);
      if (ppcVar4 == (char **)0x0) {
        free(pcVar3);
      }
      else {
        count = 0;
        iVar7 = 0;
        cVar1 = *pcVar5;
        while (cVar1 != '\0') {
          *(char **)(iVar7 + (int)ppcVar4) = pcVar3;
          pcVar6 = pcVar3;
          do {
            pcVar3 = pcVar6 + 1;
            cVar1 = *pcVar5;
            pcVar5 = pcVar5 + 1;
            *pcVar6 = cVar1;
            pcVar6 = pcVar3;
          } while (cVar1 != '\0');
          iVar7 = iVar7 + 4;
          count = count + 1;
          cVar1 = *pcVar5;
        }
        *(uint *)(iVar7 + (int)ppcVar4) = 0;
        g_EnvironStringArea = (char **)((int)ppcVar4 + iVar7 + 4);
        g_EnvironmentBlock = ppcVar4;
        memset(g_EnvironStringArea,0,count);
      }
    }
    parseFileInfo();
  }
  return;
}

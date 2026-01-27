// Name: crt_environ.c_staticInit_FUN_0060c650
// Address: 0060c650
// Address Range: [[0060c650, 0060c738]]
// Convention: __cdecl
// Signature: void crt_environ.c_staticInit_FUN_0060c650(void)

#include "nocturne.h"

void __cdecl crt_environ_c_staticInit_FUN_0060c650(void)

{
  char cVar1;
  char *pcVar2;
  char **ppcVar3;
  char *pcVar4;
  int iVar5;
  char *pcVar6;
  ulong count;
  
  pcVar4 = g_EnvironmentStrings;
  if (g_EnvironmentBlock == (char **)0x0) {
    cVar1 = *g_EnvironmentStrings;
    pcVar2 = g_EnvironmentStrings;
    while (cVar1 != '\0') {
      do {
        cVar1 = *pcVar2;
        pcVar2 = pcVar2 + 1;
      } while (cVar1 != '\0');
      cVar1 = *pcVar2;
    }
    pcVar2 = (char *)crt_unknown_c_FUN_0060c640();
    if (pcVar2 != (char *)0x0) {
      INT_03f9c150 = (int)pcVar2;
      ppcVar3 = (char **)crt_unknown_c_FUN_0060c640();
      if (ppcVar3 == (char **)0x0) {
        crt_memory_c_free_FUN_00601cd0(pcVar2);
      }
      else {
        count = 0;
        iVar5 = 0;
        cVar1 = *pcVar4;
        while (cVar1 != '\0') {
          *(char **)(iVar5 + (int)ppcVar3) = pcVar2;
          pcVar6 = pcVar2;
          do {
            pcVar2 = pcVar6 + 1;
            cVar1 = *pcVar4;
            pcVar4 = pcVar4 + 1;
            *pcVar6 = cVar1;
            pcVar6 = pcVar2;
          } while (cVar1 != '\0');
          iVar5 = iVar5 + 4;
          count = count + 1;
          cVar1 = *pcVar4;
        }
        *(uint *)(iVar5 + (int)ppcVar3) = 0;
        g_EnvironStringArea = (char **)((int)ppcVar3 + iVar5 + 4);
        g_EnvironmentBlock = ppcVar3;
        crt_memory_c_memset_FUN_005fde40(g_EnvironStringArea,0,count);
      }
    }
    crt_io_c_parseFileInfo_FUN_0060e3b0();
  }
  return;
}

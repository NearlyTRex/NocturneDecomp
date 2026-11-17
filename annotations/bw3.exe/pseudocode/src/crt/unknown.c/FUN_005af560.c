// Name: crt_unknown.c_FUN_005af560
// Address: 005af560
// Address Range: [[005af560, 005af648]]
// Convention: unknown
// Signature: void crt_unknown_c_FUN_005af560(void)

#include "nocturne.h"

void FUN_005af560(void)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char **ppcVar4;
  char *pcVar5;
  char *pcVar6;
  int iVar7;
  ulong count;
  
  pcVar5 = g_CHAR_PTR_0060797d;
  if (g_CHAR_PTR_PTR_02d25924 == (char **)0x0) {
    iVar7 = 0;
    cVar1 = *g_CHAR_PTR_0060797d;
    pcVar3 = g_CHAR_PTR_0060797d;
    while (cVar1 != '\0') {
      do {
        cVar1 = *pcVar3;
        pcVar3 = pcVar3 + 1;
      } while (cVar1 != '\0');
      iVar7 = iVar7 + 1;
      cVar1 = *pcVar3;
    }
    iVar2 = (int)pcVar3 - (int)g_CHAR_PTR_0060797d;
    if (iVar2 == 0) {
      iVar2 = 1;
    }
    pcVar3 = (char *)FUN_005af550(iVar2);
    if (pcVar3 != (char *)0x0) {
      g_PTR_02d261e0 = pcVar3;
      ppcVar4 = (char **)FUN_005af550(iVar7 * 5 + 4);
      if (ppcVar4 == (char **)0x0) {
        debugFree(pcVar3);
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
        g_CHAR_PTR_PTR_02d25920 = (char **)((int)ppcVar4 + iVar7 + 4);
        g_CHAR_PTR_PTR_02d25924 = ppcVar4;
        memset(g_CHAR_PTR_PTR_02d25920,0,count);
      }
    }
    FUN_005b0a70();
  }
  return;
}

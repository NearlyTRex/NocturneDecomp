// Name: FUN_0047a5e0
// Address: 0047a5e0
// Address Range: [[0047a5e0, 0047a644]]
// Convention: unknown
// Signature: void FUN_0047a5e0(char *param_1)

#include "nocturne.h"

void FUN_0047a5e0(char *param_1)

{
  char cVar1;
  char *pcVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = 0xffffffff;
  pcVar2 = param_1;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  iVar4 = ~uVar3 - 1;
  if (0 < iVar4) {
    pcVar2 = param_1 + iVar4;
    do {
      if (((&DAT_005c168c)[(byte)(pcVar2[-1] + 1)] & 2) == 0) break;
      iVar4 = iVar4 + -1;
      pcVar2 = pcVar2 + -1;
    } while (0 < iVar4);
  }
  param_1[iVar4] = '\0';
  while (((&DAT_005c168c)[(byte)(*param_1 + 1)] & 2) != 0) {
    memmove(param_1,param_1 + 1,iVar4);
    iVar4 = iVar4 + -1;
  }
  return;
}

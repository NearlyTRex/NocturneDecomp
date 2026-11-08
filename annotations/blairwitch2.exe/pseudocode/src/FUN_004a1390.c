// Name: FUN_004a1390
// Address: 004a1390
// Address Range: [[004a1390, 004a141f]]
// Convention: unknown
// Signature: void FUN_004a1390(char *param_1)

#include "nocturne.h"

void FUN_004a1390(char *param_1)

{
  char cVar1;
  char *pcVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
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
      if (((&DAT_0061ed94)[(byte)(pcVar2[-1] + 1)] & 2) == 0) break;
      iVar4 = iVar4 + -1;
      pcVar2 = pcVar2 + -1;
    } while (0 < iVar4);
  }
  param_1[iVar4] = '\0';
  while (((&DAT_0061ed94)[(byte)(*param_1 + 1)] & 2) != 0) {
    FUN_005ba1f0(param_1,param_1 + 1,iVar4);
    iVar4 = iVar4 + -1;
  }
  iVar5 = 0;
  if (0 < iVar4) {
    do {
      while (((&DAT_0061ed94)[(byte)(*param_1 + 1)] & 2) != 0) {
        *param_1 = ' ';
        iVar5 = iVar5 + 1;
        param_1 = param_1 + 1;
        if (iVar4 <= iVar5) {
          return;
        }
      }
      iVar5 = iVar5 + 1;
      param_1 = param_1 + 1;
    } while (iVar5 < iVar4);
  }
  return;
}

// Name: FUN_0054b940
// Address: 0054b940
// Address Range: [[0054b940, 0054b995]]
// Convention: unknown
// Signature: undefined4 FUN_0054b940(int param_1)

#include "nocturne.h"

uint FUN_0054b940(int param_1)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  uint local_14;
  
  local_14 = 0;
  iVar4 = 0;
  if (0 < *(int *)(param_1 + 0x2c)) {
    iVar3 = 0;
    do {
      pcVar2 = *(char **)(iVar3 + 4 + *(int *)(param_1 + 0x30));
      cVar1 = *pcVar2;
      while (cVar1 != '\0') {
        cVar1 = *pcVar2;
        pcVar2 = pcVar2 + 1;
        FUN_0040ce20(&local_14,cVar1);
        cVar1 = *pcVar2;
      }
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + 8;
    } while (iVar4 < *(int *)(param_1 + 0x2c));
  }
  return local_14;
}

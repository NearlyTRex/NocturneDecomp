// Name: unkaddr_0059d350.cpp_FUN_0059d7f0
// Address: 0059d7f0
// Address Range: [[0059d7f0, 0059d87e]]
// Convention: unknown
// Signature: undefined4 unkaddr_0059d350_cpp_FUN_0059d7f0(char *param_1,char *param_2,char *param_3)

#include "nocturne.h"

uint unkaddr_0059d350_cpp_FUN_0059d7f0(char *param_1,char *param_2,char *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  
  if (*(int *)(param_1 + 0x838) != 0) {
    iVar3 = 0;
    if (0 < *(int *)(param_1 + 0x838)) {
      pcVar4 = param_1 + 500;
      do {
        iVar1 = _strcmp(param_2,pcVar4);
        if (iVar1 == 0) break;
        iVar3 = iVar3 + 1;
        pcVar4 = pcVar4 + 0x20;
      } while (iVar3 < *(int *)(param_1 + 0x838));
    }
    if ((iVar3 != *(int *)(param_1 + 0x838)) &&
       (iVar1 = 0, pcVar4 = param_1, 0 < *(int *)(param_1 + 0x834))) {
      do {
        iVar2 = _strcmp(param_3,pcVar4);
        if (iVar2 == 0) {
          *(char **)(param_1 + iVar3 * 0x20 + 0x210) = pcVar4;
          return 2;
        }
        iVar1 = iVar1 + 1;
        pcVar4 = pcVar4 + 0x19;
      } while (iVar1 < *(int *)(param_1 + 0x834));
    }
  }
  return 0;
}

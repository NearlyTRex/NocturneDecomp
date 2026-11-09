// Name: core_dcamera.cpp_FUN_0044dd00
// Address: 0044dd00
// Address Range: [[0044dd00, 0044dd53]]
// Convention: unknown
// Signature: void core_dcamera_cpp_FUN_0044dd00(int param_1)

#include "nocturne.h"

void core_dcamera_cpp_FUN_0044dd00(int param_1)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar6 = 0;
  if (0 < *(int *)(param_1 + 0x154)) {
    iVar5 = 0;
    do {
      pcVar3 = (char *)(iVar5 + 0xb1a288);
      pcVar2 = (char *)(iVar5 + 0xb2cfc8);
      for (iVar4 = *(int *)(param_1 + 0x150); 0 < iVar4; iVar4 = iVar4 + -1) {
        cVar1 = *pcVar3;
        pcVar3 = pcVar3 + 1;
        *pcVar2 = *pcVar2 + cVar1;
        pcVar2 = pcVar2 + 1;
      }
      iVar6 = iVar6 + 1;
      iVar5 = iVar5 + 0x140;
    } while (iVar6 < *(int *)(param_1 + 0x154));
  }
  return;
}

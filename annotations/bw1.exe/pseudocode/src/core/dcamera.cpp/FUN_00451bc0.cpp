// Name: core_dcamera.cpp_FUN_00451bc0
// Address: 00451bc0
// Address Range: [[00451bc0, 00451c13]]
// Convention: unknown
// Signature: void core_dcamera_cpp_FUN_00451bc0(int param_1)

#include "nocturne.h"

void core_dcamera_cpp_FUN_00451bc0(int param_1)

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
      pcVar3 = (char *)(iVar5 + 0xafd9d8);
      pcVar2 = (char *)(iVar5 + 0xb10718);
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

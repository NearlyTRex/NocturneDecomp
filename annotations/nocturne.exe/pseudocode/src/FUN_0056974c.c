// Name: FUN_0056974c
// Address: 0056974c
// Address Range: [[0056974c, 0056984e]]
// Convention: unknown
// Signature: void FUN_0056974c(char *param_1,uint param_2,int param_3)

#include "nocturne.h"

void FUN_0056974c(char *param_1,uint param_2,int param_3)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  uint local_14;
  
  local_14 = param_2;
  if ((int)param_2 < 0) {
    *param_1 = '-';
    local_14 = -param_2;
    param_1 = param_1 + 1;
  }
  if (*(int *)(param_3 + 8) == -1) {
    *(uint *)(param_3 + 8) = 4;
  }
  IntegerToString(local_14 >> 0x10,param_1,10);
  cVar1 = *param_1;
  pcVar4 = param_1;
  while (cVar1 != '\0') {
    pcVar5 = pcVar4 + 1;
    pcVar4 = pcVar4 + 1;
    cVar1 = *pcVar5;
  }
  if (*(int *)(param_3 + 8) != 0) {
    *pcVar4 = '.';
    iVar2 = 0;
    pcVar4 = pcVar4 + 1;
    if (0 < *(int *)(param_3 + 8)) {
      do {
        local_14 = local_14 & 0xffff;
        uVar3 = local_14 * 10;
        local_14._2_1_ = (char)(uVar3 >> 0x10);
        *pcVar4 = local_14._2_1_ + '0';
        iVar2 = iVar2 + 1;
        pcVar4 = pcVar4 + 1;
        local_14 = uVar3;
      } while (iVar2 < *(int *)(param_3 + 8));
    }
    *pcVar4 = '\0';
  }
  if ((local_14 & 0x8000) != 0) {
    while (pcVar4 != param_1) {
      pcVar5 = pcVar4 + -1;
      if (pcVar4[-1] == '.') {
        pcVar5 = pcVar4 + -2;
      }
      if (*pcVar5 != '9') {
        *pcVar5 = *pcVar5 + '\x01';
        return;
      }
      *pcVar5 = '0';
      pcVar4 = pcVar5;
    }
    pcVar4 = param_1 + 1;
    *param_1 = '1';
    cVar1 = *pcVar4;
    while (cVar1 == '0') {
      pcVar5 = pcVar4 + 1;
      pcVar4 = pcVar4 + 1;
      cVar1 = *pcVar5;
    }
    if (*pcVar4 == '.') {
      *pcVar4 = '0';
      pcVar4[1] = '.';
      pcVar5 = pcVar4 + 2;
      pcVar4 = pcVar4 + 2;
      cVar1 = *pcVar5;
      while (cVar1 == '0') {
        pcVar5 = pcVar4 + 1;
        pcVar4 = pcVar4 + 1;
        cVar1 = *pcVar5;
      }
    }
    *pcVar4 = '0';
    pcVar4[1] = '\0';
  }
  return;
}

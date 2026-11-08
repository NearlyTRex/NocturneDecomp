// Name: FUN_0049d530
// Address: 0049d530
// Address Range: [[0049d530, 0049d577]]
// Convention: unknown
// Signature: void FUN_0049d530(int param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5,char *param_6)

#include "nocturne.h"

void FUN_0049d530(int param_1,uint param_2,uint param_3,int param_4,int param_5,char *param_6)

{
  char cVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(param_1 + 0x1c);
  do {
    cVar1 = *param_6;
    *pcVar2 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = param_6[1];
    param_6 = param_6 + 2;
    pcVar2[1] = cVar1;
    pcVar2 = pcVar2 + 2;
  } while (cVar1 != '\0');
  *(uint *)(param_1 + 8) = param_2;
  *(uint *)(param_1 + 0xc) = param_3;
  *(int *)(param_1 + 0x10) = param_4 + 1;
  *(int *)(param_1 + 0x14) = param_5 + 1;
  return;
}

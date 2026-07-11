// Name: FUN_004f8d50
// Address: 004f8d50
// Address Range: [[004f8d50, 004f8d9e]]
// Convention: unknown
// Signature: void FUN_004f8d50(undefined4 param_1,char *param_2,int param_3)

#include "nocturne.h"

void FUN_004f8d50(uint param_1,char *param_2,int param_3)

{
  char cVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(param_3 + 0x214);
  do {
    cVar1 = *param_2;
    *pcVar2 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = param_2[1];
    param_2 = param_2 + 2;
    pcVar2[1] = cVar1;
    pcVar2 = pcVar2 + 2;
  } while (cVar1 != '\0');
  *(uint *)(param_3 + 0x314) = 0;
  *(uint *)(param_3 + 0x318) = 0;
  FUN_004f8da0(param_1,param_3);
  return;
}

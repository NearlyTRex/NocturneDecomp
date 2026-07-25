// Name: FUN_00476ef0
// Address: 00476ef0
// Address Range: [[00476ef0, 00476f35]]
// Convention: unknown
// Signature: void FUN_00476ef0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,char *param_6)

#include "nocturne.h"

void FUN_00476ef0(int param_1,uint param_2,uint param_3,uint param_4,uint param_5,char *param_6)

{
  char cVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(param_1 + 0x18);
  do {
    cVar1 = *param_6;
    *pcVar2 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = param_6[1];
    param_6 = param_6 + 2;
    pcVar2[1] = cVar1;
    pcVar2 = pcVar2 + 2;
  } while (cVar1 != '\0');
  *(uint *)(param_1 + 4) = param_2;
  *(uint *)(param_1 + 8) = param_3;
  *(uint *)(param_1 + 0xc) = param_4;
  *(uint *)(param_1 + 0x10) = param_5;
  return;
}

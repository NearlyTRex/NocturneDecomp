// Name: FUN_00514860
// Address: 00514860
// Address Range: [[00514860, 005148ae]]
// Convention: unknown
// Signature: void FUN_00514860(undefined4 param_1,char *param_2,int param_3)

#include "nocturne.h"

void FUN_00514860(uint param_1,char *param_2,int param_3)

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
  FUN_005148b0(param_1,param_3);
  return;
}

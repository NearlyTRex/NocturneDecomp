// Name: FUN_1000f360
// Address: 1000f360
// Address Range: [[1000f360, 1000f3bd]]
// Convention: unknown
// Signature: void FUN_1000f360(int param_1,int *param_2,uint *param_3)

#include "nocturne.h"

void FUN_1000f360(int param_1,int *param_2,uint *param_3)

{
  char cVar1;
  char *pcVar2;
  uint uVar3;
  char *pcVar4;
  
  uVar3 = *param_3;
  pcVar2 = (char *)*param_2;
  do {
    pcVar4 = pcVar2;
    if (uVar3 < 2) break;
    pcVar4 = pcVar2 + 1;
    *pcVar2 = (char)(param_1 % 10) + '0';
    param_1 = param_1 / 10;
    uVar3 = *param_3 - 1;
    *param_3 = uVar3;
    pcVar2 = pcVar4;
  } while (0 < param_1);
  pcVar2 = (char *)*param_2;
  *param_2 = (int)pcVar4;
  pcVar4 = pcVar4 + -1;
  do {
    cVar1 = *pcVar4;
    *pcVar4 = *pcVar2;
    pcVar4 = pcVar4 + -1;
    *pcVar2 = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (pcVar2 < pcVar4);
  return;
}

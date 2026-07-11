// Name: FUN_004fbe80
// Address: 004fbe80
// Address Range: [[004fbe80, 004fbee4]]
// Convention: unknown
// Signature: void FUN_004fbe80(int param_1)

#include "nocturne.h"

void FUN_004fbe80(int param_1)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  
  param_1 = param_1 + 0x1f5a0;
  FUN_004bef10(param_1);
  pcVar3 = "BaronProxy";
  pcVar2 = (char *)FUN_0040d540("CBaronWeapon");
  pcVar4 = pcVar2;
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  FUN_004bf360(param_1,pcVar2,1);
  FUN_004c0850(param_1,0,5,1);
  return;
}

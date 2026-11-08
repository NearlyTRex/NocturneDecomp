// Name: FUN_0051ec20
// Address: 0051ec20
// Address Range: [[0051ec20, 0051ec86]]
// Convention: unknown
// Signature: void FUN_0051ec20(int param_1)

#include "nocturne.h"

void FUN_0051ec20(int param_1)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  
  param_1 = param_1 + 0x2437c;
  FUN_004da900(param_1);
  pcVar3 = "BaronProxy";
  pcVar2 = (char *)FUN_0040c5a0("CBaronWeapon");
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
  FUN_004dadb0(param_1,pcVar2,1,0);
  FUN_004db9d0(param_1,0,5,1);
  return;
}

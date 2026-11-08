// Name: FUN_004e01d0
// Address: 004e01d0
// Address Range: [[004e01d0, 004e0241]]
// Convention: unknown
// Signature: void FUN_004e01d0(int param_1)

#include "nocturne.h"

void FUN_004e01d0(int param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  
  FUN_00462580(param_1 + 0x158);
  FUN_00408890(param_1);
  if ((*(char *)(param_1 + 0x3a8) == '\0') &&
     (iVar2 = FUN_005a3260(param_1 + 0x1d0,"elevbutton.kfm"), iVar2 != 0)) {
    pcVar3 = "lever-metal.wav";
    pcVar4 = (char *)(param_1 + 0x3a8);
    do {
      cVar1 = *pcVar3;
      *pcVar4 = cVar1;
      if (cVar1 == '\0') {
        return;
      }
      cVar1 = pcVar3[1];
      pcVar3 = pcVar3 + 2;
      pcVar4[1] = cVar1;
      pcVar4 = pcVar4 + 2;
    } while (cVar1 != '\0');
    return;
  }
  return;
}

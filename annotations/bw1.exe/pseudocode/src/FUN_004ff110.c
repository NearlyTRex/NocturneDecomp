// Name: FUN_004ff110
// Address: 004ff110
// Address Range: [[004ff110, 004ff181]]
// Convention: unknown
// Signature: void FUN_004ff110(int param_1)

#include "nocturne.h"

void FUN_004ff110(int param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  
  FUN_004688e0(param_1 + 0x158);
  FUN_00408850(param_1);
  if ((*(char *)(param_1 + 0x3a8) == '\0') &&
     (iVar2 = FUN_005c04e0(param_1 + 0x1d0,"elevbutton.kfm"), iVar2 != 0)) {
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

// Name: FUN_004c6110
// Address: 004c6110
// Address Range: [[004c6110, 004c6181]]
// Convention: unknown
// Signature: void FUN_004c6110(int param_1)

#include "nocturne.h"

void FUN_004c6110(int param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  
  FUN_00454510(param_1 + 0x150);
  FUN_00409fc0(param_1);
  if ((*(char *)(param_1 + 0x3a0) == '\0') &&
     (iVar2 = FUN_00564520(param_1 + 0x1c8,"elevbutton.kfm"), iVar2 != 0)) {
    pcVar3 = "lever-metal.wav";
    pcVar4 = (char *)(param_1 + 0x3a0);
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

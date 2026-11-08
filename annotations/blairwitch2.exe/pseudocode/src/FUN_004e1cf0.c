// Name: FUN_004e1cf0
// Address: 004e1cf0
// Address Range: [[004e1cf0, 004e1d61]]
// Convention: unknown
// Signature: void FUN_004e1cf0(int param_1)

#include "nocturne.h"

void FUN_004e1cf0(int param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  
  FUN_0044fd00(param_1 + 0x2b4);
  FUN_00408a80(param_1);
  if ((*(char *)(param_1 + 0x504) == '\0') &&
     (iVar2 = FUN_005b8130(param_1 + 0x32c,"elevbutton.kfm"), iVar2 != 0)) {
    pcVar3 = "lever-metal.wav";
    pcVar4 = (char *)(param_1 + 0x504);
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

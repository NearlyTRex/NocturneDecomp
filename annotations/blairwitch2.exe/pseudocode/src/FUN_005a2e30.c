// Name: FUN_005a2e30
// Address: 005a2e30
// Address Range: [[005a2e30, 005a2e81]]
// Convention: unknown
// Signature: void FUN_005a2e30(int param_1,uint param_2)

#include "nocturne.h"

void FUN_005a2e30(int param_1,uint param_2)

{
  char *pcVar1;
  
  if (0x21fb < param_2) {
    if (param_2 < 0x21fd) {
      pcVar1 = "twigfootstep0?.wav";
    }
    else {
      if (param_2 != 0x21fd) goto LAB_005a2e65;
      pcVar1 = "twigswing0?.wav";
    }
    FUN_0055ae50(0x0264B290,param_1,pcVar1,param_1 + 0x20);
  }
LAB_005a2e65:
  FUN_0059e880(param_1,param_2);
  return;
}

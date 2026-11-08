// Name: FUN_0055fe00
// Address: 0055fe00
// Address Range: [[0055fe00, 0055fe9b]]
// Convention: unknown
// Signature: undefined8 FUN_0055fe00(int param_1)

#include "nocturne.h"

ulonglong FUN_0055fe00(int param_1)

{
  uint uVar1;
  ulonglong uVar2;
  
  FUN_004a0520(param_1);
  FUN_0040b5f0(param_1 + 0xc1d0,"speed");
  FUN_0040b7f0(param_1 + 0x158,"modelName");
  FUN_0040b5f0(param_1 + 0xc1e0,"guardDistance");
  uVar1 = FUN_0040b870(param_1 + 0x158,"motion state");
  if (0x00000002 < 2) {
    return CONCAT44(0x00000002,uVar1);
  }
  FUN_0040b670(param_1 + 0xc290,"lightUpEyes");
  uVar2 = FUN_0040b670(param_1 + 0xc30c,"scaredByLight");
  return uVar2;
}

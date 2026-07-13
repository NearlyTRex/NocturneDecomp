// Name: FUN_00540890
// Address: 00540890
// Address Range: [[00540890, 005408b8]]
// Convention: unknown
// Signature: undefined4 FUN_00540890(undefined4 param_1)

#include "nocturne.h"

uint FUN_00540890(uint param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_0047dc30(0x01C03A10,"strangerCannotDie");
  if (iVar1 != 0) {
    return 0;
  }
  uVar2 = FUN_00428710(param_1);
  return uVar2;
}

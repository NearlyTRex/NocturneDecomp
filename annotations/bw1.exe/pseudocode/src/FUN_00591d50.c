// Name: FUN_00591d50
// Address: 00591d50
// Address Range: [[00591d50, 00591d78]]
// Convention: unknown
// Signature: undefined4 FUN_00591d50(undefined4 param_1)

#include "nocturne.h"

uint FUN_00591d50(uint param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_004a6c30(0x01C51D80,"strangerCannotDie");
  if (iVar1 != 0) {
    return 0;
  }
  uVar2 = FUN_00431c30(param_1);
  return uVar2;
}

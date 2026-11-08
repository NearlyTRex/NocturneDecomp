// Name: FUN_00526fc0
// Address: 00526fc0
// Address Range: [[00526fc0, 00526fe8]]
// Convention: unknown
// Signature: undefined4 FUN_00526fc0(undefined4 param_1)

#include "nocturne.h"

uint FUN_00526fc0(uint param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_00491aa0(0x01C6E360,"docCannotDie");
  if (iVar1 != 0) {
    return 0;
  }
  uVar2 = FUN_00431000(param_1);
  return uVar2;
}

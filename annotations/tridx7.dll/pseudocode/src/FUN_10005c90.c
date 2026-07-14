// Name: FUN_10005c90
// Address: 10005c90
// Address Range: [[10005c90, 10005cc8]]
// Convention: unknown
// Signature: undefined4 FUN_10005c90(FILE *param_1)

#include "nocturne.h"

uint FUN_10005c90(FILE *param_1)

{
  uint uVar1;
  
  if (param_1 == (FILE *)0x0) {
    uVar1 = FUN_10005d90(0);
    return uVar1;
  }
  __lock_file(param_1);
  uVar1 = FUN_10005cd0(param_1);
  __unlock_file(param_1);
  return uVar1;
}

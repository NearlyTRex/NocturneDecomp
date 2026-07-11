// Name: FUN_0056fca0
// Address: 0056fca0
// Address Range: [[0056fca0, 0056fcb6] [0056fcc8, 0056fcca]]
// Convention: unknown
// Signature: undefined4 FUN_0056fca0(undefined4 param_1,undefined2 param_2)

#include "nocturne.h"

uint FUN_0056fca0(uint param_1,ushort param_2)

{
  code *pcVar1;
  uint uVar2;
  
  if (DAT_005c2050 != '\0') {
    pcVar1 = (code *)swi(3);
    uVar2 = (*pcVar1)(param_2);
    return uVar2;
  }
  return 0;
}

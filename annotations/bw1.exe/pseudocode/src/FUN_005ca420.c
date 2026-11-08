// Name: FUN_005ca420
// Address: 005ca420
// Address Range: [[005ca420, 005ca436] [005ca448, 005ca44a]]
// Convention: unknown
// Signature: undefined4 FUN_005ca420(undefined4 param_1,undefined2 param_2)

#include "nocturne.h"

uint FUN_005ca420(uint param_1,ushort param_2)

{
  code *pcVar1;
  uint uVar2;
  
  if (DAT_006269d0 != '\0') {
    pcVar1 = (code *)swi(3);
    uVar2 = (*pcVar1)(param_2);
    return uVar2;
  }
  return 0;
}

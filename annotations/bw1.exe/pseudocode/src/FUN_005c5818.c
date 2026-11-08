// Name: FUN_005c5818
// Address: 005c5818
// Address Range: [[005c5818, 005c5853]]
// Convention: unknown
// Signature: int FUN_005c5818(int param_1)

#include "nocturne.h"

int FUN_005c5818(int param_1)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = 0;
  while( true ) {
    uVar1 = FUN_005c5430(param_1);
    if (((&DAT_00626114)[(byte)((char)uVar1 + 1)] & 2) == 0) break;
    iVar2 = iVar2 + 1;
  }
  if ((*(byte *)(param_1 + 0x10) & 2) == 0) {
    FUN_005c543c(uVar1,param_1);
  }
  return iVar2;
}

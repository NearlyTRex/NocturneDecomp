// Name: crt_unknown.c_FUN_005bd548
// Address: 005bd548
// Address Range: [[005bd548, 005bd583]]
// Convention: unknown
// Signature: int crt_unknown_c_FUN_005bd548(int param_1)

#include "nocturne.h"

int FUN_005bd548(int param_1)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = 0;
  while( true ) {
    uVar1 = FUN_005bd160(param_1);
    if (((&DAT_0061ed94)[(byte)((char)uVar1 + 1)] & 2) == 0) break;
    iVar2 = iVar2 + 1;
  }
  if ((*(byte *)(param_1 + 0x10) & 2) == 0) {
    FUN_005bd16c(uVar1,param_1);
  }
  return iVar2;
}

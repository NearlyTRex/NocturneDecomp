// Name: FUN_005a8688
// Address: 005a8688
// Address Range: [[005a8688, 005a86c3]]
// Convention: unknown
// Signature: int FUN_005a8688(int param_1)

#include "nocturne.h"

int FUN_005a8688(int param_1)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = 0;
  while( true ) {
    uVar1 = FUN_005a82a0(param_1);
    if (((&DAT_006074b8)[(byte)((char)uVar1 + 1)] & 2) == 0) break;
    iVar2 = iVar2 + 1;
  }
  if ((*(byte *)(param_1 + 0x10) & 2) == 0) {
    FUN_005a82ac(uVar1,param_1);
  }
  return iVar2;
}

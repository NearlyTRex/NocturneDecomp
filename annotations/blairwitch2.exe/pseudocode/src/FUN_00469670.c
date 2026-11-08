// Name: FUN_00469670
// Address: 00469670
// Address Range: [[00469670, 004696ea]]
// Convention: unknown
// Signature: void FUN_00469670(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00469670(int param_1,int param_2)

{
  int iVar1;
  
  if ((*(int *)(param_1 + 0xc) == 0) || (iVar1 = FUN_00403970(param_2 + 8), iVar1 != 0)) {
    if (*(int *)(param_1 + 4) == 0) {
      _DAT_01c38b54 = 0xc0;
      _DAT_01c38b58 = 6;
      _DAT_01c35e6c = &LAB_0046ec58;
    }
    else {
      _DAT_01c38b54 = 0;
      _DAT_01c38b58 = 0;
      _DAT_01c35e6c = &LAB_0046e936;
    }
    FUN_00469590(param_1,*(uint *)(param_2 + 4),param_2 + 0x18);
  }
  return;
}

// Name: FUN_004f8840
// Address: 004f8840
// Address Range: [[004f8840, 004f886f] [004f8871, 004f8898]]
// Convention: unknown
// Signature: int FUN_004f8840(int param_1,byte param_2)

#include "nocturne.h"

int FUN_004f8840(int param_1,byte param_2)

{
  uint uVar1;
  
  if ((param_2 & 4) != 0) {
    uVar1 = FUN_0056445f(param_1,&DAT_005a14a0);
    FUN_00564486(uVar1);
    return param_1;
  }
  *(byte ***)(param_1 + 0x194) = &PTR_FUN_005a1484;
  FUN_004f8b40(param_1);
  if ((param_2 & 2) == 0) {
    return param_1;
  }
  FUN_00564494(param_1);
  return param_1;
}

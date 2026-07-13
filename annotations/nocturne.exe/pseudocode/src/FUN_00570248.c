// Name: FUN_00570248
// Address: 00570248
// Address Range: [[00570248, 00570271]]
// Convention: unknown
// Signature: int FUN_00570248(undefined4 param_1)

#include "nocturne.h"

int FUN_00570248(uint param_1)

{
  int iVar1;
  
  iVar1 = FUN_0056fe12(param_1);
  *(byte ***)(iVar1 + 0x28) = &PTR_FUN_005a4884;
  FUN_0056fe65(iVar1,0,0,0);
  return iVar1;
}

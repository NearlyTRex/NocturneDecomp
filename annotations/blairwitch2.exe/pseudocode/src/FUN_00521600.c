// Name: FUN_00521600
// Address: 00521600
// Address Range: [[00521600, 00521620]]
// Convention: unknown
// Signature: int FUN_00521600(int param_1)

#include "nocturne.h"

int FUN_00521600(int param_1)

{
  int iVar1;
  
  FUN_00521630(param_1);
  iVar1 = FUN_00480d40(param_1 + 0x34,0);
  return iVar1 + -0x34;
}

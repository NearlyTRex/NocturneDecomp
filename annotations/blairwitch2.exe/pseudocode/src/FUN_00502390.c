// Name: FUN_00502390
// Address: 00502390
// Address Range: [[00502390, 005023d3]]
// Convention: unknown
// Signature: int FUN_00502390(int param_1)

#include "nocturne.h"

int FUN_00502390(int param_1)

{
  int iVar1;
  
  FUN_00502450(param_1);
  iVar1 = FUN_0044dcb0(param_1 + 0x738,0);
  iVar1 = FUN_0044dcb0(iVar1 + -0x398,0);
  iVar1 = FUN_0044dcb0(iVar1 + -0x398,0);
  return iVar1 + -8;
}

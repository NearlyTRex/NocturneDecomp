// Name: FUN_00517c80
// Address: 00517c80
// Address Range: [[00517c80, 00517cb5]]
// Convention: unknown
// Signature: int FUN_00517c80(int param_1)

#include "nocturne.h"

int FUN_00517c80(int param_1)

{
  int iVar1;
  
  FUN_00517cc0(param_1);
  iVar1 = FUN_0051f900(param_1 + 0x1c0c,0);
  iVar1 = FUN_0043f9a0(iVar1 + -0x4bc,0);
  return iVar1 + -0x1750;
}

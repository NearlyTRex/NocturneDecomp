// Name: FUN_0054d370
// Address: 0054d370
// Address Range: [[0054d370, 0054d3bf]]
// Convention: unknown
// Signature: void FUN_0054d370(int param_1)

#include "nocturne.h"

void FUN_0054d370(int param_1)

{
  int iVar1;
  
  FUN_00467160(0x1fe5fac);
  iVar1 = param_1 + 4;
  do {
    FUN_0055c100(iVar1);
    iVar1 = iVar1 + 0x1a4;
  } while (iVar1 != param_1 + 0x19a2c);
  FUN_0059f3c0(0x02C8AE68);
  FUN_0055c0a0(param_1);
  return;
}

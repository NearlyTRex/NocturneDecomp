// Name: FUN_00425a70
// Address: 00425a70
// Address Range: [[00425a70, 00425a93]]
// Convention: unknown
// Signature: undefined4 FUN_00425a70(int param_1,undefined4 param_2)

#include "nocturne.h"

uint FUN_00425a70(int param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = FUN_00547810(param_1 + 0x2b4,param_2);
  iVar2 = FUN_005430e0(uVar1);
  return *(uint *)(iVar2 + 0x5c);
}

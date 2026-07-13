// Name: FUN_00426570
// Address: 00426570
// Address Range: [[00426570, 00426593]]
// Convention: unknown
// Signature: undefined4 FUN_00426570(int param_1,undefined4 param_2)

#include "nocturne.h"

uint FUN_00426570(int param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = FUN_0051e020(param_1 + 0x150,param_2);
  iVar2 = FUN_00519b10(uVar1);
  return *(uint *)(iVar2 + 0x5c);
}

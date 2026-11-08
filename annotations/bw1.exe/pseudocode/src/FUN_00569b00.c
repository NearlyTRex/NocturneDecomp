// Name: FUN_00569b00
// Address: 00569b00
// Address Range: [[00569b00, 00569b1d]]
// Convention: unknown
// Signature: void FUN_00569b00(int param_1)

#include "nocturne.h"

void FUN_00569b00(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_1;
  do {
    iVar1 = iVar2 + 4;
    *(uint *)(iVar2 + 0x2230) = 0;
    iVar2 = iVar1;
  } while (iVar1 != param_1 + 0xf0);
  return;
}

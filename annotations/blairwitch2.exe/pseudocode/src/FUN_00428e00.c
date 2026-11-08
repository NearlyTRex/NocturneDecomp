// Name: FUN_00428e00
// Address: 00428e00
// Address Range: [[00428e00, 00428e23]]
// Convention: unknown
// Signature: void FUN_00428e00(int param_1)

#include "nocturne.h"

void FUN_00428e00(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  do {
    iVar2 = iVar1 + 1;
    (**(code **)(*(int *)(param_1 + 0x2b0) + 0x130))(param_1,iVar1,0);
    iVar1 = iVar2;
  } while (iVar2 < 2);
  return;
}

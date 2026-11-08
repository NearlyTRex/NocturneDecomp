// Name: FUN_00431ce0
// Address: 00431ce0
// Address Range: [[00431ce0, 00431d03]]
// Convention: unknown
// Signature: void FUN_00431ce0(int param_1)

#include "nocturne.h"

void FUN_00431ce0(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  do {
    iVar2 = iVar1 + 1;
    (**(code **)(*(int *)(param_1 + 0x154) + 0x128))(param_1,iVar1,0);
    iVar1 = iVar2;
  } while (iVar2 < 2);
  return;
}

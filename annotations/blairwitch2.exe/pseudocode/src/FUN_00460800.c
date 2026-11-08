// Name: FUN_00460800
// Address: 00460800
// Address Range: [[00460800, 00460834]]
// Convention: unknown
// Signature: void FUN_00460800(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00460800(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00550b70(_DAT_01b4d330);
  if (iVar1 != 0) {
    return;
  }
  _DAT_01b4d330 = (**(code **)(*(int *)(param_1 + 0x2b0) + 0x34))(param_1,param_1 + 0xa88);
  return;
}

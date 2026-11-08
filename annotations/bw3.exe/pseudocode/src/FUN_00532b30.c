// Name: FUN_00532b30
// Address: 00532b30
// Address Range: [[00532b30, 00532b7f]]
// Convention: unknown
// Signature: void FUN_00532b30(int param_1)

#include "nocturne.h"

void FUN_00532b30(int param_1)

{
  int iVar1;
  
  FUN_00460e10(0x203b70c);
  iVar1 = param_1 + 4;
  do {
    FUN_00541ac0(iVar1);
    iVar1 = iVar1 + 0x1a4;
  } while (iVar1 != param_1 + 0x19a2c);
  FUN_005723b0(0x02CFD8B8);
  FUN_00541a60(param_1);
  return;
}

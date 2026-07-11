// Name: FUN_00527c30
// Address: 00527c30
// Address Range: [[00527c30, 00527c61]]
// Convention: unknown
// Signature: void FUN_00527c30(void)

#include "nocturne.h"

void FUN_00527c30(void)

{
  int iVar1;
  
  FUN_00528800();
  iVar1 = 0x2dc1edc;
  FUN_005272b0();
  do {
    FUN_00523a60(iVar1);
    iVar1 = iVar1 + 0x168;
  } while (iVar1 != 0x2dc78dc);
  FUN_00528890();
  return;
}

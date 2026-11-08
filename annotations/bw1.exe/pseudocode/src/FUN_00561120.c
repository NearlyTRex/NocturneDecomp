// Name: FUN_00561120
// Address: 00561120
// Address Range: [[00561120, 00561190]]
// Convention: unknown
// Signature: undefined4 FUN_00561120(int param_1)

#include "nocturne.h"

uint FUN_00561120(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_004a6c30(0x01C51D80,"heroCanSee");
  if (iVar1 != 0) {
    if ((*(int *)(param_1 + 0xc298) == 0) && (iVar1 = FUN_00483e60(DAT_00612560), iVar1 != 0)) {
      return 0;
    }
    if ((*(int *)(0x01CCF390 + 0x25c) != 0) && (iVar1 = FUN_0040cc60(0,2), iVar1 == 1)) {
      uVar2 = FUN_0042f240(param_1);
      return uVar2;
    }
  }
  return 0;
}

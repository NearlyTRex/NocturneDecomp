// Name: FUN_0055fbf0
// Address: 0055fbf0
// Address Range: [[0055fbf0, 0055fc5c]]
// Convention: unknown
// Signature: undefined4 FUN_0055fbf0(int param_1)

#include "nocturne.h"

uint FUN_0055fbf0(int param_1)

{
  int iVar1;
  uint uVar2;
  
  if ((*(int *)(param_1 + 0xc2fc) == 0) && (iVar1 = FUN_00483e60(DAT_00612560), iVar1 != 0)) {
    return 0;
  }
  iVar1 = FUN_00483e60(DAT_00612560);
  if ((iVar1 != 0) && (iVar1 = FUN_004a6c30(0x01C51D80,"heroCanSee"), iVar1 == 0)) {
    return 0;
  }
  uVar2 = FUN_0042f240(param_1);
  return uVar2;
}

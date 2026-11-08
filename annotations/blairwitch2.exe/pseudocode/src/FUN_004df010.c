// Name: FUN_004df010
// Address: 004df010
// Address Range: [[004df010, 004df0d7]]
// Convention: unknown
// Signature: void FUN_004df010(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004df010(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *(int *)(*(int *)(param_1 + 0x468) * 4 + param_1 + 0x5fc);
  if ((iVar2 == 0) || (iVar2 = FUN_0040c8f0(iVar2,_DAT_01ceded8), iVar2 == 0)) {
    iVar3 = 0;
    iVar2 = param_1;
    if (0 < *(int *)(param_1 + 0x10)) {
      do {
        iVar1 = FUN_0040c8f0(*(uint *)(iVar2 + 0x14),_DAT_01ceded8);
        if ((*(int *)(iVar2 + 0x46c) == *(int *)(param_1 + 0x468)) && (iVar1 != 0)) {
          FUN_004dc8c0(param_1,iVar1);
          FUN_00436710(PTR_DAT_00609ed0,"Auto use health\n");
          return;
        }
        iVar3 = iVar3 + 1;
        iVar2 = iVar2 + 4;
      } while (iVar3 < *(int *)(param_1 + 0x10));
    }
    FUN_00436710(PTR_DAT_00609ed0,"no more auto health left\n");
  }
  else {
    FUN_00436710(PTR_DAT_00609ed0,"Auto use selected health\n");
    FUN_004dc8c0(param_1,iVar2);
  }
  return;
}

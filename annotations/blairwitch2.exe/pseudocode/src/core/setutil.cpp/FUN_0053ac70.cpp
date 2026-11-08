// Name: FUN_0053ac70
// Address: 0053ac70
// Address Range: [[0053ac70, 0053ad1a]]
// Convention: unknown
// Signature: void FUN_0053ac70(int param_1,undefined4 param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0053ac70(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  FUN_005b8100(param_2,&DAT_005e6145,param_1 + 0x194);
  iVar1 = FUN_005b8ce0(*(uint *)(param_1 + 0x198),*(int *)(param_1 + 0x194) << 2);
  *(int *)(param_1 + 0x198) = iVar1;
  if (0 < *(int *)(param_1 + 0x194)) {
    if (iVar1 == 0) {
      _DAT_01d046a0 = "..\\core\\setutil.cpp";
      _DAT_01d046a4 = 0xe4;
      FUN_004e4500("Out of memory for pvsList - %d",*(int *)(param_1 + 0x194));
    }
    iVar1 = 0;
    if (0 < *(int *)(param_1 + 0x194)) {
      iVar3 = 0;
      do {
        iVar2 = *(int *)(param_1 + 0x198) + iVar3;
        iVar1 = iVar1 + 1;
        iVar3 = iVar3 + 4;
        FUN_005b8100(param_2,&DAT_005e617c,iVar2);
      } while (iVar1 < *(int *)(param_1 + 0x194));
    }
  }
  return;
}

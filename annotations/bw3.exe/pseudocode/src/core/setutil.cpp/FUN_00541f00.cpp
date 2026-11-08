// Name: FUN_00541f00
// Address: 00541f00
// Address Range: [[00541f00, 00541faa]]
// Convention: unknown
// Signature: void FUN_00541f00(int param_1,undefined4 param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00541f00(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  FUN_005a3230(param_2,&DAT_005d0dbe,param_1 + 0x194);
  iVar1 = FUN_005a3e50(*(uint *)(param_1 + 0x198),*(int *)(param_1 + 0x194) << 2);
  *(int *)(param_1 + 0x198) = iVar1;
  if (0 < *(int *)(param_1 + 0x194)) {
    if (iVar1 == 0) {
      _DAT_01d71de0 = "..\\core\\setutil.cpp";
      _DAT_01d71de4 = 0xe4;
      FUN_004e4330("Out of memory for pvsList - %d",*(int *)(param_1 + 0x194));
    }
    iVar1 = 0;
    if (0 < *(int *)(param_1 + 0x194)) {
      iVar3 = 0;
      do {
        iVar2 = *(int *)(param_1 + 0x198) + iVar3;
        iVar1 = iVar1 + 1;
        iVar3 = iVar3 + 4;
        FUN_005a3230(param_2,&DAT_005d0df5,iVar2);
      } while (iVar1 < *(int *)(param_1 + 0x194));
    }
  }
  return;
}

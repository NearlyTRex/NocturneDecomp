// Name: FUN_0057b880
// Address: 0057b880
// Address Range: [[0057b880, 0057b92e]]
// Convention: unknown
// Signature: undefined4 FUN_0057b880(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0057b880(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0x570) == 0) {
    iVar2 = FUN_0040c840(*(uint *)(param_1 + 0x304),_DAT_01d5ba70);
    uVar1 = 0x01D2130C;
    if (iVar2 != 0) {
      if (*(int *)(param_1 + 0x56c) == 10) {
        iVar3 = *(int *)(iVar2 + 0x20b80);
      }
      else {
        iVar3 = *(int *)(iVar2 + 0x20b84);
      }
      if (iVar3 < *(int *)(param_1 + 0x58c)) {
        if (*(int *)(param_1 + 0x56c) == 10) {
          FUN_004bd910(0x01D2130C);
        }
        return 0;
      }
      iVar3 = iVar3 - *(int *)(param_1 + 0x58c);
      if (*(int *)(param_1 + 0x56c) == 10) {
        *(int *)(iVar2 + 0x20b80) = iVar3;
        FUN_004bd910(uVar1);
        return 1;
      }
      *(int *)(iVar2 + 0x20b84) = iVar3;
      return 1;
    }
  }
  return 1;
}

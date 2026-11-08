// Name: FUN_004dba30
// Address: 004dba30
// Address Range: [[004dba30, 004dba7e]]
// Convention: unknown
// Signature: undefined4 FUN_004dba30(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_004dba30(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar2 = param_1;
  if (0 < *(int *)(param_1 + 0x10)) {
    do {
      iVar1 = FUN_0040c840(*(uint *)(iVar2 + 0x14),_DAT_02d0c150);
      if ((iVar1 != 0) && (param_2 == *(int *)(iVar1 + 0x56c))) {
        return *(uint *)(iVar2 + 0x14);
      }
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 4;
    } while (iVar3 < *(int *)(param_1 + 0x10));
  }
  return 0;
}

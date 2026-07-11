// Name: FUN_00545920
// Address: 00545920
// Address Range: [[00545920, 005459cb]]
// Convention: unknown
// Signature: int FUN_00545920(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00545920(int param_1)

{
  int iVar1;
  bool bVar2;
  
  if ((DAT_006b0278 == 0) && (*(char *)(param_1 + 8) != '\0')) {
    iVar1 = FUN_00545390(_DAT_02dd0f84,*(uint *)(param_1 + 4) & 0xffff,param_1 + 8);
    bVar2 = iVar1 == -1;
    if (bVar2) {
      iVar1 = FUN_00544ef0(_DAT_02dd0f84,param_1 + 8);
      *(int *)(param_1 + 4) = iVar1;
    }
    _DAT_02dd0f80 = iVar1;
    FUN_00545410(_DAT_02dd0f84,iVar1);
    if (_DAT_01c02594 != 0) {
      if (bVar2) {
        FUN_00532440(param_1,_DAT_01c00020);
        return param_1 + 0x18;
      }
      FUN_00532400(param_1,_DAT_01c00020);
    }
    return param_1 + 0x18;
  }
  return param_1 + 0x18;
}

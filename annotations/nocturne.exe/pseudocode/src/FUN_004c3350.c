// Name: FUN_004c3350
// Address: 004c3350
// Address Range: [[004c3350, 004c33fc]]
// Convention: unknown
// Signature: void FUN_004c3350(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004c3350(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if ((*(int *)(param_1 + 0x334) == 0) ||
     (iVar2 = FUN_0040d890(*(int *)(param_1 + 0x334),_DAT_01cae0d0), iVar2 == 0)) {
    iVar3 = 0;
    iVar2 = param_1;
    if (0 < *(int *)(param_1 + 8)) {
      do {
        iVar1 = FUN_0040d890(*(uint *)(iVar2 + 0xc),_DAT_01cae0d0);
        if (iVar1 != 0) {
          FUN_004c1580(param_1,iVar1);
          FUN_0043ac60(PTR_DAT_005ad350,"Auto use health\n");
          return;
        }
        iVar3 = iVar3 + 1;
        iVar2 = iVar2 + 4;
      } while (iVar3 < *(int *)(param_1 + 8));
    }
    FUN_0043ac60(PTR_DAT_005ad350,"no more auto health left\n");
  }
  else {
    FUN_0043ac60(PTR_DAT_005ad350,"Auto use selected health\n");
    FUN_004c1580(param_1,iVar2);
  }
  return;
}

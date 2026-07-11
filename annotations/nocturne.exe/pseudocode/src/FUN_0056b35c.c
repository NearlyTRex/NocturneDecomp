// Name: FUN_0056b35c
// Address: 0056b35c
// Address Range: [[0056b35c, 0056b3c1]]
// Convention: unknown
// Signature: bool FUN_0056b35c(int *param_1)

#include "nocturne.h"

bool FUN_0056b35c(int *param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)((int)param_1 + *(int *)(*param_1 + 4) + 8);
  if (iVar1 != 0) {
    FUN_0056b3c2(iVar1);
  }
  if ((*(uint *)((int)param_1 + *(int *)(*param_1 + 4) + 0xc) & 0x4000) != 0) {
    uVar2 = FUN_0056fdf0(1);
    FUN_00568890(uVar2);
    uVar2 = FUN_0056fdf0(2);
    FUN_00568890(uVar2);
  }
  return *(int *)((int)param_1 + *(int *)(*param_1 + 4) + 0x10) == 0;
}

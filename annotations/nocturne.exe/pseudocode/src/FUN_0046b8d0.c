// Name: FUN_0046b8d0
// Address: 0046b8d0
// Address Range: [[0046b8d0, 0046b9bc]]
// Convention: unknown
// Signature: int FUN_0046b8d0(int param_1,uint *param_2)

#include "nocturne.h"

int FUN_0046b8d0(int param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  
  iVar4 = (int)*param_2 >> 0x1f;
  iVar4 = (int)((*param_2 + iVar4 * -8) - (uint)(iVar4 << 2 < 0)) >> 3;
  iVar5 = (int)param_2[1] >> 0x1f;
  iVar5 = (int)((param_2[1] + iVar5 * -8) - (uint)(iVar5 << 2 < 0)) >> 3;
  iVar6 = (int)param_2[2] >> 0x1f;
  iVar6 = (int)((param_2[2] + iVar6 * -8) - (uint)(iVar6 << 2 < 0)) >> 3;
  if (((((-1 < iVar4) && (-1 < iVar5)) && (-1 < iVar6)) &&
      ((iVar4 < *(int *)(param_1 + 0x40) && (iVar5 < *(int *)(param_1 + 0x44))))) &&
     (iVar6 < *(int *)(param_1 + 0x48))) {
    uVar1 = *param_2;
    uVar2 = param_2[2];
    uVar7 = param_2[1] & 7;
    do {
      do {
        piVar3 = (int *)FUN_004678d0(param_1,iVar4,iVar5,iVar6);
        if (piVar3 == (int *)0x0) {
          return -999;
        }
        if ((*piVar3 != 0) &&
           ((*(byte *)(*piVar3 + (uVar2 & 7) * 8 + uVar7) & (&DAT_005b6d08)[uVar1 & 7]) != 0)) {
          return uVar7 + iVar5 * 8;
        }
        uVar7 = uVar7 - 1;
      } while (-1 < (int)uVar7);
      iVar5 = iVar5 + -1;
      uVar7 = 7;
    } while (-1 < iVar5);
  }
  return -999;
}

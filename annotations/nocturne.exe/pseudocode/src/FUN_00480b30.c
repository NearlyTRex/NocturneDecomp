// Name: FUN_00480b30
// Address: 00480b30
// Address Range: [[00480b30, 00480b9e]]
// Convention: unknown
// Signature: undefined4 FUN_00480b30(int param_1,undefined4 param_2)

#include "nocturne.h"

uint FUN_00480b30(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = FUN_00480ba0(param_1,param_2);
  if (-1 < iVar1) {
    iVar3 = 0;
    for (iVar4 = 0; iVar4 < *(int *)(0x01E57284 + 0x14cd6c); iVar4 = iVar4 + 1) {
      iVar2 = FUN_00564520(*(uint *)(iVar3 + 0x14cd70 + 0x01E57284),
                           param_1 + 0x37da + iVar1 * 0x1e);
      if (iVar2 == 0) {
        return *(uint *)(iVar3 + 0x14cd70 + 0x01E57284);
      }
      iVar3 = iVar3 + 4;
    }
  }
  return 0;
}

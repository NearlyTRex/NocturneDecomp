// Name: FUN_00495050
// Address: 00495050
// Address Range: [[00495050, 004950be]]
// Convention: unknown
// Signature: undefined4 FUN_00495050(int param_1,undefined4 param_2)

#include "nocturne.h"

uint FUN_00495050(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = FUN_004950c0(param_1,param_2);
  if (-1 < iVar1) {
    iVar3 = 0;
    for (iVar4 = 0; iVar4 < *(int *)(0x01ED78C8 + 0x14d164); iVar4 = iVar4 + 1) {
      iVar2 = FUN_005a3260(*(uint *)(iVar3 + 0x14d168 + 0x01ED78C8),
                           param_1 + 0x37da + iVar1 * 0x1e);
      if (iVar2 == 0) {
        return *(uint *)(iVar3 + 0x14d168 + 0x01ED78C8);
      }
      iVar3 = iVar3 + 4;
    }
  }
  return 0;
}

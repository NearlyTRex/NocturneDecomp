// Name: FUN_00491a10
// Address: 00491a10
// Address Range: [[00491a10, 00491a96]]
// Convention: unknown
// Signature: undefined4 FUN_00491a10(int param_1,undefined4 param_2)

#include "nocturne.h"

uint FUN_00491a10(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = FUN_005a3260(param_2,&DAT_005bf4c0);
  if (iVar1 != 0) {
    iVar1 = 0;
    if (0 < *(int *)(param_1 + 0xc84)) {
      iVar3 = param_1 + 0xc88;
      do {
        iVar2 = FUN_005a3260(iVar3,param_2);
        if (iVar2 == 0) {
          return 1;
        }
        iVar1 = iVar1 + 1;
        iVar3 = iVar3 + 0x20;
      } while (iVar1 < *(int *)(param_1 + 0xc84));
    }
    iVar1 = FUN_00494d30(param_1,param_2);
    if (((iVar1 < 0) && (iVar1 = FUN_00494d80(param_1,param_2), iVar1 < 0)) &&
       (iVar1 = FUN_00494dd0(param_1,param_2), iVar1 < 0)) {
      return 0;
    }
  }
  return 1;
}

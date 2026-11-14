// Name: crt_unknown.c_FUN_005afe80
// Address: 005afe80
// Address Range: [[005afe80, 005afed0]]
// Convention: unknown
// Signature: undefined4 crt_unknown_c_FUN_005afe80(int param_1,undefined4 param_2)

#include "nocturne.h"

uint FUN_005afe80(int param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if ((param_1 != 7) && (param_1 != 4)) {
    iVar2 = (*(code *)PTR_crt_unknown_c_FUN_005a7f3c_006079a0)();
    uVar1 = *(uint *)(param_1 * 8 + 0x58 + iVar2);
    iVar2 = (*(code *)PTR_crt_unknown_c_FUN_005a7f3c_006079a0)();
    *(uint *)(iVar2 + param_1 * 8 + 0x58) = param_2;
    return uVar1;
  }
  uVar1 = *(uint *)(&DAT_00607e88 + param_1 * 8);
  *(uint *)(&DAT_00607e88 + param_1 * 8) = param_2;
  return uVar1;
}

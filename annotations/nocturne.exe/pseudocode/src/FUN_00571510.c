// Name: FUN_00571510
// Address: 00571510
// Address Range: [[00571510, 00571560]]
// Convention: unknown
// Signature: undefined4 FUN_00571510(int param_1,undefined4 param_2)

#include "nocturne.h"

uint FUN_00571510(int param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if ((param_1 != 7) && (param_1 != 4)) {
    iVar2 = (*(code *)PTR_FUN_005c1abc)();
    uVar1 = *(uint *)(param_1 * 8 + 0x58 + iVar2);
    iVar2 = (*(code *)PTR_FUN_005c1abc)();
    *(uint *)(iVar2 + param_1 * 8 + 0x58) = param_2;
    return uVar1;
  }
  uVar1 = *(uint *)(&DAT_005c20d8 + param_1 * 8);
  *(uint *)(&DAT_005c20d8 + param_1 * 8) = param_2;
  return uVar1;
}

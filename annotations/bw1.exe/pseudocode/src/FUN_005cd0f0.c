// Name: FUN_005cd0f0
// Address: 005cd0f0
// Address Range: [[005cd0f0, 005cd140]]
// Convention: unknown
// Signature: undefined4 FUN_005cd0f0(int param_1,undefined4 param_2)

#include "nocturne.h"

uint FUN_005cd0f0(int param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if ((param_1 != 7) && (param_1 != 4)) {
    iVar2 = (*(code *)PTR_FUN_006265fc)();
    uVar1 = *(uint *)(param_1 * 8 + 0x58 + iVar2);
    iVar2 = (*(code *)PTR_FUN_006265fc)();
    *(uint *)(iVar2 + param_1 * 8 + 0x58) = param_2;
    return uVar1;
  }
  uVar1 = *(uint *)(&DAT_00626ae4 + param_1 * 8);
  *(uint *)(&DAT_00626ae4 + param_1 * 8) = param_2;
  return uVar1;
}

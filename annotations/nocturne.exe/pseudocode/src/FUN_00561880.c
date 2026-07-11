// Name: FUN_00561880
// Address: 00561880
// Address Range: [[00561880, 005618b5]]
// Convention: unknown
// Signature: undefined4 FUN_00561880(int param_1,undefined4 param_2)

#include "nocturne.h"

uint FUN_00561880(int param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = FUN_005617e0(param_1,param_2);
  if ((-1 < iVar1) && (iVar1 = *(int *)(param_1 + 0x24a8 + iVar1 * 0x44), -1 < iVar1)) {
    return *(uint *)(param_1 + 0x2290 + iVar1 * 4);
  }
  return 0;
}

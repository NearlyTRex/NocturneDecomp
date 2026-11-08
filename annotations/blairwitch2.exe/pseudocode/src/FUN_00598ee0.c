// Name: FUN_00598ee0
// Address: 00598ee0
// Address Range: [[00598ee0, 00598f18]]
// Convention: unknown
// Signature: undefined4 FUN_00598ee0(int param_1,undefined4 param_2)

#include "nocturne.h"

uint FUN_00598ee0(int param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = FUN_00598e40(param_1,param_2);
  if ((-1 < iVar1) && (iVar1 = *(int *)(param_1 + 0x261c + iVar1 * 0x78), -1 < iVar1)) {
    return *(uint *)(param_1 + 0x23f4 + iVar1 * 4);
  }
  return 0;
}

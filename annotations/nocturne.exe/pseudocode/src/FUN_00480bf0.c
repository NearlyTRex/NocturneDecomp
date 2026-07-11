// Name: FUN_00480bf0
// Address: 00480bf0
// Address Range: [[00480bf0, 00480c26]]
// Convention: unknown
// Signature: undefined4 FUN_00480bf0(int param_1,undefined4 param_2)

#include "nocturne.h"

uint FUN_00480bf0(int param_1,uint param_2)

{
  int iVar1;
  
  FUN_00480d60(param_1);
  iVar1 = FUN_00480d10(param_1,param_2);
  if (-1 < iVar1) {
    return *(uint *)(param_1 + 0x3acc + iVar1 * 0x120);
  }
  return 0;
}

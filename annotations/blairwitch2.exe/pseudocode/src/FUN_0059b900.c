// Name: FUN_0059b900
// Address: 0059b900
// Address Range: [[0059b900, 0059b966]]
// Convention: unknown
// Signature: longlong FUN_0059b900(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_0059b900(int param_1,int param_2)

{
  uint uVar1;
  
  param_1 = param_2 * 0x2c + param_1;
  uVar1 = *(uint *)(param_1 + 100);
  if (((((int)uVar1 <= _DAT_01c2a37c) && (_DAT_01c2a37c <= (int)(*(int *)(param_1 + 0x6c) + uVar1)))
      && (*(int *)(param_1 + 0x68) <= _DAT_01c2a380)) &&
     (_DAT_01c2a380 <= *(int *)(param_1 + 0x70) + *(int *)(param_1 + 0x68))) {
    return CONCAT44(uVar1,1);
  }
  return (ulonglong)uVar1 << 0x20;
}

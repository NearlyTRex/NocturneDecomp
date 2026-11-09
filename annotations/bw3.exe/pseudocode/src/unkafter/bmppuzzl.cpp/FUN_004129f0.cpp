// Name: unkafter_bmppuzzl.cpp_FUN_004129f0
// Address: 004129f0
// Address Range: [[004129f0, 00412a4f] [00412a51, 00412a56]]
// Convention: unknown
// Signature: longlong unkafter_bmppuzzl_cpp_FUN_004129f0(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong unkafter_bmppuzzl_cpp_FUN_004129f0(int param_1,int param_2)

{
  uint uVar1;
  
  param_1 = param_2 * 0x2c + param_1;
  uVar1 = *(uint *)(param_1 + 0x6c);
  if (((((int)uVar1 <= _DAT_01c5fadc) && (_DAT_01c5fadc <= (int)(*(int *)(param_1 + 0x74) + uVar1)))
      && (*(int *)(param_1 + 0x70) <= _DAT_01c5fae0)) &&
     (_DAT_01c5fae0 <= *(int *)(param_1 + 0x78) + *(int *)(param_1 + 0x70))) {
    return CONCAT44(uVar1,1);
  }
  return (ulonglong)uVar1 << 0x20;
}

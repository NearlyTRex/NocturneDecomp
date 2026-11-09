// Name: unkafter_bmppuzzl.cpp_FUN_00416cf0
// Address: 00416cf0
// Address Range: [[00416cf0, 00416d4f] [00416d51, 00416d56]]
// Convention: unknown
// Signature: longlong unkafter_bmppuzzl_cpp_FUN_00416cf0(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong unkafter_bmppuzzl_cpp_FUN_00416cf0(int param_1,int param_2)

{
  uint uVar1;
  
  param_1 = param_2 * 0x2c + param_1;
  uVar1 = *(uint *)(param_1 + 0x78);
  if (((((int)uVar1 <= _DAT_01c4353c) && (_DAT_01c4353c <= (int)(*(int *)(param_1 + 0x80) + uVar1)))
      && (*(int *)(param_1 + 0x7c) <= _DAT_01c43540)) &&
     (_DAT_01c43540 <= *(int *)(param_1 + 0x84) + *(int *)(param_1 + 0x7c))) {
    return CONCAT44(uVar1,1);
  }
  return (ulonglong)uVar1 << 0x20;
}

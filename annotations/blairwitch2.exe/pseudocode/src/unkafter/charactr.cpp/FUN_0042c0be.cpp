// Name: unkafter_charactr.cpp_FUN_0042c0be
// Address: 0042c0be
// Address Range: [[0042c0be, 0042c1a9]]
// Convention: unknown
// Signature: undefined4 unkafter_charactr_cpp_FUN_0042c0be(undefined4 *param_1,byte *param_2,int param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint unkafter_charactr_cpp_FUN_0042c0be(uint *param_1,byte *param_2,int param_3)

{
  byte *pbVar1;
  byte bVar2;
  uint in_EAX;
  
  if (_DAT_006141d4 < 6) {
    if (((uint)param_1 & 2) != 0) {
      *(ushort *)param_1 = *(ushort *)((uint)*param_2 * 2 + 0x1c35614);
      param_1 = (uint *)((int)param_1 + 2);
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    }
    while( true ) {
      if (param_3 < 2) break;
      *param_1 = CONCAT22(*(ushort *)((uint)param_2[1] * 2 + 0x1c35614),
                          *(ushort *)((uint)*param_2 * 2 + 0x1c35614));
      param_2 = param_2 + 2;
      param_1 = param_1 + 1;
      param_3 = param_3 + -2;
    }
    if (param_3 + -2 == -1) {
      *(ushort *)param_1 = *(ushort *)((uint)*param_2 * 2 + 0x1c35614);
    }
    return in_EAX;
  }
  if (((uint)param_1 & 2) != 0) {
    *(ushort *)param_1 = *(ushort *)((uint)*param_2 * 2 + 0x1c35614);
    param_1 = (uint *)((int)param_1 + 2);
    param_2 = param_2 + 1;
    param_3 = param_3 + -1;
  }
  while (1 < param_3) {
    pbVar1 = param_2 + 1;
    bVar2 = *param_2;
    param_2 = param_2 + 2;
    *param_1 = CONCAT22(*(ushort *)((uint)*pbVar1 * 2 + 0x1c35614),
                        *(ushort *)((uint)bVar2 * 2 + 0x1c35614));
    param_1 = param_1 + 1;
    param_3 = param_3 + -2;
  }
  if (param_3 + -2 == -1) {
    *(ushort *)param_1 = *(ushort *)((uint)*param_2 * 2 + 0x1c35614);
  }
  return in_EAX;
}

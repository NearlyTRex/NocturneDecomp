// Name: FUN_0056f100
// Address: 0056f100
// Address Range: [[0056f100, 0056f14b]]
// Convention: unknown
// Signature: uint FUN_0056f100(void)

#include "nocturne.h"

uint FUN_0056f100(void)

{
  uint uVar1;
  uint in_EAX;
  uint uVar2;
  uint in_EDX;
  uint uVar3;
  
  if ((in_EDX & 0x7ff00000) != 0) {
    uVar1 = (uint)(CARRY4(in_EDX,in_EDX) || CARRY4(in_EDX * 2,(uint)CARRY4(in_EAX,in_EAX))) << 0x1f;
    uVar2 = in_EAX * 2 + 0x20000000;
    uVar3 = in_EDX * 2 + (uint)CARRY4(in_EAX,in_EAX) + (uint)(0xdfffffff < in_EAX * 2);
    if ((uVar3 == 0) || (0x8fdfffff < uVar3)) {
      return uVar1 | 0x7f800000;
    }
    if (0x701fffff < uVar3) {
      return ((uVar3 + 0x90000000) * 2 + (uint)CARRY4(uVar2,uVar2)) * 2 +
             (uint)CARRY4(uVar2 * 2,uVar2 * 2) | uVar1;
    }
  }
  return 0;
}

// Name: FUN_005c571e
// Address: 005c571e
// Address Range: [[005c571e, 005c5755]]
// Convention: unknown
// Signature: int FUN_005c571e(void)

#include "nocturne.h"

int FUN_005c571e(void)

{
  uint in_EAX;
  uint in_ECX;
  uint in_EDX;
  uint unaff_EBX;
  bool bVar1;
  
  if ((in_EDX & 0x7ff00000) == 0) {
    in_EDX = 0;
  }
  if ((in_ECX & 0x7ff00000) == 0) {
    in_ECX = 0;
  }
  if (-1 < (int)(in_ECX ^ in_EDX)) {
    bVar1 = in_EDX < in_ECX;
    if (in_EDX == in_ECX) {
      bVar1 = in_EAX < unaff_EBX;
    }
    if (in_EDX == in_ECX && in_EAX == unaff_EBX) {
      return 0;
    }
    in_EDX = in_EDX ^ (in_ECX >> 1 | (uint)bVar1 << 0x1f);
  }
  return (uint)CARRY4(in_EDX,in_EDX) * -2 + 1;
}

// Name: crt_unknown.c_FUN_0060e256
// Address: 0060e256
// Address Range: [[0060e256, 0060e28d]]
// Convention: unknown
// Signature: int crt_unknown_c_FUN_0060e256(void)

#include "nocturne.h"

int FUN_0060e256(void)

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

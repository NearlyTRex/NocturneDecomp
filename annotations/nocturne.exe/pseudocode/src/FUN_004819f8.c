// Name: FUN_004819f8
// Address: 004819f8
// Address Range: [[004819f8, 00481a05]]
// Convention: unknown
// Signature: void FUN_004819f8(void)

#include "nocturne.h"

void FUN_004819f8(void)

{
  uint *in_ECX;
  uint in_EDX;
  
  *(char *)((int)in_ECX + 6) = (char)in_EDX;
  *(short *)(in_ECX + 1) = (short)in_EDX;
  *in_ECX = in_EDX;
  return;
}

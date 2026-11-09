// Name: crt_unknown.c_FUN_004926e8
// Address: 004926e8
// Address Range: [[004926e8, 004926f5]]
// Convention: unknown
// Signature: void crt_unknown_c_FUN_004926e8(void)

#include "nocturne.h"

void FUN_004926e8(void)

{
  uint *in_ECX;
  uint in_EDX;
  
  *(char *)((int)in_ECX + 6) = (char)in_EDX;
  *(short *)(in_ECX + 1) = (short)in_EDX;
  *in_ECX = in_EDX;
  return;
}

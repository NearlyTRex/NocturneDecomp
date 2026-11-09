// Name: crt_unknown.c_FUN_004ab098
// Address: 004ab098
// Address Range: [[004ab098, 004ab0a5]]
// Convention: unknown
// Signature: void crt_unknown_c_FUN_004ab098(void)

#include "nocturne.h"

void FUN_004ab098(void)

{
  uint *in_ECX;
  uint in_EDX;
  
  *(char *)((int)in_ECX + 6) = (char)in_EDX;
  *(short *)(in_ECX + 1) = (short)in_EDX;
  *in_ECX = in_EDX;
  return;
}

// Name: FUN_004927e4
// Address: 004927e4
// Address Range: [[004927e4, 004927f2]]
// Convention: unknown
// Signature: void FUN_004927e4(void)

#include "nocturne.h"

void FUN_004927e4(void)

{
  ushort *in_ECX;
  ushort *in_EDX;
  
  *(byte *)(in_ECX + 1) = *(byte *)(in_EDX + 1);
  *in_ECX = *in_EDX;
  return;
}

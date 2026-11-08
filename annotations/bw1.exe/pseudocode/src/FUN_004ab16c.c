// Name: FUN_004ab16c
// Address: 004ab16c
// Address Range: [[004ab16c, 004ab180]]
// Convention: unknown
// Signature: void FUN_004ab16c(void)

#include "nocturne.h"

void FUN_004ab16c(void)

{
  uint *in_ECX;
  uint *in_EDX;
  
  *(byte *)((int)in_ECX + 6) = *(byte *)((int)in_EDX + 6);
  *(ushort *)(in_ECX + 1) = *(ushort *)(in_EDX + 1);
  *in_ECX = *in_EDX;
  return;
}

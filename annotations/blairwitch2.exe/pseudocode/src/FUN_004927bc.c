// Name: FUN_004927bc
// Address: 004927bc
// Address Range: [[004927bc, 004927d0]]
// Convention: unknown
// Signature: void FUN_004927bc(void)

#include "nocturne.h"

void FUN_004927bc(void)

{
  uint *in_ECX;
  uint *in_EDX;
  
  *(byte *)((int)in_ECX + 6) = *(byte *)((int)in_EDX + 6);
  *(ushort *)(in_ECX + 1) = *(ushort *)(in_EDX + 1);
  *in_ECX = *in_EDX;
  return;
}

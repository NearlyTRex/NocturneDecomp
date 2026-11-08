// Name: FUN_004927d4
// Address: 004927d4
// Address Range: [[004927d4, 004927e0]]
// Convention: unknown
// Signature: void FUN_004927d4(void)

#include "nocturne.h"

void FUN_004927d4(void)

{
  uint *in_ECX;
  uint *in_EDX;
  
  *(byte *)(in_ECX + 1) = *(byte *)(in_EDX + 1);
  *in_ECX = *in_EDX;
  return;
}

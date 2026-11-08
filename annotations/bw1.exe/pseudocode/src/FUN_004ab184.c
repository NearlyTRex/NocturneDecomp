// Name: FUN_004ab184
// Address: 004ab184
// Address Range: [[004ab184, 004ab190]]
// Convention: unknown
// Signature: void FUN_004ab184(void)

#include "nocturne.h"

void FUN_004ab184(void)

{
  uint *in_ECX;
  uint *in_EDX;
  
  *(byte *)(in_ECX + 1) = *(byte *)(in_EDX + 1);
  *in_ECX = *in_EDX;
  return;
}

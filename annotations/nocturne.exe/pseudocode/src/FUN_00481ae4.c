// Name: FUN_00481ae4
// Address: 00481ae4
// Address Range: [[00481ae4, 00481af0]]
// Convention: unknown
// Signature: void FUN_00481ae4(void)

#include "nocturne.h"

void FUN_00481ae4(void)

{
  uint *in_ECX;
  uint *in_EDX;
  
  *(byte *)(in_ECX + 1) = *(byte *)(in_EDX + 1);
  *in_ECX = *in_EDX;
  return;
}

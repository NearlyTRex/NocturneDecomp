// Name: FUN_00496034
// Address: 00496034
// Address Range: [[00496034, 00496042]]
// Convention: unknown
// Signature: void FUN_00496034(void)

#include "nocturne.h"

void FUN_00496034(void)

{
  ushort *in_ECX;
  ushort *in_EDX;
  
  *(byte *)(in_ECX + 1) = *(byte *)(in_EDX + 1);
  *in_ECX = *in_EDX;
  return;
}

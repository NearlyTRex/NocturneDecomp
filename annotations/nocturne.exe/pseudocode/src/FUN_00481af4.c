// Name: FUN_00481af4
// Address: 00481af4
// Address Range: [[00481af4, 00481b02]]
// Convention: unknown
// Signature: void FUN_00481af4(void)

#include "nocturne.h"

void FUN_00481af4(void)

{
  ushort *in_ECX;
  ushort *in_EDX;
  
  *(byte *)(in_ECX + 1) = *(byte *)(in_EDX + 1);
  *in_ECX = *in_EDX;
  return;
}

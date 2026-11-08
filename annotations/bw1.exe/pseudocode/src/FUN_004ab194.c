// Name: FUN_004ab194
// Address: 004ab194
// Address Range: [[004ab194, 004ab1a2]]
// Convention: unknown
// Signature: void FUN_004ab194(void)

#include "nocturne.h"

void FUN_004ab194(void)

{
  ushort *in_ECX;
  ushort *in_EDX;
  
  *(byte *)(in_ECX + 1) = *(byte *)(in_EDX + 1);
  *in_ECX = *in_EDX;
  return;
}

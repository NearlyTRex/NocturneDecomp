// Name: FUN_00495f48
// Address: 00495f48
// Address Range: [[00495f48, 00495f51]]
// Convention: unknown
// Signature: void FUN_00495f48(void)

#include "nocturne.h"

void FUN_00495f48(void)

{
  uint *in_ECX;
  uint in_EDX;
  
  *(char *)(in_ECX + 1) = (char)in_EDX;
  *in_ECX = in_EDX;
  return;
}

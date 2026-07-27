// Name: crt_unknown.c_FUN_00481acc
// Address: 00481acc
// Address Range: [[00481acc, 00481ae0]]
// Convention: unknown
// Signature: void crt_unknown_c_FUN_00481acc(void)

#include "nocturne.h"

void FUN_00481acc(void)

{
  uint *in_ECX;
  uint *in_EDX;
  
  *(byte *)((int)in_ECX + 6) = *(byte *)((int)in_EDX + 6);
  *(ushort *)(in_ECX + 1) = *(ushort *)(in_EDX + 1);
  *in_ECX = *in_EDX;
  return;
}

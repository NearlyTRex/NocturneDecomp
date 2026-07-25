// Name: FUN_00481a14
// Address: 00481a14
// Address Range: [[00481a14, 00481a1e]]
// Convention: unknown
// Signature: void FUN_00481a14(void)

#include "nocturne.h"

void FUN_00481a14(void)

{
  ushort *in_ECX;
  ushort in_DX;
  
  *(char *)(in_ECX + 1) = (char)in_DX;
  *in_ECX = in_DX;
  return;
}

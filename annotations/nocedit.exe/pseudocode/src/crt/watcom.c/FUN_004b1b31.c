// Name: crt_watcom.c_FUN_004b1b31
// Address: 004b1b31
// Address Range: [[004b1b31, 004b1b40]]
// Convention: __cdecl
// Signature: void __cdecl crt_watcom_c_FUN_004b1b31(void)

#include "nocturne.h"

void __cdecl FUN_004b1b31(void)

{
  uint *in_ECX;
  uint *in_EDX;
  
  *(byte *)(in_ECX + 1) = *(byte *)(in_EDX + 1);
  *in_ECX = *in_EDX;
  return;
}

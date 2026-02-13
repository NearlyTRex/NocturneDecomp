// Name: crt_watcom.c_FUN_004b1b1c
// Address: 004b1b1c
// Address Range: [[004b1b1c, 004b1b30]]
// Convention: __cdecl
// Signature: void __cdecl crt_watcom_c_FUN_004b1b1c(void)

#include "nocturne.h"

void __cdecl FUN_004b1b1c(void)

{
  uint *in_ECX;
  uint *in_EDX;
  
  *(byte *)((int)in_ECX + 6) = *(byte *)((int)in_EDX + 6);
  *(ushort *)(in_ECX + 1) = *(ushort *)(in_EDX + 1);
  *in_ECX = *in_EDX;
  return;
}

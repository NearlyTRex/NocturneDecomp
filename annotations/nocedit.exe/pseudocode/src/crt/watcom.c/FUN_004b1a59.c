// Name: crt_watcom.c_FUN_004b1a59
// Address: 004b1a59
// Address Range: [[004b1a59, 004b1a6e]]
// Convention: __cdecl
// Signature: char __cdecl crt_watcom_c_FUN_004b1a59(void)

#include "nocturne.h"

char __cdecl FUN_004b1a59(void)

{
  char in_AL;
  ushort *in_ECX;
  ushort in_DX;
  
  *(char *)(in_ECX + 1) = (char)in_DX;
  *in_ECX = in_DX;
  return in_AL + -0x77;
}

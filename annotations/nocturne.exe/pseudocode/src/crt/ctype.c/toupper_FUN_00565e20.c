// Name: crt_ctype.c_toupper_FUN_00565e20
// Address: 00565e20
// Address Range: [[00565e20, 00565e31]]
// Convention: __cdecl
// Signature: int __cdecl crt_ctype_c_toupper_FUN_00565e20(int c)

#include "nocturne.h"

int __cdecl toupper(int c)

{
  if ((0x60 < c) && (c < 0x7b)) {
    c = c + -0x20;
  }
  return c;
}

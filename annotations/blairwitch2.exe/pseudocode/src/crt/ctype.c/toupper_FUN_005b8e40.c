// Name: crt_ctype.c_toupper_FUN_005b8e40
// Address: 005b8e40
// Address Range: [[005b8e40, 005b8e51]]
// Convention: __cdecl
// Signature: int __cdecl crt_ctype_c_toupper_FUN_005b8e40(int c)

#include "nocturne.h"

int __cdecl toupper(int c)

{
  if ((0x60 < c) && (c < 0x7b)) {
    c = c + -0x20;
  }
  return c;
}

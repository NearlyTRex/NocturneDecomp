// Name: crt_ctype.c_toupper_FUN_005c12b0
// Address: 005c12b0
// Address Range: [[005c12b0, 005c12c1]]
// Convention: __cdecl
// Signature: int __cdecl crt_ctype_c_toupper_FUN_005c12b0(int c)

#include "nocturne.h"

int __cdecl toupper(int c)

{
  if ((0x60 < c) && (c < 0x7b)) {
    c = c + -0x20;
  }
  return c;
}

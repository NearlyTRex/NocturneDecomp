// Name: crt_ctype.c_toupper_FUN_005ff9e0
// Address: 005ff9e0
// Address Range: [[005ff9e0, 005ff9f1]]
// Convention: __cdecl
// Signature: int __cdecl crt_ctype_c_toupper_FUN_005ff9e0(int c)

#include "nocturne.h"

int __cdecl crt_ctype_c_toupper_FUN_005ff9e0(int c)

{
  if ((0x60 < c) && (c < 0x7b)) {
    c = c + -0x20;
  }
  return c;
}

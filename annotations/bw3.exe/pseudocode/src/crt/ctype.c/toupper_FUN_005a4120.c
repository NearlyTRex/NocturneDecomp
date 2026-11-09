// Name: crt_ctype.c_toupper_FUN_005a4120
// Address: 005a4120
// Address Range: [[005a4120, 005a4131]]
// Convention: __cdecl
// Signature: int __cdecl crt_ctype_c_toupper_FUN_005a4120(int c)

#include "nocturne.h"

int __cdecl toupper(int c)

{
  if ((0x60 < c) && (c < 0x7b)) {
    c = c + -0x20;
  }
  return c;
}

// Name: crt_ctype.c_toupper_FUN_00565e20
// Address: 00565e20
// Address Range: [[00565e20, 00565e31]]
// Convention: __cdecl
// Signature: int __cdecl crt_ctype_c_toupper_FUN_00565e20(int param_1)

#include "nocturne.h"

int __cdecl toupper(int param_1)

{
  if ((0x60 < param_1) && (param_1 < 0x7b)) {
    param_1 = param_1 + -0x20;
  }
  return param_1;
}

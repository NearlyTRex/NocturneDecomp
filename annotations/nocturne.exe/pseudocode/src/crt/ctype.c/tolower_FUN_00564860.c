// Name: crt_ctype.c_tolower_FUN_00564860
// Address: 00564860
// Address Range: [[00564860, 00564871]]
// Convention: __cdecl
// Signature: int __cdecl crt_ctype_c_tolower_FUN_00564860(int param_1)

#include "nocturne.h"

int __cdecl tolower(int param_1)

{
  if ((0x40 < param_1) && (param_1 < 0x5b)) {
    param_1 = param_1 + 0x20;
  }
  return param_1;
}

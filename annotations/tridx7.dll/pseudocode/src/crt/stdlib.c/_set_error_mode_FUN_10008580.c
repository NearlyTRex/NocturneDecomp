// Name: crt_stdlib.c__set_error_mode_FUN_10008580
// Address: 10008580
// Address Range: [[10008580, 100085a9]]
// Convention: __cdecl
// Signature: int __cdecl crt_stdlib_c__set_error_mode_FUN_10008580(int mode)

#include "nocturne.h"

int __cdecl _set_error_mode(int mode)

{
  int iVar1;
  
  if (-1 < mode) {
    if (mode < 3) {
      iVar1 = DAT_10016c70;
      DAT_10016c70 = mode;
      return iVar1;
    }
    if (mode == 3) {
      return DAT_10016c70;
    }
  }
  return -1;
}

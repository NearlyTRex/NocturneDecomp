// Name: crt_stdio.c_fflush_FUN_00601540
// Address: 00601540
// Address Range: [[00601540, 00601559]]
// Convention: __cdecl
// Signature: int crt_stdio.c_fflush_FUN_00601540(FILE * stream)

#include "nocturne.h"

int __cdecl crt_stdio_c_fflush_FUN_00601540(FILE *stream)

{
  int iVar1;
  
  if (stream == (FILE *)0x0) {
    crt_unknown_c_FUN_00605950();
    return 0;
  }
  iVar1 = crt_stdio_c_fflushInternal_FUN_006039d0(stream);
  return iVar1;
}

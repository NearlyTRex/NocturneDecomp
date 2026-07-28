// Name: crt_stdio.c_fflush_FUN_0056dd60
// Address: 0056dd60
// Address Range: [[0056dd60, 0056dd79]]
// Convention: __cdecl
// Signature: int __cdecl crt_stdio_c_fflush_FUN_0056dd60(_FILE *stream)

#include "nocturne.h"

int __cdecl _fflush(_FILE *stream)

{
  int iVar1;
  
  if (stream == (_FILE *)0x0) {
    FUN_0056aef0();
    return 0;
  }
  iVar1 = FUN_00568890(stream);
  return iVar1;
}

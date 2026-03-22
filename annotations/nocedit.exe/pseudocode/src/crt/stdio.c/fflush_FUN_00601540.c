// Name: crt_stdio.c_fflush_FUN_00601540
// Address: 00601540
// Address Range: [[00601540, 00601559]]
// Convention: __cdecl
// Signature: int __cdecl crt_stdio_c_fflush_FUN_00601540(_FILE *stream)

#include "nocturne.h"

int __cdecl _fflush(_FILE *stream)

{
  int iVar1;
  
  if (stream == (_FILE *)0x0) {
    func_0x00605950();
    return 0;
  }
  iVar1 = func_0x006039d0(stream);
  return iVar1;
}

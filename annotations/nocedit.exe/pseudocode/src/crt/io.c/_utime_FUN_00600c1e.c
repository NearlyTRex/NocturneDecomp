// Name: crt_io.c__utime_FUN_00600c1e
// Address: 00600c1e
// Address Range: [[00600c1e, 00600c22]]
// Convention: __cdecl
// Signature: int __cdecl crt_io_c__utime_FUN_00600c1e(char *filename,_utimbuf *timestamps)

#include "nocturne.h"

int __cdecl _utime(char *filename,_utimbuf *timestamps)

{
  int iVar1;
  
  iVar1 = _utime(filename,timestamps);
  return iVar1;
}

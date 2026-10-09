// Name: engine_dosio.cpp_setFileAttributes_FUN_004819f0
// Address: 004819f0
// Address Range: [[004819f0, 00481a1b]]
// Convention: __cdecl
// Signature: int __cdecl engine_dosio_cpp_setFileAttributes_FUN_004819f0(char *filename,byte flags)

#include "nocturne.h"

int __cdecl engine_dosio_cpp_setFileAttributes_FUN_004819f0(char *filename,byte flags)

{
  int iVar1;
  
  iVar1 = 0x180;
  if ((flags & 8) != 0) {
    iVar1 = 0x100;
  }
  iVar1 = _chmod(filename,iVar1);
  return (uint)(iVar1 == 0);
}

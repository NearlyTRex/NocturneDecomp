// Name: engine_dosio.cpp_setFileAttributes_FUN_00456a30
// Address: 00456a30
// Address Range: [[00456a30, 00456a5b]]
// Convention: __cdecl
// Signature: int __cdecl engine_dosio_cpp_setFileAttributes_FUN_00456a30(char *filename,byte flags)

#include "nocturne.h"

int __cdecl engine_dosio_cpp_setFileAttributes_FUN_00456a30(char *filename,byte flags)

{
  int iVar1;
  
  iVar1 = 0x180;
  if ((flags & 8) != 0) {
    iVar1 = 0x100;
  }
  iVar1 = _chmod(filename,iVar1);
  return (uint)(iVar1 == 0);
}

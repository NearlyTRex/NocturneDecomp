// Name: engine_dosio.cpp_setFileAttributes_FUN_00456a30
// Address: 00456a30
// Address Range: [[00456a30, 00456a5b]]
// Convention: __cdecl
// Signature: int __cdecl engine_dosio_cpp_setFileAttributes_FUN_00456a30(char *filename,byte flags)

#include "nocturne.h"

int __cdecl engine_dosio_cpp_setFileAttributes_FUN_00456a30(char *filename,byte flags)

{
  DWORD DVar1;
  
  DVar1 = 0x180;
  if ((flags & 8) != 0) {
    DVar1 = 0x100;
  }
  DVar1 = engine_dosio_cpp_setReadonlyAttribute_FUN_00565dd0(filename,DVar1);
  return (uint)(DVar1 == 0);
}

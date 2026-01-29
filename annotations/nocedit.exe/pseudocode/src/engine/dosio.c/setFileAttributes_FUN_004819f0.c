// Name: engine_dosio.c_setFileAttributes_FUN_004819f0
// Address: 004819f0
// Address Range: [[004819f0, 00481a1b]]
// Convention: __cdecl
// Signature: int __cdecl engine_dosio_c_setFileAttributes_FUN_004819f0(char *filename,byte flags)

#include "nocturne.h"

int __cdecl engine_dosio_c_setFileAttributes_FUN_004819f0(char *filename,byte flags)

{
  DWORD DVar1;
  
  DVar1 = 0x180;
  if ((flags & 8) != 0) {
    DVar1 = 0x100;
  }
  DVar1 = engine_dosio_c_setReadonlyAttribute_FUN_00600c30(filename,DVar1);
  return (uint)(DVar1 == 0);
}

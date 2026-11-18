// Name: engine_dosio.cpp_deleteFile_FUN_00479950
// Address: 00479950
// Address Range: [[00479950, 00479967]]
// Convention: __cdecl
// Signature: int __cdecl engine_dosio_cpp_deleteFile_FUN_00479950(char *filename)

#include "nocturne.h"

int __cdecl engine_dosio_cpp_deleteFile_FUN_00479950(char *filename)

{
  int iVar1;
  
  iVar1 = _remove(filename);
  return (uint)(iVar1 == 0);
}

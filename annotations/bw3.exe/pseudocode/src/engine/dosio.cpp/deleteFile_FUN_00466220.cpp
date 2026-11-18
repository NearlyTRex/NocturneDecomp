// Name: engine_dosio.cpp_deleteFile_FUN_00466220
// Address: 00466220
// Address Range: [[00466220, 00466237]]
// Convention: __cdecl
// Signature: int __cdecl engine_dosio_cpp_deleteFile_FUN_00466220(char *filename)

#include "nocturne.h"

int __cdecl engine_dosio_cpp_deleteFile_FUN_00466220(char *filename)

{
  int iVar1;
  
  iVar1 = _remove(filename);
  return (uint)(iVar1 == 0);
}

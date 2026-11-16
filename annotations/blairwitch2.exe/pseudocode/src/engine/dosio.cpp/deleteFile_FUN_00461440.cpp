// Name: engine_dosio.cpp_deleteFile_FUN_00461440
// Address: 00461440
// Address Range: [[00461440, 00461457]]
// Convention: __cdecl
// Signature: int __cdecl engine_dosio_cpp_deleteFile_FUN_00461440(char *filename)

#include "nocturne.h"

int __cdecl engine_dosio_cpp_deleteFile_FUN_00461440(char *filename)

{
  int iVar1;
  
  iVar1 = FUN_005ba1e0(filename);
  return (uint)(iVar1 == 0);
}

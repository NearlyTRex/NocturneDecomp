// Name: engine_dosio.cpp_getFileSize_FUN_00478fb0
// Address: 00478fb0
// Address Range: [[00478fb0, 00478ffb]]
// Convention: __cdecl
// Signature: int __cdecl engine_dosio_cpp_getFileSize_FUN_00478fb0(char *directory,char *filename)

#include "nocturne.h"

int __cdecl engine_dosio_cpp_getFileSize_FUN_00478fb0(char *directory,char *filename)

{
  int iVar1;
  byte local_214 [516];
  int local_10;
  
  engine_dosio_cpp_FUN_00478e20(local_214,directory,filename);
  iVar1 = engine_dosio_cpp_findFile_FUN_00478e90(local_214);
  if (iVar1 != 0) {
    return local_10;
  }
  return -1;
}

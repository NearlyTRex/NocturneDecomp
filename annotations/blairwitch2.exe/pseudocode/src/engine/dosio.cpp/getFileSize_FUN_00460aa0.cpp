// Name: engine_dosio.cpp_getFileSize_FUN_00460aa0
// Address: 00460aa0
// Address Range: [[00460aa0, 00460aeb]]
// Convention: __cdecl
// Signature: int __cdecl engine_dosio_cpp_getFileSize_FUN_00460aa0(char *directory,char *filename)

#include "nocturne.h"

int __cdecl engine_dosio_cpp_getFileSize_FUN_00460aa0(char *directory,char *filename)

{
  int iVar1;
  byte local_214 [516];
  int local_10;
  
  engine_dosio_cpp_FUN_00460910(local_214,directory,filename);
  iVar1 = engine_dosio_cpp_findFile_FUN_00460980(local_214);
  if (iVar1 != 0) {
    return local_10;
  }
  return -1;
}

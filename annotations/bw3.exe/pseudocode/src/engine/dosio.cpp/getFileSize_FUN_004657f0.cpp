// Name: engine_dosio.cpp_getFileSize_FUN_004657f0
// Address: 004657f0
// Address Range: [[004657f0, 0046583b]]
// Convention: __cdecl
// Signature: int __cdecl engine_dosio_cpp_getFileSize_FUN_004657f0(char *directory,char *filename)

#include "nocturne.h"

int __cdecl engine_dosio_cpp_getFileSize_FUN_004657f0(char *directory,char *filename)

{
  int iVar1;
  SFoundFileInfo local_214;
  
  engine_dosio_cpp_FUN_00465660(&local_214,directory,filename);
  iVar1 = engine_dosio_cpp_findFile_FUN_004656d0(&local_214);
  if (iVar1 != 0) {
    return local_214.file_size;
  }
  return -1;
}

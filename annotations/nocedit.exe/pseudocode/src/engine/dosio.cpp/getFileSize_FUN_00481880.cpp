// Name: engine_dosio.cpp_getFileSize_FUN_00481880
// Address: 00481880
// Address Range: [[00481880, 004818cb]]
// Convention: __cdecl
// Signature: int __cdecl engine_dosio_cpp_getFileSize_FUN_00481880(char *directory,char *filename)

#include "nocturne.h"

int __cdecl engine_dosio_cpp_getFileSize_FUN_00481880(char *directory,char *filename)

{
  int iVar1;
  SFoundFileInfo local_214;
  
  engine_dosio_cpp_getRelativeFilePath_FUN_004816c0(local_214.found_path,directory,filename);
  iVar1 = engine_dosio_cpp_findFile_FUN_00481760(&local_214);
  if (iVar1 != 0) {
    return local_214.file_size;
  }
  return -1;
}

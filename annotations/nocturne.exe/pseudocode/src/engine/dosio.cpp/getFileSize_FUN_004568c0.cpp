// Name: engine_dosio.cpp_getFileSize_FUN_004568c0
// Address: 004568c0
// Address Range: [[004568c0, 0045690b]]
// Convention: __cdecl
// Signature: int __cdecl engine_dosio_cpp_getFileSize_FUN_004568c0(char *directory,char *filename)

#include "nocturne.h"

int __cdecl engine_dosio_cpp_getFileSize_FUN_004568c0(char *directory,char *filename)

{
  int iVar1;
  SFoundFileInfo local_214;
  
  engine_dosio_cpp_getRelativeFilePath_FUN_00456700(local_214.found_path,directory,filename);
  iVar1 = engine_dosio_cpp_findFile_FUN_004567a0(&local_214);
  if (iVar1 != 0) {
    return local_214.file_size;
  }
  return -1;
}

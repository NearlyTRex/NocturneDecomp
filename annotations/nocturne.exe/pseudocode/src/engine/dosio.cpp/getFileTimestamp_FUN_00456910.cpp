// Name: engine_dosio.cpp_getFileTimestamp_FUN_00456910
// Address: 00456910
// Address Range: [[00456910, 0045694f]]
// Convention: __cdecl
// Signature: uint __cdecl engine_dosio_cpp_getFileTimestamp_FUN_00456910(char *directory_path,char *filename)

#include "nocturne.h"

uint __cdecl engine_dosio_cpp_getFileTimestamp_FUN_00456910(char *directory_path,char *filename)

{
  int iVar1;
  uint uVar2;
  SFoundFileInfo local_214;
  
  engine_dosio_cpp_getRelativeFilePath_FUN_00456700(local_214.found_path,directory_path,filename);
  iVar1 = engine_dosio_cpp_findFile_FUN_004567a0(&local_214);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = local_214.timestamp;
  }
  return uVar2;
}

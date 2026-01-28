// Name: engine_dosio.c_getFileTimestamp_FUN_004818d0
// Address: 004818d0
// Address Range: [[004818d0, 0048190f]]
// Convention: __cdecl
// Signature: uint __cdecl engine_dosio_c_getFileTimestamp_FUN_004818d0(char *directory_path,char *filename)

#include "nocturne.h"

uint __cdecl engine_dosio_c_getFileTimestamp_FUN_004818d0(char *directory_path,char *filename)

{
  int iVar1;
  uint uVar2;
  SFoundFileInfo local_214;
  
  engine_dosio_c_getRelativeFilePath_FUN_004816c0(local_214.found_path,directory_path,filename);
  iVar1 = engine_dosio_c_findFile_FUN_00481760(&local_214);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = local_214.timestamp;
  }
  return uVar2;
}

// Name: engine_dosio.c_getFileTimestamp_FUN_004818d0
// Address: 004818d0
// Address Range: [[004818d0, 0048190f]]
// Convention: __cdecl
// Signature: uint engine_dosio.c_getFileTimestamp_FUN_004818d0(char * directory_path, char * filename)

#include "nocturne.h"

uint __cdecl engine_dosio_c_getFileTimestamp_FUN_004818d0(char *directory_path,char *filename)

{
  uint uVar1;
  BADSPACEBASE *in_ESP;
  uint unaff_retaddr;
  
  engine_dosio_c_getRelativeFilePath_FUN_004816c0(&stack0xfffffdec,directory_path,filename);
  uVar1 = engine_dosio_c_findFile_FUN_00481760((SFoundFileInfo *)&stack0xfffffdf0);
  if (uVar1 != 0) {
    uVar1 = unaff_retaddr;
  }
  return uVar1;
}

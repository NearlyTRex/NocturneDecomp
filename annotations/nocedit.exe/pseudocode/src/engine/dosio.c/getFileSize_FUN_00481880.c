// Name: engine_dosio.c_getFileSize_FUN_00481880
// Address: 00481880
// Address Range: [[00481880, 004818cb]]
// Convention: __cdecl
// Signature: int engine_dosio.c_getFileSize_FUN_00481880(char * directory, char * filename)

#include "nocturne.h"

int __cdecl engine_dosio_c_getFileSize_FUN_00481880(char *directory,char *filename)

{
  int iVar1;
  BADSPACEBASE *in_ESP;
  int iStack_8;
  
  engine_dosio_c_getRelativeFilePath_FUN_004816c0(&stack0xfffffdec,directory,filename);
  iVar1 = engine_dosio_c_findFile_FUN_00481760((SFoundFileInfo *)&stack0xfffffdf0);
  if (iVar1 != 0) {
    return iStack_8;
  }
  return -1;
}

// Name: engine_dosio.c_getFileTimestamp_FUN_00481960
// Address: 00481960
// Address Range: [[00481960, 004819ed]]
// Convention: __cdecl
// Signature: int engine_dosio.c_getFileTimestamp_FUN_00481960(char * directory, char * filename)

#include "nocturne.h"

int __cdecl engine_dosio_c_getFileTimestamp_FUN_00481960(char *directory,char *filename)

{
  int iVar1;
  BADSPACEBASE *in_ESP;
  uint uStack_c;
  
  engine_dosio_c_getRelativeFilePath_FUN_004816c0(&stack0xfffffcd4,directory,filename);
  engine_dosio_c_CFileFinder_ctor_FUN_00481c30((CFileFinder *)&stack0xfffffeec);
  iVar1 = engine_dosio_c_CFileFinder_openSearch_FUN_00481c70
                    ((CFileFinder *)&stack0xfffffef0,&stack0xfffffcdc);
  if (iVar1 != 0) {
    engine_dosio_c_CFileFinder_dtor_FUN_00481c50((CFileFinder *)&stack0xfffffef4,0);
    return uStack_c;
  }
  engine_dosio_c_CFileFinder_dtor_FUN_00481c50((CFileFinder *)&stack0xfffffef4,0);
  return -1;
}

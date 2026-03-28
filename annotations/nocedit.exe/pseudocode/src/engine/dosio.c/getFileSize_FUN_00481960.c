// Name: engine_dosio.c_getFileSize_FUN_00481960
// Address: 00481960
// Address Range: [[00481960, 004819ed]]
// Convention: __cdecl
// Signature: int __cdecl engine_dosio_c_getFileSize_FUN_00481960(char *directory,char *filename)

#include "nocturne.h"

int __cdecl engine_dosio_c_getFileSize_FUN_00481960(char *directory,char *filename)

{
  int iVar1;
  char local_32c [532];
  CFileFinder local_118;
  
  engine_dosio_c_getRelativeFilePath_FUN_004816c0(local_32c,directory,filename);
  engine_dosio_c_CFileFinder_ctor_FUN_00481c30(&local_118);
  iVar1 = engine_dosio_c_CFileFinder_openSearch_FUN_00481c70(&local_118,local_32c);
  if (iVar1 != 0) {
    engine_dosio_c_CFileFinder_dtor_FUN_00481c50(&local_118,0);
    return local_118.file_size;
  }
  engine_dosio_c_CFileFinder_dtor_FUN_00481c50(&local_118,0);
  return -1;
}

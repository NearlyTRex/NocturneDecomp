// Name: engine_dosio.cpp_getFileSizeWithFinder_FUN_004569a0
// Address: 004569a0
// Address Range: [[004569a0, 00456a2d]]
// Convention: __cdecl
// Signature: int __cdecl engine_dosio_cpp_getFileSizeWithFinder_FUN_004569a0(char *directory,char *filename)

#include "nocturne.h"

int __cdecl engine_dosio_cpp_getFileSizeWithFinder_FUN_004569a0(char *directory,char *filename)

{
  int iVar1;
  char local_32c [532];
  CFileFinder local_118;
  
  engine_dosio_cpp_getRelativeFilePath_FUN_00456700(local_32c,directory,filename);
  engine_dosio_cpp_CFileFinder_ctor_FUN_00456c00(&local_118);
  iVar1 = engine_dosio_cpp_CFileFinder_openSearch_FUN_00456c40(&local_118,local_32c);
  if (iVar1 != 0) {
    engine_dosio_cpp_CFileFinder_dtor_FUN_00456c20(&local_118,0);
    return local_118.attributes;
  }
  engine_dosio_cpp_CFileFinder_dtor_FUN_00456c20(&local_118,0);
  return -1;
}

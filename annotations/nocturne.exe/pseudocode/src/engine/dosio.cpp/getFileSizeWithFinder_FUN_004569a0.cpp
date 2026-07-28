// Name: engine_dosio.cpp_getFileSizeWithFinder_FUN_004569a0
// Address: 004569a0
// Address Range: [[004569a0, 00456a2d]]
// Convention: unknown
// Signature: uint engine_dosio_cpp_getFileSizeWithFinder_FUN_004569a0(void)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint engine_dosio_cpp_getFileSizeWithFinder_FUN_004569a0(void)

{
  int iVar1;
  char *in_stack_00000004;
  char *in_stack_00000008;
  char local_32c [532];
  CFileFinder local_118;
  
  engine_dosio_cpp_getRelativeFilePath_FUN_00456700(local_32c,in_stack_00000004,in_stack_00000008);
  engine_dosio_cpp_CFileFinder_ctor_FUN_00456c00(&local_118);
  iVar1 = engine_dosio_cpp_CFileFinder_openSearch_FUN_00456c40(&local_118,local_32c);
  if (iVar1 != 0) {
    engine_dosio_cpp_CFileFinder_dtor_FUN_00456c20(&local_118,0);
    return local_118.attributes;
  }
  engine_dosio_cpp_CFileFinder_dtor_FUN_00456c20(&local_118,0);
  return 0xffffffff;
}

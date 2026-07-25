// Name: FUN_004569a0
// Address: 004569a0
// Address Range: [[004569a0, 00456a2d]]
// Convention: unknown
// Signature: undefined4 FUN_004569a0(void)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint FUN_004569a0(void)

{
  int iVar1;
  byte local_32c [532];
  byte local_118 [256];
  uint local_18;
  
  engine_dosio_cpp_getRelativeFilePath_FUN_00456700(local_32c);
  engine_dosio_cpp_CFileFinder_ctor_FUN_00456c00(local_118);
  iVar1 = engine_dosio_cpp_CFileFinder_openSearch_FUN_00456c40(local_118,local_32c);
  if (iVar1 != 0) {
    engine_dosio_cpp_CFileFinder_dtor_FUN_00456c20(local_118,0);
    return local_18;
  }
  engine_dosio_cpp_CFileFinder_dtor_FUN_00456c20(local_118,0);
  return 0xffffffff;
}

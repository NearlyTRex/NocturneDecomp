// Name: engine_dosio.cpp_getFileSize_FUN_004568c0
// Address: 004568c0
// Address Range: [[004568c0, 0045690b]]
// Convention: __cdecl
// Signature: undefined4 __cdecl engine_dosio_cpp_getFileSize_FUN_004568c0(undefined4 param_1,undefined4 param_2)

#include "nocturne.h"

uint __cdecl engine_dosio_cpp_getFileSize_FUN_004568c0(uint param_1,uint param_2)

{
  int iVar1;
  byte local_214 [516];
  uint local_10;
  
  engine_dosio_cpp_getRelativeFilePath_FUN_00456700(local_214,param_1,param_2);
  iVar1 = engine_dosio_cpp_findFile_FUN_004567a0(local_214);
  if (iVar1 != 0) {
    return local_10;
  }
  return 0xffffffff;
}

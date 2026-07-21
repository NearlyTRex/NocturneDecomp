// Name: engine_dosio.cpp_getFileTimestamp_FUN_00456910
// Address: 00456910
// Address Range: [[00456910, 0045694f]]
// Convention: __cdecl
// Signature: undefined4 __cdecl engine_dosio_cpp_getFileTimestamp_FUN_00456910(undefined4 param_1,undefined4 param_2)

#include "nocturne.h"

uint __cdecl engine_dosio_cpp_getFileTimestamp_FUN_00456910(uint param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  byte local_214 [524];
  uint local_8;
  
  engine_dosio_cpp_getRelativeFilePath_FUN_00456700(local_214,param_1,param_2);
  iVar1 = engine_dosio_cpp_findFile_FUN_004567a0(local_214);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = local_8;
  }
  return uVar2;
}

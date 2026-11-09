// Name: engine_dosio.cpp_findFile_FUN_004656d0
// Address: 004656d0
// Address Range: [[004656d0, 00465727]]
// Convention: __cdecl
// Signature: undefined4 __cdecl engine_dosio_cpp_findFile_FUN_004656d0(undefined4 param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __cdecl engine_dosio_cpp_findFile_FUN_004656d0(uint param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  if (_DAT_01b8517c < 1) {
    uVar2 = engine_dosio_cpp_findFileNormally_FUN_00465730(param_1);
    return uVar2;
  }
  iVar4 = 0;
  if (0 < _DAT_01b8517c) {
    iVar3 = 0;
    do {
      iVar1 = (**(code **)(iVar3 + 0x1b85180))(param_1);
      if (iVar1 != 0) {
        return 1;
      }
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + 4;
    } while (iVar4 < _DAT_01b8517c);
  }
  return 0;
}

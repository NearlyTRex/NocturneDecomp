// Name: engine_dosio.cpp_findFile_FUN_00460980
// Address: 00460980
// Address Range: [[00460980, 004609d7]]
// Convention: __cdecl
// Signature: undefined4 __cdecl engine_dosio_cpp_findFile_FUN_00460980(undefined4 param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __cdecl engine_dosio_cpp_findFile_FUN_00460980(uint param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  if (_DAT_01b4d370 < 1) {
    uVar2 = engine_dosio_cpp_findFileNormally_FUN_004609e0(param_1);
    return uVar2;
  }
  iVar4 = 0;
  if (0 < _DAT_01b4d370) {
    iVar3 = 0;
    do {
      iVar1 = (**(code **)(iVar3 + 0x1b4d374))(param_1);
      if (iVar1 != 0) {
        return 1;
      }
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + 4;
    } while (iVar4 < _DAT_01b4d370);
  }
  return 0;
}

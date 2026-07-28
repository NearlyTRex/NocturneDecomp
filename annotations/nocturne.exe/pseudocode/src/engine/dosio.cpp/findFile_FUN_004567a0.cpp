// Name: engine_dosio.cpp_findFile_FUN_004567a0
// Address: 004567a0
// Address Range: [[004567a0, 004567f7]]
// Convention: __cdecl
// Signature: int __cdecl engine_dosio_cpp_findFile_FUN_004567a0(SFoundFileInfo *context)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl engine_dosio_cpp_findFile_FUN_004567a0(SFoundFileInfo *context)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (_DAT_01af4ed8 < 1) {
    iVar3 = engine_dosio_cpp_findFileNormally_FUN_00456800(context);
    return iVar3;
  }
  iVar3 = 0;
  if (0 < _DAT_01af4ed8) {
    iVar2 = 0;
    do {
      iVar1 = (**(code **)(iVar2 + 0x1af4edc))(context);
      if (iVar1 != 0) {
        return 1;
      }
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 4;
    } while (iVar3 < _DAT_01af4ed8);
  }
  return 0;
}

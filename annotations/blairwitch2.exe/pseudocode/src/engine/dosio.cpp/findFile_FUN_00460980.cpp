// Name: engine_dosio.cpp_findFile_FUN_00460980
// Address: 00460980
// Address Range: [[00460980, 004609d7]]
// Convention: __cdecl
// Signature: int __cdecl engine_dosio_cpp_findFile_FUN_00460980(SFoundFileInfo *context)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl engine_dosio_cpp_findFile_FUN_00460980(SFoundFileInfo *context)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (_DAT_01b4d370 < 1) {
    iVar3 = engine_dosio_cpp_findFileNormally_FUN_004609e0(context);
    return iVar3;
  }
  iVar3 = 0;
  if (0 < _DAT_01b4d370) {
    iVar2 = 0;
    do {
      iVar1 = (**(code **)(iVar2 + 0x1b4d374))(context);
      if (iVar1 != 0) {
        return 1;
      }
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 4;
    } while (iVar3 < _DAT_01b4d370);
  }
  return 0;
}

// Name: engine_dosio.cpp_findFile_FUN_00478e90
// Address: 00478e90
// Address Range: [[00478e90, 00478ee7]]
// Convention: __cdecl
// Signature: int __cdecl engine_dosio_cpp_findFile_FUN_00478e90(SFoundFileInfo *context)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl engine_dosio_cpp_findFile_FUN_00478e90(SFoundFileInfo *context)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (_DAT_01b6892c < 1) {
    iVar3 = engine_dosio_cpp_findFileNormally_FUN_00478ef0(context);
    return iVar3;
  }
  iVar3 = 0;
  if (0 < _DAT_01b6892c) {
    iVar2 = 0;
    do {
      iVar1 = (**(code **)(iVar2 + 0x1b68930))(context);
      if (iVar1 != 0) {
        return 1;
      }
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 4;
    } while (iVar3 < _DAT_01b6892c);
  }
  return 0;
}

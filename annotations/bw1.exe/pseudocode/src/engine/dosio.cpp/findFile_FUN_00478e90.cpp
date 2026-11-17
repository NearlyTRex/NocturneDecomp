// Name: engine_dosio.cpp_findFile_FUN_00478e90
// Address: 00478e90
// Address Range: [[00478e90, 00478ee7]]
// Convention: __cdecl
// Signature: int __cdecl engine_dosio_cpp_findFile_FUN_00478e90(SFoundFileInfo *context)

#include "nocturne.h"

int __cdecl engine_dosio_cpp_findFile_FUN_00478e90(SFoundFileInfo *context)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (g_INT_01b6892c < 1) {
    iVar3 = engine_dosio_cpp_findFileNormally_FUN_00478ef0(context);
    return iVar3;
  }
  iVar3 = 0;
  if (0 < g_INT_01b6892c) {
    iVar2 = 0;
    do {
      iVar1 = (**(code **)((int)g_FileSearchHandlerFunc_PTR_ARRAY_01b68930 + iVar2))(context);
      if (iVar1 != 0) {
        return 1;
      }
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 4;
    } while (iVar3 < g_INT_01b6892c);
  }
  return 0;
}

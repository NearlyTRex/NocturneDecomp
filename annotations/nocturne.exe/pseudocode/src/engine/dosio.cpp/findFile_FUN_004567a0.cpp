// Name: engine_dosio.cpp_findFile_FUN_004567a0
// Address: 004567a0
// Address Range: [[004567a0, 004567f7]]
// Convention: __cdecl
// Signature: int __cdecl engine_dosio_cpp_findFile_FUN_004567a0(SFoundFileInfo *context)

#include "nocturne.h"

int __cdecl engine_dosio_cpp_findFile_FUN_004567a0(SFoundFileInfo *context)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (g_INT_01af4ed8 < 1) {
    iVar3 = engine_dosio_cpp_findFileNormally_FUN_00456800(context);
    return iVar3;
  }
  iVar3 = 0;
  if (0 < g_INT_01af4ed8) {
    iVar2 = 0;
    do {
      iVar1 = (**(code **)((int)g_FileSearchHandlerFunc_PTR_ARRAY_01af4edc + iVar2))(context);
      if (iVar1 != 0) {
        return 1;
      }
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 4;
    } while (iVar3 < g_INT_01af4ed8);
  }
  return 0;
}

// Name: engine_dosio.c_findFile_FUN_00481760
// Address: 00481760
// MANUAL RECONSTRUCTION
// Address Range: [[00481760, 004817b7]]
// Convention: __cdecl
// Signature: int __cdecl engine_dosio_c_findFile_FUN_00481760(SFoundFileInfo *context)

#include "nocturne.h"

int __cdecl engine_dosio_c_findFile_FUN_00481760(SFoundFileInfo *context)

{
  int iVar1;
  int iVar3;

  if (g_NumSearchHandlers < 1) {
    iVar3 = engine_dosio_c_findFileNormally_FUN_004817c0(context);
    return iVar3;
  }
  iVar3 = 0;
  if (0 < g_NumSearchHandlers) {
    do {
      iVar1 = ((int (*)(SFoundFileInfo *))g_SearchHandlers[iVar3])(context);
      if (iVar1 != 0) {
        return 1;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < g_NumSearchHandlers);
  }
  return 0;
}

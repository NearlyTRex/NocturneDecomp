// Name: core_morph.cpp_skipLine_FUN_0052cd30
// Address: 0052cd30
// Address Range: [[0052cd30, 0052cd48]]
// Convention: __cdecl
// Signature: void __cdecl core_morph_cpp_skipLine_FUN_0052cd30(_FILE *file_handle)

#include "nocturne.h"

void __cdecl core_morph_cpp_skipLine_FUN_0052cd30(_FILE *file_handle)

{
  int iVar1;
  
  do {
    iVar1 = _fgetc(file_handle);
    if (iVar1 < 0) {
      return;
    }
  } while (iVar1 != 10);
  return;
}

// Name: core_setedit.cpp_skipLine_FUN_00578a00
// Address: 00578a00
// Address Range: [[00578a00, 00578a18]]
// Convention: __cdecl
// Signature: void __cdecl core_setedit_cpp_skipLine_FUN_00578a00(_FILE *file_handle)

#include "nocturne.h"

void __cdecl core_setedit_cpp_skipLine_FUN_00578a00(_FILE *file_handle)

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

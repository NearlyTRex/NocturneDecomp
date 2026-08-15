// Name: core_dmodel.cpp_skipLines_FUN_00452560
// Address: 00452560
// Address Range: [[00452560, 00452587]]
// Convention: __cdecl
// Signature: void __cdecl core_dmodel_cpp_skipLines_FUN_00452560(_FILE *file_handle,int line_count)

#include "nocturne.h"

void __cdecl core_dmodel_cpp_skipLines_FUN_00452560(_FILE *file_handle,int line_count)

{
  int iVar1;
  
  do {
    if (line_count < 1) {
      return;
    }
    do {
      iVar1 = _fgetc(file_handle);
      if (iVar1 < 0) {
        return;
      }
    } while (iVar1 != 10);
    line_count = line_count + -1;
  } while( true );
}

// Name: core_dmodel.cpp_skipLines_FUN_00476c80
// Address: 00476c80
// Address Range: [[00476c80, 00476ca7]]
// Convention: __cdecl
// Signature: void __cdecl core_dmodel_cpp_skipLines_FUN_00476c80(FILE *file_handle,int line_count)

#include "nocturne.h"

void __cdecl core_dmodel_cpp_skipLines_FUN_00476c80(FILE *file_handle,int line_count)

{
  int iVar1;
  
  do {
    if (line_count < 1) {
      return;
    }
    do {
      iVar1 = crt_stdio_c_fgetc_FUN_005fe840(file_handle);
      if (iVar1 < 0) {
        return;
      }
    } while (iVar1 != 10);
    line_count = line_count + -1;
  } while( true );
}

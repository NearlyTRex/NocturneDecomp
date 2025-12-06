// Name: shape_meshlod.cpp_skipLines_FUN_00515160
// Address: 00515160
// Address Range: [[00515160, 00515187]]
// Convention: __cdecl
// Signature: void shape_meshlod.cpp_skipLines_FUN_00515160(FILE * file_handle, int line_count)

#include "nocturne.h"

void __cdecl shape_meshlod_cpp_skipLines_FUN_00515160(FILE *file_handle,int line_count)

{
  int iVar1;
  
  if (0 < line_count) {
    do {
      iVar1 = crt_stdio_c_fgetc_FUN_005fe840(file_handle);
      if (iVar1 < 0) {
        return;
      }
    } while ((iVar1 != 10) || (line_count = line_count + -1, 0 < line_count));
  }
  return;
}

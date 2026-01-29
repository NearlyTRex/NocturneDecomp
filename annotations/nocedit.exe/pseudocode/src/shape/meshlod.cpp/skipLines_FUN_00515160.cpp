// Name: shape_meshlod.cpp_skipLines_FUN_00515160
// Address: 00515160
// Address Range: [[00515160, 00515187]]
// Convention: __cdecl
// Signature: void __cdecl shape_meshlod_cpp_skipLines_FUN_00515160(_FILE *file_handle,int line_count)

#include "nocturne.h"

void __cdecl shape_meshlod_cpp_skipLines_FUN_00515160(_FILE *file_handle,int line_count)

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

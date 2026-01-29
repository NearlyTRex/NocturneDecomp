// Name: shape_design.c_skipLines_FUN_00459360
// Address: 00459360
// Address Range: [[00459360, 0045939f]]
// Convention: __cdecl
// Signature: void __cdecl shape_design_c_skipLines_FUN_00459360(_FILE *file,int line_count)

#include "nocturne.h"

void __cdecl shape_design_c_skipLines_FUN_00459360(_FILE *file,int line_count)

{
  int iVar1;
  
  do {
    if (line_count < 1) {
      return;
    }
    do {
      iVar1 = _fgetc(file);
      if (iVar1 < 0) {
        return;
      }
    } while (iVar1 != 10);
    line_count = line_count + -1;
  } while( true );
}

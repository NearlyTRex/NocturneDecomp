// Name: engine_dosio.cpp_callRelativeFilePathHook_FUN_00478e20
// Address: 00478e20
// Address Range: [[00478e20, 00478e3a]]
// Convention: __cdecl
// Signature: void __cdecl engine_dosio_cpp_callRelativeFilePathHook_FUN_00478e20(char *dest_path,char *directory,char *filename)

#include "nocturne.h"

void __cdecl engine_dosio_cpp_callRelativeFilePathHook_FUN_00478e20(char *dest_path,char *directory,char *filename)

{
  (*(code *)PTR_engine_dosio_cpp_getRelativeFilePath_FUN_00478dc0_00612508)
            (dest_path,directory,filename);
  return;
}

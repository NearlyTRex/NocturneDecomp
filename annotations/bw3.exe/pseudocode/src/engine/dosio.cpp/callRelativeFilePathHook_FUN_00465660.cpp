// Name: engine_dosio.cpp_callRelativeFilePathHook_FUN_00465660
// Address: 00465660
// Address Range: [[00465660, 0046567a]]
// Convention: __cdecl
// Signature: void __cdecl engine_dosio_cpp_callRelativeFilePathHook_FUN_00465660(char *dest_path,char *directory,char *filename)

#include "nocturne.h"

void __cdecl engine_dosio_cpp_callRelativeFilePathHook_FUN_00465660(char *dest_path,char *directory,char *filename)

{
  (*(code *)PTR_engine_dosio_cpp_getRelativeFilePath_FUN_00465600_005f2ad0)
            (dest_path,directory,filename);
  return;
}

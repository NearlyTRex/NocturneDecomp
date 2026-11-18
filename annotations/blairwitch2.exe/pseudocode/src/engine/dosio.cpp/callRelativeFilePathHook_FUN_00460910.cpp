// Name: engine_dosio.cpp_callRelativeFilePathHook_FUN_00460910
// Address: 00460910
// Address Range: [[00460910, 0046092a]]
// Convention: __cdecl
// Signature: void __cdecl engine_dosio_cpp_callRelativeFilePathHook_FUN_00460910(char *dest_path,char *directory,char *filename)

#include "nocturne.h"

void __cdecl engine_dosio_cpp_callRelativeFilePathHook_FUN_00460910(char *dest_path,char *directory,char *filename)

{
  (*(code *)PTR_engine_dosio_cpp_getRelativeFilePath_FUN_004608b0_0060b228)
            (dest_path,directory,filename);
  return;
}

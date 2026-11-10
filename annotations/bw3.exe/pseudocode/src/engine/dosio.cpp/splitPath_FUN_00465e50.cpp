// Name: engine_dosio.cpp_splitPath_FUN_00465e50
// Address: 00465e50
// Address Range: [[00465e50, 00465e77]]
// Convention: __cdecl
// Signature: void __cdecl engine_dosio_cpp_splitPath_FUN_00465e50(char *full_path,char *drive,char *directory,char *filename,char *extension)

#include "nocturne.h"

void __cdecl engine_dosio_cpp_splitPath_FUN_00465e50(char *full_path,char *drive,char *directory,char *filename,char *extension)

{
  splitpath(full_path,drive,directory,filename,extension);
  return;
}

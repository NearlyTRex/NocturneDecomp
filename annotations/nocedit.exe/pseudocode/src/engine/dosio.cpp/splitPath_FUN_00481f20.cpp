// Name: engine_dosio.cpp_splitPath_FUN_00481f20
// Address: 00481f20
// Address Range: [[00481f20, 00481f47]]
// Convention: __cdecl
// Signature: void __cdecl engine_dosio_cpp_splitPath_FUN_00481f20(char *full_path,char *drive,char *directory,char *filename,char *extension)

#include "nocturne.h"

void __cdecl engine_dosio_cpp_splitPath_FUN_00481f20(char *full_path,char *drive,char *directory,char *filename,char *extension)

{
  splitpath(full_path,drive,directory,filename,extension);
  return;
}

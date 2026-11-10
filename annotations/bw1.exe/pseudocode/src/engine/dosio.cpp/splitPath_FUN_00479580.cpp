// Name: engine_dosio.cpp_splitPath_FUN_00479580
// Address: 00479580
// Address Range: [[00479580, 004795a7]]
// Convention: __cdecl
// Signature: void __cdecl engine_dosio_cpp_splitPath_FUN_00479580(char *full_path,char *drive,char *directory,char *filename,char *extension)

#include "nocturne.h"

void __cdecl engine_dosio_cpp_splitPath_FUN_00479580(char *full_path,char *drive,char *directory,char *filename,char *extension)

{
  splitpath(full_path,drive,directory,filename,extension);
  return;
}

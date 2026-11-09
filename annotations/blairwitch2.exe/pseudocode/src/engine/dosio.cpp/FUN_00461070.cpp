// Name: engine_dosio.cpp_FUN_00461070
// Address: 00461070
// Address Range: [[00461070, 00461097]]
// Convention: __cdecl
// Signature: void __cdecl engine_dosio_cpp_FUN_00461070(char *full_path,char *drive,char *directory,char *filename,char *extension)

#include "nocturne.h"

void __cdecl engine_dosio_cpp_FUN_00461070(char *full_path,char *drive,char *directory,char *filename,char *extension)

{
  splitpath(full_path,drive,directory,filename,extension);
  return;
}

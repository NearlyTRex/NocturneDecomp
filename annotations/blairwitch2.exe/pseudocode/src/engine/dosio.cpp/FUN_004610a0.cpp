// Name: engine_dosio.cpp_FUN_004610a0
// Address: 004610a0
// Address Range: [[004610a0, 004610c7]]
// Convention: __cdecl
// Signature: void __cdecl engine_dosio_cpp_FUN_004610a0(char *full_path,char *drive,char *directory,char *filename,char *extension)

#include "nocturne.h"

void __cdecl engine_dosio_cpp_FUN_004610a0(char *full_path,char *drive,char *directory,char *filename,char *extension)

{
  makepath(full_path,drive,directory,filename,extension);
  return;
}

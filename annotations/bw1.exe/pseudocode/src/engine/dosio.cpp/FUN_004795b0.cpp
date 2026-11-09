// Name: engine_dosio.cpp_FUN_004795b0
// Address: 004795b0
// Address Range: [[004795b0, 004795d7]]
// Convention: __cdecl
// Signature: void __cdecl engine_dosio_cpp_FUN_004795b0(char *full_path,char *drive,char *directory,char *filename,char *extension)

#include "nocturne.h"

void __cdecl engine_dosio_cpp_FUN_004795b0(char *full_path,char *drive,char *directory,char *filename,char *extension)

{
  makepath(full_path,drive,directory,filename,extension);
  return;
}

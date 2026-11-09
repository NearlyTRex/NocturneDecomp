// Name: engine_dosio.cpp_FUN_00465e80
// Address: 00465e80
// Address Range: [[00465e80, 00465ea7]]
// Convention: __cdecl
// Signature: void __cdecl engine_dosio_cpp_FUN_00465e80(char *full_path,char *drive,char *directory,char *filename,char *extension)

#include "nocturne.h"

void __cdecl engine_dosio_cpp_FUN_00465e80(char *full_path,char *drive,char *directory,char *filename,char *extension)

{
  makepath(full_path,drive,directory,filename,extension);
  return;
}

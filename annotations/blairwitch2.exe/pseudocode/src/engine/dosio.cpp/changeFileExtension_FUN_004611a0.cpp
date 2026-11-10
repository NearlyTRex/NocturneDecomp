// Name: engine_dosio.cpp_changeFileExtension_FUN_004611a0
// Address: 004611a0
// Address Range: [[004611a0, 00461202]]
// Convention: __cdecl
// Signature: void __cdecl engine_dosio_cpp_changeFileExtension_FUN_004611a0(char *path,char *new_extension)

#include "nocturne.h"

void __cdecl engine_dosio_cpp_changeFileExtension_FUN_004611a0(char *path,char *new_extension)

{
  char local_208 [256];
  char local_108 [256];
  char local_8 [4];
  
  engine_dosio_cpp_splitPath_FUN_00461070(path,local_8,local_108,local_208,(char *)0x0);
  engine_dosio_cpp_makePath_FUN_004610a0(path,local_8,local_108,local_208,new_extension);
  return;
}

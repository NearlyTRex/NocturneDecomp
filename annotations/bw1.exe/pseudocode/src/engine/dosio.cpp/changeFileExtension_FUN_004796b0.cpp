// Name: engine_dosio.cpp_changeFileExtension_FUN_004796b0
// Address: 004796b0
// Address Range: [[004796b0, 00479712]]
// Convention: __cdecl
// Signature: void __cdecl engine_dosio_cpp_changeFileExtension_FUN_004796b0(char *path,char *new_extension)

#include "nocturne.h"

void __cdecl engine_dosio_cpp_changeFileExtension_FUN_004796b0(char *path,char *new_extension)

{
  char local_208 [256];
  char local_108 [256];
  char local_8 [4];
  
  engine_dosio_cpp_FUN_00479580(path,local_8,local_108,local_208,(char *)0x0);
  engine_dosio_cpp_FUN_004795b0(path,local_8,local_108,local_208,new_extension);
  return;
}

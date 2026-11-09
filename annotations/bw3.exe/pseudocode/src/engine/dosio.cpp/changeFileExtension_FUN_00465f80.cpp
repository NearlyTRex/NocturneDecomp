// Name: engine_dosio.cpp_changeFileExtension_FUN_00465f80
// Address: 00465f80
// Address Range: [[00465f80, 00465fe2]]
// Convention: __cdecl
// Signature: void __cdecl engine_dosio_cpp_changeFileExtension_FUN_00465f80(char *path,char *new_extension)

#include "nocturne.h"

void __cdecl engine_dosio_cpp_changeFileExtension_FUN_00465f80(char *path,char *new_extension)

{
  char local_208 [256];
  char local_108 [256];
  char local_8 [4];
  
  engine_dosio_cpp_FUN_00465e50(path,local_8,local_108,local_208,(char *)0x0);
  engine_dosio_cpp_FUN_00465e80(path,local_8,local_108,local_208,new_extension);
  return;
}

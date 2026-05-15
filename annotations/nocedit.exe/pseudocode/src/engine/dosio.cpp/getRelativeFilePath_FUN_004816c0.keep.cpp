// Name: engine_dosio.cpp_getRelativeFilePath_FUN_004816c0
// Address: 004816c0
// MANUAL RECONSTRUCTION
// Address Range: [[004816c0, 00481706]]
// Convention: __cdecl
// Signature: void __cdecl engine_dosio_cpp_getRelativeFilePath_FUN_004816c0(char *dest_path,char *directory,char *filename)

#include "nocturne.h"

void __cdecl engine_dosio_cpp_getRelativeFilePath_FUN_004816c0(char *dest_path,char *directory,char *filename)

{
  if ((directory != (char *)0x0) && (*directory != '\0')) {
    _sprintf(dest_path,"%s\\%s",directory,filename);
    return;
  }
  strcpy(dest_path, filename);
  return;
}

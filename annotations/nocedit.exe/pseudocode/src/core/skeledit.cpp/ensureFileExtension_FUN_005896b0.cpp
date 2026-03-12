// Name: core_skeledit.cpp_ensureFileExtension_FUN_005896b0
// Address: 005896b0
// Address Range: [[005896b0, 00589733]]
// Convention: __cdecl
// Signature: void __cdecl core_skeledit_cpp_ensureFileExtension_FUN_005896b0(char *filename,char *extension)

#include "nocturne.h"

void __cdecl core_skeledit_cpp_ensureFileExtension_FUN_005896b0(char *filename,char *extension)

{
  char local_304 [256];
  char local_204 [256];
  char local_104 [252];
  char local_4 [4];
  
  local_4[0] = '\x1c';
  local_4[1] = '\x03';
  local_4[2] = '\0';
  local_4[3] = '\0';
  __STK();
  splitpath(filename,local_4,local_104,local_304,local_204);
  if (local_204[0] != '\0') {
    return;
  }
  makepath(filename,local_4,local_104,local_304,extension);
  return;
}

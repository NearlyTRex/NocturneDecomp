// Name: engine_ini.cpp_CIniFile_init_FUN_004fbaa0
// Address: 004fbaa0
// MANUAL RECONSTRUCTION
// Address Range: [[004fbaa0, 004fbad0]]
// Convention: __cdecl
// Signature: void __cdecl engine_ini_cpp_CIniFile_init_FUN_004fbaa0(char *dest,char *source)

#include "nocturne.h"

void __cdecl engine_ini_cpp_CIniFile_init_FUN_004fbaa0(char *dest,char *source)

{
  if (source == (char *)0x0) {
    *dest = '\0';
    return;
  }
  strcpy(dest, source);
  return;
}

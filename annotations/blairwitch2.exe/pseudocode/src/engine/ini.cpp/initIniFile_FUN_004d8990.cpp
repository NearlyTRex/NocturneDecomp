// Name: engine_ini.cpp_initIniFile_FUN_004d8990
// Address: 004d8990
// Address Range: [[004d8990, 004d89c0]]
// Convention: __cdecl
// Signature: void __cdecl engine_ini_cpp_initIniFile_FUN_004d8990(char *dest,char *source)

#include "nocturne.h"

void __cdecl engine_ini_cpp_initIniFile_FUN_004d8990(char *dest,char *source)

{
  char cVar1;
  
  if (source == (char *)0x0) {
    *dest = '\0';
    return;
  }
  do {
    cVar1 = *source;
    *dest = cVar1;
    if (cVar1 == '\0') {
      return;
    }
    cVar1 = source[1];
    source = source + 2;
    dest[1] = cVar1;
    dest = dest + 2;
  } while (cVar1 != '\0');
  return;
}

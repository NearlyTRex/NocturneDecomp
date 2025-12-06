// Name: engine_ini.cpp_CIniFile_init_FUN_004fbaa0
// Address: 004fbaa0
// Address Range: [[004fbaa0, 004fbad0]]
// Convention: __cdecl
// Signature: void engine_ini.cpp_CIniFile_init_FUN_004fbaa0(char * dest, char * source)

#include "nocturne.h"

void __cdecl engine_ini_cpp_CIniFile_init_FUN_004fbaa0(char *dest,char *source)

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

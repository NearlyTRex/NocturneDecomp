// Name: core_script.cpp_skipWhitespace_FUN_005432b0
// Address: 005432b0
// Address Range: [[005432b0, 005432c9]]
// Convention: __cdecl
// Signature: char * __cdecl core_script_cpp_skipWhitespace_FUN_005432b0(char *str)

#include "nocturne.h"

char * __cdecl core_script_cpp_skipWhitespace_FUN_005432b0(char *str)

{
  while (((&DAT_00626114)[(byte)(*str + 1)] & 2) != 0) {
    str = str + 1;
  }
  return str;
}

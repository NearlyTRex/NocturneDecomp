// Name: core_script.cpp_skipWhitespace_FUN_005593d0
// Address: 005593d0
// Address Range: [[005593d0, 005593e9]]
// Convention: __cdecl
// Signature: char * __cdecl core_script_cpp_skipWhitespace_FUN_005593d0(char *str)

#include "nocturne.h"

char * __cdecl core_script_cpp_skipWhitespace_FUN_005593d0(char *str)

{
  while ((g_CharacterClassificationTable[(byte)(*str + 1)] & 2) != 0) {
    str = str + 1;
  }
  return str;
}

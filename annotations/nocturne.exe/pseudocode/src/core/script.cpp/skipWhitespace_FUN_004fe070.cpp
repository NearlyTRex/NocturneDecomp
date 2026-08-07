// Name: core_script.cpp_skipWhitespace_FUN_004fe070
// Address: 004fe070
// Address Range: [[004fe070, 004fe089]]
// Convention: __cdecl
// Signature: char * __cdecl core_script_cpp_skipWhitespace_FUN_004fe070(char *str)

#include "nocturne.h"

char * __cdecl core_script_cpp_skipWhitespace_FUN_004fe070(char *str)

{
  while ((g_CharacterClassificationTable[(byte)(*str + 1)] & 2) != 0) {
    str = str + 1;
  }
  return str;
}

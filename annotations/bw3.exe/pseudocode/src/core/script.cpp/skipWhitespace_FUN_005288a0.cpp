// Name: core_script.cpp_skipWhitespace_FUN_005288a0
// Address: 005288a0
// Address Range: [[005288a0, 005288b9]]
// Convention: __cdecl
// Signature: char * __cdecl core_script_cpp_skipWhitespace_FUN_005288a0(char *str)

#include "nocturne.h"

char * __cdecl core_script_cpp_skipWhitespace_FUN_005288a0(char *str)

{
  while (((&DAT_006074b8)[(byte)(*str + 1)] & 2) != 0) {
    str = str + 1;
  }
  return str;
}

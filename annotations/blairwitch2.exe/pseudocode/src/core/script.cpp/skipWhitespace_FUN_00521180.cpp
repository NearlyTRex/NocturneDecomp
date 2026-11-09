// Name: core_script.cpp_skipWhitespace_FUN_00521180
// Address: 00521180
// Address Range: [[00521180, 00521199]]
// Convention: __cdecl
// Signature: char * __cdecl core_script_cpp_skipWhitespace_FUN_00521180(char *str)

#include "nocturne.h"

char * __cdecl core_script_cpp_skipWhitespace_FUN_00521180(char *str)

{
  while (((&DAT_0061ed94)[(byte)(*str + 1)] & 2) != 0) {
    str = str + 1;
  }
  return str;
}

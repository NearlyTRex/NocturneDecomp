// Name: core_event.cpp_skipWhitespace_FUN_00488bd0
// Address: 00488bd0
// Address Range: [[00488bd0, 00488be9]]
// Convention: __cdecl
// Signature: char * __cdecl core_event_cpp_skipWhitespace_FUN_00488bd0(char *str)

#include "nocturne.h"

char * __cdecl core_event_cpp_skipWhitespace_FUN_00488bd0(char *str)

{
  while (((&DAT_0061ed94)[(byte)(*str + 1)] & 2) != 0) {
    str = str + 1;
  }
  return str;
}

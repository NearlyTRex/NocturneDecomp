// Name: core_event.cpp_skipWhitespace_FUN_0048b820
// Address: 0048b820
// Address Range: [[0048b820, 0048b839]]
// Convention: __cdecl
// Signature: char * __cdecl core_event_cpp_skipWhitespace_FUN_0048b820(char *str)

#include "nocturne.h"

char * __cdecl core_event_cpp_skipWhitespace_FUN_0048b820(char *str)

{
  while (((&DAT_006074b8)[(byte)(*str + 1)] & 2) != 0) {
    str = str + 1;
  }
  return str;
}

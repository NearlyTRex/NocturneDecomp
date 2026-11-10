// Name: core_event.cpp_skipWhitespace_FUN_004a1240
// Address: 004a1240
// Address Range: [[004a1240, 004a1259]]
// Convention: __cdecl
// Signature: char * __cdecl core_event_cpp_skipWhitespace_FUN_004a1240(char *str)

#include "nocturne.h"

char * __cdecl core_event_cpp_skipWhitespace_FUN_004a1240(char *str)

{
  while (((&DAT_00626114)[(byte)(*str + 1)] & 2) != 0) {
    str = str + 1;
  }
  return str;
}

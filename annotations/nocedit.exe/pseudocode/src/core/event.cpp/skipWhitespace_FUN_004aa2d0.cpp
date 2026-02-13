// Name: core_event.cpp_skipWhitespace_FUN_004aa2d0
// Address: 004aa2d0
// Address Range: [[004aa2d0, 004aa2e9]]
// Convention: __cdecl
// Signature: char * __cdecl core_event_cpp_skipWhitespace_FUN_004aa2d0(char *str)

#include "nocturne.h"

char * __cdecl core_event_cpp_skipWhitespace_FUN_004aa2d0(char *str)

{
  while ((g_CharacterClassificationTable[(byte)(*str + 1)] & 2) != 0) {
    str = str + 1;
  }
  return str;
}

// Name: core_event.cpp_skipWhitespace_FUN_0047a260
// Address: 0047a260
// Address Range: [[0047a260, 0047a279]]
// Convention: __cdecl
// Signature: char * __cdecl core_event_cpp_skipWhitespace_FUN_0047a260(char *str)

#include "nocturne.h"

char * __cdecl core_event_cpp_skipWhitespace_FUN_0047a260(char *str)

{
  while ((g_CharacterClassificationTable[(byte)(*str + 1)] & 2) != 0) {
    str = str + 1;
  }
  return str;
}

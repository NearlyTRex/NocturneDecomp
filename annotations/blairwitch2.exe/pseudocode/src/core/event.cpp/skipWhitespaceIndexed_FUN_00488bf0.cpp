// Name: core_event.cpp_skipWhitespaceIndexed_FUN_00488bf0
// Address: 00488bf0
// Address Range: [[00488bf0, 00488c11]]
// Convention: __cdecl
// Signature: int * __cdecl core_event_cpp_skipWhitespaceIndexed_FUN_00488bf0(char *expression,int *parse_position)

#include "nocturne.h"

int * __cdecl core_event_cpp_skipWhitespaceIndexed_FUN_00488bf0(char *expression,int *parse_position)

{
  while (((&DAT_0061ed94)[(byte)(expression[*parse_position] + 1)] & 2) != 0) {
    *parse_position = *parse_position + 1;
  }
  return parse_position;
}

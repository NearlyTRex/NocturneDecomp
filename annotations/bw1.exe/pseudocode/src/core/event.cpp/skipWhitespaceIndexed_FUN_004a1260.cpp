// Name: core_event.cpp_skipWhitespaceIndexed_FUN_004a1260
// Address: 004a1260
// Address Range: [[004a1260, 004a1281]]
// Convention: __cdecl
// Signature: int * __cdecl core_event_cpp_skipWhitespaceIndexed_FUN_004a1260(char *expression,int *parse_position)

#include "nocturne.h"

int * __cdecl core_event_cpp_skipWhitespaceIndexed_FUN_004a1260(char *expression,int *parse_position)

{
  while (((&DAT_00626114)[(byte)(expression[*parse_position] + 1)] & 2) != 0) {
    *parse_position = *parse_position + 1;
  }
  return parse_position;
}

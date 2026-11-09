// Name: core_event.cpp_skipWhitespaceIndexed_FUN_0048b840
// Address: 0048b840
// Address Range: [[0048b840, 0048b861]]
// Convention: __cdecl
// Signature: int * __cdecl core_event_cpp_skipWhitespaceIndexed_FUN_0048b840(char *expression,int *parse_position)

#include "nocturne.h"

int * __cdecl core_event_cpp_skipWhitespaceIndexed_FUN_0048b840(char *expression,int *parse_position)

{
  while (((&DAT_006074b8)[(byte)(expression[*parse_position] + 1)] & 2) != 0) {
    *parse_position = *parse_position + 1;
  }
  return parse_position;
}

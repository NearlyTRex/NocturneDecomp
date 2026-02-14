// Name: core_event.cpp_skipWhitespaceIndexed_FUN_004aa2f0
// Address: 004aa2f0
// Address Range: [[004aa2f0, 004aa311]]
// Convention: __cdecl
// Signature: int * __cdecl core_event_cpp_skipWhitespaceIndexed_FUN_004aa2f0(char *expression,int *parse_position)

#include "nocturne.h"

int * __cdecl core_event_cpp_skipWhitespaceIndexed_FUN_004aa2f0(char *expression,int *parse_position)

{
  while ((g_CharacterClassificationTable[(byte)(expression[*parse_position] + 1)] & 2) != 0) {
    *parse_position = *parse_position + 1;
  }
  return parse_position;
}

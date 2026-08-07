// Name: core_event.cpp_skipWhitespaceIndexed_FUN_0047a280
// Address: 0047a280
// Address Range: [[0047a280, 0047a2a1]]
// Convention: __cdecl
// Signature: int * __cdecl core_event_cpp_skipWhitespaceIndexed_FUN_0047a280(char *expression,int *parse_position)

#include "nocturne.h"

int * __cdecl core_event_cpp_skipWhitespaceIndexed_FUN_0047a280(char *expression,int *parse_position)

{
  while ((g_CharacterClassificationTable[(byte)(expression[*parse_position] + 1)] & 2) != 0) {
    *parse_position = *parse_position + 1;
  }
  return parse_position;
}

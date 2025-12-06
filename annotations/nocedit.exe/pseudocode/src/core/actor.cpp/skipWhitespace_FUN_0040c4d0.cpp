// Name: core_actor.cpp_skipWhitespace_FUN_0040c4d0
// Address: 0040c4d0
// Address Range: [[0040c4d0, 0040c4ed]]
// Convention: __cdecl
// Signature: void core_actor.cpp_skipWhitespace_FUN_0040c4d0(char * * parse_pos)

#include "nocturne.h"

void __cdecl core_actor_cpp_skipWhitespace_FUN_0040c4d0(char **parse_pos)

{
  while ((g_CharacterClassificationTable[(byte)(**parse_pos + 1)] & 2U) != 0) {
    *parse_pos = *parse_pos + 1;
  }
  return;
}

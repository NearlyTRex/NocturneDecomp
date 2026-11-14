// Name: core_event.cpp_isCharacterSpeaking_FUN_00481930
// Address: 00481930
// Address Range: [[00481930, 0048194b]]
// Convention: __cdecl
// Signature: int __cdecl core_event_cpp_isCharacterSpeaking_FUN_00481930(CCharacter *char_ptr)

#include "nocturne.h"

int __cdecl core_event_cpp_isCharacterSpeaking_FUN_00481930(CCharacter *char_ptr)

{
  if (0.0 < char_ptr->speech_timer) {
    return 1;
  }
  return 0;
}

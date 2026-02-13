// Name: core_event.cpp_isCharacterSpeaking_FUN_004b1980
// Address: 004b1980
// Address Range: [[004b1980, 004b199b]]
// Convention: __cdecl
// Signature: int __cdecl core_event_cpp_isCharacterSpeaking_FUN_004b1980(CCharacter *char_ptr)

#include "nocturne.h"

int __cdecl core_event_cpp_isCharacterSpeaking_FUN_004b1980(CCharacter *char_ptr)

{
  if (0.0 < char_ptr->speech_timer) {
    return 1;
  }
  return 0;
}

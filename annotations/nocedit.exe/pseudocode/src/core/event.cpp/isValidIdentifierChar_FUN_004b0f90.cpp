// Name: core_event.cpp_isValidIdentifierChar_FUN_004b0f90
// Address: 004b0f90
// Address Range: [[004b0f90, 004b0fb9]]
// Convention: __cdecl
// Signature: int __cdecl core_event_cpp_isValidIdentifierChar_FUN_004b0f90(int ch)

#include "nocturne.h"

int __cdecl core_event_cpp_isValidIdentifierChar_FUN_004b0f90(int ch)

{
  if ((((g_CharacterClassificationTable[(byte)((char)ch + 1)] & 0xe0) == 0) && (ch != 0x5f)) &&
     (ch != 0x2d)) {
    return 0;
  }
  return 1;
}

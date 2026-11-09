// Name: core_event.cpp_isValidIdentifierChar_FUN_004aa5e0
// Address: 004aa5e0
// Address Range: [[004aa5e0, 004aa609]]
// Convention: __cdecl
// Signature: int __cdecl core_event_cpp_isValidIdentifierChar_FUN_004aa5e0(int ch)

#include "nocturne.h"

int __cdecl core_event_cpp_isValidIdentifierChar_FUN_004aa5e0(int ch)

{
  if (((((&DAT_00626114)[(byte)((char)ch + 1)] & 0xe0) == 0) && (ch != 0x5f)) && (ch != 0x2d)) {
    return 0;
  }
  return 1;
}

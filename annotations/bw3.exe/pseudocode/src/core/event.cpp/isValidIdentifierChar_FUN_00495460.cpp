// Name: core_event.cpp_isValidIdentifierChar_FUN_00495460
// Address: 00495460
// Address Range: [[00495460, 00495489]]
// Convention: __cdecl
// Signature: int __cdecl core_event_cpp_isValidIdentifierChar_FUN_00495460(int ch)

#include "nocturne.h"

int __cdecl core_event_cpp_isValidIdentifierChar_FUN_00495460(int ch)

{
  if (((((&DAT_006074b8)[(byte)((char)ch + 1)] & 0xe0) == 0) && (ch != 0x5f)) && (ch != 0x2d)) {
    return 0;
  }
  return 1;
}

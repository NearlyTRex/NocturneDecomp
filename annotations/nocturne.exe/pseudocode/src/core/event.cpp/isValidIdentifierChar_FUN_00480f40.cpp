// Name: core_event.cpp_isValidIdentifierChar_FUN_00480f40
// Address: 00480f40
// Address Range: [[00480f40, 00480f69]]
// Convention: __cdecl
// Signature: int __cdecl core_event_cpp_isValidIdentifierChar_FUN_00480f40(int ch)

#include "nocturne.h"

int __cdecl core_event_cpp_isValidIdentifierChar_FUN_00480f40(int ch)

{
  if (((((&DAT_005c168c)[(byte)((char)ch + 1)] & 0xe0) == 0) && (ch != 0x5f)) && (ch != 0x2d)) {
    return 0;
  }
  return 1;
}

// Name: core_event.cpp_isValidIdentifierChar_FUN_00491c70
// Address: 00491c70
// Address Range: [[00491c70, 00491c99]]
// Convention: __cdecl
// Signature: int __cdecl core_event_cpp_isValidIdentifierChar_FUN_00491c70(int ch)

#include "nocturne.h"

int __cdecl core_event_cpp_isValidIdentifierChar_FUN_00491c70(int ch)

{
  if (((((&DAT_0061ed94)[(byte)((char)ch + 1)] & 0xe0) == 0) && (ch != 0x5f)) && (ch != 0x2d)) {
    return 0;
  }
  return 1;
}

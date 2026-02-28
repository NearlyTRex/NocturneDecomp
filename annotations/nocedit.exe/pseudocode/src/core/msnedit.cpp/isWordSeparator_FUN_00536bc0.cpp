// Name: core_msnedit.cpp_isWordSeparator_FUN_00536bc0
// Address: 00536bc0
// Address Range: [[00536bc0, 00536be8]]
// Convention: __cdecl
// Signature: int __cdecl core_msnedit_cpp_isWordSeparator_FUN_00536bc0(int ch)

#include "nocturne.h"

int __cdecl core_msnedit_cpp_isWordSeparator_FUN_00536bc0(int ch)

{
  if ((((g_CharacterClassificationTable[(byte)((char)ch + 1)] & 0xe0) == 0) && (ch != 0x2d)) &&
     (ch != 0x5f)) {
    return 1;
  }
  return 0;
}

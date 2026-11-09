// Name: crt_ctype.c_tolower_FUN_005a35a0
// Address: 005a35a0
// Address Range: [[005a35a0, 005a35b1]]
// Convention: __cdecl
// Signature: int __cdecl crt_ctype_c_tolower_FUN_005a35a0(int character)

#include "nocturne.h"

int __cdecl tolower(int character)

{
  if ((0x40 < character) && (character < 0x5b)) {
    character = character + 0x20;
  }
  return character;
}

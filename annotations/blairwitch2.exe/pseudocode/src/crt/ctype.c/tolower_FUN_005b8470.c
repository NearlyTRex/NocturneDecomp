// Name: crt_ctype.c_tolower_FUN_005b8470
// Address: 005b8470
// Address Range: [[005b8470, 005b8481]]
// Convention: __cdecl
// Signature: int __cdecl crt_ctype_c_tolower_FUN_005b8470(int character)

#include "nocturne.h"

int __cdecl tolower(int character)

{
  if ((0x40 < character) && (character < 0x5b)) {
    character = character + 0x20;
  }
  return character;
}

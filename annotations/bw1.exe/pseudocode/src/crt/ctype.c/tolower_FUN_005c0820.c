// Name: crt_ctype.c_tolower_FUN_005c0820
// Address: 005c0820
// Address Range: [[005c0820, 005c0831]]
// Convention: __cdecl
// Signature: int __cdecl crt_ctype_c_tolower_FUN_005c0820(int character)

#include "nocturne.h"

int __cdecl tolower(int character)

{
  if ((0x40 < character) && (character < 0x5b)) {
    character = character + 0x20;
  }
  return character;
}

// Name: crt_ctype.c_tolower_FUN_005feb30
// Address: 005feb30
// Address Range: [[005feb30, 005feb41]]
// Convention: __cdecl
// Signature: int __cdecl crt_ctype_c_tolower_FUN_005feb30(int character)

#include "nocturne.h"

int __cdecl crt_ctype_c_tolower_FUN_005feb30(int character)

{
  if ((0x40 < character) && (character < 0x5b)) {
    character = character + 0x20;
  }
  return character;
}

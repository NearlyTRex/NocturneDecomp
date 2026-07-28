// Name: crt_ctype.c_tolower_FUN_00564860
// Address: 00564860
// Address Range: [[00564860, 00564871]]
// Convention: __cdecl
// Signature: int __cdecl crt_ctype_c_tolower_FUN_00564860(int character)

#include "nocturne.h"

int __cdecl tolower(int character)

{
  if ((0x40 < character) && (character < 0x5b)) {
    character = character + 0x20;
  }
  return character;
}

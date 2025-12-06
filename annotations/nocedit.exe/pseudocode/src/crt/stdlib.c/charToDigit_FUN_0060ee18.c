// Name: crt_stdlib.c_charToDigit_FUN_0060ee18
// Address: 0060ee18
// Address Range: [[0060ee18, 0060ee74]]
// Convention: __cdecl
// Signature: int crt_stdlib.c_charToDigit_FUN_0060ee18(char ch)

#include "nocturne.h"

int __cdecl crt_stdlib_c_charToDigit_FUN_0060ee18(char ch)

{
  byte bVar1;
  uint uVar2;
  
  if ((0x2f < (byte)ch) && ((byte)ch < 0x3a)) {
    return (byte)ch - 0x30;
  }
  uVar2 = crt_ctype_c_tolower_FUN_005feb30((uint)(byte)ch);
  bVar1 = (byte)uVar2;
  if ((0x60 < bVar1) && (bVar1 < 0x6a)) {
    return (uVar2 & 0xff) - 0x57;
  }
  if ((0x69 < bVar1) && (bVar1 < 0x73)) {
    return (uVar2 & 0xff) - 0x57;
  }
  if ((0x72 < bVar1) && (bVar1 < 0x7b)) {
    return (uVar2 & 0xff) - 0x57;
  }
  return 0x25;
}

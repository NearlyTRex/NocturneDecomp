// Name: crt_stdlib.c_charToDigit_FUN_005738c8
// Address: 005738c8
// Address Range: [[005738c8, 00573924]]
// Convention: __cdecl
// Signature: int __cdecl crt_stdlib_c_charToDigit_FUN_005738c8(char ch)

#include "nocturne.h"

int __cdecl charToDigit(char ch)

{
  byte bVar1;
  uint uVar2;
  
  if ((0x2f < (byte)ch) && ((byte)ch < 0x3a)) {
    return (byte)ch - 0x30;
  }
  uVar2 = tolower((uint)(byte)ch);
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

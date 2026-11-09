// Name: unkafter_2d.cpp_FUN_005c61a8
// Address: 005c61a8
// Address Range: [[005c61a8, 005c6204]]
// Convention: unknown
// Signature: int unkafter_2d_cpp_FUN_005c61a8(byte param_1)

#include "nocturne.h"

int unkafter_2d_cpp_FUN_005c61a8(byte param_1)

{
  byte bVar1;
  uint uVar2;
  
  if ((0x2f < param_1) && (param_1 < 0x3a)) {
    return param_1 - 0x30;
  }
  uVar2 = tolower((uint)param_1);
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

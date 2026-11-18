// Name: support_codec.cpp_crc32UpdateByteInPlace_FUN_00442880
// Address: 00442880
// Address Range: [[00442880, 00442951]]
// Convention: __cdecl
// Signature: void __cdecl support_codec_cpp_crc32UpdateByteInPlace_FUN_00442880(uint *crc,uchar data_byte)

#include "nocturne.h"

void __cdecl support_codec_cpp_crc32UpdateByteInPlace_FUN_00442880(uint *crc,uchar data_byte)

{
  uint uVar1;
  
  uVar1 = *crc ^ (uint)data_byte << 0x18;
  *crc = uVar1;
  if ((*crc & 0x80000000) == 0) {
    uVar1 = uVar1 * 2;
  }
  else {
    uVar1 = uVar1 * 2 ^ 0x4c11db7;
  }
  *crc = uVar1;
  if ((*crc & 0x80000000) == 0) {
    uVar1 = *crc * 2;
  }
  else {
    uVar1 = *crc * 2 ^ 0x4c11db7;
  }
  *crc = uVar1;
  if ((*crc & 0x80000000) == 0) {
    uVar1 = uVar1 * 2;
  }
  else {
    uVar1 = uVar1 * 2 ^ 0x4c11db7;
  }
  *crc = uVar1;
  if ((*crc & 0x80000000) == 0) {
    uVar1 = uVar1 * 2;
  }
  else {
    uVar1 = uVar1 * 2 ^ 0x4c11db7;
  }
  *crc = uVar1;
  if ((*crc & 0x80000000) == 0) {
    uVar1 = uVar1 * 2;
  }
  else {
    uVar1 = uVar1 * 2 ^ 0x4c11db7;
  }
  *crc = uVar1;
  if ((*crc & 0x80000000) == 0) {
    uVar1 = uVar1 * 2;
  }
  else {
    uVar1 = uVar1 * 2 ^ 0x4c11db7;
  }
  *crc = uVar1;
  if ((*crc & 0x80000000) == 0) {
    uVar1 = *crc * 2;
  }
  else {
    uVar1 = *crc * 2 ^ 0x4c11db7;
  }
  *crc = uVar1;
  if ((*crc & 0x80000000) != 0) {
    *crc = *crc * 2 ^ 0x4c11db7;
    return;
  }
  *crc = *crc * 2;
  return;
}

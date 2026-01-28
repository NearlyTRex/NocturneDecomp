// Name: shape_meshlod.cpp_crc32UpdateByte_FUN_0051c270
// Address: 0051c270
// Address Range: [[0051c270, 0051c341]]
// Convention: __cdecl
// Signature: void __cdecl shape_meshlod_cpp_crc32UpdateByte_FUN_0051c270(uint *crc_ptr,uchar data_byte)

#include "nocturne.h"

void __cdecl shape_meshlod_cpp_crc32UpdateByte_FUN_0051c270(uint *crc_ptr,uchar data_byte)

{
  uint uVar1;
  
  uVar1 = *crc_ptr ^ (uint)data_byte << 0x18;
  *crc_ptr = uVar1;
  if ((*crc_ptr & 0x80000000) == 0) {
    uVar1 = uVar1 * 2;
  }
  else {
    uVar1 = uVar1 * 2 ^ 0x4c11db7;
  }
  *crc_ptr = uVar1;
  if ((*crc_ptr & 0x80000000) == 0) {
    uVar1 = *crc_ptr * 2;
  }
  else {
    uVar1 = *crc_ptr * 2 ^ 0x4c11db7;
  }
  *crc_ptr = uVar1;
  if ((*crc_ptr & 0x80000000) == 0) {
    uVar1 = uVar1 * 2;
  }
  else {
    uVar1 = uVar1 * 2 ^ 0x4c11db7;
  }
  *crc_ptr = uVar1;
  if ((*crc_ptr & 0x80000000) == 0) {
    uVar1 = uVar1 * 2;
  }
  else {
    uVar1 = uVar1 * 2 ^ 0x4c11db7;
  }
  *crc_ptr = uVar1;
  if ((*crc_ptr & 0x80000000) == 0) {
    uVar1 = uVar1 * 2;
  }
  else {
    uVar1 = uVar1 * 2 ^ 0x4c11db7;
  }
  *crc_ptr = uVar1;
  if ((*crc_ptr & 0x80000000) == 0) {
    uVar1 = uVar1 * 2;
  }
  else {
    uVar1 = uVar1 * 2 ^ 0x4c11db7;
  }
  *crc_ptr = uVar1;
  if ((*crc_ptr & 0x80000000) == 0) {
    uVar1 = *crc_ptr * 2;
  }
  else {
    uVar1 = *crc_ptr * 2 ^ 0x4c11db7;
  }
  *crc_ptr = uVar1;
  if ((*crc_ptr & 0x80000000) != 0) {
    *crc_ptr = *crc_ptr * 2 ^ 0x4c11db7;
    return;
  }
  *crc_ptr = *crc_ptr * 2;
  return;
}

// Name: core_actor.cpp_crc32ProcessByte_FUN_0040d060
// Address: 0040d060
// Address Range: [[0040d060, 0040d131]]
// Convention: __cdecl
// Signature: void __cdecl core_actor_cpp_crc32ProcessByte_FUN_0040d060(uint *crc_state,byte input_byte)

#include "nocturne.h"

void __cdecl core_actor_cpp_crc32ProcessByte_FUN_0040d060(uint *crc_state,byte input_byte)

{
  uint uVar1;
  
  uVar1 = *crc_state ^ (uint)input_byte << 0x18;
  *crc_state = uVar1;
  if ((*crc_state & 0x80000000) == 0) {
    uVar1 = uVar1 * 2;
  }
  else {
    uVar1 = uVar1 * 2 ^ 0x4c11db7;
  }
  *crc_state = uVar1;
  if ((*crc_state & 0x80000000) == 0) {
    uVar1 = *crc_state * 2;
  }
  else {
    uVar1 = *crc_state * 2 ^ 0x4c11db7;
  }
  *crc_state = uVar1;
  if ((*crc_state & 0x80000000) == 0) {
    uVar1 = uVar1 * 2;
  }
  else {
    uVar1 = uVar1 * 2 ^ 0x4c11db7;
  }
  *crc_state = uVar1;
  if ((*crc_state & 0x80000000) == 0) {
    uVar1 = uVar1 * 2;
  }
  else {
    uVar1 = uVar1 * 2 ^ 0x4c11db7;
  }
  *crc_state = uVar1;
  if ((*crc_state & 0x80000000) == 0) {
    uVar1 = uVar1 * 2;
  }
  else {
    uVar1 = uVar1 * 2 ^ 0x4c11db7;
  }
  *crc_state = uVar1;
  if ((*crc_state & 0x80000000) == 0) {
    uVar1 = uVar1 * 2;
  }
  else {
    uVar1 = uVar1 * 2 ^ 0x4c11db7;
  }
  *crc_state = uVar1;
  if ((*crc_state & 0x80000000) == 0) {
    uVar1 = *crc_state * 2;
  }
  else {
    uVar1 = *crc_state * 2 ^ 0x4c11db7;
  }
  *crc_state = uVar1;
  if ((*crc_state & 0x80000000) != 0) {
    *crc_state = *crc_state * 2 ^ 0x4c11db7;
    return;
  }
  *crc_state = *crc_state * 2;
  return;
}

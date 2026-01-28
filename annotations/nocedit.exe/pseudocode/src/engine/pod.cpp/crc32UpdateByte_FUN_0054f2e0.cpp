// Name: engine_pod.cpp_crc32UpdateByte_FUN_0054f2e0
// Address: 0054f2e0
// Address Range: [[0054f2e0, 0054f395]]
// Convention: __cdecl
// Signature: uint __cdecl engine_pod_cpp_crc32UpdateByte_FUN_0054f2e0(uint current_crc,uchar data_byte)

#include "nocturne.h"

uint __cdecl engine_pod_cpp_crc32UpdateByte_FUN_0054f2e0(uint current_crc,uchar data_byte)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = current_crc ^ (uint)data_byte << 0x18;
  uVar1 = uVar2 * 2;
  if ((uVar2 & 0x80000000) != 0) {
    uVar1 = uVar1 ^ 0x4c11db7;
  }
  uVar2 = uVar1 * 2;
  if ((uVar1 & 0x80000000) != 0) {
    uVar2 = uVar2 ^ 0x4c11db7;
  }
  uVar1 = uVar2 * 2;
  if ((uVar2 & 0x80000000) != 0) {
    uVar1 = uVar1 ^ 0x4c11db7;
  }
  uVar2 = uVar1 * 2;
  if ((uVar1 & 0x80000000) != 0) {
    uVar2 = uVar2 ^ 0x4c11db7;
  }
  uVar1 = uVar2 * 2;
  if ((uVar2 & 0x80000000) != 0) {
    uVar1 = uVar1 ^ 0x4c11db7;
  }
  uVar2 = uVar1 * 2;
  if ((uVar1 & 0x80000000) != 0) {
    uVar2 = uVar2 ^ 0x4c11db7;
  }
  uVar1 = uVar2 * 2;
  if ((uVar2 & 0x80000000) != 0) {
    uVar1 = uVar1 ^ 0x4c11db7;
  }
  if ((uVar1 & 0x80000000) == 0) {
    return uVar1 * 2;
  }
  return uVar1 * 2 ^ 0x4c11db7;
}

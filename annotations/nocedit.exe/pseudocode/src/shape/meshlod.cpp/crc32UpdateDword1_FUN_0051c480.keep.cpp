// Name: shape_meshlod.cpp_crc32UpdateDword1_FUN_0051c480
// Address: 0051c480
// MANUAL RECONSTRUCTION
// Address Range: [[0051c480, 0051c535]]
// Convention: __cdecl
// Signature: void __cdecl shape_meshlod_cpp_crc32UpdateDword1_FUN_0051c480(uint *crc_ptr,uint dword_value)

#include "nocturne.h"

void __cdecl shape_meshlod_cpp_crc32UpdateDword1_FUN_0051c480(uint *crc_ptr,uint dword_value)

{
  byte *puVar1;
  uint uVar2;
  int iVar3;

  iVar3 = 4;
  puVar1 = (byte *)&dword_value;
  do {
    while( true ) {
      *crc_ptr = *crc_ptr ^ (uint)*puVar1 << 0x18;
      uVar2 = *crc_ptr;
      if ((uVar2 & 0x80000000) == 0) {
        uVar2 = uVar2 * 2;
      }
      else {
        uVar2 = uVar2 * 2 ^ 0x4c11db7;
      }
      *crc_ptr = uVar2;
      if ((uVar2 & 0x80000000) == 0) {
        uVar2 = uVar2 * 2;
      }
      else {
        uVar2 = uVar2 * 2 ^ 0x4c11db7;
      }
      *crc_ptr = uVar2;
      if ((uVar2 & 0x80000000) == 0) {
        uVar2 = uVar2 * 2;
      }
      else {
        uVar2 = uVar2 * 2 ^ 0x4c11db7;
      }
      *crc_ptr = uVar2;
      if ((uVar2 & 0x80000000) == 0) {
        uVar2 = uVar2 * 2;
      }
      else {
        uVar2 = uVar2 * 2 ^ 0x4c11db7;
      }
      *crc_ptr = uVar2;
      if ((uVar2 & 0x80000000) == 0) {
        uVar2 = uVar2 * 2;
      }
      else {
        uVar2 = uVar2 * 2 ^ 0x4c11db7;
      }
      *crc_ptr = uVar2;
      if ((uVar2 & 0x80000000) == 0) {
        uVar2 = uVar2 * 2;
      }
      else {
        uVar2 = uVar2 * 2 ^ 0x4c11db7;
      }
      *crc_ptr = uVar2;
      if ((uVar2 & 0x80000000) == 0) {
        uVar2 = uVar2 * 2;
      }
      else {
        uVar2 = uVar2 * 2 ^ 0x4c11db7;
      }
      *crc_ptr = uVar2;
      if ((uVar2 & 0x80000000) != 0) break;
      puVar1 = puVar1 + 1;
      iVar3 = iVar3 + -1;
      *crc_ptr = uVar2 * 2;
      if (iVar3 < 1) {
        return;
      }
    }
    puVar1 = puVar1 + 1;
    iVar3 = iVar3 + -1;
    *crc_ptr = uVar2 * 2 ^ 0x4c11db7;
  } while (0 < iVar3);
  return;
}

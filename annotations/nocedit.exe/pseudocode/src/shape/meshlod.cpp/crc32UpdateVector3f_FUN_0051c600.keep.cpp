// Name: shape_meshlod.cpp_crc32UpdateVector3f_FUN_0051c600
// Address: 0051c600
// MANUAL RECONSTRUCTION
// Address Range: [[0051c600, 0051c6e9]]
// Convention: __cdecl
// Signature: void __cdecl shape_meshlod_cpp_crc32UpdateVector3f_FUN_0051c600(uint *crc_ptr,CVector3f *vector_ptr)

#include "nocturne.h"

void __cdecl shape_meshlod_cpp_crc32UpdateVector3f_FUN_0051c600(uint *crc_ptr,CVector3f *vector_ptr)

{
  int iVar1;
  uint uVar2;
  byte *byte_ptr;

  iVar1 = 0xc;
  byte_ptr = (byte *)vector_ptr;
  do {
    while( true ) {
      uVar2 = *crc_ptr ^ (uint)*byte_ptr << 0x18;
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
      if ((uVar2 & 0x80000000) == 0) {
        uVar2 = uVar2 * 2;
      }
      else {
        uVar2 = uVar2 * 2 ^ 0x4c11db7;
      }
      *crc_ptr = uVar2;
      if ((uVar2 & 0x80000000) != 0) break;
      byte_ptr = byte_ptr + 1;
      iVar1 = iVar1 + -1;
      *crc_ptr = uVar2 * 2;
      if (iVar1 < 1) {
        return;
      }
    }
    byte_ptr = byte_ptr + 1;
    iVar1 = iVar1 + -1;
    *crc_ptr = uVar2 * 2 ^ 0x4c11db7;
  } while (0 < iVar1);
  return;
}

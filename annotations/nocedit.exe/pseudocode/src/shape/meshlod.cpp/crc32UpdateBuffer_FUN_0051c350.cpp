// Name: shape_meshlod.cpp_crc32UpdateBuffer_FUN_0051c350
// Address: 0051c350
// Address Range: [[0051c350, 0051c470]]
// Convention: __cdecl
// Signature: void shape_meshlod.cpp_crc32UpdateBuffer_FUN_0051c350(uint * crc_ptr, uchar * data_ptr, int byte_count)

#include "nocturne.h"

void __cdecl
shape_meshlod_cpp_crc32UpdateBuffer_FUN_0051c350(uint *crc_ptr,uchar *data_ptr,int byte_count)

{
  uint uVar1;
  
  do {
    if (byte_count < 1) {
      return;
    }
    while( true ) {
      uVar1 = *crc_ptr ^ (uint)*data_ptr << 0x18;
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
        uVar1 = *crc_ptr * 2;
      }
      else {
        uVar1 = *crc_ptr * 2 ^ 0x4c11db7;
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
        uVar1 = *crc_ptr * 2;
      }
      else {
        uVar1 = *crc_ptr * 2 ^ 0x4c11db7;
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
        uVar1 = *crc_ptr * 2;
      }
      else {
        uVar1 = *crc_ptr * 2 ^ 0x4c11db7;
      }
      *crc_ptr = uVar1;
      if ((*crc_ptr & 0x80000000) != 0) break;
      data_ptr = data_ptr + 1;
      byte_count = byte_count + -1;
      *crc_ptr = *crc_ptr * 2;
      if (byte_count < 1) {
        return;
      }
    }
    data_ptr = data_ptr + 1;
    byte_count = byte_count + -1;
    *crc_ptr = *crc_ptr * 2 ^ 0x4c11db7;
  } while( true );
}

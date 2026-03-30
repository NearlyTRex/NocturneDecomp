// Name: shape_meshlod.cpp_crc32UpdateDword2_FUN_0051c540
// Address: 0051c540
// Address Range: [[0051c540, 0051c5f5]]
// Convention: __cdecl
// Signature: void __cdecl shape_meshlod_cpp_crc32UpdateDword2_FUN_0051c540(uint *crc_ptr,uint dword_value)

#include "nocturne.h"

void __cdecl shape_meshlod_cpp_crc32UpdateDword2_FUN_0051c540(uint *crc_ptr,uint dword_value)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = 4;
  puVar1 = &dword_value;
  do {
    while( true ) {
      *crc_ptr = *crc_ptr ^ (uint)(byte)*puVar1 << 0x18;
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
      puVar1 = (uint *)((int)puVar1 + 1);
      iVar3 = iVar3 + -1;
      *crc_ptr = uVar2 * 2;
      if (iVar3 < 1) {
        return;
      }
    }
    puVar1 = (uint *)((int)puVar1 + 1);
    iVar3 = iVar3 + -1;
    *crc_ptr = uVar2 * 2 ^ 0x4c11db7;
  } while (0 < iVar3);
  return;
}

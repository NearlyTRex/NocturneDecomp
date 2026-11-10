// Name: sound_mp3.cpp_CMP3Decoder_huffmanDecode_FUN_00504f10
// Address: 00504f10
// Address Range: [[00504f10, 00505167]]
// Convention: __cdecl
// Signature: int __cdecl sound_mp3_cpp_CMP3Decoder_huffmanDecode_FUN_00504f10(CMP3Decoder *this_ptr,SHuffmanTable *huffman_table,int *x_out,int *y_out,int *v_out,int *w_out)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl sound_mp3_cpp_CMP3Decoder_huffmanDecode_FUN_00504f10(CMP3Decoder *this_ptr,SHuffmanTable *huffman_table,int *x_out,int *y_out,int *v_out,int *w_out)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int local_14;
  
  uVar4 = 0x80000000;
  uVar3 = 0;
  local_14 = 1;
  if (huffman_table == (SHuffmanTable *)0xffffffe0) {
    return 2;
  }
  if (*(int *)(huffman_table + 0x824) == 0) {
    *y_out = 0;
    *x_out = 0;
    return 0;
  }
  do {
    if (huffman_table[uVar3 * 2 + 0x20] == (SHuffmanTable)0x0) {
      *x_out = (int)(uint)(byte)huffman_table[uVar3 * 2 + 0x21] >> 4;
      *y_out = (uint)((byte)huffman_table[uVar3 * 2 + 0x21] & 0xf);
      local_14 = 0;
      goto LAB_00504f79;
    }
    uVar2 = sound_mp3_cpp_CMP3Decoder_readBit_FUN_00504e10(this_ptr);
    if (uVar2 == 0) {
      do {
        iVar1 = uVar3 * 2;
        uVar3 = uVar3 + (byte)huffman_table[iVar1 + 0x20];
      } while (0xf9 < (byte)huffman_table[iVar1 + 0x20]);
    }
    else {
      do {
        iVar1 = uVar3 * 2;
        uVar3 = uVar3 + (byte)huffman_table[iVar1 + 0x21];
      } while (0xf9 < (byte)huffman_table[iVar1 + 0x21]);
    }
    uVar4 = uVar4 >> 1;
  } while ((uVar4 != 0) || (uVar3 < _DAT_01d23e7c));
  _DAT_01d046a0 = "..\\sound\\mp3.cpp";
  _DAT_01d046a4 = 0x36f;
  core_main_c_FUN_004e4500("Illegal Huffman code in data.  File: %s",&DAT_01d23558);
LAB_00504f79:
  if ((*huffman_table == (SHuffmanTable)0x33) &&
     ((huffman_table[1] == (SHuffmanTable)0x32 || (huffman_table[1] == (SHuffmanTable)0x33)))) {
    *v_out = *y_out >> 3 & 1;
    *w_out = *y_out >> 2 & 1;
    *x_out = *y_out >> 1 & 1;
    *y_out = *y_out & 1;
    if ((*v_out != 0) &&
       (uVar3 = sound_mp3_cpp_CMP3Decoder_readBit_FUN_00504e10(this_ptr), uVar3 == 1)) {
      *v_out = -*v_out;
    }
    if ((*w_out != 0) &&
       (uVar3 = sound_mp3_cpp_CMP3Decoder_readBit_FUN_00504e10(this_ptr), uVar3 == 1)) {
      *w_out = -*w_out;
    }
    if ((*x_out != 0) &&
       (uVar3 = sound_mp3_cpp_CMP3Decoder_readBit_FUN_00504e10(this_ptr), uVar3 == 1)) {
      *x_out = -*x_out;
    }
  }
  else {
    if ((*(uint *)(huffman_table + 0xc) != 0) && (*(int *)(huffman_table + 4) + -1 == *x_out)) {
      uVar3 = sound_mp3_cpp_CMP3Decoder_readBits_FUN_00504d30
                        (this_ptr,*(uint *)(huffman_table + 0xc));
      *x_out = *x_out + uVar3;
    }
    if ((*x_out != 0) &&
       (uVar3 = sound_mp3_cpp_CMP3Decoder_readBit_FUN_00504e10(this_ptr), uVar3 == 1)) {
      *x_out = -*x_out;
    }
    if ((*(int *)(huffman_table + 0xc) != 0) && (*(int *)(huffman_table + 8) + -1 == *y_out)) {
      uVar3 = sound_mp3_cpp_CMP3Decoder_readBits_FUN_00504d30
                        (this_ptr,*(uint *)(huffman_table + 0xc));
      *y_out = *y_out + uVar3;
    }
  }
  if ((*y_out != 0) &&
     (uVar3 = sound_mp3_cpp_CMP3Decoder_readBit_FUN_00504e10(this_ptr), uVar3 == 1)) {
    *y_out = -*y_out;
  }
  return local_14;
}

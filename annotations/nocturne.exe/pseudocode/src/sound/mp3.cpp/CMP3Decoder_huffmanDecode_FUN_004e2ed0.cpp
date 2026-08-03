// Name: sound_mp3.cpp_CMP3Decoder_huffmanDecode_FUN_004e2ed0
// Address: 004e2ed0
// Address Range: [[004e2ed0, 004e3127]]
// Convention: __cdecl
// Signature: int __cdecl sound_mp3_cpp_CMP3Decoder_huffmanDecode_FUN_004e2ed0(CMP3Decoder *this_ptr,SHuffmanTable *huffman_table,int *x_out,int *y_out,int *v_out,int *w_out)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl sound_mp3_cpp_CMP3Decoder_huffmanDecode_FUN_004e2ed0(CMP3Decoder *this_ptr,SHuffmanTable *huffman_table,int *x_out,int *y_out,int *v_out,int *w_out)

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
  if (huffman_table->table_size == 0) {
    *y_out = 0;
    *x_out = 0;
    return 0;
  }
  do {
    if (huffman_table->huffman_data[uVar3 * 2] == '\0') {
      *x_out = (int)(uint)(byte)huffman_table->huffman_data[uVar3 * 2 + 1] >> 4;
      *y_out = (uint)(huffman_table->huffman_data[uVar3 * 2 + 1] & 0xf);
      local_14 = 0;
      goto LAB_004e2f39;
    }
    uVar2 = sound_mp3_cpp_CMP3Decoder_readBit_FUN_004e2dd0(this_ptr);
    if (uVar2 == 0) {
      do {
        iVar1 = uVar3 * 2;
        uVar3 = uVar3 + (byte)huffman_table->huffman_data[iVar1];
      } while (0xf9 < (byte)huffman_table->huffman_data[iVar1]);
    }
    else {
      do {
        iVar1 = uVar3 * 2;
        uVar3 = uVar3 + (byte)huffman_table->huffman_data[iVar1 + 1];
      } while (0xf9 < (byte)huffman_table->huffman_data[iVar1 + 1]);
    }
    uVar4 = uVar4 >> 1;
  } while ((uVar4 != 0) || (uVar3 < _DAT_01cd944c));
  g_CHAR_PTR_01cc4800 = "..\\sound\\mp3.cpp";
  g_INT_01cc4804 = 800;
  core_main_c_FUN_004c8440("Illegal Huffman code in data.  File: %s",&DAT_01cd8b28);
LAB_004e2f39:
  if ((huffman_table->table_id[0] == '3') &&
     ((huffman_table->table_id[1] == '2' || (huffman_table->table_id[1] == '3')))) {
    *v_out = *y_out >> 3 & 1;
    *w_out = *y_out >> 2 & 1;
    *x_out = *y_out >> 1 & 1;
    *y_out = *y_out & 1;
    if ((*v_out != 0) &&
       (uVar3 = sound_mp3_cpp_CMP3Decoder_readBit_FUN_004e2dd0(this_ptr), uVar3 == 1)) {
      *v_out = -*v_out;
    }
    if ((*w_out != 0) &&
       (uVar3 = sound_mp3_cpp_CMP3Decoder_readBit_FUN_004e2dd0(this_ptr), uVar3 == 1)) {
      *w_out = -*w_out;
    }
    if ((*x_out != 0) &&
       (uVar3 = sound_mp3_cpp_CMP3Decoder_readBit_FUN_004e2dd0(this_ptr), uVar3 == 1)) {
      *x_out = -*x_out;
    }
  }
  else {
    if ((huffman_table->linbits != 0) && (huffman_table->xlen + -1 == *x_out)) {
      uVar3 = sound_mp3_cpp_CMP3Decoder_readBits_FUN_004e2cf0(this_ptr,huffman_table->linbits);
      *x_out = *x_out + uVar3;
    }
    if ((*x_out != 0) &&
       (uVar3 = sound_mp3_cpp_CMP3Decoder_readBit_FUN_004e2dd0(this_ptr), uVar3 == 1)) {
      *x_out = -*x_out;
    }
    if ((huffman_table->linbits != 0) && (huffman_table->ylen + -1 == *y_out)) {
      uVar3 = sound_mp3_cpp_CMP3Decoder_readBits_FUN_004e2cf0(this_ptr,huffman_table->linbits);
      *y_out = *y_out + uVar3;
    }
  }
  if ((*y_out != 0) &&
     (uVar3 = sound_mp3_cpp_CMP3Decoder_readBit_FUN_004e2dd0(this_ptr), uVar3 == 1)) {
    *y_out = -*y_out;
  }
  return local_14;
}

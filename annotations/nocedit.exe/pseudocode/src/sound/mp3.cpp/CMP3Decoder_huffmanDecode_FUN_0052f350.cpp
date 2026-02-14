// Name: sound_mp3.cpp_CMP3Decoder_huffmanDecode_FUN_0052f350
// Address: 0052f350
// Address Range: [[0052f350, 0052f5a7]]
// Convention: __cdecl
// Signature: int __cdecl sound_mp3_cpp_CMP3Decoder_huffmanDecode_FUN_0052f350(CMP3Decoder *this_ptr,SHuffmanTable *huffman_table,int *x_out,int *y_out,int *v_out,int *w_out)

#include "nocturne.h"

int __cdecl sound_mp3_cpp_CMP3Decoder_huffmanDecode_FUN_0052f350(CMP3Decoder *this_ptr,SHuffmanTable *huffman_table,int *x_out,int *y_out,int *v_out,int *w_out)

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
      goto LAB_0052f3b9;
    }
    uVar2 = sound_mp3_cpp_CMP3Decoder_readBit_FUN_0052f250(this_ptr);
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
  } while ((uVar4 != 0) || (uVar3 < (uint)g_HuffmanTables[0].table_size));
  g_CurrentFilename = "..\\sound\\mp3.cpp";
  g_CurrentLineNumber = 0x321;
  core_main_c_displayErrorAndQuit_FUN_00506f10
            ("Illegal Huffman code in data.  File: %s",g_CurrentMp3Filename);
LAB_0052f3b9:
  if ((huffman_table->table_id[0] == '3') &&
     ((huffman_table->table_id[1] == '2' || (huffman_table->table_id[1] == '3')))) {
    *v_out = *y_out >> 3 & 1;
    *w_out = *y_out >> 2 & 1;
    *x_out = *y_out >> 1 & 1;
    *y_out = *y_out & 1;
    if ((*v_out != 0) &&
       (uVar3 = sound_mp3_cpp_CMP3Decoder_readBit_FUN_0052f250(this_ptr), uVar3 == 1)) {
      *v_out = -*v_out;
    }
    if ((*w_out != 0) &&
       (uVar3 = sound_mp3_cpp_CMP3Decoder_readBit_FUN_0052f250(this_ptr), uVar3 == 1)) {
      *w_out = -*w_out;
    }
    if ((*x_out != 0) &&
       (uVar3 = sound_mp3_cpp_CMP3Decoder_readBit_FUN_0052f250(this_ptr), uVar3 == 1)) {
      *x_out = -*x_out;
    }
  }
  else {
    if ((huffman_table->linbits != 0) && (huffman_table->xlen + -1 == *x_out)) {
      uVar3 = sound_mp3_cpp_CMP3Decoder_readBits_FUN_0052f170(this_ptr,huffman_table->linbits);
      *x_out = *x_out + uVar3;
    }
    if ((*x_out != 0) &&
       (uVar3 = sound_mp3_cpp_CMP3Decoder_readBit_FUN_0052f250(this_ptr), uVar3 == 1)) {
      *x_out = -*x_out;
    }
    if ((huffman_table->linbits != 0) && (huffman_table->ylen + -1 == *y_out)) {
      uVar3 = sound_mp3_cpp_CMP3Decoder_readBits_FUN_0052f170(this_ptr,huffman_table->linbits);
      *y_out = *y_out + uVar3;
    }
  }
  if ((*y_out != 0) &&
     (uVar3 = sound_mp3_cpp_CMP3Decoder_readBit_FUN_0052f250(this_ptr), uVar3 == 1)) {
    *y_out = -*y_out;
  }
  return local_14;
}

// Name: sound_mp3.cpp_CFileBitStream_readBits_FUN_0052ef40
// Address: 0052ef40
// Address Range: [[0052ef40, 0052f0b2]]
// Convention: __cdecl
// Signature: uint sound_mp3.cpp_CFileBitStream_readBits_FUN_0052ef40(CFileBitStream * bitstream, int num_bits)

#include "nocturne.h"

uint __cdecl
sound_mp3_cpp_CFileBitStream_readBits_FUN_0052ef40(CFileBitStream *bitstream,int num_bits)

{
  SIZE_T SVar1;
  char *buffer;
  int iVar2;
  uint unaff_EBP;
  
  if (0x20 < num_bits) {
    g_CurrentFilename = "..\\sound\\mp3.cpp";
    g_CurrentLineNumber = 0x267;
    core_main_c_displayErrorAndQuit_FUN_00506f10
              ("Cannot read or write more than %d bits at a time.  File: %s",0x20,g_CurrentMp3Filename,0);
  }
  bitstream->total_bits_read = bitstream->total_bits_read + num_bits;
  if (0 < num_bits) {
    do {
      if (bitstream->bits_available == 0) {
        bitstream->bits_available = 8;
        iVar2 = bitstream->current_byte_index + -1;
        bitstream->current_byte_index = iVar2;
        if ((iVar2 < 4) || (iVar2 < bitstream->end_of_stream_flag)) {
          if (bitstream->end_of_stream_flag == 0) {
            for (iVar2 = bitstream->current_byte_index; -1 < iVar2; iVar2 = iVar2 + -1) {
              bitstream->buffer
              [((bitstream->buffer_size + -1) - bitstream->current_byte_index) + iVar2] =
                   bitstream->buffer[iVar2];
            }
            iVar2 = (bitstream->buffer_size + -2) - bitstream->current_byte_index;
            if (iVar2 < 0) {
LAB_0052f051:
              bitstream->current_byte_index = bitstream->buffer_size + -1;
            }
            else {
              do {
                while( true ) {
                  if (bitstream->end_of_stream_flag != 0) goto LAB_0052f051;
                  SVar1 = 0;
                  if (0 < bitstream->bytes_remaining) {
                    buffer = bitstream->buffer + iVar2;
                    iVar2 = iVar2 + -1;
                    SVar1 = crt_stdio_c_fread_FUN_005fd990(buffer,1,1,bitstream->file_handle);
                  }
                  if (SVar1 != 1) break;
                  bitstream->bytes_remaining = bitstream->bytes_remaining + -1;
                  if (iVar2 < 0) {
                    bitstream->current_byte_index = bitstream->buffer_size + -1;
                    goto LAB_0052ef6c;
                  }
                }
                bitstream->end_of_stream_flag = iVar2 + 1;
              } while (-1 < iVar2);
              bitstream->current_byte_index = bitstream->buffer_size + -1;
            }
          }
          else {
            bitstream->error_flag = 1;
          }
        }
      }
LAB_0052ef6c:
      iVar2 = bitstream->bits_available;
      if (num_bits < iVar2) {
        iVar2 = num_bits;
      }
      num_bits = num_bits - iVar2;
      iVar2 = bitstream->bits_available - iVar2;
      unaff_EBP = unaff_EBP |
                  ((int)((uint)(byte)bitstream->buffer[bitstream->current_byte_index] &
                        g_MpegBitMaskTableMultiBit[bitstream->bits_available]) >>
                  ((byte)iVar2 & 0x1f)) << ((byte)num_bits & 0x1f);
      bitstream->bits_available = iVar2;
    } while (0 < num_bits);
  }
  return unaff_EBP;
}

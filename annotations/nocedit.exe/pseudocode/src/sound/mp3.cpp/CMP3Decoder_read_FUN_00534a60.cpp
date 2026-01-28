// Name: sound_mp3.cpp_CMP3Decoder_read_FUN_00534a60
// Address: 00534a60
// Address Range: [[00534a60, 00534b98]]
// Convention: __cdecl
// Signature: int __cdecl sound_mp3_cpp_CMP3Decoder_read_FUN_00534a60 (CMP3Decoder *this_ptr,short *output_buffer,int samples_requested)

#include "nocturne.h"

int __cdecl
sound_mp3_cpp_CMP3Decoder_read_FUN_00534a60
          (CMP3Decoder *this_ptr,short *output_buffer,int samples_requested)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  CMP3Decoder *pCVar5;
  short *psVar6;
  char *pcVar7;
  short *psVar8;
  byte bVar9;
  int local_14;
  
  bVar9 = 0;
  pcVar7 = g_CurrentMp3Filename;
  pCVar5 = this_ptr;
  do {
    cVar1 = pCVar5->filename[0];
    *pcVar7 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pCVar5->filename[1];
    pCVar5 = (CMP3Decoder *)(pCVar5->filename + 2);
    pcVar7[1] = cVar1;
    pcVar7 = pcVar7 + 2;
  } while (cVar1 != '\0');
  local_14 = 0;
  while( true ) {
    iVar2 = this_ptr->available_samples;
    if (0 < iVar2) {
      if (samples_requested < iVar2) {
        iVar2 = samples_requested;
      }
      uVar4 = this_ptr->num_channels * iVar2 * 2;
      psVar6 = this_ptr->decode_buffer_pos;
      psVar8 = output_buffer;
      for (uVar3 = uVar4 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
        *(uint *)psVar8 = *(uint *)psVar6;
        psVar6 = psVar6 + (uint)bVar9 * -4 + 2;
        psVar8 = psVar8 + (uint)bVar9 * -4 + 2;
      }
      for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(char *)psVar8 = (char)*psVar6;
        psVar6 = (short *)((int)psVar6 + (uint)bVar9 * -2 + 1);
        psVar8 = (short *)((int)psVar8 + (uint)bVar9 * -2 + 1);
      }
      this_ptr->available_samples = this_ptr->available_samples - iVar2;
      local_14 = local_14 + iVar2;
      samples_requested = samples_requested - iVar2;
      this_ptr->decode_buffer_pos = this_ptr->decode_buffer_pos + this_ptr->num_channels * iVar2;
      output_buffer = output_buffer + this_ptr->num_channels * iVar2;
    }
    for (; 0x47f < samples_requested; samples_requested = samples_requested - iVar2) {
      iVar2 = sound_mp3_cpp_CMP3Decoder_decodeFrame_FUN_00534d40(this_ptr);
      if (iVar2 < 1) {
        return local_14;
      }
      local_14 = local_14 + iVar2;
      output_buffer = output_buffer + this_ptr->num_channels * iVar2;
    }
    if (samples_requested < 1) break;
    iVar2 = sound_mp3_cpp_CMP3Decoder_decodeFrame_FUN_00534d40(this_ptr);
    this_ptr->available_samples = iVar2;
    if (iVar2 < 1) {
      return local_14;
    }
    this_ptr->decode_buffer_pos = this_ptr->decode_buffer;
  }
  return local_14;
}

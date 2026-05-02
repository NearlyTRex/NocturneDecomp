// Name: sound_mp3.cpp_CMP3Decoder_synthesisPoly_FUN_00533ba0
// Address: 00533ba0
// MANUAL RECONSTRUCTION
// Address Range: [[00533ba0, 00533c4a]]
// Convention: __cdecl
// Signature: void __cdecl sound_mp3_cpp_CMP3Decoder_synthesisPoly_FUN_00533ba0(CMP3Decoder *this_ptr,float *input_samples,float *output_buffer,int subband_index,int channel,SMpegLayer3GranuleInfo *granule,SMpegFrameHeader *header)

#include "nocturne.h"

void __cdecl sound_mp3_cpp_CMP3Decoder_synthesisPoly_FUN_00533ba0(CMP3Decoder *this_ptr,float *input_samples,float *output_buffer,int subband_index,int channel,SMpegLayer3GranuleInfo *granule,SMpegFrameHeader *header)

{
  int iVar1;
  int iVar3;
  int iVar2;
  float (*pafVar3) [18];
  float local_94 [36];

  if (((granule->window_switching_flag == 0) || (granule->mixed_block_flag == 0)) ||
     (1 < subband_index)) {
    iVar1 = granule->block_type;
  }
  else {
    iVar1 = 0;
  }
  sound_mp3_cpp_applyPolyphaseWindow_FUN_00533690(input_samples,local_94,iVar1);
  iVar3 = 0;
  pafVar3 = this_ptr->synthesis_history[channel] + subband_index;
  do {
    pafVar3 = (float (*) [18])(*pafVar3 + 1);
    iVar2 = iVar3 + 1;
    *output_buffer = local_94[iVar3] + (*pafVar3)[0];
    (*pafVar3)[0] = local_94[iVar3 + 0x12];
    iVar3 = iVar2;
    output_buffer = output_buffer + 1;
    pafVar3 = pafVar3;
  } while (iVar2 < 0x12);
  return;
}

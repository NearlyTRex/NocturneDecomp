// Name: sound_mp3.cpp_CMP3Decoder_synthesisPoly_FUN_005020e0
// Address: 005020e0
// Address Range: [[005020e0, 0050218a]]
// Convention: __cdecl
// Signature: void __cdecl sound_mp3_cpp_CMP3Decoder_synthesisPoly_FUN_005020e0(CMP3Decoder *this_ptr,float *input_samples,float *output_buffer,int subband_index,int channel,SMpegLayer3GranuleInfo *granule,SMpegFrameHeader *header)

#include "nocturne.h"

void __cdecl sound_mp3_cpp_CMP3Decoder_synthesisPoly_FUN_005020e0(CMP3Decoder *this_ptr,float *input_samples,float *output_buffer,int subband_index,int channel,SMpegLayer3GranuleInfo *granule,SMpegFrameHeader *header)

{
  int iVar1;
  int iVar2;
  float (*pafVar3) [18];
  float local_94 [18];
  float local_4c [18];
  
  if (((granule->window_switching_flag == 0) || (granule->mixed_block_flag == 0)) ||
     (1 < subband_index)) {
    iVar1 = granule->block_type;
  }
  else {
    iVar1 = 0;
  }
  sound_mp3_cpp_applyPolyphaseWindow_FUN_00501bd0(input_samples,local_94,iVar1);
  iVar1 = 0;
  pafVar3 = this_ptr->synthesis_history[channel] + subband_index;
  do {
    iVar2 = iVar1 + 1;
    *output_buffer = local_94[iVar1] + (*pafVar3)[0];
    (*pafVar3)[0] = local_94[iVar1 + 0x12];
    iVar1 = iVar2;
    output_buffer = output_buffer + 1;
    pafVar3 = (float (*) [18])(*pafVar3 + 1);
  } while (iVar2 < 0x12);
  return;
}

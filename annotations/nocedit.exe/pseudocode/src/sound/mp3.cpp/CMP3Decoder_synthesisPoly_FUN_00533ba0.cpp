// Name: sound_mp3.cpp_CMP3Decoder_synthesisPoly_FUN_00533ba0
// Address: 00533ba0
// Address Range: [[00533ba0, 00533c4a]]
// Convention: __cdecl
// Signature: void __cdecl sound_mp3_cpp_CMP3Decoder_synthesisPoly_FUN_00533ba0(CMP3Decoder *this_ptr,void *unknown_param2,float *output_buffer,int subband_index,int channel,SMpegFrame *frame_info,void *unknown_param7)

#include "nocturne.h"

void __cdecl sound_mp3_cpp_CMP3Decoder_synthesisPoly_FUN_00533ba0(CMP3Decoder *this_ptr,void *unknown_param2,float *output_buffer,int subband_index,int channel,SMpegFrame *frame_info,void *unknown_param7)

{
  int iVar1;
  int iVar2;
  float (*pafVar3) [18];
  float local_94 [18];
  float local_4c [18];
  
  if (((frame_info->samples_per_granule == 0) || (frame_info->sblimit == 0)) || (1 < subband_index))
  {
    iVar1 = frame_info->js_bound;
  }
  else {
    iVar1 = 0;
  }
  sound_mp3_cpp_applyPolyphaseWindow_FUN_00533690(unknown_param2,local_94,iVar1);
  iVar1 = 0;
  pafVar3 = this_ptr->synthesis_history[channel * 2] + subband_index;
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

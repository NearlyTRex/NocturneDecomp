// Name: sound_mp3.cpp_CMP3Decoder_synthesisPoly_FUN_00533ba0
// Address: 00533ba0
// Address Range: [[00533ba0, 00533c4a]]
// Convention: __cdecl
// Signature: void sound_mp3.cpp_CMP3Decoder_synthesisPoly_FUN_00533ba0(CMP3Decoder * this_ptr, void * unknown_param2, float * output_buffer, int subband_index, int channel, SMpegFrame * frame_info, void * unknown_param7)

#include "nocturne.h"

void __cdecl
sound_mp3_cpp_CMP3Decoder_synthesisPoly_FUN_00533ba0
          (CMP3Decoder *this_ptr,void *unknown_param2,float *output_buffer,int subband_index,
          int channel,SMpegFrame *frame_info,void *unknown_param7)

{
  int iVar1;
  int iVar2;
  float *pfVar3;
  BADSPACEBASE *in_ESP;
  float local_94;
  float afStack_90 [18];
  float afStack_48 [17];
  
  if (((frame_info->samples_per_granule == 0) || (frame_info->sblimit == 0)) || (1 < subband_index))
  {
    iVar1 = frame_info->js_bound;
  }
  else {
    iVar1 = 0;
  }
  sound_mp3_cpp_applyPolyphaseWindow_FUN_00533690(unknown_param2,&local_94,iVar1);
  iVar1 = 0;
  pfVar3 = (float *)((int)unknown_param2 + subband_index * 0x48 + (int)frame_info * 0x900 + 0x7430);
  do {
    iVar2 = iVar1 + 1;
    *(float *)subband_index = afStack_90[iVar1] + *pfVar3;
    *pfVar3 = afStack_90[iVar1 + 0x12];
    iVar1 = iVar2;
    subband_index = (int)(subband_index + 4);
    pfVar3 = pfVar3 + 1;
  } while (iVar2 < 0x12);
  return;
}

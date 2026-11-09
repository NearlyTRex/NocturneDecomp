// Name: sound_mp3.cpp_CMP3Decoder_synthesisPoly_FUN_0052a7d0
// Address: 0052a7d0
// Address Range: [[0052a7d0, 0052a87a]]
// Convention: __cdecl
// Signature: void __cdecl sound_mp3_cpp_CMP3Decoder_synthesisPoly_FUN_0052a7d0(CMP3Decoder *this_ptr,float *input_samples,float *output_buffer,int subband_index,int channel,SMpegLayer3GranuleInfo *granule,SMpegFrameHeader *header)

#include "nocturne.h"

void __cdecl sound_mp3_cpp_CMP3Decoder_synthesisPoly_FUN_0052a7d0(CMP3Decoder *this_ptr,float *input_samples,float *output_buffer,int subband_index,int channel,SMpegLayer3GranuleInfo *granule,SMpegFrameHeader *header)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  float *pfVar4;
  float local_94 [18];
  float local_4c [18];
  
  if (((*(int *)(granule + 0x10) == 0) || (*(int *)(granule + 0x18) == 0)) || (1 < subband_index)) {
    uVar1 = *(uint *)(granule + 0x14);
  }
  else {
    uVar1 = 0;
  }
  sound_mp3_cpp_applyPolyphaseWindow_FUN_0052a2c0(input_samples,local_94,uVar1);
  iVar2 = 0;
  pfVar4 = (float *)(&this_ptr->field_0x7430 + subband_index * 0x48 + channel * 0x900);
  do {
    iVar3 = iVar2 + 1;
    *output_buffer = local_94[iVar2] + *pfVar4;
    *pfVar4 = local_94[iVar2 + 0x12];
    iVar2 = iVar3;
    output_buffer = output_buffer + 1;
    pfVar4 = pfVar4 + 1;
  } while (iVar3 < 0x12);
  return;
}

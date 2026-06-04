// Name: sound_mp3.cpp_CMP3Decoder_readLayer3ScalefactorsLSF_FUN_00531480
// Address: 00531480
// MANUAL RECONSTRUCTION
// Address Range: [[00531480, 0053167a]]
// Convention: __cdecl
// Signature: void __cdecl sound_mp3_cpp_CMP3Decoder_readLayer3ScalefactorsLSF_FUN_00531480(CMP3Decoder *this_ptr,int *scalefactor_dest,SMpegLayer3SideInfo *side_info,int channel,int granule,SMpegFrame *frame)

#include "nocturne.h"

void __cdecl sound_mp3_cpp_CMP3Decoder_readLayer3ScalefactorsLSF_FUN_00531480(CMP3Decoder *this_ptr,int *scalefactor_dest,SMpegLayer3SideInfo *side_info,int channel,int granule,SMpegFrame *frame)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int *piVar1;
  int iVar8;
  int iVar10;
  int iVar9;
  int iVar11;
  int *piVar6;
  
  iVar8 = 0;
  sound_mp3_cpp_CMP3Decoder_decodeScalefacCompress_FUN_005310f0
            (this_ptr,scalefactor_dest,side_info,channel,granule,frame);
  if ((side_info->channels[granule].granules[channel].window_switching_flag != 0) &&
     (side_info->channels[granule].granules[channel].block_type == 2)) {
    piVar1 = scalefactor_dest + granule * 0x3e;
    if (side_info->channels[granule].granules[channel].mixed_block_flag != 0) {
      piVar2 = piVar1;
      do {
        *piVar2 = this_ptr->layer3_scalefactors[iVar8];
        piVar2 = piVar2 + 1;
        iVar8 = iVar8 + 1;
      } while (piVar2 != piVar1 + 8);
      iVar10 = 0x2a;
      iVar9 = 3;
      do {
        piVar3 = scalefactor_dest + granule * 0x3e + iVar9;
        do {
          piVar3 = piVar3 + 0xd;
          piVar3[0xa] = this_ptr->layer3_scalefactors[iVar8];
          iVar8 = iVar8 + 1;
        } while (piVar3 != &scalefactor_dest[granule * 0x3e + iVar10]);
        iVar9 = iVar9 + 1;
        iVar10 = iVar10 + 1;
      } while (iVar9 < 0xc);
      piVar4 = scalefactor_dest + granule * 0x3e + 0xc;
      do {
        piVar4 = piVar4 + 0xd;
        piVar4[0xa] = 0;
      } while (piVar4 != scalefactor_dest + granule * 0x3e + 0x33);
      return;
    }
    iVar10 = 0x27;
    iVar11 = 0;
    do {
      piVar5 = piVar1 + iVar11;
      do {
        piVar5 = piVar5 + 0xd;
        piVar5[0xa] = this_ptr->layer3_scalefactors[iVar8];
        iVar8 = iVar8 + 1;
      } while (piVar5 != &piVar1[iVar10]);
      iVar11 = iVar11 + 1;
      iVar10 = iVar10 + 1;
    } while (iVar11 < 0xc);
    piVar1 = scalefactor_dest + granule * 0x3e + 0xc;
    do {
      piVar6 = piVar1 + 0xd;
      piVar1[0x17] = 0;
      piVar1 = piVar6;
    } while (piVar6 != scalefactor_dest + granule * 0x3e + 0x33);
    return;
  }
  iVar1 = 0;
  do {
    scalefactor_dest[granule * 0x3e + iVar1] = this_ptr->layer3_scalefactors[iVar1];
    iVar1 = iVar1 + 1;
  } while (iVar1 != 0x15);
  scalefactor_dest[granule * 0x3e + 0x16] = 0;
  return;
}

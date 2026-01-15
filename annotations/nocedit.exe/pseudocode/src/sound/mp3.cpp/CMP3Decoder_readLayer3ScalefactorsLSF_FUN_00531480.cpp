// Name: sound_mp3.cpp_CMP3Decoder_readLayer3ScalefactorsLSF_FUN_00531480
// Address: 00531480
// Address Range: [[00531480, 0053167a]]
// Convention: __cdecl
// Signature: void sound_mp3.cpp_CMP3Decoder_readLayer3ScalefactorsLSF_FUN_00531480(CMP3Decoder * this_ptr, int * scalefactor_dest, SMpegLayer3Granule * granule_info, int channel, int granule, SMpegFrame * frame)

#include "nocturne.h"

void __cdecl
sound_mp3_cpp_CMP3Decoder_readLayer3ScalefactorsLSF_FUN_00531480
          (CMP3Decoder *this_ptr,int *scalefactor_dest,SMpegLayer3Granule *granule_info,int channel,
          int granule,SMpegFrame *frame)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  CMP3Decoder *pCVar5;
  char *pcVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  iVar7 = 0;
  sound_mp3_cpp_CMP3Decoder_decodeScalefacCompress_FUN_005310f0
            (this_ptr,scalefactor_dest,granule_info,channel,granule,frame);
  if ((granule_info[granule].table_select[channel * 0x12 + -3] != 0) &&
     (granule_info[granule].table_select[channel * 0x12 + -2] == 2)) {
    piVar3 = scalefactor_dest + granule * 0x3e;
    if (granule_info[granule].table_select[channel * 0x12 + -1] != 0) {
      piVar4 = piVar3;
      pCVar5 = this_ptr;
      do {
        piVar1 = piVar4 + 1;
        piVar2 = pCVar5->layer3_scalefactors;
        pCVar5 = (CMP3Decoder *)(pCVar5->filename + 4);
        iVar7 = iVar7 + 1;
        *piVar4 = *piVar2;
        piVar4 = piVar1;
      } while (piVar1 != piVar3 + 8);
      iVar8 = 0xa8;
      iVar9 = 3;
      do {
        pcVar6 = this_ptr->filename + iVar7 * 4;
        piVar3 = scalefactor_dest + granule * 0x3e + iVar9;
        do {
          piVar2 = piVar3 + 0xd;
          piVar4 = (int *)(pcVar6 + 0x7358);
          pcVar6 = pcVar6 + 4;
          iVar7 = iVar7 + 1;
          piVar3[0x17] = *piVar4;
          piVar3 = piVar2;
        } while (piVar2 != (int *)((int)scalefactor_dest + iVar8 + granule * 0xf8));
        iVar9 = iVar9 + 1;
        iVar8 = iVar8 + 4;
      } while (iVar9 < 0xc);
      piVar3 = scalefactor_dest + granule * 0x3e + 0xc;
      do {
        piVar4 = piVar3 + 0xd;
        piVar3[0x17] = 0;
        piVar3 = piVar4;
      } while (piVar4 != scalefactor_dest + granule * 0x3e + 0x33);
      return;
    }
    iVar8 = 0x9c;
    iVar9 = 0;
    do {
      pcVar6 = this_ptr->filename + iVar7 * 4;
      piVar4 = piVar3 + iVar9;
      do {
        piVar1 = piVar4 + 0xd;
        piVar2 = (int *)(pcVar6 + 0x7358);
        pcVar6 = pcVar6 + 4;
        iVar7 = iVar7 + 1;
        piVar4[0x17] = *piVar2;
        piVar4 = piVar1;
      } while (piVar1 != (int *)((int)piVar3 + iVar8));
      iVar9 = iVar9 + 1;
      iVar8 = iVar8 + 4;
    } while (iVar9 < 0xc);
    piVar3 = scalefactor_dest + granule * 0x3e + 0xc;
    do {
      piVar4 = piVar3 + 0xd;
      piVar3[0x17] = 0;
      piVar3 = piVar4;
    } while (piVar4 != scalefactor_dest + granule * 0x3e + 0x33);
    return;
  }
  iVar7 = 0;
  do {
    piVar3 = this_ptr->layer3_scalefactors;
    iVar8 = iVar7 + granule * 0xf8;
    this_ptr = (CMP3Decoder *)(this_ptr->filename + 4);
    iVar7 = iVar7 + 4;
    *(int *)((int)scalefactor_dest + iVar8) = *piVar3;
  } while (iVar7 != 0x54);
  scalefactor_dest[granule * 0x3e + 0x16] = 0;
  return;
}

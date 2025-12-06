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
  int iVar3;
  int *piVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  int iVar4;
  
  iVar7 = 0;
  sound_mp3_cpp_CMP3Decoder_decodeScalefacCompress_FUN_005310f0
            (this_ptr,scalefactor_dest,granule_info,channel,granule,frame);
  if ((granule_info[granule].table_select[channel * 0x12 + -3] != 0) &&
     (granule_info[granule].table_select[channel * 0x12 + -2] == 2)) {
    piVar9 = (int *)((int)granule_info + granule * 0xf8);
    if (granule_info[granule].table_select[channel * 0x12 + -1] != 0) {
      piVar5 = piVar9;
      piVar6 = scalefactor_dest;
      do {
        piVar2 = piVar5 + 1;
        piVar1 = piVar6 + 0x1cd6;
        piVar6 = piVar6 + 1;
        iVar7 = iVar7 + 1;
        *piVar5 = *piVar1;
        piVar5 = piVar2;
      } while (piVar2 != piVar9 + 8);
      iVar8 = 0xa8;
      iVar10 = 3;
      do {
        piVar9 = scalefactor_dest + iVar7;
        iVar4 = (int)granule_info + iVar10 * 4 + (int)frame * 0xf8;
        do {
          iVar3 = iVar4 + 0x34;
          piVar5 = piVar9 + 0x1cd6;
          piVar9 = piVar9 + 1;
          iVar7 = iVar7 + 1;
          *(int *)(iVar4 + 0x5c) = *piVar5;
          iVar4 = iVar3;
        } while (iVar3 != (int)granule_info + iVar8 + (int)frame * 0xf8);
        iVar10 = iVar10 + 1;
        iVar8 = iVar8 + 4;
      } while (iVar10 < 0xc);
      iVar7 = (int)granule_info + (int)frame * 0xf8 + 0x30;
      do {
        iVar8 = iVar7 + 0x34;
        *(uint *)(iVar7 + 0x5c) = 0;
        iVar7 = iVar8;
      } while (iVar8 != (int)granule_info + (int)frame * 0xf8 + 0xcc);
      return;
    }
    iVar8 = 0x9c;
    iVar10 = 0;
    do {
      piVar6 = scalefactor_dest + iVar7;
      piVar5 = piVar9 + iVar10;
      do {
        piVar2 = piVar5 + 0xd;
        piVar1 = piVar6 + 0x1cd6;
        piVar6 = piVar6 + 1;
        iVar7 = iVar7 + 1;
        piVar5[0x17] = *piVar1;
        piVar5 = piVar2;
      } while (piVar2 != (int *)((int)piVar9 + iVar8));
      iVar10 = iVar10 + 1;
      iVar8 = iVar8 + 4;
    } while (iVar10 < 0xc);
    iVar7 = (int)granule_info + (int)frame * 0xf8 + 0x30;
    do {
      iVar8 = iVar7 + 0x34;
      *(uint *)(iVar7 + 0x5c) = 0;
      iVar7 = iVar8;
    } while (iVar8 != (int)granule_info + (int)frame * 0xf8 + 0xcc);
    return;
  }
  iVar7 = 0;
  do {
    piVar9 = scalefactor_dest + 0x1cd6;
    iVar8 = iVar7 + (int)frame * 0xf8;
    scalefactor_dest = scalefactor_dest + 1;
    iVar7 = iVar7 + 4;
    *(int *)((int)granule_info + iVar8) = *piVar9;
  } while (iVar7 != 0x54);
  *(uint *)((int)granule_info + (int)frame * 0xf8 + 0x58) = 0;
  return;
}

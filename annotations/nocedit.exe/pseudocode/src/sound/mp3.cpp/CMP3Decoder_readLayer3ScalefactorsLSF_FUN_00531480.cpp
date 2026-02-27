// Name: sound_mp3.cpp_CMP3Decoder_readLayer3ScalefactorsLSF_FUN_00531480
// Address: 00531480
// Address Range: [[00531480, 0053167a]]
// Convention: __cdecl
// Signature: void __cdecl sound_mp3_cpp_CMP3Decoder_readLayer3ScalefactorsLSF_FUN_00531480(CMP3Decoder *this_ptr,int *scalefactor_dest,SMpegLayer3SideInfo *granule_info,int channel,int granule,SMpegFrame *frame)

#include "nocturne.h"

void __cdecl sound_mp3_cpp_CMP3Decoder_readLayer3ScalefactorsLSF_FUN_00531480(CMP3Decoder *this_ptr,int *scalefactor_dest,SMpegLayer3SideInfo *granule_info,int channel,int granule,SMpegFrame *frame)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  CMP3Decoder *pCVar6;
  char *pcVar7;
  int iVar8;
  int iVar9;
  
  iVar1 = channel * 0x48 + granule * 0xa0 + 0x18;
  iVar8 = 0;
  sound_mp3_cpp_CMP3Decoder_decodeScalefacCompress_FUN_005310f0
            (this_ptr,scalefactor_dest,granule_info,channel,granule,frame);
  if ((*(int *)((int)granule_info->granules + iVar1 + -8) != 0) &&
     (*(int *)((int)granule_info->granules + iVar1 + -4) == 2)) {
    piVar4 = scalefactor_dest + granule * 0x3e;
    if (*(int *)((int)granule_info->granules + iVar1) != 0) {
      piVar5 = piVar4;
      pCVar6 = this_ptr;
      do {
        piVar2 = piVar5 + 1;
        piVar3 = pCVar6->layer3_scalefactors;
        pCVar6 = (CMP3Decoder *)(pCVar6->filename + 4);
        iVar8 = iVar8 + 1;
        *piVar5 = *piVar3;
        piVar5 = piVar2;
      } while (piVar2 != piVar4 + 8);
      iVar1 = 0xa8;
      iVar9 = 3;
      do {
        pcVar7 = this_ptr->filename + iVar8 * 4;
        piVar4 = scalefactor_dest + granule * 0x3e + iVar9;
        do {
          piVar3 = piVar4 + 0xd;
          piVar5 = (int *)(pcVar7 + 0x7358);
          pcVar7 = pcVar7 + 4;
          iVar8 = iVar8 + 1;
          piVar4[0x17] = *piVar5;
          piVar4 = piVar3;
        } while (piVar3 != (int *)((int)scalefactor_dest + iVar1 + granule * 0xf8));
        iVar9 = iVar9 + 1;
        iVar1 = iVar1 + 4;
      } while (iVar9 < 0xc);
      piVar4 = scalefactor_dest + granule * 0x3e + 0xc;
      do {
        piVar5 = piVar4 + 0xd;
        piVar4[0x17] = 0;
        piVar4 = piVar5;
      } while (piVar5 != scalefactor_dest + granule * 0x3e + 0x33);
      return;
    }
    iVar1 = 0x9c;
    iVar9 = 0;
    do {
      pcVar7 = this_ptr->filename + iVar8 * 4;
      piVar5 = piVar4 + iVar9;
      do {
        piVar2 = piVar5 + 0xd;
        piVar3 = (int *)(pcVar7 + 0x7358);
        pcVar7 = pcVar7 + 4;
        iVar8 = iVar8 + 1;
        piVar5[0x17] = *piVar3;
        piVar5 = piVar2;
      } while (piVar2 != (int *)((int)piVar4 + iVar1));
      iVar9 = iVar9 + 1;
      iVar1 = iVar1 + 4;
    } while (iVar9 < 0xc);
    piVar4 = scalefactor_dest + granule * 0x3e + 0xc;
    do {
      piVar5 = piVar4 + 0xd;
      piVar4[0x17] = 0;
      piVar4 = piVar5;
    } while (piVar5 != scalefactor_dest + granule * 0x3e + 0x33);
    return;
  }
  iVar1 = 0;
  do {
    piVar4 = this_ptr->layer3_scalefactors;
    iVar8 = iVar1 + granule * 0xf8;
    this_ptr = (CMP3Decoder *)(this_ptr->filename + 4);
    iVar1 = iVar1 + 4;
    *(int *)((int)scalefactor_dest + iVar8) = *piVar4;
  } while (iVar1 != 0x54);
  scalefactor_dest[granule * 0x3e + 0x16] = 0;
  return;
}

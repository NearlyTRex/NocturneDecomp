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
  int *piVar1;
  CMP3Decoder *pCVar6;
  char *pcVar7;
  char *pcVar8;
  int iVar8;
  int iVar10;
  int iVar9;
  int iVar11;
  int *piVar6;
  
  iVar10 = channel * 0x48 + granule * 0xa0 + 0x18;
  iVar8 = 0;
  sound_mp3_cpp_CMP3Decoder_decodeScalefacCompress_FUN_005310f0
            (this_ptr,scalefactor_dest,granule_info,channel,granule,frame);
  if ((*(int *)((int)granule_info->granules + iVar10 + -8) != 0) &&
     (*(int *)((int)granule_info->granules + iVar10 + -4) == 2)) {
    piVar1 = scalefactor_dest + granule * 0x3e;
    if (*(int *)((int)granule_info->granules + iVar10) != 0) {
      piVar2 = piVar1;
      pCVar6 = this_ptr;
      do {
        piVar2 = piVar2 + 1;
        piVar6 = pCVar6->layer3_scalefactors;
        pCVar6 = (CMP3Decoder *)(pCVar6->filename + 4);
        iVar8 = iVar8 + 1;
        *piVar2 = *piVar6;
        piVar2 = piVar2;
      } while (piVar2 != piVar1 + 8);
      iVar10 = 0xa8;
      iVar9 = 3;
      do {
        pcVar7 = this_ptr->filename + iVar8 * 4;
        piVar3 = scalefactor_dest + granule * 0x3e + iVar9;
        do {
          piVar3 = piVar3 + 0xd;
          piVar1 = (int *)(pcVar7 + 0x7358);
          pcVar7 = pcVar7 + 4;
          iVar8 = iVar8 + 1;
          piVar3[0x17] = *piVar1;
          piVar3 = piVar3;
        } while (piVar3 != (int *)((int)scalefactor_dest + iVar10 + granule * 0xf8));
        iVar9 = iVar9 + 1;
        iVar10 = iVar10 + 4;
      } while (iVar9 < 0xc);
      piVar4 = scalefactor_dest + granule * 0x3e + 0xc;
      do {
        piVar4 = piVar4 + 0xd;
        piVar4[0x17] = 0;
        piVar4 = piVar4;
      } while (piVar4 != scalefactor_dest + granule * 0x3e + 0x33);
      return;
    }
    iVar10 = 0x9c;
    iVar11 = 0;
    do {
      pcVar8 = this_ptr->filename + iVar8 * 4;
      piVar5 = piVar1 + iVar11;
      do {
        piVar5 = piVar5 + 0xd;
        piVar6 = (int *)(pcVar8 + 0x7358);
        pcVar8 = pcVar8 + 4;
        iVar8 = iVar8 + 1;
        piVar5[0x17] = *piVar6;
        piVar5 = piVar5;
      } while (piVar5 != (int *)((int)piVar1 + iVar10));
      iVar11 = iVar11 + 1;
      iVar10 = iVar10 + 4;
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
    piVar1 = this_ptr->layer3_scalefactors;
    iVar10 = iVar1 + granule * 0xf8;
    this_ptr = (CMP3Decoder *)(this_ptr->filename + 4);
    iVar1 = iVar1 + 4;
    *(int *)((int)scalefactor_dest + iVar10) = *piVar1;
  } while (iVar1 != 0x54);
  scalefactor_dest[granule * 0x3e + 0x16] = 0;
  return;
}

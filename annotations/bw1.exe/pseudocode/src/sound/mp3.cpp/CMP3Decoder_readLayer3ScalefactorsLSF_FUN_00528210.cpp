// Name: sound_mp3.cpp_CMP3Decoder_readLayer3ScalefactorsLSF_FUN_00528210
// Address: 00528210
// Address Range: [[00528210, 0052840a]]
// Convention: __cdecl
// Signature: void __cdecl sound_mp3_cpp_CMP3Decoder_readLayer3ScalefactorsLSF_FUN_00528210(CMP3Decoder *this_ptr,int *scalefactor_dest,SMpegLayer3SideInfo *side_info,int channel,int granule,SMpegFrame *frame)

#include "nocturne.h"

void __cdecl sound_mp3_cpp_CMP3Decoder_readLayer3ScalefactorsLSF_FUN_00528210(CMP3Decoder *this_ptr,int *scalefactor_dest,SMpegLayer3SideInfo *side_info,int channel,int granule,SMpegFrame *frame)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  CMP3Decoder *pCVar6;
  byte *puVar7;
  int iVar8;
  int iVar9;
  int *piVar5;
  
  iVar1 = channel * 0x48 + granule * 0xa0 + 0x18;
  iVar8 = 0;
  sound_mp3_cpp_CMP3Decoder_decodeScalefacCompress_FUN_00527e80
            (this_ptr,scalefactor_dest,side_info,channel,granule,frame);
  if ((*(int *)(side_info + iVar1 + 0x10) != 0) && (*(int *)(side_info + iVar1 + 0x14) == 2)) {
    piVar3 = scalefactor_dest + granule * 0x3e;
    if (*(int *)(side_info + iVar1 + 0x18) != 0) {
      piVar4 = piVar3;
      pCVar6 = this_ptr;
      do {
        piVar2 = piVar4 + 1;
        puVar7 = &pCVar6->field_0x7358;
        pCVar6 = (CMP3Decoder *)&pCVar6->field_0x4;
        iVar8 = iVar8 + 1;
        *piVar4 = *(int *)puVar7;
        piVar4 = piVar2;
      } while (piVar2 != piVar3 + 8);
      iVar1 = 0xa8;
      iVar9 = 3;
      do {
        puVar7 = &this_ptr->field_0x0 + iVar8 * 4;
        piVar3 = scalefactor_dest + granule * 0x3e + iVar9;
        do {
          piVar2 = piVar3 + 0xd;
          piVar4 = (int *)(puVar7 + 0x7358);
          puVar7 = puVar7 + 4;
          iVar8 = iVar8 + 1;
          piVar3[0x17] = *piVar4;
          piVar3 = piVar2;
        } while (piVar2 != (int *)((int)scalefactor_dest + iVar1 + granule * 0xf8));
        iVar9 = iVar9 + 1;
        iVar1 = iVar1 + 4;
      } while (iVar9 < 0xc);
      piVar3 = scalefactor_dest + granule * 0x3e + 0xc;
      do {
        piVar4 = piVar3 + 0xd;
        piVar3[0x17] = 0;
        piVar3 = piVar4;
      } while (piVar4 != scalefactor_dest + granule * 0x3e + 0x33);
      return;
    }
    iVar1 = 0x9c;
    iVar9 = 0;
    do {
      puVar7 = &this_ptr->field_0x0 + iVar8 * 4;
      piVar4 = piVar3 + iVar9;
      do {
        piVar5 = piVar4 + 0xd;
        piVar2 = (int *)(puVar7 + 0x7358);
        puVar7 = puVar7 + 4;
        iVar8 = iVar8 + 1;
        piVar4[0x17] = *piVar2;
        piVar4 = piVar5;
      } while (piVar5 != (int *)((int)piVar3 + iVar1));
      iVar9 = iVar9 + 1;
      iVar1 = iVar1 + 4;
    } while (iVar9 < 0xc);
    piVar3 = scalefactor_dest + granule * 0x3e + 0xc;
    do {
      piVar4 = piVar3 + 0xd;
      piVar3[0x17] = 0;
      piVar3 = piVar4;
    } while (piVar4 != scalefactor_dest + granule * 0x3e + 0x33);
    return;
  }
  iVar1 = 0;
  do {
    puVar7 = &this_ptr->field_0x7358;
    iVar8 = iVar1 + granule * 0xf8;
    this_ptr = (CMP3Decoder *)&this_ptr->field_0x4;
    iVar1 = iVar1 + 4;
    *(uint *)((int)scalefactor_dest + iVar8) = *(uint *)puVar7;
  } while (iVar1 != 0x54);
  scalefactor_dest[granule * 0x3e + 0x16] = 0;
  return;
}

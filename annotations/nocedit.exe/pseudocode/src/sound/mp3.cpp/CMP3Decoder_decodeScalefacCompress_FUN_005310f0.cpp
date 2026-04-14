// Name: sound_mp3.cpp_CMP3Decoder_decodeScalefacCompress_FUN_005310f0
// Address: 005310f0
// Address Range: [[005310f0, 00531474]]
// Convention: __cdecl
// Signature: void __cdecl sound_mp3_cpp_CMP3Decoder_decodeScalefacCompress_FUN_005310f0(CMP3Decoder *this_ptr,int *scalefactor_dest,SMpegLayer3SideInfo *side_info,int channel,int granule,SMpegFrame *frame)

#include "nocturne.h"

void __cdecl sound_mp3_cpp_CMP3Decoder_decodeScalefacCompress_FUN_005310f0(CMP3Decoder *this_ptr,int *scalefactor_dest,SMpegLayer3SideInfo *side_info,int channel,int granule,SMpegFrame *frame)

{
  int iVar1;
  uint uVar3;
  uint uVar2;
  short sVar4;
  short sVar3;
  short sVar5;
  uint local_34 [5];
  short sStack_1c;
  uint local_1a;
  short sStack_14;
  SMpegFrameHeader *pSVar1;
  int iVar2;
  
  pSVar1 = frame->header;
  sStack_1c = 0;
  uVar2 = side_info->channels[granule].granules[channel].scalefac_compress;
  if ((side_info->channels[granule].granules[channel].block_type == 2) &&
     (side_info->channels[granule].granules[channel].mixed_block_flag == 0)) {
    sStack_1c = 1;
  }
  if ((side_info->channels[granule].granules[channel].block_type == 2) &&
     (side_info->channels[granule].granules[channel].mixed_block_flag == 1)) {
    sStack_1c = 2;
  }
  iVar2 = pSVar1->mode_extension;
  if (((iVar2 != 1) && (iVar2 != 3)) || (granule != 1)) {
    if (uVar2 < 400) {
      local_34[0] = (uVar2 >> 4) / 5;
      local_34[2] = (uVar2 & 0xf) >> 2;
      local_34[1] = (uVar2 >> 4) % 5;
      local_34[3] = uVar2 & 3;
      side_info->channels[granule].granules[channel].preflag = 0;
      local_1a = local_1a & 0xffff;
    }
    else if (uVar2 < 500) {
      local_34[4] = uVar2 - 400;
      local_34[0] = (local_34[4] >> 2) / 5;
      local_34[2] = local_34[4] & 3;
      local_34[1] = (local_34[4] >> 2) % 5;
      local_34[3] = 0;
      local_1a = CONCAT22(1,(ushort)local_1a);
      side_info->channels[granule].granules[channel].preflag = 0;
    }
    else if (uVar2 < 0x200) {
      local_34[0] = (uVar2 - 500) / 3;
      local_34[1] = (uVar2 - 500) % 3;
      local_34[2] = 0;
      local_34[3] = 0;
      local_1a = CONCAT22(2,(ushort)local_1a);
      side_info->channels[granule].granules[channel].preflag = 1;
    }
  }
  if (((pSVar1->mode_extension == 1) || (pSVar1->mode_extension == 3)) && (granule == 1)) {
    uVar2 = uVar2 >> 1;
    if (uVar2 < 0xb4) {
      local_34[0] = uVar2 / 0x24;
      local_34[1] = (uint)(((ulonglong)uVar2 % 0x24) / 6);
      local_34[3] = 0;
      local_34[2] = (uint)(((ulonglong)uVar2 % 0x24) % 6);
      side_info->channels[1].granules[channel].preflag = 0;
      local_1a = CONCAT22(3,(ushort)local_1a);
    }
    else if (uVar2 < 0xf4) {
      uVar2 = uVar2 - 0xb4;
      local_34[0] = (uVar2 & 0x3f) >> 4;
      local_34[3] = 0;
      local_34[2] = uVar2 & 3;
      local_34[1] = (uVar2 & 0xf) >> 2;
      side_info->channels[1].granules[channel].preflag = 0;
      local_1a = CONCAT22(4,(ushort)local_1a);
    }
    else if (uVar2 < 0xff) {
      local_34[0] = (uVar2 - 0xf4) / 3;
      local_34[2] = 0;
      local_34[3] = 0;
      local_34[1] = (uVar2 - 0xf4) % 3;
      side_info->channels[1].granules[channel].preflag = 0;
      local_1a = CONCAT22(5,(ushort)local_1a);
    }
  }
  for (sVar4 = 0; sVar4 < 0x2d; sVar4 = sVar4 + 1) {
    this_ptr->layer3_scalefactors[sVar4] = 0;
  }
  sVar3 = 0;
  for (sStack_14 = 0; iVar1 = (int)sStack_14, iVar1 < 4; sStack_14 = sStack_14 + 1) {
    for (sVar5 = 0;
        (uint)(int)sVar5 <
        (uint)g_Layer3ScalefactorBandCounts[(int)local_1a >> 0x10][sStack_1c][iVar1];
        sVar5 = sVar5 + 1) {
      if (local_34[iVar1] == 0) {
        this_ptr->layer3_scalefactors[sVar3] = 0;
      }
      else {
        uVar3 = sound_mp3_cpp_CMP3Decoder_readBits_FUN_0052f170(this_ptr,local_34[iVar1]);
        this_ptr->layer3_scalefactors[sVar3] = uVar3;
      }
      sVar3 = sVar3 + 1;
    }
  }
  return;
}

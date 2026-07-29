// Name: sound_mp3.cpp_CMP3Decoder_decodeScalefacCompress_FUN_004e4c70
// Address: 004e4c70
// Address Range: [[004e4c70, 004e4ff4]]
// Convention: __cdecl
// Signature: void __cdecl sound_mp3_cpp_CMP3Decoder_decodeScalefacCompress_FUN_004e4c70(CMP3Decoder *this_ptr,int *scalefactor_dest,SMpegLayer3SideInfo *side_info,int channel,int granule,SMpegFrame *frame)

#include "nocturne.h"

void __cdecl sound_mp3_cpp_CMP3Decoder_decodeScalefacCompress_FUN_004e4c70(CMP3Decoder *this_ptr,int *scalefactor_dest,SMpegLayer3SideInfo *side_info,int channel,int granule,SMpegFrame *frame)

{
  SMpegFrameHeader *pSVar1;
  int iVar2;
  uint uVar3;
  short sVar4;
  short sVar5;
  uint local_34 [5];
  ushort uStack_20;
  ushort local_1e;
  short sStack_1c;
  uint local_1a;
  uint local_16;
  
  pSVar1 = frame->header;
  sStack_1c = 0;
  uVar3 = side_info->channels[granule].granules[channel].scalefac_compress;
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
    if (uVar3 < 400) {
      local_34[0] = (uVar3 >> 4) / 5;
      uStack_20 = 5;
      local_1e = 0;
      local_34[2] = (uVar3 & 0xf) >> 2;
      local_34[1] = (uVar3 >> 4) % 5;
      local_34[3] = uVar3 & 3;
      side_info->channels[granule].granules[channel].preflag = 0;
      local_1a = local_1a & 0xffff;
    }
    else if (uVar3 < 500) {
      local_34[4] = uVar3 - 400;
      local_34[0] = (local_34[4] >> 2) / 5;
      uStack_20 = 5;
      local_1e = 0;
      local_34[2] = local_34[4] & 3;
      local_34[1] = (local_34[4] >> 2) % 5;
      local_34[3] = 0;
      local_1a = CONCAT22(1,(ushort)local_1a);
      side_info->channels[granule].granules[channel].preflag = 0;
    }
    else if (uVar3 < 0x200) {
      local_34[0] = (uVar3 - 500) / 3;
      uStack_20 = 3;
      local_1e = 0;
      local_34[1] = (uVar3 - 500) % 3;
      local_34[2] = 0;
      local_34[3] = 0;
      local_1a = CONCAT22(2,(ushort)local_1a);
      side_info->channels[granule].granules[channel].preflag = 1;
    }
  }
  iVar2 = pSVar1->mode_extension;
  if (((iVar2 == 1) || (iVar2 == 3)) && (granule == 1)) {
    uVar3 = uVar3 >> 1;
    if (uVar3 < 0xb4) {
      local_34[0] = uVar3 / 0x24;
      local_34[1] = (uint)(((ulonglong)uVar3 % 0x24) / 6);
      local_34[3] = 0;
      local_34[2] = (uint)(((ulonglong)uVar3 % 0x24) % 6);
      side_info->channels[1].granules[channel].preflag = 0;
      local_1a = CONCAT22(3,(ushort)local_1a);
    }
    else if (uVar3 < 0xf4) {
      uVar3 = uVar3 - 0xb4;
      local_34[0] = (uVar3 & 0x3f) >> 4;
      local_34[3] = 0;
      local_34[2] = uVar3 & 3;
      local_34[1] = (uVar3 & 0xf) >> 2;
      side_info->channels[1].granules[channel].preflag = 0;
      local_1a = CONCAT22(4,(ushort)local_1a);
    }
    else if (uVar3 < 0xff) {
      local_34[0] = (uVar3 - 0xf4) / 3;
      local_34[2] = 0;
      local_34[3] = 0;
      local_34[1] = (uVar3 - 0xf4) % 3;
      side_info->channels[1].granules[channel].preflag = 0;
      local_1a = CONCAT22(5,(ushort)local_1a);
    }
  }
  for (sVar4 = 0; sVar4 < 0x2d; sVar4 = sVar4 + 1) {
    this_ptr->layer3_scalefactors[sVar4] = 0;
  }
  sVar4 = 0;
  local_16 = (uint)(ushort)local_16;
  while ((int)local_16 >> 0x10 < 4) {
    for (sVar5 = 0;
        (uint)(int)sVar5 <
        *(uint *)(&DAT_005bc470 +
                 ((int)local_16 >> 0x10) * 4 + sStack_1c * 0x10 + ((int)local_1a >> 0x10) * 0x30);
        sVar5 = sVar5 + 1) {
      if (local_34[(int)local_16 >> 0x10] == 0) {
        this_ptr->layer3_scalefactors[sVar4] = 0;
      }
      else {
        uVar3 = sound_mp3_cpp_CMP3Decoder_readBits_FUN_004e2cf0
                          (this_ptr,local_34[(int)local_16 >> 0x10]);
        this_ptr->layer3_scalefactors[sVar4] = uVar3;
      }
      sVar4 = sVar4 + 1;
    }
    local_16 = CONCAT22(local_16._2_2_ + 1,(ushort)local_16);
  }
  return;
}

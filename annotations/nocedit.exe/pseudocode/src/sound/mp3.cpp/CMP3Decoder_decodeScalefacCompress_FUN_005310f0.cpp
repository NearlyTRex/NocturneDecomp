// Name: sound_mp3.cpp_CMP3Decoder_decodeScalefacCompress_FUN_005310f0
// Address: 005310f0
// Address Range: [[005310f0, 00531474]]
// Convention: __cdecl
// Signature: void sound_mp3.cpp_CMP3Decoder_decodeScalefacCompress_FUN_005310f0(CMP3Decoder * this_ptr, int * scalefactor_dest, SMpegLayer3Granule * granule_info, int channel, int granule, SMpegFrame * frame)

#include "nocturne.h"

void __cdecl
sound_mp3_cpp_CMP3Decoder_decodeScalefacCompress_FUN_005310f0
          (CMP3Decoder *this_ptr,int *scalefactor_dest,SMpegLayer3Granule *granule_info,int channel,
          int granule,SMpegFrame *frame)

{
  char *pcVar1;
  SMpegFrameHeader *pSVar2;
  uint uVar3;
  short sVar4;
  int iVar5;
  short sVar6;
  uint local_34 [5];
  ushort uStack_20;
  ushort local_1e;
  short sStack_1c;
  uint local_1a;
  uint local_16;
  
  pSVar2 = frame->header;
  sStack_1c = 0;
  uVar3 = granule_info[granule].table_select[channel * 0x12 + -4];
  if ((granule_info[granule].table_select[channel * 0x12 + -2] == 2) &&
     (granule_info[granule].table_select[channel * 0x12 + -1] == 0)) {
    sStack_1c = 1;
  }
  if ((granule_info[granule].table_select[channel * 0x12 + -2] == 2) &&
     (granule_info[granule].table_select[channel * 0x12 + -1] == 1)) {
    sStack_1c = 2;
  }
  iVar5 = pSVar2->mode_extension;
  if (((iVar5 != 1) && (iVar5 != 3)) || (granule != 1)) {
    iVar5 = channel * 0x48;
    if (uVar3 < 400) {
      local_34[0] = (uVar3 >> 4) / 5;
      uStack_20 = 5;
      local_1e = 0;
      local_34[2] = (uVar3 & 0xf) >> 2;
      local_34[1] = (uVar3 >> 4) % 5;
      local_34[3] = uVar3 & 3;
      pcVar1 = granule_info[granule].field17_0x60 + iVar5 + -0xc;
      pcVar1[0] = '\0';
      pcVar1[1] = '\0';
      pcVar1[2] = '\0';
      pcVar1[3] = '\0';
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
      pcVar1 = granule_info[granule].field17_0x60 + iVar5 + -0xc;
      pcVar1[0] = '\0';
      pcVar1[1] = '\0';
      pcVar1[2] = '\0';
      pcVar1[3] = '\0';
    }
    else if (uVar3 < 0x200) {
      local_34[0] = (uVar3 - 500) / 3;
      uStack_20 = 3;
      local_1e = 0;
      local_34[1] = (uVar3 - 500) % 3;
      local_34[2] = 0;
      local_34[3] = 0;
      local_1a = CONCAT22(2,(ushort)local_1a);
      pcVar1 = granule_info[granule].field17_0x60 + iVar5 + -0xc;
      pcVar1[0] = '\x01';
      pcVar1[1] = '\0';
      pcVar1[2] = '\0';
      pcVar1[3] = '\0';
    }
  }
  iVar5 = pSVar2->mode_extension;
  if (((iVar5 == 1) || (iVar5 == 3)) && (granule == 1)) {
    iVar5 = channel * 0x48;
    uVar3 = uVar3 >> 1;
    if (uVar3 < 0xb4) {
      local_34[0] = uVar3 / 0x24;
      local_34[1] = (uint)(((ulonglong)uVar3 % 0x24) / 6);
      local_34[3] = 0;
      local_34[2] = (uint)(((ulonglong)uVar3 % 0x24) % 6);
      pcVar1 = granule_info[1].field17_0x60 + iVar5 + -0xc;
      pcVar1[0] = '\0';
      pcVar1[1] = '\0';
      pcVar1[2] = '\0';
      pcVar1[3] = '\0';
      local_1a = CONCAT22(3,(ushort)local_1a);
    }
    else if (uVar3 < 0xf4) {
      uVar3 = uVar3 - 0xb4;
      local_34[0] = (uVar3 & 0x3f) >> 4;
      local_34[3] = 0;
      local_34[2] = uVar3 & 3;
      local_34[1] = (uVar3 & 0xf) >> 2;
      pcVar1 = granule_info[1].field17_0x60 + iVar5 + -0xc;
      pcVar1[0] = '\0';
      pcVar1[1] = '\0';
      pcVar1[2] = '\0';
      pcVar1[3] = '\0';
      local_1a = CONCAT22(4,(ushort)local_1a);
    }
    else if (uVar3 < 0xff) {
      local_34[0] = (uVar3 - 0xf4) / 3;
      local_34[2] = 0;
      local_34[3] = 0;
      local_34[1] = (uVar3 - 0xf4) % 3;
      pcVar1 = granule_info[1].field17_0x60 + iVar5 + -0xc;
      pcVar1[0] = '\0';
      pcVar1[1] = '\0';
      pcVar1[2] = '\0';
      pcVar1[3] = '\0';
      local_1a = CONCAT22(5,(ushort)local_1a);
    }
  }
  for (sVar4 = 0; sVar4 < 0x2d; sVar4 = sVar4 + 1) {
    this_ptr->layer3_scalefactors[sVar4] = 0;
  }
  sVar4 = 0;
  local_16 = (uint)(ushort)local_16;
  while ((int)local_16 >> 0x10 < 4) {
    for (sVar6 = 0;
        (uint)(int)sVar6 <
        (uint)g_Layer3ScalefactorBandCounts[(int)local_1a >> 0x10][sStack_1c][(int)local_16 >> 0x10]
        ; sVar6 = sVar6 + 1) {
      if (local_34[(int)local_16 >> 0x10] == 0) {
        this_ptr->layer3_scalefactors[sVar4] = 0;
      }
      else {
        uVar3 = sound_mp3_cpp_CMP3Decoder_readBits_FUN_0052f170
                          (this_ptr,local_34[(int)local_16 >> 0x10]);
        this_ptr->layer3_scalefactors[sVar4] = uVar3;
      }
      sVar4 = sVar4 + 1;
    }
    local_16 = CONCAT22(local_16._2_2_ + 1,(ushort)local_16);
  }
  return;
}

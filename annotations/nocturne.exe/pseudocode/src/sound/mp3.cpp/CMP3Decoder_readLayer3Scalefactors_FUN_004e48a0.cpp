// Name: sound_mp3.cpp_CMP3Decoder_readLayer3Scalefactors_FUN_004e48a0
// Address: 004e48a0
// Address Range: [[004e48a0, 004e4c6a]]
// Convention: __cdecl
// Signature: void __cdecl sound_mp3_cpp_CMP3Decoder_readLayer3Scalefactors_FUN_004e48a0(CMP3Decoder *this_ptr,int *scalefactor_dest,SMpegLayer3SideInfo *side_info,int channel,int granule_index,SMpegFrame *frame)

#include "nocturne.h"

void __cdecl sound_mp3_cpp_CMP3Decoder_readLayer3Scalefactors_FUN_004e48a0(CMP3Decoder *this_ptr,int *scalefactor_dest,SMpegLayer3SideInfo *side_info,int channel,int granule_index,SMpegFrame *frame)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  uint *puVar4;
  int *piVar5;
  uint *puVar6;
  uint *puVar7;
  int local_54;
  int *local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  uint *local_24;
  int local_20;
  int local_1c;
  
  if ((side_info->channels[granule_index].granules[channel].window_switching_flag != 0) &&
     (side_info->channels[granule_index].granules[channel].block_type == 2)) {
    puVar7 = (uint *)(scalefactor_dest + granule_index * 0x3e);
    if (side_info->channels[granule_index].granules[channel].mixed_block_flag == 0) {
      local_48 = 0;
      local_34 = 0;
      do {
        local_1c = *(int *)(&DAT_005bc06c + local_34);
        local_20 = local_1c * 4;
        if (local_1c < *(int *)(&DAT_005bc070 + local_34)) {
          local_24 = puVar7 + local_1c + 0x27;
          do {
            puVar6 = (uint *)(local_20 + (int)puVar7);
            do {
              puVar4 = puVar6 + 0xd;
              uVar1 = sound_mp3_cpp_CMP3Decoder_readBits_FUN_004e2cf0
                                (this_ptr,*(uint *)(&DAT_005bc078 +
                                                   side_info->channels[granule_index].granules
                                                   [channel].scalefac_compress * 4 + local_48));
              puVar6[0x17] = uVar1;
              puVar6 = puVar4;
            } while (puVar4 != local_24);
            local_24 = local_24 + 1;
            local_20 = local_20 + 4;
            local_1c = local_1c + 1;
          } while (local_1c < *(int *)(&DAT_005bc070 + local_34));
        }
        local_48 = local_48 + 0x40;
        local_34 = local_34 + 4;
      } while (local_48 != 0x80);
      piVar2 = scalefactor_dest + granule_index * 0x3e + 0xc;
      do {
        piVar5 = piVar2 + 0xd;
        piVar2[0x17] = 0;
        piVar2 = piVar5;
      } while (piVar5 != scalefactor_dest + granule_index * 0x3e + 0x33);
      return;
    }
    puVar6 = puVar7;
    do {
      puVar4 = puVar6 + 1;
      uVar1 = sound_mp3_cpp_CMP3Decoder_readBits_FUN_004e2cf0
                        (this_ptr,*(uint *)(&DAT_005bc078 +
                                           side_info->channels[granule_index].granules[channel].
                                           scalefac_compress * 4));
      *puVar6 = uVar1;
      puVar6 = puVar4;
    } while (puVar4 != puVar7 + 8);
    local_54 = 0xa8;
    local_3c = 3;
    do {
      piVar2 = scalefactor_dest + granule_index * 0x3e + local_3c;
      do {
        piVar5 = piVar2 + 0xd;
        uVar1 = sound_mp3_cpp_CMP3Decoder_readBits_FUN_004e2cf0
                          (this_ptr,*(uint *)(&DAT_005bc078 +
                                             side_info->channels[granule_index].granules[channel].
                                             scalefac_compress * 4));
        piVar2[0x17] = uVar1;
        piVar2 = piVar5;
      } while (piVar5 != (int *)((int)scalefactor_dest + local_54 + granule_index * 0xf8));
      local_3c = local_3c + 1;
      local_54 = local_54 + 4;
    } while (local_3c < 6);
    local_40 = 6;
    local_4c = 0xb4;
    do {
      piVar2 = scalefactor_dest + granule_index * 0x3e + local_40;
      do {
        piVar5 = piVar2 + 0xd;
        uVar1 = sound_mp3_cpp_CMP3Decoder_readBits_FUN_004e2cf0
                          (this_ptr,*(uint *)(&DAT_005bc0b8 +
                                             side_info->channels[granule_index].granules[channel].
                                             scalefac_compress * 4));
        piVar2[0x17] = uVar1;
        piVar2 = piVar5;
      } while (piVar5 != (int *)((int)scalefactor_dest + local_4c + granule_index * 0xf8));
      local_40 = local_40 + 1;
      local_4c = local_4c + 4;
    } while (local_40 < 0xc);
    piVar2 = scalefactor_dest + granule_index * 0x3e + 0xc;
    do {
      piVar5 = piVar2 + 0xd;
      piVar2[0x17] = 0;
      piVar2 = piVar5;
    } while (piVar5 != scalefactor_dest + granule_index * 0x3e + 0x33);
    return;
  }
  local_38 = 0;
  local_50 = &side_info->channels[granule_index + -1].granules[1].scalefac_scale;
  local_44 = 0;
  do {
    if ((local_50[2] == 0) || (channel == 0)) {
      iVar3 = *(int *)(&DAT_005bc058 + local_38);
      puVar7 = (uint *)(scalefactor_dest + granule_index * 0x3e + iVar3);
      if (iVar3 < *(int *)(&DAT_005bc05c + local_38)) {
        do {
          uVar1 = sound_mp3_cpp_CMP3Decoder_readBits_FUN_004e2cf0
                            (this_ptr,*(uint *)(&DAT_005bc078 +
                                               side_info->channels[granule_index].granules[channel].
                                               scalefac_compress * 4 + (uint)(1 < local_44) * 0x40))
          ;
          *puVar7 = uVar1;
          iVar3 = iVar3 + 1;
          puVar7 = puVar7 + 1;
        } while (iVar3 < *(int *)(&DAT_005bc05c + local_38));
      }
    }
    local_38 = local_38 + 4;
    local_44 = local_44 + 1;
    local_50 = local_50 + 1;
  } while (local_44 < 4);
  scalefactor_dest[granule_index * 0x3e + 0x16] = 0;
  return;
}

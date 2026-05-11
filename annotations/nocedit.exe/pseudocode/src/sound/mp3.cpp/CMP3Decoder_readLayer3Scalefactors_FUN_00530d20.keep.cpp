// Name: sound_mp3.cpp_CMP3Decoder_readLayer3Scalefactors_FUN_00530d20
// Address: 00530d20
// MANUAL RECONSTRUCTION
// Address Range: [[00530d20, 005310ea]]
// Convention: __cdecl
// Signature: void __cdecl sound_mp3_cpp_CMP3Decoder_readLayer3Scalefactors_FUN_00530d20(CMP3Decoder *this_ptr,int *scalefactor_dest,SMpegLayer3SideInfo *side_info,int channel,int granule_index,SMpegFrame *frame)

#include "nocturne.h"

void __cdecl sound_mp3_cpp_CMP3Decoder_readLayer3Scalefactors_FUN_00530d20(CMP3Decoder *this_ptr,int *scalefactor_dest,SMpegLayer3SideInfo *side_info,int channel,int granule_index,SMpegFrame *frame)

{
  uint uVar2;
  uint uVar1;
  int *piVar3;
  int iVar4;
  uint *puVar2;
  uint *puVar5;
  int *piVar6;
  int *piVar4;
  int *piVar5;
  uint *puVar7;
  uint *puVar8;
  uint *puVar6;
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
  int local_1c;


  if ((side_info->channels[granule_index].granules[channel].window_switching_flag != 0) &&
     (side_info->channels[granule_index].granules[channel].block_type == 2)) {
    puVar6 = (uint *)(scalefactor_dest + granule_index * 0x3e);
    if (side_info->channels[granule_index].granules[channel].mixed_block_flag == 0) {
      local_48 = 0;
      local_34 = 0;
      do {
        local_1c = g_Layer3ShortBandGroupCounts[local_34];
        if (local_1c < g_Layer3ShortBandGroupCounts[local_34 + 1]) {
          local_24 = puVar6 + local_1c + 0x27;
          do {
            puVar7 = &puVar6[local_1c];
            do {
              puVar2 = puVar7 + 0xd;
              uVar1 = sound_mp3_cpp_CMP3Decoder_readBits_FUN_0052f170
                                (this_ptr,g_Layer3ScalefacLengths1[
                                          side_info->channels[granule_index].granules
                                          [channel].scalefac_compress + local_48]);
              puVar7[0x17] = uVar1;
              puVar7 = puVar2;
            } while (puVar2 != local_24);
            local_24 = local_24 + 1;
            local_1c = local_1c + 1;
          } while (local_1c < g_Layer3ShortBandGroupCounts[local_34 + 1]);
        }
        local_48 = local_48 + 0x10;
        local_34 = local_34 + 1;
      } while (local_48 != 0x20);
      piVar4 = scalefactor_dest + granule_index * 0x3e + 0xc;
      do {
        piVar5 = piVar4 + 0xd;
        piVar4[0x17] = 0;
        piVar4 = piVar5;
      } while (piVar5 != scalefactor_dest + granule_index * 0x3e + 0x33);
      return;
    }
    puVar2 = puVar6;
    do {
      puVar5 = puVar2 + 1;
      uVar1 = sound_mp3_cpp_CMP3Decoder_readBits_FUN_0052f170
                        (this_ptr,g_Layer3ScalefacLengths1
                                  [side_info->channels[granule_index].granules[channel].
                                   scalefac_compress]);
      *puVar2 = uVar1;
      puVar2 = puVar5;
    } while (puVar5 != puVar6 + 8);
    local_54 = 0x2a;
    local_3c = 3;
    do {
      piVar4 = scalefactor_dest + granule_index * 0x3e + local_3c;
      do {
        piVar6 = piVar4 + 0xd;
        uVar1 = sound_mp3_cpp_CMP3Decoder_readBits_FUN_0052f170
                          (this_ptr,g_Layer3ScalefacLengths1
                                    [side_info->channels[granule_index].granules[channel].
                                     scalefac_compress]);
        piVar4[0x17] = uVar1;
        piVar4 = piVar6;
      } while (piVar6 != &scalefactor_dest[granule_index * 0x3e + local_54]);
      local_3c = local_3c + 1;
      local_54 = local_54 + 1;
    } while (local_3c < 6);
    local_40 = 6;
    local_4c = 0x2d;
    do {
      piVar4 = scalefactor_dest + granule_index * 0x3e + local_40;
      do {
        piVar5 = piVar4 + 0xd;
        uVar1 = sound_mp3_cpp_CMP3Decoder_readBits_FUN_0052f170
                          (this_ptr,g_Layer3ScalefacLengths2
                                    [side_info->channels[granule_index].granules[channel].
                                     scalefac_compress]);
        piVar4[0x17] = uVar1;
        piVar4 = piVar5;
      } while (piVar5 != &scalefactor_dest[granule_index * 0x3e + local_4c]);
      local_40 = local_40 + 1;
      local_4c = local_4c + 1;
    } while (local_40 < 0xc);
    piVar3 = scalefactor_dest + granule_index * 0x3e + 0xc;
    do {
      piVar3 = piVar3 + 0xd;
      piVar3[0x17] = 0;
      piVar3 = piVar3;
    } while (piVar3 != scalefactor_dest + granule_index * 0x3e + 0x33);
    return;
  }
  local_38 = 0;
  local_50 = &side_info->channels[granule_index + -1].granules[1].scalefac_scale;
  local_44 = 0;
  do {
    if ((local_50[2] == 0) || (channel == 0)) {
      iVar4 = g_Layer3LongBandGroupCounts[local_38];
      puVar8 = (uint *)(scalefactor_dest + granule_index * 0x3e + iVar4);
      if (iVar4 < g_Layer3LongBandGroupCounts[local_38 + 1]) {
        do {
          uVar2 = sound_mp3_cpp_CMP3Decoder_readBits_FUN_0052f170
                            (this_ptr,g_Layer3ScalefacLengths1
                                      [(uint)(1 < local_44) * 0x10 +
                                       side_info->channels[granule_index].granules[channel].
                                       scalefac_compress]);
          *puVar8 = uVar2;
          iVar4 = iVar4 + 1;
          puVar8 = puVar8 + 1;
        } while (iVar4 < g_Layer3LongBandGroupCounts[local_38 + 1]);
      }
    }
    local_38 = local_38 + 1;
    local_44 = local_44 + 1;
    local_50 = local_50 + 1;
  } while (local_44 < 4);
  scalefactor_dest[granule_index * 0x3e + 0x16] = 0;
  return;
}

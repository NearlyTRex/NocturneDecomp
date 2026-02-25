// Name: sound_mp3.cpp_CMP3Decoder_readLayer3Scalefactors_FUN_00530d20
// Address: 00530d20
// Address Range: [[00530d20, 005310ea]]
// Convention: __cdecl
// Signature: void __cdecl sound_mp3_cpp_CMP3Decoder_readLayer3Scalefactors_FUN_00530d20(CMP3Decoder *this_ptr,int *scalefactor_dest,SMpegLayer3Granule *granule_info,int channel,int granule_index,SMpegFrame *frame)

#include "nocturne.h"

void __cdecl sound_mp3_cpp_CMP3Decoder_readLayer3Scalefactors_FUN_00530d20(CMP3Decoder *this_ptr,int *scalefactor_dest,SMpegLayer3Granule *granule_info,int channel,int granule_index,SMpegFrame *frame)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  uint *puVar4;
  int *piVar5;
  uint *puVar6;
  uint *puVar7;
  int local_54;
  SMpegLayer3Granule *local_50;
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
  
  if ((granule_info[granule_index].table_select[channel * 0x12 + -3] != 0) &&
     (granule_info[granule_index].table_select[channel * 0x12 + -2] == 2)) {
    puVar7 = (uint *)(scalefactor_dest + granule_index * 0x3e);
    if (granule_info[granule_index].table_select[channel * 0x12 + -1] == 0) {
      local_48 = 0;
      local_34 = 0;
      do {
        local_1c = *(int *)((int)g_Layer3ShortBandBoundaries + local_34);
        local_20 = local_1c * 4;
        if (local_1c < *(int *)((int)g_Layer3ShortBandBoundaries + local_34 + 4)) {
          local_24 = puVar7 + local_1c + 0x27;
          do {
            puVar6 = (uint *)(local_20 + (int)puVar7);
            do {
              puVar4 = puVar6 + 0xd;
              uVar1 = sound_mp3_cpp_CMP3Decoder_readBits_FUN_0052f170
                                (this_ptr,*(uint *)((int)g_Layer3ScalefacLengths1 +
                                                   granule_info[granule_index].table_select
                                                   [channel * 0x12 + -4] * 4 + local_48));
              puVar6[0x17] = uVar1;
              puVar6 = puVar4;
            } while (puVar4 != local_24);
            local_24 = local_24 + 1;
            local_20 = local_20 + 4;
            local_1c = local_1c + 1;
          } while (local_1c < *(int *)((int)g_Layer3ShortBandBoundaries + local_34 + 4));
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
      uVar1 = sound_mp3_cpp_CMP3Decoder_readBits_FUN_0052f170
                        (this_ptr,g_Layer3ScalefacLengths1
                                  [granule_info[granule_index].table_select[channel * 0x12 + -4]]);
      *puVar6 = uVar1;
      puVar6 = puVar4;
    } while (puVar4 != puVar7 + 8);
    local_54 = 0xa8;
    local_3c = 3;
    do {
      piVar2 = scalefactor_dest + granule_index * 0x3e + local_3c;
      do {
        piVar5 = piVar2 + 0xd;
        uVar1 = sound_mp3_cpp_CMP3Decoder_readBits_FUN_0052f170
                          (this_ptr,g_Layer3ScalefacLengths1
                                    [granule_info[granule_index].table_select[channel * 0x12 + -4]])
        ;
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
        uVar1 = sound_mp3_cpp_CMP3Decoder_readBits_FUN_0052f170
                          (this_ptr,g_Layer3ScalefacLengths2
                                    [granule_info[granule_index].table_select[channel * 0x12 + -4]])
        ;
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
  local_50 = granule_info + granule_index;
  local_44 = 0;
  do {
    if ((*(int *)local_50->unk == 0) || (channel == 0)) {
      iVar3 = *(int *)((int)g_Layer3LongBandBoundaries + local_38);
      puVar7 = (uint *)(scalefactor_dest + granule_index * 0x3e + iVar3);
      if (iVar3 < *(int *)((int)g_Layer3LongBandBoundaries + local_38 + 4)) {
        do {
          uVar1 = sound_mp3_cpp_CMP3Decoder_readBits_FUN_0052f170
                            (this_ptr,g_Layer3ScalefacLengths1
                                      [(uint)(1 < local_44) * 0x10 +
                                       granule_info[granule_index].table_select[channel * 0x12 + -4]
                                      ]);
          *puVar7 = uVar1;
          iVar3 = iVar3 + 1;
          puVar7 = puVar7 + 1;
        } while (iVar3 < *(int *)((int)g_Layer3LongBandBoundaries + local_38 + 4));
      }
    }
    local_38 = local_38 + 4;
    local_44 = local_44 + 1;
    local_50 = (SMpegLayer3Granule *)&local_50->private_bits;
  } while (local_44 < 4);
  scalefactor_dest[granule_index * 0x3e + 0x16] = 0;
  return;
}
